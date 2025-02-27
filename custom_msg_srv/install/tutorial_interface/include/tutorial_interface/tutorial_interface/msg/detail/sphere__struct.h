// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interface:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_
#define TUTORIAL_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package tutorial_interface.
typedef struct tutorial_interface__msg__Sphere
{
  geometry_msgs__msg__Point center;
  double radius;
} tutorial_interface__msg__Sphere;

// Struct for a sequence of tutorial_interface__msg__Sphere.
typedef struct tutorial_interface__msg__Sphere__Sequence
{
  tutorial_interface__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interface__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_
