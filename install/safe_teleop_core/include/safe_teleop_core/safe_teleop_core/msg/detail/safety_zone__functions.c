// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:msg/SafetyZone.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/safety_zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `zone_id`
// Member `zone_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
safe_teleop_core__msg__SafetyZone__init(safe_teleop_core__msg__SafetyZone * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
    return false;
  }
  // zone_id
  if (!rosidl_runtime_c__String__init(&msg->zone_id)) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
    return false;
  }
  // zone_name
  if (!rosidl_runtime_c__String__init(&msg->zone_name)) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
    return false;
  }
  // safety_margin
  // is_active
  // priority
  // is_dynamic
  // velocity_magnitude
  return true;
}

void
safe_teleop_core__msg__SafetyZone__fini(safe_teleop_core__msg__SafetyZone * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // zone_id
  rosidl_runtime_c__String__fini(&msg->zone_id);
  // zone_name
  rosidl_runtime_c__String__fini(&msg->zone_name);
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // safety_margin
  // is_active
  // priority
  // is_dynamic
  // velocity_magnitude
}

bool
safe_teleop_core__msg__SafetyZone__are_equal(const safe_teleop_core__msg__SafetyZone * lhs, const safe_teleop_core__msg__SafetyZone * rhs)
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
  // zone_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->zone_id), &(rhs->zone_id)))
  {
    return false;
  }
  // zone_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->zone_name), &(rhs->zone_name)))
  {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // safety_margin
  if (lhs->safety_margin != rhs->safety_margin) {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // is_dynamic
  if (lhs->is_dynamic != rhs->is_dynamic) {
    return false;
  }
  // velocity_magnitude
  if (lhs->velocity_magnitude != rhs->velocity_magnitude) {
    return false;
  }
  return true;
}

bool
safe_teleop_core__msg__SafetyZone__copy(
  const safe_teleop_core__msg__SafetyZone * input,
  safe_teleop_core__msg__SafetyZone * output)
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
  // zone_id
  if (!rosidl_runtime_c__String__copy(
      &(input->zone_id), &(output->zone_id)))
  {
    return false;
  }
  // zone_name
  if (!rosidl_runtime_c__String__copy(
      &(input->zone_name), &(output->zone_name)))
  {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // safety_margin
  output->safety_margin = input->safety_margin;
  // is_active
  output->is_active = input->is_active;
  // priority
  output->priority = input->priority;
  // is_dynamic
  output->is_dynamic = input->is_dynamic;
  // velocity_magnitude
  output->velocity_magnitude = input->velocity_magnitude;
  return true;
}

safe_teleop_core__msg__SafetyZone *
safe_teleop_core__msg__SafetyZone__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyZone * msg = (safe_teleop_core__msg__SafetyZone *)allocator.allocate(sizeof(safe_teleop_core__msg__SafetyZone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__msg__SafetyZone));
  bool success = safe_teleop_core__msg__SafetyZone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__msg__SafetyZone__destroy(safe_teleop_core__msg__SafetyZone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__msg__SafetyZone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__msg__SafetyZone__Sequence__init(safe_teleop_core__msg__SafetyZone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyZone * data = NULL;

  if (size) {
    data = (safe_teleop_core__msg__SafetyZone *)allocator.zero_allocate(size, sizeof(safe_teleop_core__msg__SafetyZone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__msg__SafetyZone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__msg__SafetyZone__fini(&data[i - 1]);
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
safe_teleop_core__msg__SafetyZone__Sequence__fini(safe_teleop_core__msg__SafetyZone__Sequence * array)
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
      safe_teleop_core__msg__SafetyZone__fini(&array->data[i]);
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

safe_teleop_core__msg__SafetyZone__Sequence *
safe_teleop_core__msg__SafetyZone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyZone__Sequence * array = (safe_teleop_core__msg__SafetyZone__Sequence *)allocator.allocate(sizeof(safe_teleop_core__msg__SafetyZone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__msg__SafetyZone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__msg__SafetyZone__Sequence__destroy(safe_teleop_core__msg__SafetyZone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__msg__SafetyZone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__msg__SafetyZone__Sequence__are_equal(const safe_teleop_core__msg__SafetyZone__Sequence * lhs, const safe_teleop_core__msg__SafetyZone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__msg__SafetyZone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__msg__SafetyZone__Sequence__copy(
  const safe_teleop_core__msg__SafetyZone__Sequence * input,
  safe_teleop_core__msg__SafetyZone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__msg__SafetyZone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__msg__SafetyZone * data =
      (safe_teleop_core__msg__SafetyZone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__msg__SafetyZone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__msg__SafetyZone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__msg__SafetyZone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
