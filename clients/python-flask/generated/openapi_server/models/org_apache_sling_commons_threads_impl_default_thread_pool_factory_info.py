# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_commons_threads_impl_default_thread_pool_factory_properties import OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties=None):  # noqa: E501
        """OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.  # noqa: E501
        :type properties: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.  # noqa: E501
        :rtype: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :return: The pid of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :param pid: The pid of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :return: The title of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :param title: The title of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :return: The description of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :param description: The description of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties:
        """Gets the properties of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :return: The properties of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :rtype: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties):
        """Sets the properties of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.


        :param properties: The properties of this OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryInfo.
        :type properties: OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties
        """

        self._properties = properties
