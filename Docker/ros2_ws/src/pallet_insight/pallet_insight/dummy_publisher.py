import rclpy
from rclpy.node import Node


from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage 

from cv_bridge import CvBridge

import cv2
import os
import time

from ament_index_python.packages import get_package_share_directory

class DummyPublisher(Node):

    def __init__(self):
        super().__init__('dummy_publisher')

        # Declare parameters for the node
        self.declare_parameter('image_folder', 'pallet_insight/images')
        self.declare_parameter('publish_fps', 5.0)  # Time interval between each image publication
        self.declare_parameter('display_duration', 5.0)

        # Get parameters
        package_share_directory = get_package_share_directory('pallet_insight')
        image_folder_relative = self.get_parameter('image_folder').get_parameter_value().string_value
        self.image_folder = os.path.join(package_share_directory, image_folder_relative)
        self.publish_fps = self.get_parameter('publish_fps').get_parameter_value().double_value
        self.display_duration = self.get_parameter('display_duration').get_parameter_value().double_value
        
        # Create publishers
        self.image_raw_publisher = self.create_publisher(Image, 'image_raw', 10)
        self.depth_raw_publisher = self.create_publisher(Image, 'depth_raw', 10)
        self.image_compressed_publisher = self.create_publisher(CompressedImage, 'image_raw/compressed', 10)
        self.depth_compressed_publisher = self.create_publisher(CompressedImage, 'depth_raw/compressed', 10)

        # Create CvBridge to convert OpenCV images to ROS messages
        self.bridge = CvBridge()

        # Retrieve image file paths
        self.image_paths = [os.path.join(self.image_folder, f) for f in os.listdir(self.image_folder) if f.endswith(('.png', '.jpg', '.jpeg'))]
        self.image_paths.sort()
        self.current_image_index = 0

        # Calculate the number of frames to publish each image
        self.frames_per_image = int(self.display_duration * 60 * self.publish_fps)
        self.current_frame_count = 0

        # Create a timer to publish images at a specific rate (30 fps)
        self.timer = self.create_timer(1.0 / self.publish_fps, self.publish_image_callback)


    def publish_image_callback(self):
        if not self.image_paths:
            self.get_logger().warn('No images found in the specified folder.')
            return

        # Get the current image path
        image_path = self.image_paths[self.current_image_index]

        # Load the image using OpenCV
        image = cv2.imread(image_path, cv2.IMREAD_COLOR)
        if image is None:
            self.get_logger().warn(f'Failed to load image: {image_path}')
            return

        # Convert the OpenCV image to a ROS Image message
        image_msg = self.bridge.cv2_to_imgmsg(image, encoding='bgr8')
        image_msg.header.stamp = self.get_clock().now().to_msg()
        
        # Publish raw image
        self.image_raw_publisher.publish(image_msg)

        # Publish compressed image
        compressed_image_msg = CompressedImage()
        compressed_image_msg.header.stamp = image_msg.header.stamp
        compressed_image_msg.format = 'jpeg'
        compressed_image_msg.data = cv2.imencode('.jpg', image)[1].tobytes()
        self.image_compressed_publisher.publish(compressed_image_msg)

        # Simulate depth image by converting to grayscale (for demonstration purposes)
        depth_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        depth_msg = self.bridge.cv2_to_imgmsg(depth_image, encoding='mono8')
        depth_msg.header.stamp = image_msg.header.stamp
        
        # Publish depth image
        self.depth_raw_publisher.publish(depth_msg)

        # Publish compressed depth image
        compressed_depth_msg = CompressedImage()
        compressed_depth_msg.header.stamp = depth_msg.header.stamp
        compressed_depth_msg.format = 'jpeg'
        compressed_depth_msg.data = cv2.imencode('.jpg', depth_image)[1].tobytes()
        self.depth_compressed_publisher.publish(compressed_depth_msg)

        # Update frame count and check if it's time to switch to the next image
        self.current_frame_count += 1
        if self.current_frame_count >= self.frames_per_image:
            self.current_frame_count = 0
            self.current_image_index = (self.current_image_index + 1) % len(self.image_paths)
            self.get_logger().info(f'Switched to next image: {os.path.basename(image_path)}')


def main(args=None):
    rclpy.init(args=args)
    dummy_publisher = DummyPublisher()

    try:
        rclpy.spin(dummy_publisher)
    except KeyboardInterrupt:
        dummy_publisher.get_logger().info('Shutting down Dummy Publisher.')
    finally:
        dummy_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
