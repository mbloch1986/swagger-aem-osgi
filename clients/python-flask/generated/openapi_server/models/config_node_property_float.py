# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class ConfigNodePropertyFloat(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: str=None, optional: bool=None, is_set: bool=None, type: int=None, value: float=None, description: str=None):  # noqa: E501
        """ConfigNodePropertyFloat - a model defined in OpenAPI

        :param name: The name of this ConfigNodePropertyFloat.  # noqa: E501
        :type name: str
        :param optional: The optional of this ConfigNodePropertyFloat.  # noqa: E501
        :type optional: bool
        :param is_set: The is_set of this ConfigNodePropertyFloat.  # noqa: E501
        :type is_set: bool
        :param type: The type of this ConfigNodePropertyFloat.  # noqa: E501
        :type type: int
        :param value: The value of this ConfigNodePropertyFloat.  # noqa: E501
        :type value: float
        :param description: The description of this ConfigNodePropertyFloat.  # noqa: E501
        :type description: str
        """
        self.openapi_types = {
            'name': str,
            'optional': bool,
            'is_set': bool,
            'type': int,
            'value': float,
            'description': str
        }

        self.attribute_map = {
            'name': 'name',
            'optional': 'optional',
            'is_set': 'is_set',
            'type': 'type',
            'value': 'value',
            'description': 'description'
        }

        self._name = name
        self._optional = optional
        self._is_set = is_set
        self._type = type
        self._value = value
        self._description = description

    @classmethod
    def from_dict(cls, dikt) -> 'ConfigNodePropertyFloat':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The configNodePropertyFloat of this ConfigNodePropertyFloat.  # noqa: E501
        :rtype: ConfigNodePropertyFloat
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> str:
        """Gets the name of this ConfigNodePropertyFloat.

        property name  # noqa: E501

        :return: The name of this ConfigNodePropertyFloat.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """Sets the name of this ConfigNodePropertyFloat.

        property name  # noqa: E501

        :param name: The name of this ConfigNodePropertyFloat.
        :type name: str
        """

        self._name = name

    @property
    def optional(self) -> bool:
        """Gets the optional of this ConfigNodePropertyFloat.

        True if optional  # noqa: E501

        :return: The optional of this ConfigNodePropertyFloat.
        :rtype: bool
        """
        return self._optional

    @optional.setter
    def optional(self, optional: bool):
        """Sets the optional of this ConfigNodePropertyFloat.

        True if optional  # noqa: E501

        :param optional: The optional of this ConfigNodePropertyFloat.
        :type optional: bool
        """

        self._optional = optional

    @property
    def is_set(self) -> bool:
        """Gets the is_set of this ConfigNodePropertyFloat.

        True if property is set  # noqa: E501

        :return: The is_set of this ConfigNodePropertyFloat.
        :rtype: bool
        """
        return self._is_set

    @is_set.setter
    def is_set(self, is_set: bool):
        """Sets the is_set of this ConfigNodePropertyFloat.

        True if property is set  # noqa: E501

        :param is_set: The is_set of this ConfigNodePropertyFloat.
        :type is_set: bool
        """

        self._is_set = is_set

    @property
    def type(self) -> int:
        """Gets the type of this ConfigNodePropertyFloat.

        Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)  # noqa: E501

        :return: The type of this ConfigNodePropertyFloat.
        :rtype: int
        """
        return self._type

    @type.setter
    def type(self, type: int):
        """Sets the type of this ConfigNodePropertyFloat.

        Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)  # noqa: E501

        :param type: The type of this ConfigNodePropertyFloat.
        :type type: int
        """

        self._type = type

    @property
    def value(self) -> float:
        """Gets the value of this ConfigNodePropertyFloat.

        Property value  # noqa: E501

        :return: The value of this ConfigNodePropertyFloat.
        :rtype: float
        """
        return self._value

    @value.setter
    def value(self, value: float):
        """Sets the value of this ConfigNodePropertyFloat.

        Property value  # noqa: E501

        :param value: The value of this ConfigNodePropertyFloat.
        :type value: float
        """

        self._value = value

    @property
    def description(self) -> str:
        """Gets the description of this ConfigNodePropertyFloat.

        Property description  # noqa: E501

        :return: The description of this ConfigNodePropertyFloat.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ConfigNodePropertyFloat.

        Property description  # noqa: E501

        :param description: The description of this ConfigNodePropertyFloat.
        :type description: str
        """

        self._description = description
