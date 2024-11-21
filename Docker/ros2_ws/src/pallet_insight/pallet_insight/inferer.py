import os
import cv2

import rclpy
from rclpy.node import Node

from typing import List, Dict

from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage

from pallet_insight_msgs.msg import Point2D
from pallet_insight_msgs.msg import BoundingBox2D
from pallet_insight_msgs.msg import Mask
from pallet_insight_msgs.msg import Detection
from pallet_insight_msgs.msg import DetectionArray

from geometry_msgs.msg import PoseArray

from cv_bridge import CvBridge

from ultralytics import YOLO
from ultralytics.engine.results import Results
from ultralytics.engine.results import Boxes
from ultralytics.engine.results import Masks

class Inferer(Node):

    def __init__(self):
        super().__init__('inference_node')

        # Define model path
        self.declare_parameter("model")
        self.model_path = self.get_parameter('model').get_parameter_value().string_value

        # Declare parameters for the node
        self.declare_parameter("device", "cuda:0")
        self.device = self.get_parameter("device").get_parameter_value().string_value

        self.declare_parameter("threshold", 0.5)
        self.threshold = self.get_parameter("threshold").get_parameter_value().double_value

        self.declare_parameter("iou", 0.5)
        self.iou = self.get_parameter("iou").get_parameter_value().double_value

        self.declare_parameter("imgsz_height", 640)
        self.imgsz_height = self.get_parameter("imgsz_height").get_parameter_value().integer_value

        self.declare_parameter("imgsz_width", 640)
        self.imgsz_width = self.get_parameter("imgsz_width").get_parameter_value().integer_value

        self.declare_parameter("half", False)
        self.half = self.get_parameter("half").get_parameter_value().bool_value

        self.declare_parameter("int8", False)
        self.int8 = self.get_parameter("int8").get_parameter_value().bool_value

        # Create subscribers
        self.image_raw_subscriber = self.create_subscription(Image, 'image_raw', self.inference_callback, 10)
        self.image_raw_subscriber # prevent unused variable warning

        # Create publishers
        self.detection_publisher = self.create_publisher(DetectionArray, 'inference', 10)
        self.detection_image_publisher = self.create_publisher(Image, 'detection_image', 10)
        self.segmentation_image_publisher = self.create_publisher(Image, 'segmentation_image', 10)


        # Create CvBridge to convert OpenCV images to ROS messages
        self.bridge = CvBridge()

        # Load TensorRT model
        self.get_logger().info("Loading TensorRT engine...")
        self.model = YOLO(self.model_path, task='segment')

    
    def parse_hypothesis(self, results: Results) -> List[Dict]:

        hypothesis_list = []

        if results.boxes:
            box_data: Boxes
            for box_data in results.boxes:
                hypothesis = {
                    "class_id": int(box_data.cls),
                    "class_name": self.model.names[int(box_data.cls)],
                    "score": float(box_data.conf),
                }
                hypothesis_list.append(hypothesis)

        elif results.obb:
            for i in range(results.obb.cls.shape[0]):
                hypothesis = {
                    "class_id": int(results.obb.cls[i]),
                    "class_name": self.model.names[int(results.obb.cls[i])],
                    "score": float(results.obb.conf[i]),
                }
                hypothesis_list.append(hypothesis)

        return hypothesis_list

    def parse_boxes(self, results: Results) -> List[BoundingBox2D]:

        boxes_list = []

        if results.boxes:
            box_data: Boxes
            for box_data in results.boxes:

                msg = BoundingBox2D()

                # get boxes values
                box = box_data.xywh[0]
                msg.center.position.x = float(box[0])
                msg.center.position.y = float(box[1])
                msg.size.x = float(box[2])
                msg.size.y = float(box[3])

                # append msg
                boxes_list.append(msg)

        elif results.obb:
            for i in range(results.obb.cls.shape[0]):
                msg = BoundingBox2D()

                # get boxes values
                box = results.obb.xywhr[i]
                msg.center.position.x = float(box[0])
                msg.center.position.y = float(box[1])
                msg.center.theta = float(box[4])
                msg.size.x = float(box[2])
                msg.size.y = float(box[3])

                # append msg
                boxes_list.append(msg)

        return boxes_list

    def parse_masks(self, results: Results) -> List[Mask]:

        masks_list = []

        def create_point2d(x: float, y: float) -> Point2D:
            p = Point2D()
            p.x = x
            p.y = y
            return p

        mask: Masks
        for mask in results.masks:

            msg = Mask()

            msg.data = [
                create_point2d(float(ele[0]), float(ele[1]))
                for ele in mask.xy[0].tolist()
            ]
            #msg.height = results.orig_img.shape[0]
            #msg.width = results.orig_img.shape[1]

            masks_list.append(msg)

        return masks_list


    def inference_callback(self, msg):
        self.get_logger().info('Message Received')

        image = self.bridge.imgmsg_to_cv2(msg)
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        results = self.model.predict(
            source=image,
            conf=self.threshold,
            iou=self.iou,
            imgsz=(self.imgsz_height, self.imgsz_width),
            half=self.half,
            device=self.device,
        )

        results: Results = results[0].cpu()

        if results.boxes or results.obb:
            hypothesis = self.parse_hypothesis(results)
            boxes = self.parse_boxes(results)

        if results.masks:
           masks = self.parse_masks(results)

        detections_msg = DetectionArray()

        for i in range(len(results)):
            aux_msg = Detection()

            if results.boxes or results.obb and hypothesis and boxes:
                aux_msg.class_id = hypothesis[i]["class_id"]
                aux_msg.class_name = hypothesis[i]["class_name"]
                aux_msg.score = hypothesis[i]["score"]

                aux_msg.bbox = boxes[i]

            if results.masks and masks:
               aux_msg.mask = masks[i]

            detections_msg.detections.append(aux_msg)

        # Publish detections
        detections_msg.header = msg.header
        
        self.detection_publisher.publish(detections_msg)


        # Annotate image with detections
        detection_image = image.copy()
        if results.boxes:
            for box_data in results.boxes:
                xyxy = box_data.xyxy[0]
                class_id = int(box_data.cls[0].item())  # Ensure proper indexing for class_id
                confidence = box_data.conf[0].item()   # Ensure proper indexing for confidence

                # Construct label text
                label = "{}: {:.2f}".format(self.model.names[class_id], confidence)

                # Draw bounding box
                cv2.rectangle(
                    detection_image,
                    (int(xyxy[0]), int(xyxy[1])),
                    (int(xyxy[2]), int(xyxy[3])),
                    (0, 255, 0),  # Green bounding box
                    2
                )

                # Draw label text
                cv2.putText(
                    detection_image,
                    label,
                    (int(xyxy[0]), int(xyxy[1] - 10)),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.5,
                    (0, 255, 0),  # Green text
                    1
                )


        # Annotate image with segmentation masks
        segmentation_image = image.copy()

        if results.masks and results.boxes:
            # Define a color map for different semantic labels (e.g., two labels: 0 and 1)
            color_map = {
                0: [255, 0, 0],  # Blue for label 0
                1: [0, 255, 0],  # Green for label 1
            }

            # Iterate over each mask and its corresponding label
            for i, mask in enumerate(results.masks.data):
                # Convert mask to a numpy array
                mask = mask.cpu().numpy()

                # Resize mask to match the original image dimensions
                resized_mask = cv2.resize(mask, (segmentation_image.shape[1], segmentation_image.shape[0]))

                # Get the label from the bounding box associated with this mask
                label = int(results.boxes.cls[i].item())  # Extract class label

                # Get the corresponding color for the label
                color = color_map.get(label, [255, 255, 255])  # Default to white if label not found

                # Apply the mask to the segmentation image with the corresponding color
                segmentation_image[resized_mask > 0.5] = color




        # Publish annotated images
        detection_msg = self.bridge.cv2_to_imgmsg(cv2.cvtColor(detection_image, cv2.COLOR_RGB2BGR), encoding='bgr8')
        segmentation_msg = self.bridge.cv2_to_imgmsg(cv2.cvtColor(segmentation_image, cv2.COLOR_RGB2BGR), encoding='bgr8')

        detection_msg.header = msg.header
        segmentation_msg.header = msg.header

        self.detection_image_publisher.publish(detection_msg)
        self.segmentation_image_publisher.publish(segmentation_msg)


        del results
        del image


def main(args=None):
    rclpy.init(args=args)
    inference_node = Inferer()

    try:
        rclpy.spin(inference_node)
    except KeyboardInterrupt:
        inference_node.get_logger().info('Shutting down Inference Node.')
    finally:
        inference_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()