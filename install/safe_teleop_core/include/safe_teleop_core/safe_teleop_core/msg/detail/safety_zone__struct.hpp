// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:msg/SafetyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_zone.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__msg__SafetyZone __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__msg__SafetyZone __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyZone_
{
  using Type = SafetyZone_<ContainerAllocator>;

  explicit SafetyZone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    center(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zone_id = "";
      this->zone_name = "";
      this->safety_margin = 0.0f;
      this->is_active = false;
      this->priority = 0;
      this->is_dynamic = false;
      this->velocity_magnitude = 0.0f;
    }
  }

  explicit SafetyZone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    zone_id(_alloc),
    zone_name(_alloc),
    center(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zone_id = "";
      this->zone_name = "";
      this->safety_margin = 0.0f;
      this->is_active = false;
      this->priority = 0;
      this->is_dynamic = false;
      this->velocity_magnitude = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _zone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _zone_id_type zone_id;
  using _zone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _zone_name_type zone_name;
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _safety_margin_type =
    float;
  _safety_margin_type safety_margin;
  using _is_active_type =
    bool;
  _is_active_type is_active;
  using _priority_type =
    uint8_t;
  _priority_type priority;
  using _is_dynamic_type =
    bool;
  _is_dynamic_type is_dynamic;
  using _velocity_magnitude_type =
    float;
  _velocity_magnitude_type velocity_magnitude;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__zone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->zone_id = _arg;
    return *this;
  }
  Type & set__zone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->zone_name = _arg;
    return *this;
  }
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__safety_margin(
    const float & _arg)
  {
    this->safety_margin = _arg;
    return *this;
  }
  Type & set__is_active(
    const bool & _arg)
  {
    this->is_active = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__is_dynamic(
    const bool & _arg)
  {
    this->is_dynamic = _arg;
    return *this;
  }
  Type & set__velocity_magnitude(
    const float & _arg)
  {
    this->velocity_magnitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    safe_teleop_core::msg::SafetyZone_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::msg::SafetyZone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::SafetyZone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::SafetyZone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__msg__SafetyZone
    std::shared_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__msg__SafetyZone
    std::shared_ptr<safe_teleop_core::msg::SafetyZone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyZone_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->zone_id != other.zone_id) {
      return false;
    }
    if (this->zone_name != other.zone_name) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->safety_margin != other.safety_margin) {
      return false;
    }
    if (this->is_active != other.is_active) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->is_dynamic != other.is_dynamic) {
      return false;
    }
    if (this->velocity_magnitude != other.velocity_magnitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyZone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyZone_

// alias to use template instance with default allocator
using SafetyZone =
  safe_teleop_core::msg::SafetyZone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_ZONE__STRUCT_HPP_
