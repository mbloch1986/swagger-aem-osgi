# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_oauth_server_impl_o_auth2_token_revocation_servlet_properties import ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties=None):  # noqa: E501
        """ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.  # noqa: E501
        :type properties: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.  # noqa: E501
        :rtype: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :return: The pid of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :param pid: The pid of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :return: The title of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :param title: The title of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :return: The description of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :param description: The description of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties:
        """Gets the properties of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :return: The properties of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :rtype: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties):
        """Sets the properties of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.


        :param properties: The properties of this ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo.
        :type properties: ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties
        """

        self._properties = properties
