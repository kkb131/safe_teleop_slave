// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/update_safety_map.hpp"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__TRAITS_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "safe_teleop_core/srv/detail/update_safety_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace safe_teleop_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateSafetyMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: force_full_update
  {
    out << "force_full_update: ";
    rosidl_generator_traits::value_to_yaml(msg.force_full_update, out);
    out << ", ";
  }

  // member: specific_zones
  {
    if (msg.specific_zones.size() == 0) {
      out << "specific_zones: []";
    } else {
      out << "specific_zones: [";
      size_t pending_items = msg.specific_zones.size();
      for (auto item : msg.specific_zones) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const UpdateSafetyMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force_full_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_full_update: ";
    rosidl_generator_traits::value_to_yaml(msg.force_full_update, out);
    out << "\n";
  }

  // member: specific_zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.specific_zones.size() == 0) {
      out << "specific_zones: []\n";
    } else {
      out << "specific_zones:\n";
      for (auto item : msg.specific_zones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateSafetyMap_Request & msg, bool use_flow_style = false)
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
  const safe_teleop_core::srv::UpdateSafetyMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::UpdateSafetyMap_Request & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::UpdateSafetyMap_Request>()
{
  return "safe_teleop_core::srv::UpdateSafetyMap_Request";
}

template<>
inline const char * name<safe_teleop_core::srv::UpdateSafetyMap_Request>()
{
  return "safe_teleop_core/srv/UpdateSafetyMap_Request";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::srv::UpdateSafetyMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace safe_teleop_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateSafetyMap_Response & msg,
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

  // member: zones_updated
  {
    out << "zones_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.zones_updated, out);
    out << ", ";
  }

  // member: update_duration
  {
    out << "update_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.update_duration, out);
    out << ", ";
  }

  // member: map_timestamp
  {
    out << "map_timestamp: ";
    to_flow_style_yaml(msg.map_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateSafetyMap_Response & msg,
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

  // member: zones_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zones_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.zones_updated, out);
    out << "\n";
  }

  // member: update_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.update_duration, out);
    out << "\n";
  }

  // member: map_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_timestamp:\n";
    to_block_style_yaml(msg.map_timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateSafetyMap_Response & msg, bool use_flow_style = false)
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
  const safe_teleop_core::srv::UpdateSafetyMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::UpdateSafetyMap_Response & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::UpdateSafetyMap_Response>()
{
  return "safe_teleop_core::srv::UpdateSafetyMap_Response";
}

template<>
inline const char * name<safe_teleop_core::srv::UpdateSafetyMap_Response>()
{
  return "safe_teleop_core/srv/UpdateSafetyMap_Response";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<safe_teleop_core::srv::UpdateSafetyMap_Response>
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
  const UpdateSafetyMap_Event & msg,
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
  const UpdateSafetyMap_Event & msg,
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

inline std::string to_yaml(const UpdateSafetyMap_Event & msg, bool use_flow_style = false)
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
  const safe_teleop_core::srv::UpdateSafetyMap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  safe_teleop_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use safe_teleop_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const safe_teleop_core::srv::UpdateSafetyMap_Event & msg)
{
  return safe_teleop_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<safe_teleop_core::srv::UpdateSafetyMap_Event>()
{
  return "safe_teleop_core::srv::UpdateSafetyMap_Event";
}

template<>
inline const char * name<safe_teleop_core::srv::UpdateSafetyMap_Event>()
{
  return "safe_teleop_core/srv/UpdateSafetyMap_Event";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Event>
  : std::integral_constant<bool, has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Request>::value && has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<safe_teleop_core::srv::UpdateSafetyMap_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<safe_teleop_core::srv::UpdateSafetyMap>()
{
  return "safe_teleop_core::srv::UpdateSafetyMap";
}

template<>
inline const char * name<safe_teleop_core::srv::UpdateSafetyMap>()
{
  return "safe_teleop_core/srv/UpdateSafetyMap";
}

template<>
struct has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap>
  : std::integral_constant<
    bool,
    has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap_Request>::value &&
    has_fixed_size<safe_teleop_core::srv::UpdateSafetyMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap>
  : std::integral_constant<
    bool,
    has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Request>::value &&
    has_bounded_size<safe_teleop_core::srv::UpdateSafetyMap_Response>::value
  >
{
};

template<>
struct is_service<safe_teleop_core::srv::UpdateSafetyMap>
  : std::true_type
{
};

template<>
struct is_service_request<safe_teleop_core::srv::UpdateSafetyMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<safe_teleop_core::srv::UpdateSafetyMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__TRAITS_HPP_
