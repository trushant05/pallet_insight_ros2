from ultralytics import YOLO

import os

model = YOLO("/ros2_ws/src/pallet_insight/models/segmentation/yolov11_m_seg_200_ep.pt")
model.export(format="engine", data="../dataset/data.yaml")
