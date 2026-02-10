// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/object_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__msg__ObjectStatus __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__msg__ObjectStatus __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectStatus_
{
  using Type = ObjectStatus_<ContainerAllocator>;

  explicit ObjectStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->object_type = "";
      this->motion_state = 0;
      this->is_activated = false;
      this->detection_confidence = 0.0f;
    }
  }

  explicit ObjectStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object_id(_alloc),
    object_type(_alloc),
    pose(_alloc, _init),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->object_type = "";
      this->motion_state = 0;
      this->is_activated = false;
      this->detection_confidence = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _object_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type_type object_type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _bounding_box_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _motion_state_type =
    uint8_t;
  _motion_state_type motion_state;
  using _is_activated_type =
    bool;
  _is_activated_type is_activated;
  using _detection_confidence_type =
    float;
  _detection_confidence_type detection_confidence;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__object_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__motion_state(
    const uint8_t & _arg)
  {
    this->motion_state = _arg;
    return *this;
  }
  Type & set__is_activated(
    const bool & _arg)
  {
    this->is_activated = _arg;
    return *this;
  }
  Type & set__detection_confidence(
    const float & _arg)
  {
    this->detection_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATIC =
    0u;
  static constexpr uint8_t DYNAMIC =
    1u;
  static constexpr uint8_t STATIC_TO_DYNAMIC =
    2u;

  // pointer types
  using RawPtr =
    safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__msg__ObjectStatus
    std::shared_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__msg__ObjectStatus
    std::shared_ptr<safe_teleop_core::msg::ObjectStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->motion_state != other.motion_state) {
      return false;
    }
    if (this->is_activated != other.is_activated) {
      return false;
    }
    if (this->detection_confidence != other.detection_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectStatus_

// alias to use template instance with default allocator
using ObjectStatus =
  safe_teleop_core::msg::ObjectStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectStatus_<ContainerAllocator>::STATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectStatus_<ContainerAllocator>::DYNAMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectStatus_<ContainerAllocator>::STATIC_TO_DYNAMIC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_
