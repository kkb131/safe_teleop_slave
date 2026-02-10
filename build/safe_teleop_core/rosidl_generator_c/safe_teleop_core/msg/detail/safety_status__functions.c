// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/safety_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
safe_teleop_core__msg__SafetyStatus__init(safe_teleop_core__msg__SafetyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    safe_teleop_core__msg__SafetyStatus__fini(msg);
    return false;
  }
  // safety_mode
  // master_connected
  // esdf_available
  // pointcloud_available
  // emergency_stop_active
  // esdf_age_sec
  // pointcloud_age_sec
  // last_collision_check_ms
  // active_collision_severity
  // min_distance_to_obstacle
  // avg_collision_check_latency_ms
  // collision_checks_per_sec
  // velocity_limit_active
  // max_safe_velocity
  return true;
}

void
safe_teleop_core__msg__SafetyStatus__fini(safe_teleop_core__msg__SafetyStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // safety_mode
  // master_connected
  // esdf_available
  // pointcloud_available
  // emergency_stop_active
  // esdf_age_sec
  // pointcloud_age_sec
  // last_collision_check_ms
  // active_collision_severity
  // min_distance_to_obstacle
  // avg_collision_check_latency_ms
  // collision_checks_per_sec
  // velocity_limit_active
  // max_safe_velocity
}

bool
safe_teleop_core__msg__SafetyStatus__are_equal(const safe_teleop_core__msg__SafetyStatus * lhs, const safe_teleop_core__msg__SafetyStatus * rhs)
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
  // safety_mode
  if (lhs->safety_mode != rhs->safety_mode) {
    return false;
  }
  // master_connected
  if (lhs->master_connected != rhs->master_connected) {
    return false;
  }
  // esdf_available
  if (lhs->esdf_available != rhs->esdf_available) {
    return false;
  }
  // pointcloud_available
  if (lhs->pointcloud_available != rhs->pointcloud_available) {
    return false;
  }
  // emergency_stop_active
  if (lhs->emergency_stop_active != rhs->emergency_stop_active) {
    return false;
  }
  // esdf_age_sec
  if (lhs->esdf_age_sec != rhs->esdf_age_sec) {
    return false;
  }
  // pointcloud_age_sec
  if (lhs->pointcloud_age_sec != rhs->pointcloud_age_sec) {
    return false;
  }
  // last_collision_check_ms
  if (lhs->last_collision_check_ms != rhs->last_collision_check_ms) {
    return false;
  }
  // active_collision_severity
  if (lhs->active_collision_severity != rhs->active_collision_severity) {
    return false;
  }
  // min_distance_to_obstacle
  if (lhs->min_distance_to_obstacle != rhs->min_distance_to_obstacle) {
    return false;
  }
  // avg_collision_check_latency_ms
  if (lhs->avg_collision_check_latency_ms != rhs->avg_collision_check_latency_ms) {
    return false;
  }
  // collision_checks_per_sec
  if (lhs->collision_checks_per_sec != rhs->collision_checks_per_sec) {
    return false;
  }
  // velocity_limit_active
  if (lhs->velocity_limit_active != rhs->velocity_limit_active) {
    return false;
  }
  // max_safe_velocity
  if (lhs->max_safe_velocity != rhs->max_safe_velocity) {
    return false;
  }
  return true;
}

bool
safe_teleop_core__msg__SafetyStatus__copy(
  const safe_teleop_core__msg__SafetyStatus * input,
  safe_teleop_core__msg__SafetyStatus * output)
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
  // safety_mode
  output->safety_mode = input->safety_mode;
  // master_connected
  output->master_connected = input->master_connected;
  // esdf_available
  output->esdf_available = input->esdf_available;
  // pointcloud_available
  output->pointcloud_available = input->pointcloud_available;
  // emergency_stop_active
  output->emergency_stop_active = input->emergency_stop_active;
  // esdf_age_sec
  output->esdf_age_sec = input->esdf_age_sec;
  // pointcloud_age_sec
  output->pointcloud_age_sec = input->pointcloud_age_sec;
  // last_collision_check_ms
  output->last_collision_check_ms = input->last_collision_check_ms;
  // active_collision_severity
  output->active_collision_severity = input->active_collision_severity;
  // min_distance_to_obstacle
  output->min_distance_to_obstacle = input->min_distance_to_obstacle;
  // avg_collision_check_latency_ms
  output->avg_collision_check_latency_ms = input->avg_collision_check_latency_ms;
  // collision_checks_per_sec
  output->collision_checks_per_sec = input->collision_checks_per_sec;
  // velocity_limit_active
  output->velocity_limit_active = input->velocity_limit_active;
  // max_safe_velocity
  output->max_safe_velocity = input->max_safe_velocity;
  return true;
}

safe_teleop_core__msg__SafetyStatus *
safe_teleop_core__msg__SafetyStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyStatus * msg = (safe_teleop_core__msg__SafetyStatus *)allocator.allocate(sizeof(safe_teleop_core__msg__SafetyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__msg__SafetyStatus));
  bool success = safe_teleop_core__msg__SafetyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__msg__SafetyStatus__destroy(safe_teleop_core__msg__SafetyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__msg__SafetyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__msg__SafetyStatus__Sequence__init(safe_teleop_core__msg__SafetyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyStatus * data = NULL;

  if (size) {
    data = (safe_teleop_core__msg__SafetyStatus *)allocator.zero_allocate(size, sizeof(safe_teleop_core__msg__SafetyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__msg__SafetyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__msg__SafetyStatus__fini(&data[i - 1]);
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
safe_teleop_core__msg__SafetyStatus__Sequence__fini(safe_teleop_core__msg__SafetyStatus__Sequence * array)
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
      safe_teleop_core__msg__SafetyStatus__fini(&array->data[i]);
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

safe_teleop_core__msg__SafetyStatus__Sequence *
safe_teleop_core__msg__SafetyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__SafetyStatus__Sequence * array = (safe_teleop_core__msg__SafetyStatus__Sequence *)allocator.allocate(sizeof(safe_teleop_core__msg__SafetyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__msg__SafetyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__msg__SafetyStatus__Sequence__destroy(safe_teleop_core__msg__SafetyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__msg__SafetyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__msg__SafetyStatus__Sequence__are_equal(const safe_teleop_core__msg__SafetyStatus__Sequence * lhs, const safe_teleop_core__msg__SafetyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__msg__SafetyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__msg__SafetyStatus__Sequence__copy(
  const safe_teleop_core__msg__SafetyStatus__Sequence * input,
  safe_teleop_core__msg__SafetyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__msg__SafetyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__msg__SafetyStatus * data =
      (safe_teleop_core__msg__SafetyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__msg__SafetyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__msg__SafetyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__msg__SafetyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
