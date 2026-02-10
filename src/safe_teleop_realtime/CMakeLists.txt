cmake_minimum_required(VERSION 3.8)
project(safe_teleop_realtime)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

# C++17 required
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(nvblox_msgs REQUIRED)
find_package(safe_teleop_core REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(PCL REQUIRED COMPONENTS common filters)
find_package(pcl_conversions REQUIRED)

# Include directories
include_directories(
  include
  ${EIGEN3_INCLUDE_DIR}
  ${PCL_INCLUDE_DIRS}
)

# === collision_detector_node ===
add_executable(collision_detector_node
  src/collision_detector_node.cpp
)

ament_target_dependencies(collision_detector_node
  rclcpp
  std_msgs
  sensor_msgs
  geometry_msgs
  tf2_ros
  tf2_geometry_msgs
  nvblox_msgs
  safe_teleop_core
  pcl_conversions
)

target_link_libraries(collision_detector_node
  Eigen3::Eigen
  ${PCL_LIBRARIES}
)

# === safety_monitor_node ===
add_executable(safety_monitor_node
  src/safety_monitor_node.cpp
)

ament_target_dependencies(safety_monitor_node
  rclcpp
  safe_teleop_core
)

# Install executables
install(TARGETS
  collision_detector_node
  safety_monitor_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(
  DIRECTORY include/
  DESTINATION include
)

# Install launch files
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Install config files
install(
  DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
