# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_impl_dam_change_event_listener_properties import ComDayCqDamCoreImplDamChangeEventListenerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplDamChangeEventListenerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreImplDamChangeEventListenerProperties=None):  # noqa: E501
        """ComDayCqDamCoreImplDamChangeEventListenerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreImplDamChangeEventListenerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreImplDamChangeEventListenerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreImplDamChangeEventListenerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreImplDamChangeEventListenerInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreImplDamChangeEventListenerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreImplDamChangeEventListenerProperties
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplDamChangeEventListenerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplDamChangeEventListenerInfo of this ComDayCqDamCoreImplDamChangeEventListenerInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreImplDamChangeEventListenerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :return: The pid of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :param pid: The pid of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :return: The title of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :param title: The title of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :return: The description of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :param description: The description of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreImplDamChangeEventListenerProperties:
        """Gets the properties of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :return: The properties of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :rtype: ComDayCqDamCoreImplDamChangeEventListenerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreImplDamChangeEventListenerProperties):
        """Sets the properties of this ComDayCqDamCoreImplDamChangeEventListenerInfo.


        :param properties: The properties of this ComDayCqDamCoreImplDamChangeEventListenerInfo.
        :type properties: ComDayCqDamCoreImplDamChangeEventListenerProperties
        """

        self._properties = properties
