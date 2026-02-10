// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/object_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_id`
// Member `object_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `bounding_box`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
safe_teleop_core__msg__ObjectStatus__init(safe_teleop_core__msg__ObjectStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__init(&msg->bounding_box)) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
    return false;
  }
  // motion_state
  // is_activated
  // detection_confidence
  return true;
}

void
safe_teleop_core__msg__ObjectStatus__fini(safe_teleop_core__msg__ObjectStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // bounding_box
  geometry_msgs__msg__Vector3__fini(&msg->bounding_box);
  // motion_state
  // is_activated
  // detection_confidence
}

bool
safe_teleop_core__msg__ObjectStatus__are_equal(const safe_teleop_core__msg__ObjectStatus * lhs, const safe_teleop_core__msg__ObjectStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // motion_state
  if (lhs->motion_state != rhs->motion_state) {
    return false;
  }
  // is_activated
  if (lhs->is_activated != rhs->is_activated) {
    return false;
  }
  // detection_confidence
  if (lhs->detection_confidence != rhs->detection_confidence) {
    return false;
  }
  return true;
}

bool
safe_teleop_core__msg__ObjectStatus__copy(
  const safe_teleop_core__msg__ObjectStatus * input,
  safe_teleop_core__msg__ObjectStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // motion_state
  output->motion_state = input->motion_state;
  // is_activated
  output->is_activated = input->is_activated;
  // detection_confidence
  output->detection_confidence = input->detection_confidence;
  return true;
}

safe_teleop_core__msg__ObjectStatus *
safe_teleop_core__msg__ObjectStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__ObjectStatus * msg = (safe_teleop_core__msg__ObjectStatus *)allocator.allocate(sizeof(safe_teleop_core__msg__ObjectStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__msg__ObjectStatus));
  bool success = safe_teleop_core__msg__ObjectStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__msg__ObjectStatus__destroy(safe_teleop_core__msg__ObjectStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__msg__ObjectStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__msg__ObjectStatus__Sequence__init(safe_teleop_core__msg__ObjectStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__ObjectStatus * data = NULL;

  if (size) {
    data = (safe_teleop_core__msg__ObjectStatus *)allocator.zero_allocate(size, sizeof(safe_teleop_core__msg__ObjectStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__msg__ObjectStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__msg__ObjectStatus__fini(&data[i - 1]);
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
safe_teleop_core__msg__ObjectStatus__Sequence__fini(safe_teleop_core__msg__ObjectStatus__Sequence * array)
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
      safe_teleop_core__msg__ObjectStatus__fini(&array->data[i]);
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

safe_teleop_core__msg__ObjectStatus__Sequence *
safe_teleop_core__msg__ObjectStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__ObjectStatus__Sequence * array = (safe_teleop_core__msg__ObjectStatus__Sequence *)allocator.allocate(sizeof(safe_teleop_core__msg__ObjectStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__msg__ObjectStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__msg__ObjectStatus__Sequence__destroy(safe_teleop_core__msg__ObjectStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__msg__ObjectStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__msg__ObjectStatus__Sequence__are_equal(const safe_teleop_core__msg__ObjectStatus__Sequence * lhs, const safe_teleop_core__msg__ObjectStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__msg__ObjectStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__msg__ObjectStatus__Sequence__copy(
  const safe_teleop_core__msg__ObjectStatus__Sequence * input,
  safe_teleop_core__msg__ObjectStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__msg__ObjectStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__msg__ObjectStatus * data =
      (safe_teleop_core__msg__ObjectStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__msg__ObjectStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__msg__ObjectStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__msg__ObjectStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
