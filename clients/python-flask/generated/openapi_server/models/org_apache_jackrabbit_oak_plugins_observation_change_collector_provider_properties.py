# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, max_items: ConfigNodePropertyInteger=None, max_path_depth: ConfigNodePropertyInteger=None, enabled: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties - a model defined in OpenAPI

        :param max_items: The max_items of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.  # noqa: E501
        :type max_items: ConfigNodePropertyInteger
        :param max_path_depth: The max_path_depth of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.  # noqa: E501
        :type max_path_depth: ConfigNodePropertyInteger
        :param enabled: The enabled of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.  # noqa: E501
        :type enabled: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'max_items': ConfigNodePropertyInteger,
            'max_path_depth': ConfigNodePropertyInteger,
            'enabled': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'max_items': 'maxItems',
            'max_path_depth': 'maxPathDepth',
            'enabled': 'enabled'
        }

        self._max_items = max_items
        self._max_path_depth = max_path_depth
        self._enabled = enabled

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def max_items(self) -> ConfigNodePropertyInteger:
        """Gets the max_items of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :return: The max_items of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_items

    @max_items.setter
    def max_items(self, max_items: ConfigNodePropertyInteger):
        """Sets the max_items of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :param max_items: The max_items of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :type max_items: ConfigNodePropertyInteger
        """

        self._max_items = max_items

    @property
    def max_path_depth(self) -> ConfigNodePropertyInteger:
        """Gets the max_path_depth of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :return: The max_path_depth of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_path_depth

    @max_path_depth.setter
    def max_path_depth(self, max_path_depth: ConfigNodePropertyInteger):
        """Sets the max_path_depth of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :param max_path_depth: The max_path_depth of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :type max_path_depth: ConfigNodePropertyInteger
        """

        self._max_path_depth = max_path_depth

    @property
    def enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the enabled of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :return: The enabled of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled: ConfigNodePropertyBoolean):
        """Sets the enabled of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.


        :param enabled: The enabled of this OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.
        :type enabled: ConfigNodePropertyBoolean
        """

        self._enabled = enabled
