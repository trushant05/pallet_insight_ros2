import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage

from cv_bridge import CvBridge


import tensorrt as tensorrt
import pycuda.driver as cuda
import pycuda.autoinit
import numpy as np
import cv2
import os

class Detector(Node):

    def __init__(self):
        super().__init__('detector')

        # Create subscribers
        self.image_raw_subscriber = self.create_subscription(Image, 'image_raw', self.detector_callback, 10)
        self.image_raw_subscriber # prevent unused variable warning

        # Create CvBridge to convert OpenCV images to ROS messages
        self.bridge = CvBridge()

        # Load TensorRT model
        self.get_logger().info("Loading TensorRT model...")
        self.engine = self.load_engine()

    
    def detector_callback(self, msg):
        self.get_logger().info('Message Received')


def main(args=None):
    rclpy.init(args=args)
    detector_node = Detector()

    try:
        rclpy.spin(detector_node)
    except KeyboardInterrupt:
        detector_node.get_logger().info('Shutting down Detector Node.')
    finally:
        detector_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()