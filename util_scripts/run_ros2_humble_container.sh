docker run -it \
   --net=host \
   --gpus all \
   -e DISPLAY=$DISPLAY \
   -e QT_X11_NO_MITSHM=1 \
   --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
   --volume="$PWD/../ros2_ws:/ros2_ws" \
   ros2_humble
