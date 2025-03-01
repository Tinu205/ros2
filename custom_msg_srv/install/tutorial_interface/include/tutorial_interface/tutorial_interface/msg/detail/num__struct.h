// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_
#define TUTORIAL_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package tutorial_interface.
typedef struct tutorial_interface__msg__Num
{
  int64_t num;
} tutorial_interface__msg__Num;

// Struct for a sequence of tutorial_interface__msg__Num.
typedef struct tutorial_interface__msg__Num__Sequence
{
  tutorial_interface__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interface__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_
