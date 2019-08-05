# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: ConfigNodePropertyString=None, endpoints: ConfigNodePropertyArray=None, transport_secret_provider_target: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties - a model defined in OpenAPI

        :param name: The name of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.  # noqa: E501
        :type name: ConfigNodePropertyString
        :param endpoints: The endpoints of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.  # noqa: E501
        :type endpoints: ConfigNodePropertyArray
        :param transport_secret_provider_target: The transport_secret_provider_target of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.  # noqa: E501
        :type transport_secret_provider_target: ConfigNodePropertyString
        """
        self.openapi_types = {
            'name': ConfigNodePropertyString,
            'endpoints': ConfigNodePropertyArray,
            'transport_secret_provider_target': ConfigNodePropertyString
        }

        self.attribute_map = {
            'name': 'name',
            'endpoints': 'endpoints',
            'transport_secret_provider_target': 'transportSecretProvider.target'
        }

        self._name = name
        self._endpoints = endpoints
        self._transport_secret_provider_target = transport_secret_provider_target

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.  # noqa: E501
        :rtype: OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> ConfigNodePropertyString:
        """Gets the name of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :return: The name of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._name

    @name.setter
    def name(self, name: ConfigNodePropertyString):
        """Sets the name of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :param name: The name of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :type name: ConfigNodePropertyString
        """

        self._name = name

    @property
    def endpoints(self) -> ConfigNodePropertyArray:
        """Gets the endpoints of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :return: The endpoints of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._endpoints

    @endpoints.setter
    def endpoints(self, endpoints: ConfigNodePropertyArray):
        """Sets the endpoints of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :param endpoints: The endpoints of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :type endpoints: ConfigNodePropertyArray
        """

        self._endpoints = endpoints

    @property
    def transport_secret_provider_target(self) -> ConfigNodePropertyString:
        """Gets the transport_secret_provider_target of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :return: The transport_secret_provider_target of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._transport_secret_provider_target

    @transport_secret_provider_target.setter
    def transport_secret_provider_target(self, transport_secret_provider_target: ConfigNodePropertyString):
        """Sets the transport_secret_provider_target of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.


        :param transport_secret_provider_target: The transport_secret_provider_target of this OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.
        :type transport_secret_provider_target: ConfigNodePropertyString
        """

        self._transport_secret_provider_target = transport_secret_provider_target