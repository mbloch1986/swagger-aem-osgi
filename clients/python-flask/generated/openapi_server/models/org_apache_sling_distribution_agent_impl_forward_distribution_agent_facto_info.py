# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_distribution_agent_impl_forward_distribution_agent_facto_properties import OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties=None):  # noqa: E501
        """OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.  # noqa: E501
        :type properties: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.  # noqa: E501
        :rtype: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :return: The pid of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :param pid: The pid of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :return: The title of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :param title: The title of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :return: The description of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :param description: The description of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties:
        """Gets the properties of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :return: The properties of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :rtype: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties):
        """Sets the properties of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.


        :param properties: The properties of this OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoInfo.
        :type properties: OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties
        """

        self._properties = properties
