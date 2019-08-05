# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_resourcestatus_impl_status_resource_provider_impl_properties import ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties=None):  # noqa: E501
        """ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.  # noqa: E501
        :type properties: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.  # noqa: E501
        :rtype: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :return: The pid of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :param pid: The pid of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :return: The title of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :param title: The title of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :return: The description of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :param description: The description of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties:
        """Gets the properties of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :return: The properties of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :rtype: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties):
        """Sets the properties of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.


        :param properties: The properties of this ComAdobeGraniteResourcestatusImplStatusResourceProviderImplInfo.
        :type properties: ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties
        """

        self._properties = properties