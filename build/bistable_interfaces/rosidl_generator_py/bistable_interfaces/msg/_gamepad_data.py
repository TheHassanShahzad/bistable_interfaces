# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bistable_interfaces:msg/GamepadData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GamepadData(type):
    """Metaclass of message 'GamepadData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('bistable_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bistable_interfaces.msg.GamepadData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gamepad_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gamepad_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gamepad_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gamepad_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gamepad_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GamepadData(metaclass=Metaclass_GamepadData):
    """Message class 'GamepadData'."""

    __slots__ = [
        '_inclination',
        '_yaw_vel',
        '_eq_change',
        '_kp_change',
        '_ki_change',
        '_kd_change',
        '_tracking_toggle',
    ]

    _fields_and_field_types = {
        'inclination': 'float',
        'yaw_vel': 'float',
        'eq_change': 'float',
        'kp_change': 'float',
        'ki_change': 'float',
        'kd_change': 'float',
        'tracking_toggle': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.inclination = kwargs.get('inclination', float())
        self.yaw_vel = kwargs.get('yaw_vel', float())
        self.eq_change = kwargs.get('eq_change', float())
        self.kp_change = kwargs.get('kp_change', float())
        self.ki_change = kwargs.get('ki_change', float())
        self.kd_change = kwargs.get('kd_change', float())
        self.tracking_toggle = kwargs.get('tracking_toggle', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.inclination != other.inclination:
            return False
        if self.yaw_vel != other.yaw_vel:
            return False
        if self.eq_change != other.eq_change:
            return False
        if self.kp_change != other.kp_change:
            return False
        if self.ki_change != other.ki_change:
            return False
        if self.kd_change != other.kd_change:
            return False
        if self.tracking_toggle != other.tracking_toggle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def inclination(self):
        """Message field 'inclination'."""
        return self._inclination

    @inclination.setter
    def inclination(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inclination' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'inclination' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._inclination = value

    @builtins.property
    def yaw_vel(self):
        """Message field 'yaw_vel'."""
        return self._yaw_vel

    @yaw_vel.setter
    def yaw_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_vel = value

    @builtins.property
    def eq_change(self):
        """Message field 'eq_change'."""
        return self._eq_change

    @eq_change.setter
    def eq_change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eq_change' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eq_change' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eq_change = value

    @builtins.property
    def kp_change(self):
        """Message field 'kp_change'."""
        return self._kp_change

    @kp_change.setter
    def kp_change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp_change' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kp_change' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kp_change = value

    @builtins.property
    def ki_change(self):
        """Message field 'ki_change'."""
        return self._ki_change

    @ki_change.setter
    def ki_change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ki_change' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ki_change' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ki_change = value

    @builtins.property
    def kd_change(self):
        """Message field 'kd_change'."""
        return self._kd_change

    @kd_change.setter
    def kd_change(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd_change' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kd_change' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kd_change = value

    @builtins.property
    def tracking_toggle(self):
        """Message field 'tracking_toggle'."""
        return self._tracking_toggle

    @tracking_toggle.setter
    def tracking_toggle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tracking_toggle' field must be of type 'bool'"
        self._tracking_toggle = value
