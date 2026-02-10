// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/srv/detail/update_safety_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `specific_zones`
#include "rosidl_runtime_c/string_functions.h"

bool
safe_teleop_core__srv__UpdateSafetyMap_Request__init(safe_teleop_core__srv__UpdateSafetyMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // force_full_update
  // specific_zones
  if (!rosidl_runtime_c__String__Sequence__init(&msg->specific_zones, 0)) {
    safe_teleop_core__srv__UpdateSafetyMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Request__fini(safe_teleop_core__srv__UpdateSafetyMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // force_full_update
  // specific_zones
  rosidl_runtime_c__String__Sequence__fini(&msg->specific_zones);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Request__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Request * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // force_full_update
  if (lhs->force_full_update != rhs->force_full_update) {
    return false;
  }
  // specific_zones
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->specific_zones), &(rhs->specific_zones)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Request__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Request * input,
  safe_teleop_core__srv__UpdateSafetyMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // force_full_update
  output->force_full_update = input->force_full_update;
  // specific_zones
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->specific_zones), &(output->specific_zones)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__srv__UpdateSafetyMap_Request *
safe_teleop_core__srv__UpdateSafetyMap_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Request * msg = (safe_teleop_core__srv__UpdateSafetyMap_Request *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request));
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Request__destroy(safe_teleop_core__srv__UpdateSafetyMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__UpdateSafetyMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__init(safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Request * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__UpdateSafetyMap_Request *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__UpdateSafetyMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__UpdateSafetyMap_Request__fini(&data[i - 1]);
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
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__fini(safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * array)
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
      safe_teleop_core__srv__UpdateSafetyMap_Request__fini(&array->data[i]);
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

safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * array = (safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__destroy(safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * input,
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__UpdateSafetyMap_Request * data =
      (safe_teleop_core__srv__UpdateSafetyMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__UpdateSafetyMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__UpdateSafetyMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `map_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
safe_teleop_core__srv__UpdateSafetyMap_Response__init(safe_teleop_core__srv__UpdateSafetyMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    safe_teleop_core__srv__UpdateSafetyMap_Response__fini(msg);
    return false;
  }
  // zones_updated
  // update_duration
  // map_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->map_timestamp)) {
    safe_teleop_core__srv__UpdateSafetyMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Response__fini(safe_teleop_core__srv__UpdateSafetyMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // zones_updated
  // update_duration
  // map_timestamp
  builtin_interfaces__msg__Time__fini(&msg->map_timestamp);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Response__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Response * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // zones_updated
  if (lhs->zones_updated != rhs->zones_updated) {
    return false;
  }
  // update_duration
  if (lhs->update_duration != rhs->update_duration) {
    return false;
  }
  // map_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->map_timestamp), &(rhs->map_timestamp)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Response__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Response * input,
  safe_teleop_core__srv__UpdateSafetyMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // zones_updated
  output->zones_updated = input->zones_updated;
  // update_duration
  output->update_duration = input->update_duration;
  // map_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->map_timestamp), &(output->map_timestamp)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__srv__UpdateSafetyMap_Response *
safe_teleop_core__srv__UpdateSafetyMap_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Response * msg = (safe_teleop_core__srv__UpdateSafetyMap_Response *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response));
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Response__destroy(safe_teleop_core__srv__UpdateSafetyMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__UpdateSafetyMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__init(safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Response * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__UpdateSafetyMap_Response *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__UpdateSafetyMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__UpdateSafetyMap_Response__fini(&data[i - 1]);
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
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__fini(safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * array)
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
      safe_teleop_core__srv__UpdateSafetyMap_Response__fini(&array->data[i]);
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

safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * array = (safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__destroy(safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * input,
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__UpdateSafetyMap_Response * data =
      (safe_teleop_core__srv__UpdateSafetyMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__UpdateSafetyMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__UpdateSafetyMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__functions.h"

bool
safe_teleop_core__srv__UpdateSafetyMap_Event__init(safe_teleop_core__srv__UpdateSafetyMap_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__fini(msg);
    return false;
  }
  // request
  if (!safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__init(&msg->request, 0)) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__fini(msg);
    return false;
  }
  // response
  if (!safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__init(&msg->response, 0)) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Event__fini(safe_teleop_core__srv__UpdateSafetyMap_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__fini(&msg->request);
  // response
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__fini(&msg->response);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Event__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Event * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Event__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Event * input,
  safe_teleop_core__srv__UpdateSafetyMap_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__srv__UpdateSafetyMap_Event *
safe_teleop_core__srv__UpdateSafetyMap_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Event * msg = (safe_teleop_core__srv__UpdateSafetyMap_Event *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event));
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Event__destroy(safe_teleop_core__srv__UpdateSafetyMap_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__init(safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Event * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__UpdateSafetyMap_Event *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__UpdateSafetyMap_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__UpdateSafetyMap_Event__fini(&data[i - 1]);
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
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__fini(safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * array)
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
      safe_teleop_core__srv__UpdateSafetyMap_Event__fini(&array->data[i]);
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

safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence *
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * array = (safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__destroy(safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__are_equal(const safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * lhs, const safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence__copy(
  const safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * input,
  safe_teleop_core__srv__UpdateSafetyMap_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__UpdateSafetyMap_Event * data =
      (safe_teleop_core__srv__UpdateSafetyMap_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__UpdateSafetyMap_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__UpdateSafetyMap_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__UpdateSafetyMap_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
