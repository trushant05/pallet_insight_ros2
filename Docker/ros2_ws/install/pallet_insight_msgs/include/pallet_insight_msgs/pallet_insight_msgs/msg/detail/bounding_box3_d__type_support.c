// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pallet_insight_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pallet_insight_msgs/msg/detail/bounding_box3_d__rosidl_typesupport_introspection_c.h"
#include "pallet_insight_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pallet_insight_msgs/msg/detail/bounding_box3_d__functions.h"
#include "pallet_insight_msgs/msg/detail/bounding_box3_d__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/pose.h"
// Member `center`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pallet_insight_msgs__msg__BoundingBox3D__init(message_memory);
}

void pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_fini_function(void * message_memory)
{
  pallet_insight_msgs__msg__BoundingBox3D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_member_array[3] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_insight_msgs__msg__BoundingBox3D, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_insight_msgs__msg__BoundingBox3D, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_insight_msgs__msg__BoundingBox3D, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_members = {
  "pallet_insight_msgs__msg",  // message namespace
  "BoundingBox3D",  // message name
  3,  // number of fields
  sizeof(pallet_insight_msgs__msg__BoundingBox3D),
  pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_member_array,  // message members
  pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_init_function,  // function to initialize message memory (memory has to be allocated)
  pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_type_support_handle = {
  0,
  &pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pallet_insight_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pallet_insight_msgs, msg, BoundingBox3D)() {
  pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_type_support_handle.typesupport_identifier) {
    pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pallet_insight_msgs__msg__BoundingBox3D__rosidl_typesupport_introspection_c__BoundingBox3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
