// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:srv/UpdateSafetyMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/srv/update_safety_map.hpp"


#ifndef SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_HPP_
#define SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Request __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateSafetyMap_Request_
{
  using Type = UpdateSafetyMap_Request_<ContainerAllocator>;

  explicit UpdateSafetyMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_full_update = false;
    }
  }

  explicit UpdateSafetyMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_full_update = false;
    }
  }

  // field types and members
  using _force_full_update_type =
    bool;
  _force_full_update_type force_full_update;
  using _specific_zones_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _specific_zones_type specific_zones;

  // setters for named parameter idiom
  Type & set__force_full_update(
    const bool & _arg)
  {
    this->force_full_update = _arg;
    return *this;
  }
  Type & set__specific_zones(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->specific_zones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Request
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Request
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateSafetyMap_Request_ & other) const
  {
    if (this->force_full_update != other.force_full_update) {
      return false;
    }
    if (this->specific_zones != other.specific_zones) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateSafetyMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateSafetyMap_Request_

// alias to use template instance with default allocator
using UpdateSafetyMap_Request =
  safe_teleop_core::srv::UpdateSafetyMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace safe_teleop_core


// Include directives for member types
// Member 'map_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Response __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateSafetyMap_Response_
{
  using Type = UpdateSafetyMap_Response_<ContainerAllocator>;

  explicit UpdateSafetyMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->zones_updated = 0ul;
      this->update_duration = 0.0f;
    }
  }

  explicit UpdateSafetyMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    map_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->zones_updated = 0ul;
      this->update_duration = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _zones_updated_type =
    uint32_t;
  _zones_updated_type zones_updated;
  using _update_duration_type =
    float;
  _update_duration_type update_duration;
  using _map_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _map_timestamp_type map_timestamp;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__zones_updated(
    const uint32_t & _arg)
  {
    this->zones_updated = _arg;
    return *this;
  }
  Type & set__update_duration(
    const float & _arg)
  {
    this->update_duration = _arg;
    return *this;
  }
  Type & set__map_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->map_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Response
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Response
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateSafetyMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->zones_updated != other.zones_updated) {
      return false;
    }
    if (this->update_duration != other.update_duration) {
      return false;
    }
    if (this->map_timestamp != other.map_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateSafetyMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateSafetyMap_Response_

// alias to use template instance with default allocator
using UpdateSafetyMap_Response =
  safe_teleop_core::srv::UpdateSafetyMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace safe_teleop_core


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Event __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Event __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateSafetyMap_Event_
{
  using Type = UpdateSafetyMap_Event_<ContainerAllocator>;

  explicit UpdateSafetyMap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit UpdateSafetyMap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<safe_teleop_core::srv::UpdateSafetyMap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<safe_teleop_core::srv::UpdateSafetyMap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Event
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__srv__UpdateSafetyMap_Event
    std::shared_ptr<safe_teleop_core::srv::UpdateSafetyMap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateSafetyMap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateSafetyMap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateSafetyMap_Event_

// alias to use template instance with default allocator
using UpdateSafetyMap_Event =
  safe_teleop_core::srv::UpdateSafetyMap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace safe_teleop_core

namespace safe_teleop_core
{

namespace srv
{

struct UpdateSafetyMap
{
  using Request = safe_teleop_core::srv::UpdateSafetyMap_Request;
  using Response = safe_teleop_core::srv::UpdateSafetyMap_Response;
  using Event = safe_teleop_core::srv::UpdateSafetyMap_Event;
};

}  // namespace srv

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__SRV__DETAIL__UPDATE_SAFETY_MAP__STRUCT_HPP_
