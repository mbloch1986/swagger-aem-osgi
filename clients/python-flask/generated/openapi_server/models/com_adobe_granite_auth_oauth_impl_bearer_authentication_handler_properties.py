# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, path: ConfigNodePropertyString=None, oauth_client_ids_allowed: ConfigNodePropertyArray=None, auth_bearer_sync_ims: ConfigNodePropertyBoolean=None, auth_token_request_parameter: ConfigNodePropertyString=None, oauth_bearer_configid: ConfigNodePropertyString=None, oauth_jwt_support: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties - a model defined in OpenAPI

        :param path: The path of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type path: ConfigNodePropertyString
        :param oauth_client_ids_allowed: The oauth_client_ids_allowed of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type oauth_client_ids_allowed: ConfigNodePropertyArray
        :param auth_bearer_sync_ims: The auth_bearer_sync_ims of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type auth_bearer_sync_ims: ConfigNodePropertyBoolean
        :param auth_token_request_parameter: The auth_token_request_parameter of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type auth_token_request_parameter: ConfigNodePropertyString
        :param oauth_bearer_configid: The oauth_bearer_configid of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type oauth_bearer_configid: ConfigNodePropertyString
        :param oauth_jwt_support: The oauth_jwt_support of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :type oauth_jwt_support: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'path': ConfigNodePropertyString,
            'oauth_client_ids_allowed': ConfigNodePropertyArray,
            'auth_bearer_sync_ims': ConfigNodePropertyBoolean,
            'auth_token_request_parameter': ConfigNodePropertyString,
            'oauth_bearer_configid': ConfigNodePropertyString,
            'oauth_jwt_support': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'path': 'path',
            'oauth_client_ids_allowed': 'oauth.clientIds.allowed',
            'auth_bearer_sync_ims': 'auth.bearer.sync.ims',
            'auth_token_request_parameter': 'auth.tokenRequestParameter',
            'oauth_bearer_configid': 'oauth.bearer.configid',
            'oauth_jwt_support': 'oauth.jwt.support'
        }

        self._path = path
        self._oauth_client_ids_allowed = oauth_client_ids_allowed
        self._auth_bearer_sync_ims = auth_bearer_sync_ims
        self._auth_token_request_parameter = auth_token_request_parameter
        self._oauth_bearer_configid = oauth_bearer_configid
        self._oauth_jwt_support = oauth_jwt_support

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def path(self) -> ConfigNodePropertyString:
        """Gets the path of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The path of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path: ConfigNodePropertyString):
        """Sets the path of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param path: The path of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type path: ConfigNodePropertyString
        """

        self._path = path

    @property
    def oauth_client_ids_allowed(self) -> ConfigNodePropertyArray:
        """Gets the oauth_client_ids_allowed of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The oauth_client_ids_allowed of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._oauth_client_ids_allowed

    @oauth_client_ids_allowed.setter
    def oauth_client_ids_allowed(self, oauth_client_ids_allowed: ConfigNodePropertyArray):
        """Sets the oauth_client_ids_allowed of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param oauth_client_ids_allowed: The oauth_client_ids_allowed of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type oauth_client_ids_allowed: ConfigNodePropertyArray
        """

        self._oauth_client_ids_allowed = oauth_client_ids_allowed

    @property
    def auth_bearer_sync_ims(self) -> ConfigNodePropertyBoolean:
        """Gets the auth_bearer_sync_ims of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The auth_bearer_sync_ims of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._auth_bearer_sync_ims

    @auth_bearer_sync_ims.setter
    def auth_bearer_sync_ims(self, auth_bearer_sync_ims: ConfigNodePropertyBoolean):
        """Sets the auth_bearer_sync_ims of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param auth_bearer_sync_ims: The auth_bearer_sync_ims of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type auth_bearer_sync_ims: ConfigNodePropertyBoolean
        """

        self._auth_bearer_sync_ims = auth_bearer_sync_ims

    @property
    def auth_token_request_parameter(self) -> ConfigNodePropertyString:
        """Gets the auth_token_request_parameter of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The auth_token_request_parameter of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_request_parameter

    @auth_token_request_parameter.setter
    def auth_token_request_parameter(self, auth_token_request_parameter: ConfigNodePropertyString):
        """Sets the auth_token_request_parameter of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param auth_token_request_parameter: The auth_token_request_parameter of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type auth_token_request_parameter: ConfigNodePropertyString
        """

        self._auth_token_request_parameter = auth_token_request_parameter

    @property
    def oauth_bearer_configid(self) -> ConfigNodePropertyString:
        """Gets the oauth_bearer_configid of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The oauth_bearer_configid of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_bearer_configid

    @oauth_bearer_configid.setter
    def oauth_bearer_configid(self, oauth_bearer_configid: ConfigNodePropertyString):
        """Sets the oauth_bearer_configid of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param oauth_bearer_configid: The oauth_bearer_configid of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type oauth_bearer_configid: ConfigNodePropertyString
        """

        self._oauth_bearer_configid = oauth_bearer_configid

    @property
    def oauth_jwt_support(self) -> ConfigNodePropertyBoolean:
        """Gets the oauth_jwt_support of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :return: The oauth_jwt_support of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._oauth_jwt_support

    @oauth_jwt_support.setter
    def oauth_jwt_support(self, oauth_jwt_support: ConfigNodePropertyBoolean):
        """Sets the oauth_jwt_support of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.


        :param oauth_jwt_support: The oauth_jwt_support of this ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.
        :type oauth_jwt_support: ConfigNodePropertyBoolean
        """

        self._oauth_jwt_support = oauth_jwt_support