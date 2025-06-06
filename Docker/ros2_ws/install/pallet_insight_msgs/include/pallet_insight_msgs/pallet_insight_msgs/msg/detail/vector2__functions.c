// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pallet_insight_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice
#include "pallet_insight_msgs/msg/detail/vector2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pallet_insight_msgs__msg__Vector2__init(pallet_insight_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
pallet_insight_msgs__msg__Vector2__fini(pallet_insight_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
pallet_insight_msgs__msg__Vector2__are_equal(const pallet_insight_msgs__msg__Vector2 * lhs, const pallet_insight_msgs__msg__Vector2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
pallet_insight_msgs__msg__Vector2__copy(
  const pallet_insight_msgs__msg__Vector2 * input,
  pallet_insight_msgs__msg__Vector2 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

pallet_insight_msgs__msg__Vector2 *
pallet_insight_msgs__msg__Vector2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Vector2 * msg = (pallet_insight_msgs__msg__Vector2 *)allocator.allocate(sizeof(pallet_insight_msgs__msg__Vector2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pallet_insight_msgs__msg__Vector2));
  bool success = pallet_insight_msgs__msg__Vector2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pallet_insight_msgs__msg__Vector2__destroy(pallet_insight_msgs__msg__Vector2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pallet_insight_msgs__msg__Vector2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pallet_insight_msgs__msg__Vector2__Sequence__init(pallet_insight_msgs__msg__Vector2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Vector2 * data = NULL;

  if (size) {
    data = (pallet_insight_msgs__msg__Vector2 *)allocator.zero_allocate(size, sizeof(pallet_insight_msgs__msg__Vector2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pallet_insight_msgs__msg__Vector2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pallet_insight_msgs__msg__Vector2__fini(&data[i - 1]);
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
pallet_insight_msgs__msg__Vector2__Sequence__fini(pallet_insight_msgs__msg__Vector2__Sequence * array)
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
      pallet_insight_msgs__msg__Vector2__fini(&array->data[i]);
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

pallet_insight_msgs__msg__Vector2__Sequence *
pallet_insight_msgs__msg__Vector2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_insight_msgs__msg__Vector2__Sequence * array = (pallet_insight_msgs__msg__Vector2__Sequence *)allocator.allocate(sizeof(pallet_insight_msgs__msg__Vector2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pallet_insight_msgs__msg__Vector2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pallet_insight_msgs__msg__Vector2__Sequence__destroy(pallet_insight_msgs__msg__Vector2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pallet_insight_msgs__msg__Vector2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pallet_insight_msgs__msg__Vector2__Sequence__are_equal(const pallet_insight_msgs__msg__Vector2__Sequence * lhs, const pallet_insight_msgs__msg__Vector2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pallet_insight_msgs__msg__Vector2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pallet_insight_msgs__msg__Vector2__Sequence__copy(
  const pallet_insight_msgs__msg__Vector2__Sequence * input,
  pallet_insight_msgs__msg__Vector2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pallet_insight_msgs__msg__Vector2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pallet_insight_msgs__msg__Vector2 * data =
      (pallet_insight_msgs__msg__Vector2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pallet_insight_msgs__msg__Vector2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pallet_insight_msgs__msg__Vector2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pallet_insight_msgs__msg__Vector2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
