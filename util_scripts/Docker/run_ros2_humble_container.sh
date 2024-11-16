docker run -it \
   --net=host \
   --gpus all \
   -e DISPLAY=$DISPLAY \
   -e QT_X11_NO_MITSHM=1 \
   --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
   --volume="/home/trushant/pallet_insight_ros2/util_scripts/ros2_ws:/ros2_ws" \
   ros2_humble
