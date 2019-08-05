# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_jcr_resource_internal_jcr_system_user_validator_properties import OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties=None):  # noqa: E501
        """OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.  # noqa: E501
        :type properties: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.  # noqa: E501
        :rtype: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :return: The pid of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :param pid: The pid of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :return: The title of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :param title: The title of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :return: The description of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :param description: The description of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties:
        """Gets the properties of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :return: The properties of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :rtype: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties):
        """Sets the properties of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.


        :param properties: The properties of this OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorInfo.
        :type properties: OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties
        """

        self._properties = properties