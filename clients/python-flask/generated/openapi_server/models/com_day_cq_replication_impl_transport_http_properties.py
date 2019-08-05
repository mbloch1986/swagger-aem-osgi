# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComDayCqReplicationImplTransportHttpProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, disabled_cipher_suites: ConfigNodePropertyArray=None, enabled_cipher_suites: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqReplicationImplTransportHttpProperties - a model defined in OpenAPI

        :param disabled_cipher_suites: The disabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.  # noqa: E501
        :type disabled_cipher_suites: ConfigNodePropertyArray
        :param enabled_cipher_suites: The enabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.  # noqa: E501
        :type enabled_cipher_suites: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'disabled_cipher_suites': ConfigNodePropertyArray,
            'enabled_cipher_suites': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'disabled_cipher_suites': 'disabled.cipher.suites',
            'enabled_cipher_suites': 'enabled.cipher.suites'
        }

        self._disabled_cipher_suites = disabled_cipher_suites
        self._enabled_cipher_suites = enabled_cipher_suites

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqReplicationImplTransportHttpProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReplicationImplTransportHttpProperties of this ComDayCqReplicationImplTransportHttpProperties.  # noqa: E501
        :rtype: ComDayCqReplicationImplTransportHttpProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def disabled_cipher_suites(self) -> ConfigNodePropertyArray:
        """Gets the disabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.


        :return: The disabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._disabled_cipher_suites

    @disabled_cipher_suites.setter
    def disabled_cipher_suites(self, disabled_cipher_suites: ConfigNodePropertyArray):
        """Sets the disabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.


        :param disabled_cipher_suites: The disabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.
        :type disabled_cipher_suites: ConfigNodePropertyArray
        """

        self._disabled_cipher_suites = disabled_cipher_suites

    @property
    def enabled_cipher_suites(self) -> ConfigNodePropertyArray:
        """Gets the enabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.


        :return: The enabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._enabled_cipher_suites

    @enabled_cipher_suites.setter
    def enabled_cipher_suites(self, enabled_cipher_suites: ConfigNodePropertyArray):
        """Sets the enabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.


        :param enabled_cipher_suites: The enabled_cipher_suites of this ComDayCqReplicationImplTransportHttpProperties.
        :type enabled_cipher_suites: ConfigNodePropertyArray
        """

        self._enabled_cipher_suites = enabled_cipher_suites