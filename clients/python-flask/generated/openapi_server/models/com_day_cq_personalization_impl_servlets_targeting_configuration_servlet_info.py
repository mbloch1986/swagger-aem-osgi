# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_personalization_impl_servlets_targeting_configuration_servlet_properties import ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties=None):  # noqa: E501
        """ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.  # noqa: E501
        :type properties: ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqPersonalizationImplServletsTargetingConfigurationServletInfo of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.  # noqa: E501
        :rtype: ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :return: The pid of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :param pid: The pid of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :return: The title of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :param title: The title of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :return: The description of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :param description: The description of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties:
        """Gets the properties of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :return: The properties of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :rtype: ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties):
        """Sets the properties of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.


        :param properties: The properties of this ComDayCqPersonalizationImplServletsTargetingConfigurationServletInfo.
        :type properties: ComDayCqPersonalizationImplServletsTargetingConfigurationServletProperties
        """

        self._properties = properties
