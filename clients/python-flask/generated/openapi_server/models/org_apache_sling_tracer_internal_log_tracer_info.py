# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_tracer_internal_log_tracer_properties import OrgApacheSlingTracerInternalLogTracerProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingTracerInternalLogTracerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingTracerInternalLogTracerProperties=None):  # noqa: E501
        """OrgApacheSlingTracerInternalLogTracerInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingTracerInternalLogTracerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingTracerInternalLogTracerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingTracerInternalLogTracerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingTracerInternalLogTracerInfo.  # noqa: E501
        :type properties: OrgApacheSlingTracerInternalLogTracerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingTracerInternalLogTracerProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingTracerInternalLogTracerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingTracerInternalLogTracerInfo of this OrgApacheSlingTracerInternalLogTracerInfo.  # noqa: E501
        :rtype: OrgApacheSlingTracerInternalLogTracerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingTracerInternalLogTracerInfo.


        :return: The pid of this OrgApacheSlingTracerInternalLogTracerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingTracerInternalLogTracerInfo.


        :param pid: The pid of this OrgApacheSlingTracerInternalLogTracerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingTracerInternalLogTracerInfo.


        :return: The title of this OrgApacheSlingTracerInternalLogTracerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingTracerInternalLogTracerInfo.


        :param title: The title of this OrgApacheSlingTracerInternalLogTracerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingTracerInternalLogTracerInfo.


        :return: The description of this OrgApacheSlingTracerInternalLogTracerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingTracerInternalLogTracerInfo.


        :param description: The description of this OrgApacheSlingTracerInternalLogTracerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingTracerInternalLogTracerProperties:
        """Gets the properties of this OrgApacheSlingTracerInternalLogTracerInfo.


        :return: The properties of this OrgApacheSlingTracerInternalLogTracerInfo.
        :rtype: OrgApacheSlingTracerInternalLogTracerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingTracerInternalLogTracerProperties):
        """Sets the properties of this OrgApacheSlingTracerInternalLogTracerInfo.


        :param properties: The properties of this OrgApacheSlingTracerInternalLogTracerInfo.
        :type properties: OrgApacheSlingTracerInternalLogTracerProperties
        """

        self._properties = properties
