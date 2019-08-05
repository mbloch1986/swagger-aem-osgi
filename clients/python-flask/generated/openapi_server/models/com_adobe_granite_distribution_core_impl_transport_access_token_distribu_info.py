# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_distribution_core_impl_transport_access_token_distribu_properties import ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties=None):  # noqa: E501
        """ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.  # noqa: E501
        :type properties: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.  # noqa: E501
        :rtype: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :return: The pid of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :param pid: The pid of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :return: The title of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :param title: The title of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :return: The description of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :param description: The description of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties:
        """Gets the properties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :return: The properties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :rtype: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties):
        """Sets the properties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.


        :param properties: The properties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuInfo.
        :type properties: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties
        """

        self._properties = properties