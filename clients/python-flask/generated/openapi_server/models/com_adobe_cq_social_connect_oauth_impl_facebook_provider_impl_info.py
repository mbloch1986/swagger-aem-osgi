# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_connect_oauth_impl_facebook_provider_impl_properties import ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties=None):  # noqa: E501
        """ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialConnectOauthImplFacebookProviderImplInfo of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :return: The pid of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :param pid: The pid of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :return: The title of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :param title: The title of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :return: The description of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :param description: The description of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties:
        """Gets the properties of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :return: The properties of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :rtype: ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties):
        """Sets the properties of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.


        :param properties: The properties of this ComAdobeCqSocialConnectOauthImplFacebookProviderImplInfo.
        :type properties: ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties
        """

        self._properties = properties
