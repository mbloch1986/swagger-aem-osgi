# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_jcr_jackrabbit_server_jndi_registration_support_properties import OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties=None):  # noqa: E501
        """OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.  # noqa: E501
        :type properties: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.  # noqa: E501
        :rtype: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :return: The pid of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :param pid: The pid of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :return: The title of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :param title: The title of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :return: The description of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :param description: The description of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties:
        """Gets the properties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :return: The properties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :rtype: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties):
        """Sets the properties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.


        :param properties: The properties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportInfo.
        :type properties: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties
        """

        self._properties = properties