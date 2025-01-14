# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class AnalyticsComponentQueryCacheServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_analytics_component_query_cache_size: ConfigNodePropertyInteger=None):  # noqa: E501
        """AnalyticsComponentQueryCacheServiceProperties - a model defined in OpenAPI

        :param cq_analytics_component_query_cache_size: The cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.  # noqa: E501
        :type cq_analytics_component_query_cache_size: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'cq_analytics_component_query_cache_size': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'cq_analytics_component_query_cache_size': 'cq.analytics.component.query.cache.size'
        }

        self._cq_analytics_component_query_cache_size = cq_analytics_component_query_cache_size

    @classmethod
    def from_dict(cls, dikt) -> 'AnalyticsComponentQueryCacheServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The analyticsComponentQueryCacheServiceProperties of this AnalyticsComponentQueryCacheServiceProperties.  # noqa: E501
        :rtype: AnalyticsComponentQueryCacheServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_analytics_component_query_cache_size(self) -> ConfigNodePropertyInteger:
        """Gets the cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.


        :return: The cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_analytics_component_query_cache_size

    @cq_analytics_component_query_cache_size.setter
    def cq_analytics_component_query_cache_size(self, cq_analytics_component_query_cache_size: ConfigNodePropertyInteger):
        """Sets the cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.


        :param cq_analytics_component_query_cache_size: The cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.
        :type cq_analytics_component_query_cache_size: ConfigNodePropertyInteger
        """

        self._cq_analytics_component_query_cache_size = cq_analytics_component_query_cache_size
