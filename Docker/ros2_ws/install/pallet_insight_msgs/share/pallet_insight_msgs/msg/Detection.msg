# defines a YOLO detection result

# class probability
int32 class_id
string class_name
float64 score

# ID for tracking
string id

# 2D bounding box surrounding the object in pixels
pallet_insight_msgs/BoundingBox2D bbox

# 3D bounding box surrounding the object in meters
pallet_insight_msgs/BoundingBox3D bbox3d

# segmentation mask of the detected object
# it is only the boundary of the segmented object
pallet_insight_msgs/Mask mask

# keypoints for human pose estimation
pallet_insight_msgs/KeyPoint2DArray keypoints

# keypoints for human pose estimation
pallet_insight_msgs/KeyPoint3DArray keypoints3d