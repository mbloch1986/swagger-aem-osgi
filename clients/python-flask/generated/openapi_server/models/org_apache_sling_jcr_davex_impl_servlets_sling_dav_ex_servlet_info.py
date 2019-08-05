# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_jcr_davex_impl_servlets_sling_dav_ex_servlet_properties import OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties=None):  # noqa: E501
        """OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.  # noqa: E501
        :type properties: OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingJcrDavexImplServletsSlingDavExServletInfo of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.  # noqa: E501
        :rtype: OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :return: The pid of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :param pid: The pid of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :return: The title of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :param title: The title of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :return: The description of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :param description: The description of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties:
        """Gets the properties of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :return: The properties of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :rtype: OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties):
        """Sets the properties of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.


        :param properties: The properties of this OrgApacheSlingJcrDavexImplServletsSlingDavExServletInfo.
        :type properties: OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
        """

        self._properties = properties