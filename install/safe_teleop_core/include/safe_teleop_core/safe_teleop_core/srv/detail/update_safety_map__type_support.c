// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "safe_teleop_core/srv/detail/update_safety_map__rosidl_typesupport_introspection_c.h"
#include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
#include "safe_teleop_core/srv/detail/update_safety_map__struct.h"


// Include directives for member types
// Member `specific_zones`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  safe_teleop_core__srv__UpdateSafetyMap_Request__init(message_memory);
}

void safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_fini_function(void * message_memory)
{
  safe_teleop_core__srv__UpdateSafetyMap_Request__fini(message_memory);
}

size_t safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Request__specific_zones(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Request__specific_zones(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Request__specific_zones(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Request__specific_zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Request__specific_zones(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Request__specific_zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Request__specific_zones(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Request__specific_zones(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_member_array[2] = {
  {
    "force_full_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Request, force_full_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "specific_zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Request, specific_zones),  // bytes offset in struct
    NULL,  // default value
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Request__specific_zones,  // size() function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Request__specific_zones,  // get_const(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Request__specific_zones,  // get(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Request__specific_zones,  // fetch(index, &value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Request__specific_zones,  // assign(index, value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Request__specific_zones  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_members = {
  "safe_teleop_core__srv",  // message namespace
  "UpdateSafetyMap_Request",  // message name
  2,  // number of fields
  sizeof(safe_teleop_core__srv__UpdateSafetyMap_Request),
  false,  // has_any_key_member_
  safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_member_array,  // message members
  safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle = {
  0,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_members,
  get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Request)() {
  if (!safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle.typesupport_identifier) {
    safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `map_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `map_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  safe_teleop_core__srv__UpdateSafetyMap_Response__init(message_memory);
}

void safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_fini_function(void * message_memory)
{
  safe_teleop_core__srv__UpdateSafetyMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_member_array[5] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zones_updated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Response, zones_updated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Response, update_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Response, map_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_members = {
  "safe_teleop_core__srv",  // message namespace
  "UpdateSafetyMap_Response",  // message name
  5,  // number of fields
  sizeof(safe_teleop_core__srv__UpdateSafetyMap_Response),
  false,  // has_any_key_member_
  safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_member_array,  // message members
  safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle = {
  0,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_members,
  get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Response)() {
  safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle.typesupport_identifier) {
    safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__functions.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "safe_teleop_core/srv/update_safety_map.h"
// Member `request`
// Member `response`
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  safe_teleop_core__srv__UpdateSafetyMap_Event__init(message_memory);
}

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_fini_function(void * message_memory)
{
  safe_teleop_core__srv__UpdateSafetyMap_Event__fini(message_memory);
}

size_t safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Event__request(
  const void * untyped_member)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * member =
    (const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__request(
  const void * untyped_member, size_t index)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * member =
    (const safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__request(
  void * untyped_member, size_t index)
{
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * member =
    (safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Request * item =
    ((const safe_teleop_core__srv__UpdateSafetyMap_Request *)
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__request(untyped_member, index));
  safe_teleop_core__srv__UpdateSafetyMap_Request * value =
    (safe_teleop_core__srv__UpdateSafetyMap_Request *)(untyped_value);
  *value = *item;
}

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  safe_teleop_core__srv__UpdateSafetyMap_Request * item =
    ((safe_teleop_core__srv__UpdateSafetyMap_Request *)
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__request(untyped_member, index));
  const safe_teleop_core__srv__UpdateSafetyMap_Request * value =
    (const safe_teleop_core__srv__UpdateSafetyMap_Request *)(untyped_value);
  *item = *value;
}

bool safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Event__request(
  void * untyped_member, size_t size)
{
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence * member =
    (safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence *)(untyped_member);
  safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__fini(member);
  return safe_teleop_core__srv__UpdateSafetyMap_Request__Sequence__init(member, size);
}

size_t safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Event__response(
  const void * untyped_member)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * member =
    (const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__response(
  const void * untyped_member, size_t index)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * member =
    (const safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__response(
  void * untyped_member, size_t index)
{
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * member =
    (safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const safe_teleop_core__srv__UpdateSafetyMap_Response * item =
    ((const safe_teleop_core__srv__UpdateSafetyMap_Response *)
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__response(untyped_member, index));
  safe_teleop_core__srv__UpdateSafetyMap_Response * value =
    (safe_teleop_core__srv__UpdateSafetyMap_Response *)(untyped_value);
  *value = *item;
}

void safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  safe_teleop_core__srv__UpdateSafetyMap_Response * item =
    ((safe_teleop_core__srv__UpdateSafetyMap_Response *)
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__response(untyped_member, index));
  const safe_teleop_core__srv__UpdateSafetyMap_Response * value =
    (const safe_teleop_core__srv__UpdateSafetyMap_Response *)(untyped_value);
  *item = *value;
}

bool safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Event__response(
  void * untyped_member, size_t size)
{
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence * member =
    (safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence *)(untyped_member);
  safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__fini(member);
  return safe_teleop_core__srv__UpdateSafetyMap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Event, request),  // bytes offset in struct
    NULL,  // default value
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Event__request,  // size() function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__request,  // get_const(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__request,  // get(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Event__request,  // fetch(index, &value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Event__request,  // assign(index, value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(safe_teleop_core__srv__UpdateSafetyMap_Event, response),  // bytes offset in struct
    NULL,  // default value
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateSafetyMap_Event__response,  // size() function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateSafetyMap_Event__response,  // get_const(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateSafetyMap_Event__response,  // get(index) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateSafetyMap_Event__response,  // fetch(index, &value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateSafetyMap_Event__response,  // assign(index, value) function pointer
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateSafetyMap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_members = {
  "safe_teleop_core__srv",  // message namespace
  "UpdateSafetyMap_Event",  // message name
  3,  // number of fields
  sizeof(safe_teleop_core__srv__UpdateSafetyMap_Event),
  false,  // has_any_key_member_
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_member_array,  // message members
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_type_support_handle = {
  0,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_members,
  get_message_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Event)() {
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Request)();
  safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Response)();
  if (!safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_type_support_handle.typesupport_identifier) {
    safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "safe_teleop_core/srv/detail/update_safety_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_members = {
  "safe_teleop_core__srv",  // service namespace
  "UpdateSafetyMap",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle,
  NULL,  // response message
  // safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle
  NULL  // event_message
  // safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle
};


static rosidl_service_type_support_t safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_type_support_handle = {
  0,
  &safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_members,
  get_service_typesupport_handle_function,
  &safe_teleop_core__srv__UpdateSafetyMap_Request__rosidl_typesupport_introspection_c__UpdateSafetyMap_Request_message_type_support_handle,
  &safe_teleop_core__srv__UpdateSafetyMap_Response__rosidl_typesupport_introspection_c__UpdateSafetyMap_Response_message_type_support_handle,
  &safe_teleop_core__srv__UpdateSafetyMap_Event__rosidl_typesupport_introspection_c__UpdateSafetyMap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    safe_teleop_core,
    srv,
    UpdateSafetyMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    safe_teleop_core,
    srv,
    UpdateSafetyMap
  ),
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_hash,
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_description,
  &safe_teleop_core__srv__UpdateSafetyMap__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap)(void) {
  if (!safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_type_support_handle.typesupport_identifier) {
    safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, srv, UpdateSafetyMap_Event)()->data;
  }

  return &safe_teleop_core__srv__detail__update_safety_map__rosidl_typesupport_introspection_c__UpdateSafetyMap_service_type_support_handle;
}
