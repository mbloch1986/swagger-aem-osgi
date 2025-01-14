# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_caconfig_impl_configuration_bindings_value_provider_properties import OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties=None):  # noqa: E501
        """OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.  # noqa: E501
        :type properties: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.  # noqa: E501
        :rtype: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :return: The pid of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :param pid: The pid of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :return: The title of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :param title: The title of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :return: The description of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :param description: The description of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties:
        """Gets the properties of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :return: The properties of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :rtype: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties):
        """Sets the properties of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.


        :param properties: The properties of this OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderInfo.
        :type properties: OrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties
        """

        self._properties = properties
