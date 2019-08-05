# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_models_impl_model_adapter_factory_properties import OrgApacheSlingModelsImplModelAdapterFactoryProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingModelsImplModelAdapterFactoryInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingModelsImplModelAdapterFactoryProperties=None):  # noqa: E501
        """OrgApacheSlingModelsImplModelAdapterFactoryInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.  # noqa: E501
        :type properties: OrgApacheSlingModelsImplModelAdapterFactoryProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingModelsImplModelAdapterFactoryProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingModelsImplModelAdapterFactoryInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingModelsImplModelAdapterFactoryInfo of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.  # noqa: E501
        :rtype: OrgApacheSlingModelsImplModelAdapterFactoryInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :return: The pid of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :param pid: The pid of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :return: The title of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :param title: The title of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :return: The description of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :param description: The description of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingModelsImplModelAdapterFactoryProperties:
        """Gets the properties of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :return: The properties of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :rtype: OrgApacheSlingModelsImplModelAdapterFactoryProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingModelsImplModelAdapterFactoryProperties):
        """Sets the properties of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.


        :param properties: The properties of this OrgApacheSlingModelsImplModelAdapterFactoryInfo.
        :type properties: OrgApacheSlingModelsImplModelAdapterFactoryProperties
        """

        self._properties = properties