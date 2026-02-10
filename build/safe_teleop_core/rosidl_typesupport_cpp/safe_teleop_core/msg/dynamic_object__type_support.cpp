// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "safe_teleop_core/msg/detail/dynamic_object__functions.h"
#include "safe_teleop_core/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace safe_teleop_core
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicObject_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicObject_type_support_ids_t;

static const _DynamicObject_type_support_ids_t _DynamicObject_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicObject_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicObject_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicObject_type_support_symbol_names_t _DynamicObject_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, safe_teleop_core, msg, DynamicObject)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, safe_teleop_core, msg, DynamicObject)),
  }
};

typedef struct _DynamicObject_type_support_data_t
{
  void * data[2];
} _DynamicObject_type_support_data_t;

static _DynamicObject_type_support_data_t _DynamicObject_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicObject_message_typesupport_map = {
  2,
  "safe_teleop_core",
  &_DynamicObject_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicObject_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicObject_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicObject_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicObject_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &safe_teleop_core__msg__DynamicObject__get_type_hash,
  &safe_teleop_core__msg__DynamicObject__get_type_description,
  &safe_teleop_core__msg__DynamicObject__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace safe_teleop_core

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<safe_teleop_core::msg::DynamicObject>()
{
  return &::safe_teleop_core::msg::rosidl_typesupport_cpp::DynamicObject_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, safe_teleop_core, msg, DynamicObject)() {
  return get_message_type_support_handle<safe_teleop_core::msg::DynamicObject>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
