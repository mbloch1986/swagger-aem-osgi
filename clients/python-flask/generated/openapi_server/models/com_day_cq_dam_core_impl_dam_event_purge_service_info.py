# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_impl_dam_event_purge_service_properties import ComDayCqDamCoreImplDamEventPurgeServiceProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplDamEventPurgeServiceInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreImplDamEventPurgeServiceProperties=None):  # noqa: E501
        """ComDayCqDamCoreImplDamEventPurgeServiceInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreImplDamEventPurgeServiceProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreImplDamEventPurgeServiceProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplDamEventPurgeServiceInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplDamEventPurgeServiceInfo of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreImplDamEventPurgeServiceInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :return: The pid of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :param pid: The pid of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :return: The title of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :param title: The title of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :return: The description of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :param description: The description of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreImplDamEventPurgeServiceProperties:
        """Gets the properties of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :return: The properties of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :rtype: ComDayCqDamCoreImplDamEventPurgeServiceProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreImplDamEventPurgeServiceProperties):
        """Sets the properties of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.


        :param properties: The properties of this ComDayCqDamCoreImplDamEventPurgeServiceInfo.
        :type properties: ComDayCqDamCoreImplDamEventPurgeServiceProperties
        """

        self._properties = properties
