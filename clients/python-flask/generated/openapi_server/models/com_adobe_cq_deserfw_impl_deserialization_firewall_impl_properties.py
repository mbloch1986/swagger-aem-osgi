# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqDeserfwImplDeserializationFirewallImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, firewall_deserialization_whitelist: ConfigNodePropertyArray=None, firewall_deserialization_blacklist: ConfigNodePropertyArray=None, firewall_deserialization_diagnostics: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqDeserfwImplDeserializationFirewallImplProperties - a model defined in OpenAPI

        :param firewall_deserialization_whitelist: The firewall_deserialization_whitelist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.  # noqa: E501
        :type firewall_deserialization_whitelist: ConfigNodePropertyArray
        :param firewall_deserialization_blacklist: The firewall_deserialization_blacklist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.  # noqa: E501
        :type firewall_deserialization_blacklist: ConfigNodePropertyArray
        :param firewall_deserialization_diagnostics: The firewall_deserialization_diagnostics of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.  # noqa: E501
        :type firewall_deserialization_diagnostics: ConfigNodePropertyString
        """
        self.openapi_types = {
            'firewall_deserialization_whitelist': ConfigNodePropertyArray,
            'firewall_deserialization_blacklist': ConfigNodePropertyArray,
            'firewall_deserialization_diagnostics': ConfigNodePropertyString
        }

        self.attribute_map = {
            'firewall_deserialization_whitelist': 'firewall.deserialization.whitelist',
            'firewall_deserialization_blacklist': 'firewall.deserialization.blacklist',
            'firewall_deserialization_diagnostics': 'firewall.deserialization.diagnostics'
        }

        self._firewall_deserialization_whitelist = firewall_deserialization_whitelist
        self._firewall_deserialization_blacklist = firewall_deserialization_blacklist
        self._firewall_deserialization_diagnostics = firewall_deserialization_diagnostics

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqDeserfwImplDeserializationFirewallImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqDeserfwImplDeserializationFirewallImplProperties of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.  # noqa: E501
        :rtype: ComAdobeCqDeserfwImplDeserializationFirewallImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def firewall_deserialization_whitelist(self) -> ConfigNodePropertyArray:
        """Gets the firewall_deserialization_whitelist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :return: The firewall_deserialization_whitelist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._firewall_deserialization_whitelist

    @firewall_deserialization_whitelist.setter
    def firewall_deserialization_whitelist(self, firewall_deserialization_whitelist: ConfigNodePropertyArray):
        """Sets the firewall_deserialization_whitelist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :param firewall_deserialization_whitelist: The firewall_deserialization_whitelist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :type firewall_deserialization_whitelist: ConfigNodePropertyArray
        """

        self._firewall_deserialization_whitelist = firewall_deserialization_whitelist

    @property
    def firewall_deserialization_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the firewall_deserialization_blacklist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :return: The firewall_deserialization_blacklist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._firewall_deserialization_blacklist

    @firewall_deserialization_blacklist.setter
    def firewall_deserialization_blacklist(self, firewall_deserialization_blacklist: ConfigNodePropertyArray):
        """Sets the firewall_deserialization_blacklist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :param firewall_deserialization_blacklist: The firewall_deserialization_blacklist of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :type firewall_deserialization_blacklist: ConfigNodePropertyArray
        """

        self._firewall_deserialization_blacklist = firewall_deserialization_blacklist

    @property
    def firewall_deserialization_diagnostics(self) -> ConfigNodePropertyString:
        """Gets the firewall_deserialization_diagnostics of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :return: The firewall_deserialization_diagnostics of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._firewall_deserialization_diagnostics

    @firewall_deserialization_diagnostics.setter
    def firewall_deserialization_diagnostics(self, firewall_deserialization_diagnostics: ConfigNodePropertyString):
        """Sets the firewall_deserialization_diagnostics of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.


        :param firewall_deserialization_diagnostics: The firewall_deserialization_diagnostics of this ComAdobeCqDeserfwImplDeserializationFirewallImplProperties.
        :type firewall_deserialization_diagnostics: ConfigNodePropertyString
        """

        self._firewall_deserialization_diagnostics = firewall_deserialization_diagnostics
