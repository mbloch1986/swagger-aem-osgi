# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_jackrabbit_oak_security_authentication_authentication_config_properties import OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties=None):  # noqa: E501
        """OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.  # noqa: E501
        :type properties: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :return: The pid of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :param pid: The pid of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :return: The title of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :param title: The title of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :return: The description of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :param description: The description of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties:
        """Gets the properties of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :return: The properties of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :rtype: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties):
        """Sets the properties of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.


        :param properties: The properties of this OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo.
        :type properties: OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
        """

        self._properties = properties
