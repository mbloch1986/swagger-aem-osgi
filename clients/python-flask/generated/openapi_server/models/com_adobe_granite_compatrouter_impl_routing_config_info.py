# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_compatrouter_impl_routing_config_properties import ComAdobeGraniteCompatrouterImplRoutingConfigProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteCompatrouterImplRoutingConfigInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteCompatrouterImplRoutingConfigProperties=None):  # noqa: E501
        """ComAdobeGraniteCompatrouterImplRoutingConfigInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.  # noqa: E501
        :type properties: ComAdobeGraniteCompatrouterImplRoutingConfigProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteCompatrouterImplRoutingConfigProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteCompatrouterImplRoutingConfigInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteCompatrouterImplRoutingConfigInfo of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.  # noqa: E501
        :rtype: ComAdobeGraniteCompatrouterImplRoutingConfigInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :return: The pid of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :param pid: The pid of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :return: The title of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :param title: The title of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :return: The description of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :param description: The description of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteCompatrouterImplRoutingConfigProperties:
        """Gets the properties of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :return: The properties of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :rtype: ComAdobeGraniteCompatrouterImplRoutingConfigProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteCompatrouterImplRoutingConfigProperties):
        """Sets the properties of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.


        :param properties: The properties of this ComAdobeGraniteCompatrouterImplRoutingConfigInfo.
        :type properties: ComAdobeGraniteCompatrouterImplRoutingConfigProperties
        """

        self._properties = properties
