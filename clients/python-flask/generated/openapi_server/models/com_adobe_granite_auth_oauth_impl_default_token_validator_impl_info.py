# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_auth_oauth_impl_default_token_validator_impl_properties import ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties=None):  # noqa: E501
        """ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.  # noqa: E501
        :type properties: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.  # noqa: E501
        :rtype: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :return: The pid of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :param pid: The pid of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :return: The title of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :param title: The title of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :return: The description of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :param description: The description of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties:
        """Gets the properties of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :return: The properties of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :rtype: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties):
        """Sets the properties of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.


        :param properties: The properties of this ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplInfo.
        :type properties: ComAdobeGraniteAuthOauthImplDefaultTokenValidatorImplProperties
        """

        self._properties = properties
