# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, security_preferences_name: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties - a model defined in OpenAPI

        :param security_preferences_name: The security_preferences_name of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.  # noqa: E501
        :type security_preferences_name: ConfigNodePropertyString
        """
        self.openapi_types = {
            'security_preferences_name': ConfigNodePropertyString
        }

        self.attribute_map = {
            'security_preferences_name': 'security.preferences.name'
        }

        self._security_preferences_name = security_preferences_name

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.  # noqa: E501
        :rtype: ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def security_preferences_name(self) -> ConfigNodePropertyString:
        """Gets the security_preferences_name of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.


        :return: The security_preferences_name of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._security_preferences_name

    @security_preferences_name.setter
    def security_preferences_name(self, security_preferences_name: ConfigNodePropertyString):
        """Sets the security_preferences_name of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.


        :param security_preferences_name: The security_preferences_name of this ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.
        :type security_preferences_name: ConfigNodePropertyString
        """

        self._security_preferences_name = security_preferences_name