// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_insight_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/KeyPoint3D in the package pallet_insight_msgs.
/**
  * one keypoint for human pose estimation
 */
typedef struct pallet_insight_msgs__msg__KeyPoint3D
{
  /// id of the keypoint
  int32_t id;
  /// 3D point in meters
  geometry_msgs__msg__Point point;
  /// conf of the keypoint
  double score;
} pallet_insight_msgs__msg__KeyPoint3D;

// Struct for a sequence of pallet_insight_msgs__msg__KeyPoint3D.
typedef struct pallet_insight_msgs__msg__KeyPoint3D__Sequence
{
  pallet_insight_msgs__msg__KeyPoint3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_insight_msgs__msg__KeyPoint3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_
