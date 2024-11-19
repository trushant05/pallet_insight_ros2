// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_insight_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2D in the package pallet_insight_msgs.
/**
  * 2D point in pixel coordinates
 */
typedef struct pallet_insight_msgs__msg__Point2D
{
  double x;
  double y;
} pallet_insight_msgs__msg__Point2D;

// Struct for a sequence of pallet_insight_msgs__msg__Point2D.
typedef struct pallet_insight_msgs__msg__Point2D__Sequence
{
  pallet_insight_msgs__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_insight_msgs__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
