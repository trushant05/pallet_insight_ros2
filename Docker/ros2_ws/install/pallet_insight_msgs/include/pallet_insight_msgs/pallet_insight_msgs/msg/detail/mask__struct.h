// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_insight_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__STRUCT_H_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__STRUCT_H_

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
#include "pallet_insight_msgs/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Mask in the package pallet_insight_msgs.
/**
  * segmentation mask for one instance
 */
typedef struct pallet_insight_msgs__msg__Mask
{
  /// size of the original image
  int32_t height;
  int32_t width;
  /// mask data represeted by the points of the border of the mask
  pallet_insight_msgs__msg__Point2D__Sequence data;
} pallet_insight_msgs__msg__Mask;

// Struct for a sequence of pallet_insight_msgs__msg__Mask.
typedef struct pallet_insight_msgs__msg__Mask__Sequence
{
  pallet_insight_msgs__msg__Mask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_insight_msgs__msg__Mask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__STRUCT_H_
