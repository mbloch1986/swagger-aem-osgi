# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteAuthOauthAccesstokenProviderProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: ConfigNodePropertyString=None, auth_token_provider_title: ConfigNodePropertyString=None, auth_token_provider_default_claims: ConfigNodePropertyArray=None, auth_token_provider_endpoint: ConfigNodePropertyString=None, auth_access_token_request: ConfigNodePropertyString=None, auth_token_provider_keypair_alias: ConfigNodePropertyString=None, auth_token_provider_conn_timeout: ConfigNodePropertyInteger=None, auth_token_provider_so_timeout: ConfigNodePropertyInteger=None, auth_token_provider_client_id: ConfigNodePropertyString=None, auth_token_provider_scope: ConfigNodePropertyString=None, auth_token_provider_reuse_access_token: ConfigNodePropertyBoolean=None, auth_token_provider_relaxed_ssl: ConfigNodePropertyBoolean=None, token_request_customizer_type: ConfigNodePropertyString=None, auth_token_validator_type: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeGraniteAuthOauthAccesstokenProviderProperties - a model defined in OpenAPI

        :param name: The name of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type name: ConfigNodePropertyString
        :param auth_token_provider_title: The auth_token_provider_title of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_title: ConfigNodePropertyString
        :param auth_token_provider_default_claims: The auth_token_provider_default_claims of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_default_claims: ConfigNodePropertyArray
        :param auth_token_provider_endpoint: The auth_token_provider_endpoint of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_endpoint: ConfigNodePropertyString
        :param auth_access_token_request: The auth_access_token_request of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_access_token_request: ConfigNodePropertyString
        :param auth_token_provider_keypair_alias: The auth_token_provider_keypair_alias of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_keypair_alias: ConfigNodePropertyString
        :param auth_token_provider_conn_timeout: The auth_token_provider_conn_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_conn_timeout: ConfigNodePropertyInteger
        :param auth_token_provider_so_timeout: The auth_token_provider_so_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_so_timeout: ConfigNodePropertyInteger
        :param auth_token_provider_client_id: The auth_token_provider_client_id of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_client_id: ConfigNodePropertyString
        :param auth_token_provider_scope: The auth_token_provider_scope of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_scope: ConfigNodePropertyString
        :param auth_token_provider_reuse_access_token: The auth_token_provider_reuse_access_token of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_reuse_access_token: ConfigNodePropertyBoolean
        :param auth_token_provider_relaxed_ssl: The auth_token_provider_relaxed_ssl of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_provider_relaxed_ssl: ConfigNodePropertyBoolean
        :param token_request_customizer_type: The token_request_customizer_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type token_request_customizer_type: ConfigNodePropertyString
        :param auth_token_validator_type: The auth_token_validator_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :type auth_token_validator_type: ConfigNodePropertyString
        """
        self.openapi_types = {
            'name': ConfigNodePropertyString,
            'auth_token_provider_title': ConfigNodePropertyString,
            'auth_token_provider_default_claims': ConfigNodePropertyArray,
            'auth_token_provider_endpoint': ConfigNodePropertyString,
            'auth_access_token_request': ConfigNodePropertyString,
            'auth_token_provider_keypair_alias': ConfigNodePropertyString,
            'auth_token_provider_conn_timeout': ConfigNodePropertyInteger,
            'auth_token_provider_so_timeout': ConfigNodePropertyInteger,
            'auth_token_provider_client_id': ConfigNodePropertyString,
            'auth_token_provider_scope': ConfigNodePropertyString,
            'auth_token_provider_reuse_access_token': ConfigNodePropertyBoolean,
            'auth_token_provider_relaxed_ssl': ConfigNodePropertyBoolean,
            'token_request_customizer_type': ConfigNodePropertyString,
            'auth_token_validator_type': ConfigNodePropertyString
        }

        self.attribute_map = {
            'name': 'name',
            'auth_token_provider_title': 'auth.token.provider.title',
            'auth_token_provider_default_claims': 'auth.token.provider.default.claims',
            'auth_token_provider_endpoint': 'auth.token.provider.endpoint',
            'auth_access_token_request': 'auth.access.token.request',
            'auth_token_provider_keypair_alias': 'auth.token.provider.keypair.alias',
            'auth_token_provider_conn_timeout': 'auth.token.provider.conn.timeout',
            'auth_token_provider_so_timeout': 'auth.token.provider.so.timeout',
            'auth_token_provider_client_id': 'auth.token.provider.client.id',
            'auth_token_provider_scope': 'auth.token.provider.scope',
            'auth_token_provider_reuse_access_token': 'auth.token.provider.reuse.access.token',
            'auth_token_provider_relaxed_ssl': 'auth.token.provider.relaxed.ssl',
            'token_request_customizer_type': 'token.request.customizer.type',
            'auth_token_validator_type': 'auth.token.validator.type'
        }

        self._name = name
        self._auth_token_provider_title = auth_token_provider_title
        self._auth_token_provider_default_claims = auth_token_provider_default_claims
        self._auth_token_provider_endpoint = auth_token_provider_endpoint
        self._auth_access_token_request = auth_access_token_request
        self._auth_token_provider_keypair_alias = auth_token_provider_keypair_alias
        self._auth_token_provider_conn_timeout = auth_token_provider_conn_timeout
        self._auth_token_provider_so_timeout = auth_token_provider_so_timeout
        self._auth_token_provider_client_id = auth_token_provider_client_id
        self._auth_token_provider_scope = auth_token_provider_scope
        self._auth_token_provider_reuse_access_token = auth_token_provider_reuse_access_token
        self._auth_token_provider_relaxed_ssl = auth_token_provider_relaxed_ssl
        self._token_request_customizer_type = token_request_customizer_type
        self._auth_token_validator_type = auth_token_validator_type

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteAuthOauthAccesstokenProviderProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteAuthOauthAccesstokenProviderProperties of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.  # noqa: E501
        :rtype: ComAdobeGraniteAuthOauthAccesstokenProviderProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> ConfigNodePropertyString:
        """Gets the name of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The name of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._name

    @name.setter
    def name(self, name: ConfigNodePropertyString):
        """Sets the name of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param name: The name of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type name: ConfigNodePropertyString
        """

        self._name = name

    @property
    def auth_token_provider_title(self) -> ConfigNodePropertyString:
        """Gets the auth_token_provider_title of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_title of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_provider_title

    @auth_token_provider_title.setter
    def auth_token_provider_title(self, auth_token_provider_title: ConfigNodePropertyString):
        """Sets the auth_token_provider_title of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_title: The auth_token_provider_title of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_title: ConfigNodePropertyString
        """

        self._auth_token_provider_title = auth_token_provider_title

    @property
    def auth_token_provider_default_claims(self) -> ConfigNodePropertyArray:
        """Gets the auth_token_provider_default_claims of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_default_claims of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._auth_token_provider_default_claims

    @auth_token_provider_default_claims.setter
    def auth_token_provider_default_claims(self, auth_token_provider_default_claims: ConfigNodePropertyArray):
        """Sets the auth_token_provider_default_claims of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_default_claims: The auth_token_provider_default_claims of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_default_claims: ConfigNodePropertyArray
        """

        self._auth_token_provider_default_claims = auth_token_provider_default_claims

    @property
    def auth_token_provider_endpoint(self) -> ConfigNodePropertyString:
        """Gets the auth_token_provider_endpoint of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_endpoint of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_provider_endpoint

    @auth_token_provider_endpoint.setter
    def auth_token_provider_endpoint(self, auth_token_provider_endpoint: ConfigNodePropertyString):
        """Sets the auth_token_provider_endpoint of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_endpoint: The auth_token_provider_endpoint of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_endpoint: ConfigNodePropertyString
        """

        self._auth_token_provider_endpoint = auth_token_provider_endpoint

    @property
    def auth_access_token_request(self) -> ConfigNodePropertyString:
        """Gets the auth_access_token_request of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_access_token_request of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_access_token_request

    @auth_access_token_request.setter
    def auth_access_token_request(self, auth_access_token_request: ConfigNodePropertyString):
        """Sets the auth_access_token_request of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_access_token_request: The auth_access_token_request of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_access_token_request: ConfigNodePropertyString
        """

        self._auth_access_token_request = auth_access_token_request

    @property
    def auth_token_provider_keypair_alias(self) -> ConfigNodePropertyString:
        """Gets the auth_token_provider_keypair_alias of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_keypair_alias of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_provider_keypair_alias

    @auth_token_provider_keypair_alias.setter
    def auth_token_provider_keypair_alias(self, auth_token_provider_keypair_alias: ConfigNodePropertyString):
        """Sets the auth_token_provider_keypair_alias of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_keypair_alias: The auth_token_provider_keypair_alias of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_keypair_alias: ConfigNodePropertyString
        """

        self._auth_token_provider_keypair_alias = auth_token_provider_keypair_alias

    @property
    def auth_token_provider_conn_timeout(self) -> ConfigNodePropertyInteger:
        """Gets the auth_token_provider_conn_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_conn_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._auth_token_provider_conn_timeout

    @auth_token_provider_conn_timeout.setter
    def auth_token_provider_conn_timeout(self, auth_token_provider_conn_timeout: ConfigNodePropertyInteger):
        """Sets the auth_token_provider_conn_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_conn_timeout: The auth_token_provider_conn_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_conn_timeout: ConfigNodePropertyInteger
        """

        self._auth_token_provider_conn_timeout = auth_token_provider_conn_timeout

    @property
    def auth_token_provider_so_timeout(self) -> ConfigNodePropertyInteger:
        """Gets the auth_token_provider_so_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_so_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._auth_token_provider_so_timeout

    @auth_token_provider_so_timeout.setter
    def auth_token_provider_so_timeout(self, auth_token_provider_so_timeout: ConfigNodePropertyInteger):
        """Sets the auth_token_provider_so_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_so_timeout: The auth_token_provider_so_timeout of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_so_timeout: ConfigNodePropertyInteger
        """

        self._auth_token_provider_so_timeout = auth_token_provider_so_timeout

    @property
    def auth_token_provider_client_id(self) -> ConfigNodePropertyString:
        """Gets the auth_token_provider_client_id of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_client_id of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_provider_client_id

    @auth_token_provider_client_id.setter
    def auth_token_provider_client_id(self, auth_token_provider_client_id: ConfigNodePropertyString):
        """Sets the auth_token_provider_client_id of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_client_id: The auth_token_provider_client_id of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_client_id: ConfigNodePropertyString
        """

        self._auth_token_provider_client_id = auth_token_provider_client_id

    @property
    def auth_token_provider_scope(self) -> ConfigNodePropertyString:
        """Gets the auth_token_provider_scope of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_scope of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_provider_scope

    @auth_token_provider_scope.setter
    def auth_token_provider_scope(self, auth_token_provider_scope: ConfigNodePropertyString):
        """Sets the auth_token_provider_scope of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_scope: The auth_token_provider_scope of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_scope: ConfigNodePropertyString
        """

        self._auth_token_provider_scope = auth_token_provider_scope

    @property
    def auth_token_provider_reuse_access_token(self) -> ConfigNodePropertyBoolean:
        """Gets the auth_token_provider_reuse_access_token of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_reuse_access_token of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._auth_token_provider_reuse_access_token

    @auth_token_provider_reuse_access_token.setter
    def auth_token_provider_reuse_access_token(self, auth_token_provider_reuse_access_token: ConfigNodePropertyBoolean):
        """Sets the auth_token_provider_reuse_access_token of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_reuse_access_token: The auth_token_provider_reuse_access_token of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_reuse_access_token: ConfigNodePropertyBoolean
        """

        self._auth_token_provider_reuse_access_token = auth_token_provider_reuse_access_token

    @property
    def auth_token_provider_relaxed_ssl(self) -> ConfigNodePropertyBoolean:
        """Gets the auth_token_provider_relaxed_ssl of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_provider_relaxed_ssl of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._auth_token_provider_relaxed_ssl

    @auth_token_provider_relaxed_ssl.setter
    def auth_token_provider_relaxed_ssl(self, auth_token_provider_relaxed_ssl: ConfigNodePropertyBoolean):
        """Sets the auth_token_provider_relaxed_ssl of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_provider_relaxed_ssl: The auth_token_provider_relaxed_ssl of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_provider_relaxed_ssl: ConfigNodePropertyBoolean
        """

        self._auth_token_provider_relaxed_ssl = auth_token_provider_relaxed_ssl

    @property
    def token_request_customizer_type(self) -> ConfigNodePropertyString:
        """Gets the token_request_customizer_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The token_request_customizer_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._token_request_customizer_type

    @token_request_customizer_type.setter
    def token_request_customizer_type(self, token_request_customizer_type: ConfigNodePropertyString):
        """Sets the token_request_customizer_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param token_request_customizer_type: The token_request_customizer_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type token_request_customizer_type: ConfigNodePropertyString
        """

        self._token_request_customizer_type = token_request_customizer_type

    @property
    def auth_token_validator_type(self) -> ConfigNodePropertyString:
        """Gets the auth_token_validator_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :return: The auth_token_validator_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._auth_token_validator_type

    @auth_token_validator_type.setter
    def auth_token_validator_type(self, auth_token_validator_type: ConfigNodePropertyString):
        """Sets the auth_token_validator_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.


        :param auth_token_validator_type: The auth_token_validator_type of this ComAdobeGraniteAuthOauthAccesstokenProviderProperties.
        :type auth_token_validator_type: ConfigNodePropertyString
        """

        self._auth_token_validator_type = auth_token_validator_type