# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_felix_jaas_configuration_factory_properties import OrgApacheFelixJaasConfigurationFactoryProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheFelixJaasConfigurationFactoryInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheFelixJaasConfigurationFactoryProperties=None):  # noqa: E501
        """OrgApacheFelixJaasConfigurationFactoryInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheFelixJaasConfigurationFactoryInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheFelixJaasConfigurationFactoryInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheFelixJaasConfigurationFactoryInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheFelixJaasConfigurationFactoryInfo.  # noqa: E501
        :type properties: OrgApacheFelixJaasConfigurationFactoryProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheFelixJaasConfigurationFactoryProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheFelixJaasConfigurationFactoryInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheFelixJaasConfigurationFactoryInfo of this OrgApacheFelixJaasConfigurationFactoryInfo.  # noqa: E501
        :rtype: OrgApacheFelixJaasConfigurationFactoryInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :return: The pid of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :param pid: The pid of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :return: The title of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :param title: The title of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :return: The description of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :param description: The description of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheFelixJaasConfigurationFactoryProperties:
        """Gets the properties of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :return: The properties of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :rtype: OrgApacheFelixJaasConfigurationFactoryProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheFelixJaasConfigurationFactoryProperties):
        """Sets the properties of this OrgApacheFelixJaasConfigurationFactoryInfo.


        :param properties: The properties of this OrgApacheFelixJaasConfigurationFactoryInfo.
        :type properties: OrgApacheFelixJaasConfigurationFactoryProperties
        """

        self._properties = properties
