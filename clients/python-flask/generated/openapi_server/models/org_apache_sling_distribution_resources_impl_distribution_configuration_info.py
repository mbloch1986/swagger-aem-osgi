# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_distribution_resources_impl_distribution_configuration_properties import OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties=None):  # noqa: E501
        """OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.  # noqa: E501
        :type properties: OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionResourcesImplDistributionConfigurationInfo of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.  # noqa: E501
        :rtype: OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :return: The pid of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :param pid: The pid of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :return: The title of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :param title: The title of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :return: The description of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :param description: The description of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties:
        """Gets the properties of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :return: The properties of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :rtype: OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties):
        """Sets the properties of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.


        :param properties: The properties of this OrgApacheSlingDistributionResourcesImplDistributionConfigurationInfo.
        :type properties: OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties
        """

        self._properties = properties
