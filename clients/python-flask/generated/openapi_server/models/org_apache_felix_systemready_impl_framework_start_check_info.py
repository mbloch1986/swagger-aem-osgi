# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_felix_systemready_impl_framework_start_check_properties import OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties=None):  # noqa: E501
        """OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.  # noqa: E501
        :type properties: OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheFelixSystemreadyImplFrameworkStartCheckInfo of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.  # noqa: E501
        :rtype: OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :return: The pid of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :param pid: The pid of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :return: The title of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :param title: The title of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :return: The description of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :param description: The description of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties:
        """Gets the properties of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :return: The properties of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :rtype: OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties):
        """Sets the properties of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.


        :param properties: The properties of this OrgApacheFelixSystemreadyImplFrameworkStartCheckInfo.
        :type properties: OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties
        """

        self._properties = properties