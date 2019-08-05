# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_distribution_transport_impl_user_credentials_distributi_properties import OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties=None):  # noqa: E501
        """OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.  # noqa: E501
        :type properties: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.  # noqa: E501
        :rtype: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :return: The pid of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :param pid: The pid of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :return: The title of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :param title: The title of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :return: The description of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :param description: The description of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties:
        """Gets the properties of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :return: The properties of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :rtype: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties):
        """Sets the properties of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.


        :param properties: The properties of this OrgApacheSlingDistributionTransportImplUserCredentialsDistributiInfo.
        :type properties: OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties
        """

        self._properties = properties