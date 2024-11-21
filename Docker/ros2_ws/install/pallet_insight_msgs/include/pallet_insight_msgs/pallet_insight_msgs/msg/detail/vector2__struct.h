// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_insight_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vector2 in the package pallet_insight_msgs.
/**
  * 2D size in pixel
 */
typedef struct pallet_insight_msgs__msg__Vector2
{
  double x;
  double y;
} pallet_insight_msgs__msg__Vector2;

// Struct for a sequence of pallet_insight_msgs__msg__Vector2.
typedef struct pallet_insight_msgs__msg__Vector2__Sequence
{
  pallet_insight_msgs__msg__Vector2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_insight_msgs__msg__Vector2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_
