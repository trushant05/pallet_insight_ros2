docker run -it --rm --net=host --runtime nvidia -e DISPLAY=$DISPLAY \
    -e QT_X11_NO_MITSHM=1 \
    -v /tmp/.X11-unix/:/tmp/.X11-unix \
    --volume="$PWD/../Docker/ros2_ws:/ros2_ws" \
    ros2_humble:latest
