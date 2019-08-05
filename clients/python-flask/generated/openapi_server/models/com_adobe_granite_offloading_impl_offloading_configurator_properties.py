# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, offloading_transporter: ConfigNodePropertyString=None, offloading_cleanup_payload: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties - a model defined in OpenAPI

        :param offloading_transporter: The offloading_transporter of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.  # noqa: E501
        :type offloading_transporter: ConfigNodePropertyString
        :param offloading_cleanup_payload: The offloading_cleanup_payload of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.  # noqa: E501
        :type offloading_cleanup_payload: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'offloading_transporter': ConfigNodePropertyString,
            'offloading_cleanup_payload': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'offloading_transporter': 'offloading.transporter',
            'offloading_cleanup_payload': 'offloading.cleanup.payload'
        }

        self._offloading_transporter = offloading_transporter
        self._offloading_cleanup_payload = offloading_cleanup_payload

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteOffloadingImplOffloadingConfiguratorProperties of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.  # noqa: E501
        :rtype: ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def offloading_transporter(self) -> ConfigNodePropertyString:
        """Gets the offloading_transporter of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.


        :return: The offloading_transporter of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._offloading_transporter

    @offloading_transporter.setter
    def offloading_transporter(self, offloading_transporter: ConfigNodePropertyString):
        """Sets the offloading_transporter of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.


        :param offloading_transporter: The offloading_transporter of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.
        :type offloading_transporter: ConfigNodePropertyString
        """

        self._offloading_transporter = offloading_transporter

    @property
    def offloading_cleanup_payload(self) -> ConfigNodePropertyBoolean:
        """Gets the offloading_cleanup_payload of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.


        :return: The offloading_cleanup_payload of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._offloading_cleanup_payload

    @offloading_cleanup_payload.setter
    def offloading_cleanup_payload(self, offloading_cleanup_payload: ConfigNodePropertyBoolean):
        """Sets the offloading_cleanup_payload of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.


        :param offloading_cleanup_payload: The offloading_cleanup_payload of this ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.
        :type offloading_cleanup_payload: ConfigNodePropertyBoolean
        """

        self._offloading_cleanup_payload = offloading_cleanup_payload