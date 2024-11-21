#!/bin/bash

set -e

echo "Building TensorRT engine..."
python3 /ros2_ws/src/pallet_insight/trt_builder.py

echo "Configuring DDS"
export FASTRTPS_DEFAULT_PROFILES_FILE=/ros2_ws/fastdds.xml

echo "Build ROS2 workspace with TensorRT engine..."
source /opt/ros/humble/setup.bash
colcon build --packages-up-to pallet_insight

echo "Sourcing ROS2 workspace..."
source /ros2_ws/install/setup.bash

echo "Starting RVIZ2..."
rviz2 --display-config /ros2_ws/pallet_insight.rviz &

echo "Running ROS2 launch file..."
ros2 launch pallet_insight dummy_publisher.launch.py
