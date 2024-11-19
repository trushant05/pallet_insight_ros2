#!/bin/bash

set -e

echo "Building TensorRt engine..."
python3 /ros2_ws/src/pallet_insight/trt_builder.py

echo "Sourcing ROS2 workspace..."
source /ros2_ws/install/setup.bash

echo "Starting RVIZ2..."
rviz2 --display-config /ros2_ws/pallet_insight.rviz &

echo "Running ROS2 launch file..."
ros2 launch pallet_insight pallet_insight.launch.py
