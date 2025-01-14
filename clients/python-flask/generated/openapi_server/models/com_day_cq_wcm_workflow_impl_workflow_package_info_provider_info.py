# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_workflow_impl_workflow_package_info_provider_properties import ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties=None):  # noqa: E501
        """ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.  # noqa: E501
        :type properties: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.  # noqa: E501
        :rtype: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :return: The pid of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :param pid: The pid of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :return: The title of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :param title: The title of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :return: The description of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :param description: The description of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties:
        """Gets the properties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :return: The properties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :rtype: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties):
        """Sets the properties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.


        :param properties: The properties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderInfo.
        :type properties: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
        """

        self._properties = properties
