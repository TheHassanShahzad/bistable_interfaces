// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bistable_interfaces:msg/TrackingData.idl
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
#include "bistable_interfaces/msg/detail/tracking_data__struct.h"
#include "bistable_interfaces/msg/detail/tracking_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bistable_interfaces__msg__tracking_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("bistable_interfaces.msg._tracking_data.TrackingData", full_classname_dest, 51) == 0);
  }
  bistable_interfaces__msg__TrackingData * ros_message = _ros_message;
  {  // inclination
    PyObject * field = PyObject_GetAttrString(_pymsg, "inclination");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inclination = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bistable_interfaces__msg__tracking_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackingData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bistable_interfaces.msg._tracking_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackingData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bistable_interfaces__msg__TrackingData * ros_message = (bistable_interfaces__msg__TrackingData *)raw_ros_message;
  {  // inclination
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inclination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inclination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
