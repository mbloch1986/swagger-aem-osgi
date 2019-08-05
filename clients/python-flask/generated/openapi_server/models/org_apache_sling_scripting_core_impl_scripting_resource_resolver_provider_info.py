# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_scripting_core_impl_scripting_resource_resolver_provider_properties import OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties=None):  # noqa: E501
        """OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.  # noqa: E501
        :type properties: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.  # noqa: E501
        :rtype: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :return: The pid of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :param pid: The pid of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :return: The title of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :param title: The title of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :return: The description of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :param description: The description of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties:
        """Gets the properties of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :return: The properties of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :rtype: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties):
        """Sets the properties of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.


        :param properties: The properties of this OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderInfo.
        :type properties: OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties
        """

        self._properties = properties