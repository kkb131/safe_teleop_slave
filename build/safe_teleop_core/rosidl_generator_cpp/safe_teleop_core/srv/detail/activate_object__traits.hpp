// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:srv/ActivateObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/activate_object.hpp"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__TRAITS_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/srv/detail/activate_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace safe_teleop_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateObject_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: activate
  {
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << ", ";
  }

  // member: safety_margin
  {
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << "\n";
  }

  // member: safety_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateObject_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_generator_traits
{

[[deprecated("use safe_teleop_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const safe_teleop_core::srv::ActivateObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::ActivateObject_Request & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::ActivateObject_Request>()
{
  return "safe_teleop_core::srv::ActivateObject_Request";
}

template<>
inline const char * name<safe_teleop_core::srv::ActivateObject_Request>()
{
  return "safe_teleop_core/srv/ActivateObject_Request";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::ActivateObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::ActivateObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::srv::ActivateObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'updated_status'
#include "safe_teleop_core/msg/detail/object_status__traits.hpp"

namespace safe_teleop_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateObject_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: updated_status
  {
    out << "updated_status: ";
    to_flow_style_yaml(msg.updated_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: updated_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updated_status:\n";
    to_block_style_yaml(msg.updated_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateObject_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_generator_traits
{

[[deprecated("use safe_teleop_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const safe_teleop_core::srv::ActivateObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::ActivateObject_Response & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::ActivateObject_Response>()
{
  return "safe_teleop_core::srv::ActivateObject_Response";
}

template<>
inline const char * name<safe_teleop_core::srv::ActivateObject_Response>()
{
  return "safe_teleop_core/srv/ActivateObject_Response";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::ActivateObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::ActivateObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::srv::ActivateObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace safe_teleop_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateObject_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateObject_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateObject_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace safe_teleop_core

namespace rosidl_generator_traits
{

[[deprecated("use safe_teleop_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const safe_teleop_core::srv::ActivateObject_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::ActivateObject_Event & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::ActivateObject_Event>()
{
  return "safe_teleop_core::srv::ActivateObject_Event";
}

template<>
inline const char * name<safe_teleop_core::srv::ActivateObject_Event>()
{
  return "safe_teleop_core/srv/ActivateObject_Event";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::ActivateObject_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::ActivateObject_Event>
  : std::integral_constant<bool, has_bounded_size<safe_teleop_core::srv::ActivateObject_Request>::value && has_bounded_size<safe_teleop_core::srv::ActivateObject_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<safe_teleop_core::srv::ActivateObject_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<safe_teleop_core::srv::ActivateObject>()
{
  return "safe_teleop_core::srv::ActivateObject";
}

template<>
inline const char * name<safe_teleop_core::srv::ActivateObject>()
{
  return "safe_teleop_core/srv/ActivateObject";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::ActivateObject>
  : std::integral_constant<
    bool,
    has_fixed_size<safe_teleop_core::srv::ActivateObject_Request>::value &&
    has_fixed_size<safe_teleop_core::srv::ActivateObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<safe_teleop_core::srv::ActivateObject>
  : std::integral_constant<
    bool,
    has_bounded_size<safe_teleop_core::srv::ActivateObject_Request>::value &&
    has_bounded_size<safe_teleop_core::srv::ActivateObject_Response>::value
  >
{
};

template<>
struct is_service<safe_teleop_core::srv::ActivateObject>
  : std::true_type
{
};

template<>
struct is_service_request<safe_teleop_core::srv::ActivateObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<safe_teleop_core::srv::ActivateObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__ACTIVATE_OBJECT__TRAITS_HPP_
