// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pallet_insight_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pallet_insight_msgs/msg/detail/key_point2_d_array__rosidl_typesupport_introspection_c.h"
#include "pallet_insight_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pallet_insight_msgs/msg/detail/key_point2_d_array__functions.h"
#include "pallet_insight_msgs/msg/detail/key_point2_d_array__struct.h"


// Include directives for member types
// Member `data`
#include "pallet_insight_msgs/msg/key_point2_d.h"
// Member `data`
#include "pallet_insight_msgs/msg/detail/key_point2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pallet_insight_msgs__msg__KeyPoint2DArray__init(message_memory);
}

void pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function(void * message_memory)
{
  pallet_insight_msgs__msg__KeyPoint2DArray__fini(message_memory);
}

size_t pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2DArray__data(
  const void * untyped_member)
{
  const pallet_insight_msgs__msg__KeyPoint2D__Sequence * member =
    (const pallet_insight_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return member->size;
}

const void * pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__data(
  const void * untyped_member, size_t index)
{
  const pallet_insight_msgs__msg__KeyPoint2D__Sequence * member =
    (const pallet_insight_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__data(
  void * untyped_member, size_t index)
{
  pallet_insight_msgs__msg__KeyPoint2D__Sequence * member =
    (pallet_insight_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint2DArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pallet_insight_msgs__msg__KeyPoint2D * item =
    ((const pallet_insight_msgs__msg__KeyPoint2D *)
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__data(untyped_member, index));
  pallet_insight_msgs__msg__KeyPoint2D * value =
    (pallet_insight_msgs__msg__KeyPoint2D *)(untyped_value);
  *value = *item;
}

void pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint2DArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pallet_insight_msgs__msg__KeyPoint2D * item =
    ((pallet_insight_msgs__msg__KeyPoint2D *)
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__data(untyped_member, index));
  const pallet_insight_msgs__msg__KeyPoint2D * value =
    (const pallet_insight_msgs__msg__KeyPoint2D *)(untyped_value);
  *item = *value;
}

bool pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2DArray__data(
  void * untyped_member, size_t size)
{
  pallet_insight_msgs__msg__KeyPoint2D__Sequence * member =
    (pallet_insight_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  pallet_insight_msgs__msg__KeyPoint2D__Sequence__fini(member);
  return pallet_insight_msgs__msg__KeyPoint2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_insight_msgs__msg__KeyPoint2DArray, data),  // bytes offset in struct
    NULL,  // default value
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2DArray__data,  // size() function pointer
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__data,  // get_const(index) function pointer
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__data,  // get(index) function pointer
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint2DArray__data,  // fetch(index, &value) function pointer
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint2DArray__data,  // assign(index, value) function pointer
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2DArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members = {
  "pallet_insight_msgs__msg",  // message namespace
  "KeyPoint2DArray",  // message name
  1,  // number of fields
  sizeof(pallet_insight_msgs__msg__KeyPoint2DArray),
  pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array,  // message members
  pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle = {
  0,
  &pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pallet_insight_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pallet_insight_msgs, msg, KeyPoint2DArray)() {
  pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pallet_insight_msgs, msg, KeyPoint2D)();
  if (!pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier) {
    pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pallet_insight_msgs__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
