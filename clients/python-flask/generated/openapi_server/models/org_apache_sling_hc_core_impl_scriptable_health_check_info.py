# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_hc_core_impl_scriptable_health_check_properties import OrgApacheSlingHcCoreImplScriptableHealthCheckProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingHcCoreImplScriptableHealthCheckInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingHcCoreImplScriptableHealthCheckProperties=None):  # noqa: E501
        """OrgApacheSlingHcCoreImplScriptableHealthCheckInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.  # noqa: E501
        :type properties: OrgApacheSlingHcCoreImplScriptableHealthCheckProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingHcCoreImplScriptableHealthCheckProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingHcCoreImplScriptableHealthCheckInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingHcCoreImplScriptableHealthCheckInfo of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.  # noqa: E501
        :rtype: OrgApacheSlingHcCoreImplScriptableHealthCheckInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :return: The pid of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :param pid: The pid of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :return: The title of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :param title: The title of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :return: The description of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :param description: The description of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingHcCoreImplScriptableHealthCheckProperties:
        """Gets the properties of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :return: The properties of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :rtype: OrgApacheSlingHcCoreImplScriptableHealthCheckProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingHcCoreImplScriptableHealthCheckProperties):
        """Sets the properties of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.


        :param properties: The properties of this OrgApacheSlingHcCoreImplScriptableHealthCheckInfo.
        :type properties: OrgApacheSlingHcCoreImplScriptableHealthCheckProperties
        """

        self._properties = properties
