# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_rest_impl_api_endpoint_resource_provider_factory_impl_properties import ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties=None):  # noqa: E501
        """ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.  # noqa: E501
        :type properties: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.  # noqa: E501
        :rtype: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :return: The pid of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :param pid: The pid of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :return: The title of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :param title: The title of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :return: The description of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :param description: The description of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties:
        """Gets the properties of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :return: The properties of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :rtype: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties):
        """Sets the properties of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.


        :param properties: The properties of this ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplInfo.
        :type properties: ComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties
        """

        self._properties = properties
