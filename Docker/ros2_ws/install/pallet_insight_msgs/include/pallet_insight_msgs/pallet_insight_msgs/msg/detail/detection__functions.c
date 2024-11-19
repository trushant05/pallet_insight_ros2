// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pallet_insight_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "pallet_insight_msgs/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "pallet_insight_msgs/msg/detail/bounding_box2_d__functions.h"
// Member `bbox3d`
#include "pallet_insight_msgs/msg/detail/bounding_box3_d__functions.h"
// Member `mask`
#include "pallet_insight_msgs/msg/detail/mask__functions.h"
// Member `keypoints`
#include "pallet_insight_msgs/msg/detail/key_point2_d_array__functions.h"
// Member `keypoints3d`
#include "pallet_insight_msgs/msg/detail/key_point3_d_array__functions.h"

bool
pallet_insight_msgs__msg__Detection__init(pallet_insight_msgs__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // score
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // bbox
  if (!pallet_insight_msgs__msg__BoundingBox2D__init(&msg->bbox)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // bbox3d
  if (!pallet_insight_msgs__msg__BoundingBox3D__init(&msg->bbox3d)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // mask
  if (!pallet_insight_msgs__msg__Mask__init(&msg->mask)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // keypoints
  if (!pallet_insight_msgs__msg__KeyPoint2DArray__init(&msg->keypoints)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  // keypoints3d
  if (!pallet_insight_msgs__msg__KeyPoint3DArray__init(&msg->keypoints3d)) {
    pallet_insight_msgs__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
pallet_insight_msgs__msg__Detection__fini(pallet_insight_msgs__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // score
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // bbox
  pallet_insight_msgs__msg__BoundingBox2D__fini(&msg->bbox);
  // bbox3d
  pallet_insight_msgs__msg__BoundingBox3D__fini(&msg->bbox3d);
  // mask
  pallet_insight_msgs__msg__Mask__fini(&msg->mask);
  // keypoints
  pallet_insight_msgs__msg__KeyPoint2DArray__fini(&msg->keypoints);
  // keypoints3d
  pallet_insight_msgs__msg__KeyPoint3DArray__fini(&msg->keypoints3d);
}

bool
pallet_insight_msgs__msg__Detection__are_equal(const pallet_insight_msgs__msg__Detection * lhs, const pallet_insight_msgs__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // bbox
  if (!pallet_insight_msgs__msg__BoundingBox2D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // bbox3d
  if (!pallet_insight_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bbox3d), &(rhs->bbox3d)))
  {
    return false;
  }
  // mask
  if (!pallet_insight_msgs__msg__Mask__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  // keypoints
  if (!pallet_insight_msgs__msg__KeyPoint2DArray__are_equal(
      &(lhs->keypoints), &(rhs->keypoints)))
  {
    return false;
  }
  // keypoints3d
  if (!pallet_insight_msgs__msg__KeyPoint3DArray__are_equal(
      &(lhs->keypoints3d), &(rhs->keypoints3d)))
  {
    return false;
  }
  return true;
}

bool
pallet_insight_msgs__msg__Detection__copy(
  const pallet_insight_msgs__msg__Detection * input,
  pallet_insight_msgs__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // bbox
  if (!pallet_insight_msgs__msg__BoundingBox2D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // bbox3d
  if (!pallet_insight_msgs__msg__BoundingBox3D__copy(
      &(input->bbox3d), &(output->bbox3d)))
  {
    return false;
  }
  // mask
  if (!pallet_insight_msgs__msg__Mask__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  // keypoints
  if (!pallet_insight_msgs__msg__KeyPoint2DArray__copy(
      &(input->keypoints), &(output->keypoints)))
  {
    return false;
  }
  // keypoints3d
  if (!pallet_insight_msgs__msg__KeyPoint3DArray__copy(
      &(input->keypoints3d), &(output->keypoints3d)))
  {
    return false;
  }
  return true;
}

pallet_insight_msgs__msg__Detection *
pallet_insight_msgs__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Detection * msg = (pallet_insight_msgs__msg__Detection *)allocator.allocate(sizeof(pallet_insight_msgs__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pallet_insight_msgs__msg__Detection));
  bool success = pallet_insight_msgs__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pallet_insight_msgs__msg__Detection__destroy(pallet_insight_msgs__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pallet_insight_msgs__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pallet_insight_msgs__msg__Detection__Sequence__init(pallet_insight_msgs__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Detection * data = NULL;

  if (size) {
    data = (pallet_insight_msgs__msg__Detection *)allocator.zero_allocate(size, sizeof(pallet_insight_msgs__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pallet_insight_msgs__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pallet_insight_msgs__msg__Detection__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pallet_insight_msgs__msg__Detection__Sequence__fini(pallet_insight_msgs__msg__Detection__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pallet_insight_msgs__msg__Detection__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pallet_insight_msgs__msg__Detection__Sequence *
pallet_insight_msgs__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Detection__Sequence * array = (pallet_insight_msgs__msg__Detection__Sequence *)allocator.allocate(sizeof(pallet_insight_msgs__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pallet_insight_msgs__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pallet_insight_msgs__msg__Detection__Sequence__destroy(pallet_insight_msgs__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pallet_insight_msgs__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pallet_insight_msgs__msg__Detection__Sequence__are_equal(const pallet_insight_msgs__msg__Detection__Sequence * lhs, const pallet_insight_msgs__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pallet_insight_msgs__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pallet_insight_msgs__msg__Detection__Sequence__copy(
  const pallet_insight_msgs__msg__Detection__Sequence * input,
  pallet_insight_msgs__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pallet_insight_msgs__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pallet_insight_msgs__msg__Detection * data =
      (pallet_insight_msgs__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pallet_insight_msgs__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pallet_insight_msgs__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pallet_insight_msgs__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
