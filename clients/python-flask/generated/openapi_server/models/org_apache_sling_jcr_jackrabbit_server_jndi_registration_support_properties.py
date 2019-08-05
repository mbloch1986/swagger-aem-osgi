# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, java_naming_factory_initial: ConfigNodePropertyString=None, java_naming_provider_url: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties - a model defined in OpenAPI

        :param java_naming_factory_initial: The java_naming_factory_initial of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.  # noqa: E501
        :type java_naming_factory_initial: ConfigNodePropertyString
        :param java_naming_provider_url: The java_naming_provider_url of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.  # noqa: E501
        :type java_naming_provider_url: ConfigNodePropertyString
        """
        self.openapi_types = {
            'java_naming_factory_initial': ConfigNodePropertyString,
            'java_naming_provider_url': ConfigNodePropertyString
        }

        self.attribute_map = {
            'java_naming_factory_initial': 'java.naming.factory.initial',
            'java_naming_provider_url': 'java.naming.provider.url'
        }

        self._java_naming_factory_initial = java_naming_factory_initial
        self._java_naming_provider_url = java_naming_provider_url

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.  # noqa: E501
        :rtype: OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def java_naming_factory_initial(self) -> ConfigNodePropertyString:
        """Gets the java_naming_factory_initial of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.


        :return: The java_naming_factory_initial of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._java_naming_factory_initial

    @java_naming_factory_initial.setter
    def java_naming_factory_initial(self, java_naming_factory_initial: ConfigNodePropertyString):
        """Sets the java_naming_factory_initial of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.


        :param java_naming_factory_initial: The java_naming_factory_initial of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.
        :type java_naming_factory_initial: ConfigNodePropertyString
        """

        self._java_naming_factory_initial = java_naming_factory_initial

    @property
    def java_naming_provider_url(self) -> ConfigNodePropertyString:
        """Gets the java_naming_provider_url of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.


        :return: The java_naming_provider_url of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._java_naming_provider_url

    @java_naming_provider_url.setter
    def java_naming_provider_url(self, java_naming_provider_url: ConfigNodePropertyString):
        """Sets the java_naming_provider_url of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.


        :param java_naming_provider_url: The java_naming_provider_url of this OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.
        :type java_naming_provider_url: ConfigNodePropertyString
        """

        self._java_naming_provider_url = java_naming_provider_url