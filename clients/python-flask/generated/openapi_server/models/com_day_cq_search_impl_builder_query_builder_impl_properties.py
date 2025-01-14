# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqSearchImplBuilderQueryBuilderImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, excerpt_properties: ConfigNodePropertyArray=None, cache_max_entries: ConfigNodePropertyInteger=None, cache_entry_lifetime: ConfigNodePropertyInteger=None, xpath_union: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqSearchImplBuilderQueryBuilderImplProperties - a model defined in OpenAPI

        :param excerpt_properties: The excerpt_properties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.  # noqa: E501
        :type excerpt_properties: ConfigNodePropertyArray
        :param cache_max_entries: The cache_max_entries of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.  # noqa: E501
        :type cache_max_entries: ConfigNodePropertyInteger
        :param cache_entry_lifetime: The cache_entry_lifetime of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.  # noqa: E501
        :type cache_entry_lifetime: ConfigNodePropertyInteger
        :param xpath_union: The xpath_union of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.  # noqa: E501
        :type xpath_union: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'excerpt_properties': ConfigNodePropertyArray,
            'cache_max_entries': ConfigNodePropertyInteger,
            'cache_entry_lifetime': ConfigNodePropertyInteger,
            'xpath_union': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'excerpt_properties': 'excerpt.properties',
            'cache_max_entries': 'cache.max.entries',
            'cache_entry_lifetime': 'cache.entry.lifetime',
            'xpath_union': 'xpath.union'
        }

        self._excerpt_properties = excerpt_properties
        self._cache_max_entries = cache_max_entries
        self._cache_entry_lifetime = cache_entry_lifetime
        self._xpath_union = xpath_union

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqSearchImplBuilderQueryBuilderImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqSearchImplBuilderQueryBuilderImplProperties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.  # noqa: E501
        :rtype: ComDayCqSearchImplBuilderQueryBuilderImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def excerpt_properties(self) -> ConfigNodePropertyArray:
        """Gets the excerpt_properties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :return: The excerpt_properties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._excerpt_properties

    @excerpt_properties.setter
    def excerpt_properties(self, excerpt_properties: ConfigNodePropertyArray):
        """Sets the excerpt_properties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :param excerpt_properties: The excerpt_properties of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :type excerpt_properties: ConfigNodePropertyArray
        """

        self._excerpt_properties = excerpt_properties

    @property
    def cache_max_entries(self) -> ConfigNodePropertyInteger:
        """Gets the cache_max_entries of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :return: The cache_max_entries of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cache_max_entries

    @cache_max_entries.setter
    def cache_max_entries(self, cache_max_entries: ConfigNodePropertyInteger):
        """Sets the cache_max_entries of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :param cache_max_entries: The cache_max_entries of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :type cache_max_entries: ConfigNodePropertyInteger
        """

        self._cache_max_entries = cache_max_entries

    @property
    def cache_entry_lifetime(self) -> ConfigNodePropertyInteger:
        """Gets the cache_entry_lifetime of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :return: The cache_entry_lifetime of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cache_entry_lifetime

    @cache_entry_lifetime.setter
    def cache_entry_lifetime(self, cache_entry_lifetime: ConfigNodePropertyInteger):
        """Sets the cache_entry_lifetime of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :param cache_entry_lifetime: The cache_entry_lifetime of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :type cache_entry_lifetime: ConfigNodePropertyInteger
        """

        self._cache_entry_lifetime = cache_entry_lifetime

    @property
    def xpath_union(self) -> ConfigNodePropertyBoolean:
        """Gets the xpath_union of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :return: The xpath_union of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._xpath_union

    @xpath_union.setter
    def xpath_union(self, xpath_union: ConfigNodePropertyBoolean):
        """Sets the xpath_union of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.


        :param xpath_union: The xpath_union of this ComDayCqSearchImplBuilderQueryBuilderImplProperties.
        :type xpath_union: ConfigNodePropertyBoolean
        """

        self._xpath_union = xpath_union
