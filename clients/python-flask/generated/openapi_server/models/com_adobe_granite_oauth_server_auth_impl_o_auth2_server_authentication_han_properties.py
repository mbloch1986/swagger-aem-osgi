# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, path: ConfigNodePropertyString=None, jaas_control_flag: ConfigNodePropertyString=None, jaas_realm_name: ConfigNodePropertyString=None, jaas_ranking: ConfigNodePropertyInteger=None, oauth_offline_validation: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties - a model defined in OpenAPI

        :param path: The path of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :type path: ConfigNodePropertyString
        :param jaas_control_flag: The jaas_control_flag of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :type jaas_control_flag: ConfigNodePropertyString
        :param jaas_realm_name: The jaas_realm_name of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :type jaas_realm_name: ConfigNodePropertyString
        :param jaas_ranking: The jaas_ranking of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :type jaas_ranking: ConfigNodePropertyInteger
        :param oauth_offline_validation: The oauth_offline_validation of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :type oauth_offline_validation: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'path': ConfigNodePropertyString,
            'jaas_control_flag': ConfigNodePropertyString,
            'jaas_realm_name': ConfigNodePropertyString,
            'jaas_ranking': ConfigNodePropertyInteger,
            'oauth_offline_validation': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'path': 'path',
            'jaas_control_flag': 'jaas.controlFlag',
            'jaas_realm_name': 'jaas.realmName',
            'jaas_ranking': 'jaas.ranking',
            'oauth_offline_validation': 'oauth.offline.validation'
        }

        self._path = path
        self._jaas_control_flag = jaas_control_flag
        self._jaas_realm_name = jaas_realm_name
        self._jaas_ranking = jaas_ranking
        self._oauth_offline_validation = oauth_offline_validation

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.  # noqa: E501
        :rtype: ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def path(self) -> ConfigNodePropertyString:
        """Gets the path of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :return: The path of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path: ConfigNodePropertyString):
        """Sets the path of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :param path: The path of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :type path: ConfigNodePropertyString
        """

        self._path = path

    @property
    def jaas_control_flag(self) -> ConfigNodePropertyString:
        """Gets the jaas_control_flag of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :return: The jaas_control_flag of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jaas_control_flag

    @jaas_control_flag.setter
    def jaas_control_flag(self, jaas_control_flag: ConfigNodePropertyString):
        """Sets the jaas_control_flag of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :param jaas_control_flag: The jaas_control_flag of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :type jaas_control_flag: ConfigNodePropertyString
        """

        self._jaas_control_flag = jaas_control_flag

    @property
    def jaas_realm_name(self) -> ConfigNodePropertyString:
        """Gets the jaas_realm_name of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :return: The jaas_realm_name of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jaas_realm_name

    @jaas_realm_name.setter
    def jaas_realm_name(self, jaas_realm_name: ConfigNodePropertyString):
        """Sets the jaas_realm_name of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :param jaas_realm_name: The jaas_realm_name of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :type jaas_realm_name: ConfigNodePropertyString
        """

        self._jaas_realm_name = jaas_realm_name

    @property
    def jaas_ranking(self) -> ConfigNodePropertyInteger:
        """Gets the jaas_ranking of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :return: The jaas_ranking of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._jaas_ranking

    @jaas_ranking.setter
    def jaas_ranking(self, jaas_ranking: ConfigNodePropertyInteger):
        """Sets the jaas_ranking of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :param jaas_ranking: The jaas_ranking of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :type jaas_ranking: ConfigNodePropertyInteger
        """

        self._jaas_ranking = jaas_ranking

    @property
    def oauth_offline_validation(self) -> ConfigNodePropertyBoolean:
        """Gets the oauth_offline_validation of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :return: The oauth_offline_validation of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._oauth_offline_validation

    @oauth_offline_validation.setter
    def oauth_offline_validation(self, oauth_offline_validation: ConfigNodePropertyBoolean):
        """Sets the oauth_offline_validation of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.


        :param oauth_offline_validation: The oauth_offline_validation of this ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties.
        :type oauth_offline_validation: ConfigNodePropertyBoolean
        """

        self._oauth_offline_validation = oauth_offline_validation
