// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "safe_teleop_core/msg/detail/safety_status__struct.h"
#include "safe_teleop_core/msg/detail/safety_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool safe_teleop_core__msg__safety_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("safe_teleop_core.msg._safety_status.SafetyStatus", full_classname_dest, 48) == 0);
  }
  safe_teleop_core__msg__SafetyStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // safety_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // master_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->master_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // esdf_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "esdf_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->esdf_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pointcloud_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "pointcloud_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pointcloud_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // esdf_age_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "esdf_age_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->esdf_age_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pointcloud_age_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "pointcloud_age_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pointcloud_age_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_collision_check_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_collision_check_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_collision_check_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // active_collision_severity
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_collision_severity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_collision_severity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // min_distance_to_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_distance_to_obstacle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_distance_to_obstacle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avg_collision_check_latency_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "avg_collision_check_latency_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avg_collision_check_latency_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_checks_per_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_checks_per_sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collision_checks_per_sec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity_limit_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_limit_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->velocity_limit_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_safe_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_safe_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_safe_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * safe_teleop_core__msg__safety_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("safe_teleop_core.msg._safety_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  safe_teleop_core__msg__SafetyStatus * ros_message = (safe_teleop_core__msg__SafetyStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->master_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esdf_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->esdf_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esdf_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pointcloud_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pointcloud_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pointcloud_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esdf_age_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->esdf_age_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esdf_age_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pointcloud_age_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pointcloud_age_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pointcloud_age_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_collision_check_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_collision_check_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_collision_check_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_collision_severity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_collision_severity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_collision_severity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_distance_to_obstacle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_distance_to_obstacle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_distance_to_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avg_collision_check_latency_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avg_collision_check_latency_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avg_collision_check_latency_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_checks_per_sec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->collision_checks_per_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_checks_per_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_limit_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->velocity_limit_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_limit_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_safe_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_safe_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_safe_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
