// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from safe_teleop_core:srv/ActivateObject.idl
// generated code does not contain a copyright notice
#include "safe_teleop_core/srv/detail/activate_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"

bool
safe_teleop_core__srv__ActivateObject_Request__init(safe_teleop_core__srv__ActivateObject_Request * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    safe_teleop_core__srv__ActivateObject_Request__fini(msg);
    return false;
  }
  // activate
  // safety_margin
  return true;
}

void
safe_teleop_core__srv__ActivateObject_Request__fini(safe_teleop_core__srv__ActivateObject_Request * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // activate
  // safety_margin
}

bool
safe_teleop_core__srv__ActivateObject_Request__are_equal(const safe_teleop_core__srv__ActivateObject_Request * lhs, const safe_teleop_core__srv__ActivateObject_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // activate
  if (lhs->activate != rhs->activate) {
    return false;
  }
  // safety_margin
  if (lhs->safety_margin != rhs->safety_margin) {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Request__copy(
  const safe_teleop_core__srv__ActivateObject_Request * input,
  safe_teleop_core__srv__ActivateObject_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // activate
  output->activate = input->activate;
  // safety_margin
  output->safety_margin = input->safety_margin;
  return true;
}

safe_teleop_core__srv__ActivateObject_Request *
safe_teleop_core__srv__ActivateObject_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Request * msg = (safe_teleop_core__srv__ActivateObject_Request *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__ActivateObject_Request));
  bool success = safe_teleop_core__srv__ActivateObject_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__ActivateObject_Request__destroy(safe_teleop_core__srv__ActivateObject_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__ActivateObject_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__ActivateObject_Request__Sequence__init(safe_teleop_core__srv__ActivateObject_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Request * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__ActivateObject_Request *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__ActivateObject_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__ActivateObject_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__ActivateObject_Request__fini(&data[i - 1]);
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
safe_teleop_core__srv__ActivateObject_Request__Sequence__fini(safe_teleop_core__srv__ActivateObject_Request__Sequence * array)
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
      safe_teleop_core__srv__ActivateObject_Request__fini(&array->data[i]);
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

safe_teleop_core__srv__ActivateObject_Request__Sequence *
safe_teleop_core__srv__ActivateObject_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Request__Sequence * array = (safe_teleop_core__srv__ActivateObject_Request__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__ActivateObject_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__ActivateObject_Request__Sequence__destroy(safe_teleop_core__srv__ActivateObject_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__ActivateObject_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__ActivateObject_Request__Sequence__are_equal(const safe_teleop_core__srv__ActivateObject_Request__Sequence * lhs, const safe_teleop_core__srv__ActivateObject_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Request__Sequence__copy(
  const safe_teleop_core__srv__ActivateObject_Request__Sequence * input,
  safe_teleop_core__srv__ActivateObject_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__ActivateObject_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__ActivateObject_Request * data =
      (safe_teleop_core__srv__ActivateObject_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__ActivateObject_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__ActivateObject_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Request__copy(
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
// Member `updated_status`
#include "safe_teleop_core/msg/detail/object_status__functions.h"

bool
safe_teleop_core__srv__ActivateObject_Response__init(safe_teleop_core__srv__ActivateObject_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    safe_teleop_core__srv__ActivateObject_Response__fini(msg);
    return false;
  }
  // updated_status
  if (!safe_teleop_core__msg__ObjectStatus__init(&msg->updated_status)) {
    safe_teleop_core__srv__ActivateObject_Response__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__srv__ActivateObject_Response__fini(safe_teleop_core__srv__ActivateObject_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // updated_status
  safe_teleop_core__msg__ObjectStatus__fini(&msg->updated_status);
}

bool
safe_teleop_core__srv__ActivateObject_Response__are_equal(const safe_teleop_core__srv__ActivateObject_Response * lhs, const safe_teleop_core__srv__ActivateObject_Response * rhs)
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
  // updated_status
  if (!safe_teleop_core__msg__ObjectStatus__are_equal(
      &(lhs->updated_status), &(rhs->updated_status)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Response__copy(
  const safe_teleop_core__srv__ActivateObject_Response * input,
  safe_teleop_core__srv__ActivateObject_Response * output)
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
  // updated_status
  if (!safe_teleop_core__msg__ObjectStatus__copy(
      &(input->updated_status), &(output->updated_status)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__srv__ActivateObject_Response *
safe_teleop_core__srv__ActivateObject_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Response * msg = (safe_teleop_core__srv__ActivateObject_Response *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__ActivateObject_Response));
  bool success = safe_teleop_core__srv__ActivateObject_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__ActivateObject_Response__destroy(safe_teleop_core__srv__ActivateObject_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__ActivateObject_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__ActivateObject_Response__Sequence__init(safe_teleop_core__srv__ActivateObject_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Response * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__ActivateObject_Response *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__ActivateObject_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__ActivateObject_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__ActivateObject_Response__fini(&data[i - 1]);
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
safe_teleop_core__srv__ActivateObject_Response__Sequence__fini(safe_teleop_core__srv__ActivateObject_Response__Sequence * array)
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
      safe_teleop_core__srv__ActivateObject_Response__fini(&array->data[i]);
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

safe_teleop_core__srv__ActivateObject_Response__Sequence *
safe_teleop_core__srv__ActivateObject_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Response__Sequence * array = (safe_teleop_core__srv__ActivateObject_Response__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__ActivateObject_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__ActivateObject_Response__Sequence__destroy(safe_teleop_core__srv__ActivateObject_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__ActivateObject_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__ActivateObject_Response__Sequence__are_equal(const safe_teleop_core__srv__ActivateObject_Response__Sequence * lhs, const safe_teleop_core__srv__ActivateObject_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Response__Sequence__copy(
  const safe_teleop_core__srv__ActivateObject_Response__Sequence * input,
  safe_teleop_core__srv__ActivateObject_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__ActivateObject_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__ActivateObject_Response * data =
      (safe_teleop_core__srv__ActivateObject_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__ActivateObject_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__ActivateObject_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Response__copy(
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
// #include "safe_teleop_core/srv/detail/activate_object__functions.h"

bool
safe_teleop_core__srv__ActivateObject_Event__init(safe_teleop_core__srv__ActivateObject_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    safe_teleop_core__srv__ActivateObject_Event__fini(msg);
    return false;
  }
  // request
  if (!safe_teleop_core__srv__ActivateObject_Request__Sequence__init(&msg->request, 0)) {
    safe_teleop_core__srv__ActivateObject_Event__fini(msg);
    return false;
  }
  // response
  if (!safe_teleop_core__srv__ActivateObject_Response__Sequence__init(&msg->response, 0)) {
    safe_teleop_core__srv__ActivateObject_Event__fini(msg);
    return false;
  }
  return true;
}

void
safe_teleop_core__srv__ActivateObject_Event__fini(safe_teleop_core__srv__ActivateObject_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  safe_teleop_core__srv__ActivateObject_Request__Sequence__fini(&msg->request);
  // response
  safe_teleop_core__srv__ActivateObject_Response__Sequence__fini(&msg->response);
}

bool
safe_teleop_core__srv__ActivateObject_Event__are_equal(const safe_teleop_core__srv__ActivateObject_Event * lhs, const safe_teleop_core__srv__ActivateObject_Event * rhs)
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
  if (!safe_teleop_core__srv__ActivateObject_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!safe_teleop_core__srv__ActivateObject_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Event__copy(
  const safe_teleop_core__srv__ActivateObject_Event * input,
  safe_teleop_core__srv__ActivateObject_Event * output)
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
  if (!safe_teleop_core__srv__ActivateObject_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!safe_teleop_core__srv__ActivateObject_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

safe_teleop_core__srv__ActivateObject_Event *
safe_teleop_core__srv__ActivateObject_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Event * msg = (safe_teleop_core__srv__ActivateObject_Event *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(safe_teleop_core__srv__ActivateObject_Event));
  bool success = safe_teleop_core__srv__ActivateObject_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
safe_teleop_core__srv__ActivateObject_Event__destroy(safe_teleop_core__srv__ActivateObject_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    safe_teleop_core__srv__ActivateObject_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
safe_teleop_core__srv__ActivateObject_Event__Sequence__init(safe_teleop_core__srv__ActivateObject_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Event * data = NULL;

  if (size) {
    data = (safe_teleop_core__srv__ActivateObject_Event *)allocator.zero_allocate(size, sizeof(safe_teleop_core__srv__ActivateObject_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = safe_teleop_core__srv__ActivateObject_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        safe_teleop_core__srv__ActivateObject_Event__fini(&data[i - 1]);
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
safe_teleop_core__srv__ActivateObject_Event__Sequence__fini(safe_teleop_core__srv__ActivateObject_Event__Sequence * array)
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
      safe_teleop_core__srv__ActivateObject_Event__fini(&array->data[i]);
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

safe_teleop_core__srv__ActivateObject_Event__Sequence *
safe_teleop_core__srv__ActivateObject_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  safe_teleop_core__srv__ActivateObject_Event__Sequence * array = (safe_teleop_core__srv__ActivateObject_Event__Sequence *)allocator.allocate(sizeof(safe_teleop_core__srv__ActivateObject_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = safe_teleop_core__srv__ActivateObject_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
safe_teleop_core__srv__ActivateObject_Event__Sequence__destroy(safe_teleop_core__srv__ActivateObject_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    safe_teleop_core__srv__ActivateObject_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
safe_teleop_core__srv__ActivateObject_Event__Sequence__are_equal(const safe_teleop_core__srv__ActivateObject_Event__Sequence * lhs, const safe_teleop_core__srv__ActivateObject_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
safe_teleop_core__srv__ActivateObject_Event__Sequence__copy(
  const safe_teleop_core__srv__ActivateObject_Event__Sequence * input,
  safe_teleop_core__srv__ActivateObject_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(safe_teleop_core__srv__ActivateObject_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    safe_teleop_core__srv__ActivateObject_Event * data =
      (safe_teleop_core__srv__ActivateObject_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!safe_teleop_core__srv__ActivateObject_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          safe_teleop_core__srv__ActivateObject_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!safe_teleop_core__srv__ActivateObject_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
