# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, forward_requests: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties - a model defined in OpenAPI

        :param forward_requests: The forward_requests of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.  # noqa: E501
        :type forward_requests: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'forward_requests': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'forward_requests': 'forward.requests'
        }

        self._forward_requests = forward_requests

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.  # noqa: E501
        :rtype: ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def forward_requests(self) -> ConfigNodePropertyBoolean:
        """Gets the forward_requests of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.


        :return: The forward_requests of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._forward_requests

    @forward_requests.setter
    def forward_requests(self, forward_requests: ConfigNodePropertyBoolean):
        """Sets the forward_requests of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.


        :param forward_requests: The forward_requests of this ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.
        :type forward_requests: ConfigNodePropertyBoolean
        """

        self._forward_requests = forward_requests
