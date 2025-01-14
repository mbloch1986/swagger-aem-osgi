# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, get_cache_expiration_unit: ConfigNodePropertyDropDown=None, get_cache_expiration_value: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties - a model defined in OpenAPI

        :param get_cache_expiration_unit: The get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :type get_cache_expiration_unit: ConfigNodePropertyDropDown
        :param get_cache_expiration_value: The get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :type get_cache_expiration_value: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'get_cache_expiration_unit': ConfigNodePropertyDropDown,
            'get_cache_expiration_value': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'get_cache_expiration_unit': 'getCacheExpirationUnit',
            'get_cache_expiration_value': 'getCacheExpirationValue'
        }

        self._get_cache_expiration_unit = get_cache_expiration_unit
        self._get_cache_expiration_value = get_cache_expiration_value

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :rtype: ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def get_cache_expiration_unit(self) -> ConfigNodePropertyDropDown:
        """Gets the get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :return: The get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._get_cache_expiration_unit

    @get_cache_expiration_unit.setter
    def get_cache_expiration_unit(self, get_cache_expiration_unit: ConfigNodePropertyDropDown):
        """Sets the get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :param get_cache_expiration_unit: The get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.
        :type get_cache_expiration_unit: ConfigNodePropertyDropDown
        """

        self._get_cache_expiration_unit = get_cache_expiration_unit

    @property
    def get_cache_expiration_value(self) -> ConfigNodePropertyInteger:
        """Gets the get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :return: The get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._get_cache_expiration_value

    @get_cache_expiration_value.setter
    def get_cache_expiration_value(self, get_cache_expiration_value: ConfigNodePropertyInteger):
        """Sets the get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :param get_cache_expiration_value: The get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.
        :type get_cache_expiration_value: ConfigNodePropertyInteger
        """

        self._get_cache_expiration_value = get_cache_expiration_value
