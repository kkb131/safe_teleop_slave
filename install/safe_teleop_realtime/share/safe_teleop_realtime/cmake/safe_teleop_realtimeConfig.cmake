# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_safe_teleop_realtime_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED safe_teleop_realtime_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(safe_teleop_realtime_FOUND FALSE)
  elseif(NOT safe_teleop_realtime_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(safe_teleop_realtime_FOUND FALSE)
  endif()
  return()
endif()
set(_safe_teleop_realtime_CONFIG_INCLUDED TRUE)

# output package information
if(NOT safe_teleop_realtime_FIND_QUIETLY)
  message(STATUS "Found safe_teleop_realtime: 0.1.0 (${safe_teleop_realtime_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'safe_teleop_realtime' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT safe_teleop_realtime_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(safe_teleop_realtime_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${safe_teleop_realtime_DIR}/${_extra}")
endforeach()
