# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_distribution_trigger_impl_distribution_event_distribute_properties import OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties=None):  # noqa: E501
        """OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.  # noqa: E501
        :type properties: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.  # noqa: E501
        :rtype: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :return: The pid of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :param pid: The pid of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :return: The title of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :param title: The title of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :return: The description of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :param description: The description of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties:
        """Gets the properties of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :return: The properties of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :rtype: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties):
        """Sets the properties of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.


        :param properties: The properties of this OrgApacheSlingDistributionTriggerImplDistributionEventDistributeInfo.
        :type properties: OrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties
        """

        self._properties = properties