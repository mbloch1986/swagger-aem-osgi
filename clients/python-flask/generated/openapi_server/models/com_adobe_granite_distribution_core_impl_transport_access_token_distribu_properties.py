# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: ConfigNodePropertyString=None, service_name: ConfigNodePropertyString=None, user_id: ConfigNodePropertyString=None, access_token_provider_target: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties - a model defined in OpenAPI

        :param name: The name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.  # noqa: E501
        :type name: ConfigNodePropertyString
        :param service_name: The service_name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.  # noqa: E501
        :type service_name: ConfigNodePropertyString
        :param user_id: The user_id of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.  # noqa: E501
        :type user_id: ConfigNodePropertyString
        :param access_token_provider_target: The access_token_provider_target of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.  # noqa: E501
        :type access_token_provider_target: ConfigNodePropertyString
        """
        self.openapi_types = {
            'name': ConfigNodePropertyString,
            'service_name': ConfigNodePropertyString,
            'user_id': ConfigNodePropertyString,
            'access_token_provider_target': ConfigNodePropertyString
        }

        self.attribute_map = {
            'name': 'name',
            'service_name': 'serviceName',
            'user_id': 'userId',
            'access_token_provider_target': 'accessTokenProvider.target'
        }

        self._name = name
        self._service_name = service_name
        self._user_id = user_id
        self._access_token_provider_target = access_token_provider_target

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.  # noqa: E501
        :rtype: ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> ConfigNodePropertyString:
        """Gets the name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :return: The name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._name

    @name.setter
    def name(self, name: ConfigNodePropertyString):
        """Sets the name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :param name: The name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :type name: ConfigNodePropertyString
        """

        self._name = name

    @property
    def service_name(self) -> ConfigNodePropertyString:
        """Gets the service_name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :return: The service_name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._service_name

    @service_name.setter
    def service_name(self, service_name: ConfigNodePropertyString):
        """Sets the service_name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :param service_name: The service_name of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :type service_name: ConfigNodePropertyString
        """

        self._service_name = service_name

    @property
    def user_id(self) -> ConfigNodePropertyString:
        """Gets the user_id of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :return: The user_id of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._user_id

    @user_id.setter
    def user_id(self, user_id: ConfigNodePropertyString):
        """Sets the user_id of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :param user_id: The user_id of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :type user_id: ConfigNodePropertyString
        """

        self._user_id = user_id

    @property
    def access_token_provider_target(self) -> ConfigNodePropertyString:
        """Gets the access_token_provider_target of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :return: The access_token_provider_target of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._access_token_provider_target

    @access_token_provider_target.setter
    def access_token_provider_target(self, access_token_provider_target: ConfigNodePropertyString):
        """Sets the access_token_provider_target of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.


        :param access_token_provider_target: The access_token_provider_target of this ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.
        :type access_token_provider_target: ConfigNodePropertyString
        """

        self._access_token_provider_target = access_token_provider_target