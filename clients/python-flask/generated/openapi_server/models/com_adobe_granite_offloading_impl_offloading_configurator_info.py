# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_offloading_impl_offloading_configurator_properties import ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties=None):  # noqa: E501
        """ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.  # noqa: E501
        :type properties: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteOffloadingImplOffloadingConfiguratorInfo of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.  # noqa: E501
        :rtype: ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :return: The pid of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :param pid: The pid of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :return: The title of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :param title: The title of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :return: The description of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :param description: The description of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties:
        """Gets the properties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :return: The properties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :rtype: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties):
        """Sets the properties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.


        :param properties: The properties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorInfo.
        :type properties: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties
        """

        self._properties = properties