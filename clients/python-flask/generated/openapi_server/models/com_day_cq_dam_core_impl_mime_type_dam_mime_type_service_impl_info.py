# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_impl_mime_type_dam_mime_type_service_impl_properties import ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties=None):  # noqa: E501
        """ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :return: The pid of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :param pid: The pid of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :return: The title of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :param title: The title of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :return: The description of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :param description: The description of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties:
        """Gets the properties of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :return: The properties of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :rtype: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties):
        """Sets the properties of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.


        :param properties: The properties of this ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplInfo.
        :type properties: ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties
        """

        self._properties = properties
