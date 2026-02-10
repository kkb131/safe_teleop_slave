// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/collision_warning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_id`
// Member `warning_source`
#include "rosidl_runtime_c/string_functions.h"

bool
safe_teleop_core__msg__CollisionWarning__init(safe_teleop_core__msg__CollisionWarning * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    safe_teleop_core__msg__CollisionWarning__fini(msg);
    return false;
  }
  // severity
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    safe_teleop_core__msg__CollisionWarning__fini(msg);
    return false;
  }
  // distance_to_collision
  // time_to_collision
  // emergency_stop_required
  // velocity_reduction_required
  // max_safe_velocity
  // warning_source
  if (!rosidl_runtime_c__String__init(&msg->warning_source)) {
    safe_teleop_core__msg__CollisionWarning__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__msg__CollisionWarning__fini(safe_teleop_core__msg__CollisionWarning * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // severity
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // distance_to_collision
  // time_to_collision
  // emergency_stop_required
  // velocity_reduction_required
  // max_safe_velocity
  // warning_source
  rosidl_runtime_c__String__fini(&msg->warning_source);
}

bool
safe_teleop_core__msg__CollisionWarning__are_equal(const safe_teleop_core__msg__CollisionWarning * lhs, const safe_teleop_core__msg__CollisionWarning * rhs)
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
  // severity
  if (lhs->severity != rhs->severity) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // distance_to_collision
  if (lhs->distance_to_collision != rhs->distance_to_collision) {
    return false;
  }
  // time_to_collision
  if (lhs->time_to_collision != rhs->time_to_collision) {
    return false;
  }
  // emergency_stop_required
  if (lhs->emergency_stop_required != rhs->emergency_stop_required) {
    return false;
  }
  // velocity_reduction_required
  if (lhs->velocity_reduction_required != rhs->velocity_reduction_required) {
    return false;
  }
  // max_safe_velocity
  if (lhs->max_safe_velocity != rhs->max_safe_velocity) {
    return false;
  }
  // warning_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->warning_source), &(rhs->warning_source)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__msg__CollisionWarning__copy(
  const safe_teleop_core__msg__CollisionWarning * input,
  safe_teleop_core__msg__CollisionWarning * output)
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
  // severity
  output->severity = input->severity;
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // distance_to_collision
  output->distance_to_collision = input->distance_to_collision;
  // time_to_collision
  output->time_to_collision = input->time_to_collision;
  // emergency_stop_required
  output->emergency_stop_required = input->emergency_stop_required;
  // velocity_reduction_required
  output->velocity_reduction_required = input->velocity_reduction_required;
  // max_safe_velocity
  output->max_safe_velocity = input->max_safe_velocity;
  // warning_source
  if (!rosidl_runtime_c__String__copy(
      &(input->warning_source), &(output->warning_source)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__msg__CollisionWarning *
safe_teleop_core__msg__CollisionWarning__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__CollisionWarning * msg = (safe_teleop_core__msg__CollisionWarning *)allocator.allocate(sizeof(safe_teleop_core__msg__CollisionWarning), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__msg__CollisionWarning));
  bool success = safe_teleop_core__msg__CollisionWarning__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__msg__CollisionWarning__destroy(safe_teleop_core__msg__CollisionWarning * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__msg__CollisionWarning__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__msg__CollisionWarning__Sequence__init(safe_teleop_core__msg__CollisionWarning__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__CollisionWarning * data = NULL;

  if (size) {
    data = (safe_teleop_core__msg__CollisionWarning *)allocator.zero_allocate(size, sizeof(safe_teleop_core__msg__CollisionWarning), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__msg__CollisionWarning__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__msg__CollisionWarning__fini(&data[i - 1]);
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
safe_teleop_core__msg__CollisionWarning__Sequence__fini(safe_teleop_core__msg__CollisionWarning__Sequence * array)
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
      safe_teleop_core__msg__CollisionWarning__fini(&array->data[i]);
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

safe_teleop_core__msg__CollisionWarning__Sequence *
safe_teleop_core__msg__CollisionWarning__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__CollisionWarning__Sequence * array = (safe_teleop_core__msg__CollisionWarning__Sequence *)allocator.allocate(sizeof(safe_teleop_core__msg__CollisionWarning__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__msg__CollisionWarning__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__msg__CollisionWarning__Sequence__destroy(safe_teleop_core__msg__CollisionWarning__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__msg__CollisionWarning__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__msg__CollisionWarning__Sequence__are_equal(const safe_teleop_core__msg__CollisionWarning__Sequence * lhs, const safe_teleop_core__msg__CollisionWarning__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__msg__CollisionWarning__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__msg__CollisionWarning__Sequence__copy(
  const safe_teleop_core__msg__CollisionWarning__Sequence * input,
  safe_teleop_core__msg__CollisionWarning__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__msg__CollisionWarning);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__msg__CollisionWarning * data =
      (safe_teleop_core__msg__CollisionWarning *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__msg__CollisionWarning__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__msg__CollisionWarning__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__msg__CollisionWarning__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
