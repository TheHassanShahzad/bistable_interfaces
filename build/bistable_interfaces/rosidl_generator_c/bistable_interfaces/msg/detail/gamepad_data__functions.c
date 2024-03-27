// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice
#include "bistable_interfaces/msg/detail/gamepad_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bistable_interfaces__msg__GamepadData__init(bistable_interfaces__msg__GamepadData * msg)
{
  if (!msg) {
    return false;
  }
  // inclination
  // yaw_vel
  // eq_change
  // kp_change
  // ki_change
  // kd_change
  // tracking_toggle
  return true;
}

void
bistable_interfaces__msg__GamepadData__fini(bistable_interfaces__msg__GamepadData * msg)
{
  if (!msg) {
    return;
  }
  // inclination
  // yaw_vel
  // eq_change
  // kp_change
  // ki_change
  // kd_change
  // tracking_toggle
}

bool
bistable_interfaces__msg__GamepadData__are_equal(const bistable_interfaces__msg__GamepadData * lhs, const bistable_interfaces__msg__GamepadData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // inclination
  if (lhs->inclination != rhs->inclination) {
    return false;
  }
  // yaw_vel
  if (lhs->yaw_vel != rhs->yaw_vel) {
    return false;
  }
  // eq_change
  if (lhs->eq_change != rhs->eq_change) {
    return false;
  }
  // kp_change
  if (lhs->kp_change != rhs->kp_change) {
    return false;
  }
  // ki_change
  if (lhs->ki_change != rhs->ki_change) {
    return false;
  }
  // kd_change
  if (lhs->kd_change != rhs->kd_change) {
    return false;
  }
  // tracking_toggle
  if (lhs->tracking_toggle != rhs->tracking_toggle) {
    return false;
  }
  return true;
}

bool
bistable_interfaces__msg__GamepadData__copy(
  const bistable_interfaces__msg__GamepadData * input,
  bistable_interfaces__msg__GamepadData * output)
{
  if (!input || !output) {
    return false;
  }
  // inclination
  output->inclination = input->inclination;
  // yaw_vel
  output->yaw_vel = input->yaw_vel;
  // eq_change
  output->eq_change = input->eq_change;
  // kp_change
  output->kp_change = input->kp_change;
  // ki_change
  output->ki_change = input->ki_change;
  // kd_change
  output->kd_change = input->kd_change;
  // tracking_toggle
  output->tracking_toggle = input->tracking_toggle;
  return true;
}

bistable_interfaces__msg__GamepadData *
bistable_interfaces__msg__GamepadData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bistable_interfaces__msg__GamepadData * msg = (bistable_interfaces__msg__GamepadData *)allocator.allocate(sizeof(bistable_interfaces__msg__GamepadData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bistable_interfaces__msg__GamepadData));
  bool success = bistable_interfaces__msg__GamepadData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bistable_interfaces__msg__GamepadData__destroy(bistable_interfaces__msg__GamepadData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bistable_interfaces__msg__GamepadData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bistable_interfaces__msg__GamepadData__Sequence__init(bistable_interfaces__msg__GamepadData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bistable_interfaces__msg__GamepadData * data = NULL;

  if (size) {
    data = (bistable_interfaces__msg__GamepadData *)allocator.zero_allocate(size, sizeof(bistable_interfaces__msg__GamepadData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bistable_interfaces__msg__GamepadData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bistable_interfaces__msg__GamepadData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bistable_interfaces__msg__GamepadData__Sequence__fini(bistable_interfaces__msg__GamepadData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bistable_interfaces__msg__GamepadData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bistable_interfaces__msg__GamepadData__Sequence *
bistable_interfaces__msg__GamepadData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bistable_interfaces__msg__GamepadData__Sequence * array = (bistable_interfaces__msg__GamepadData__Sequence *)allocator.allocate(sizeof(bistable_interfaces__msg__GamepadData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bistable_interfaces__msg__GamepadData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bistable_interfaces__msg__GamepadData__Sequence__destroy(bistable_interfaces__msg__GamepadData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bistable_interfaces__msg__GamepadData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bistable_interfaces__msg__GamepadData__Sequence__are_equal(const bistable_interfaces__msg__GamepadData__Sequence * lhs, const bistable_interfaces__msg__GamepadData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bistable_interfaces__msg__GamepadData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bistable_interfaces__msg__GamepadData__Sequence__copy(
  const bistable_interfaces__msg__GamepadData__Sequence * input,
  bistable_interfaces__msg__GamepadData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bistable_interfaces__msg__GamepadData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bistable_interfaces__msg__GamepadData * data =
      (bistable_interfaces__msg__GamepadData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bistable_interfaces__msg__GamepadData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bistable_interfaces__msg__GamepadData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bistable_interfaces__msg__GamepadData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
