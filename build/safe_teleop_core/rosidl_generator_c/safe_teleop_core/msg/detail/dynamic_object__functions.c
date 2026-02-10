// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/msg/detail/dynamic_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `bounding_box`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `first_detected`
// Member `last_updated`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
safe_teleop_core__msg__DynamicObject__init(safe_teleop_core__msg__DynamicObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // tracking_id
  // current_pose
  if (!geometry_msgs__msg__Pose__init(&msg->current_pose)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__init(&msg->bounding_box)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // object_class
  // tracking_confidence
  // frames_tracked
  // first_detected
  if (!builtin_interfaces__msg__Time__init(&msg->first_detected)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  // last_updated
  if (!builtin_interfaces__msg__Time__init(&msg->last_updated)) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__msg__DynamicObject__fini(safe_teleop_core__msg__DynamicObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // tracking_id
  // current_pose
  geometry_msgs__msg__Pose__fini(&msg->current_pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // bounding_box
  geometry_msgs__msg__Vector3__fini(&msg->bounding_box);
  // object_class
  // tracking_confidence
  // frames_tracked
  // first_detected
  builtin_interfaces__msg__Time__fini(&msg->first_detected);
  // last_updated
  builtin_interfaces__msg__Time__fini(&msg->last_updated);
}

bool
safe_teleop_core__msg__DynamicObject__are_equal(const safe_teleop_core__msg__DynamicObject * lhs, const safe_teleop_core__msg__DynamicObject * rhs)
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
  // tracking_id
  if (lhs->tracking_id != rhs->tracking_id) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->current_pose), &(rhs->current_pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // object_class
  if (lhs->object_class != rhs->object_class) {
    return false;
  }
  // tracking_confidence
  if (lhs->tracking_confidence != rhs->tracking_confidence) {
    return false;
  }
  // frames_tracked
  if (lhs->frames_tracked != rhs->frames_tracked) {
    return false;
  }
  // first_detected
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->first_detected), &(rhs->first_detected)))
  {
    return false;
  }
  // last_updated
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_updated), &(rhs->last_updated)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__msg__DynamicObject__copy(
  const safe_teleop_core__msg__DynamicObject * input,
  safe_teleop_core__msg__DynamicObject * output)
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
  // tracking_id
  output->tracking_id = input->tracking_id;
  // current_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->current_pose), &(output->current_pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // bounding_box
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // object_class
  output->object_class = input->object_class;
  // tracking_confidence
  output->tracking_confidence = input->tracking_confidence;
  // frames_tracked
  output->frames_tracked = input->frames_tracked;
  // first_detected
  if (!builtin_interfaces__msg__Time__copy(
      &(input->first_detected), &(output->first_detected)))
  {
    return false;
  }
  // last_updated
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_updated), &(output->last_updated)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__msg__DynamicObject *
safe_teleop_core__msg__DynamicObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__DynamicObject * msg = (safe_teleop_core__msg__DynamicObject *)allocator.allocate(sizeof(safe_teleop_core__msg__DynamicObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__msg__DynamicObject));
  bool success = safe_teleop_core__msg__DynamicObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__msg__DynamicObject__destroy(safe_teleop_core__msg__DynamicObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__msg__DynamicObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__msg__DynamicObject__Sequence__init(safe_teleop_core__msg__DynamicObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__DynamicObject * data = NULL;

  if (size) {
    data = (safe_teleop_core__msg__DynamicObject *)allocator.zero_allocate(size, sizeof(safe_teleop_core__msg__DynamicObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__msg__DynamicObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__msg__DynamicObject__fini(&data[i - 1]);
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
safe_teleop_core__msg__DynamicObject__Sequence__fini(safe_teleop_core__msg__DynamicObject__Sequence * array)
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
      safe_teleop_core__msg__DynamicObject__fini(&array->data[i]);
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

safe_teleop_core__msg__DynamicObject__Sequence *
safe_teleop_core__msg__DynamicObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__msg__DynamicObject__Sequence * array = (safe_teleop_core__msg__DynamicObject__Sequence *)allocator.allocate(sizeof(safe_teleop_core__msg__DynamicObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__msg__DynamicObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__msg__DynamicObject__Sequence__destroy(safe_teleop_core__msg__DynamicObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__msg__DynamicObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__msg__DynamicObject__Sequence__are_equal(const safe_teleop_core__msg__DynamicObject__Sequence * lhs, const safe_teleop_core__msg__DynamicObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__msg__DynamicObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__msg__DynamicObject__Sequence__copy(
  const safe_teleop_core__msg__DynamicObject__Sequence * input,
  safe_teleop_core__msg__DynamicObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__msg__DynamicObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__msg__DynamicObject * data =
      (safe_teleop_core__msg__DynamicObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__msg__DynamicObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__msg__DynamicObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__msg__DynamicObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
