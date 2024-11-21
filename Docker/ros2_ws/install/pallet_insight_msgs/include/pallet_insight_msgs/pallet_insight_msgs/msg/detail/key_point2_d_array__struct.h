// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_insight_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "pallet_insight_msgs/msg/detail/key_point2_d__struct.h"

/// Struct defined in msg/KeyPoint2DArray in the package pallet_insight_msgs.
/**
  * represents all the keypoints for human pose estimation
 */
typedef struct pallet_insight_msgs__msg__KeyPoint2DArray
{
  pallet_insight_msgs__msg__KeyPoint2D__Sequence data;
} pallet_insight_msgs__msg__KeyPoint2DArray;

// Struct for a sequence of pallet_insight_msgs__msg__KeyPoint2DArray.
typedef struct pallet_insight_msgs__msg__KeyPoint2DArray__Sequence
{
  pallet_insight_msgs__msg__KeyPoint2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_insight_msgs__msg__KeyPoint2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
