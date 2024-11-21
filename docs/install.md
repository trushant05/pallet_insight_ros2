# Installation

Pallet Insight ROS2 Package can be installed locally or used in a Docker container. Current documentation is limited to Docker workflow which involves the usage of NVIDIA Container Toolkit, details to which can be found [[here](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/latest/index.html)].


## arm64 architecture (Jetson Orin)

Pull the docker image of Pallet Insight ROS2 Package with arm64 tag from Docker Hub:
```
docker pull trushant99/pallet_insight:arm64
```

Run the container with dummy publisher node (make sure docker-compose.yaml file uses dummy_pub.sh):
```
docker compose up
```

Run the container with external data (make sure docker-compose.yaml file uses entrypoint.sh)):
```
docker compose up 
```

## x86 architecture (Nvidia GPU)

Coming Soon


### System Requirements
The current docker image is built for JetPack 6.1 with Jetson Linu 36.4, featuring Linux Kernel 5.15 and an Ubuntu 22.04 based root file system. Refer [[here](https://developer.nvidia.com/embedded/jetpack)] to flash your Jetson devices with latest JetPack.

In case you are using the JetPack 6.0 which is built on Jetson Linux 36.3 and would like to use compute stack of JetPack 6.1, please refer [[here](https://docs.nvidia.com/jetson/archives/jetpack-archived/jetpack-61/install-setup/index.html#upgradable-compute-stack)].