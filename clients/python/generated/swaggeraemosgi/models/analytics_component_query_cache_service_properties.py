# coding: utf-8

"""
    Adobe Experience Manager OSGI config (AEM) API

    Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API  # noqa: E501

    OpenAPI spec version: 1.0.0-pre.0
    Contact: opensource@shinesolutions.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class AnalyticsComponentQueryCacheServiceProperties(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'cq_analytics_component_query_cache_size': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'cq_analytics_component_query_cache_size': 'cq.analytics.component.query.cache.size'
    }

    def __init__(self, cq_analytics_component_query_cache_size=None):  # noqa: E501
        """AnalyticsComponentQueryCacheServiceProperties - a model defined in OpenAPI"""  # noqa: E501

        self._cq_analytics_component_query_cache_size = None
        self.discriminator = None

        if cq_analytics_component_query_cache_size is not None:
            self.cq_analytics_component_query_cache_size = cq_analytics_component_query_cache_size

    @property
    def cq_analytics_component_query_cache_size(self):
        """Gets the cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.  # noqa: E501


        :return: The cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_analytics_component_query_cache_size

    @cq_analytics_component_query_cache_size.setter
    def cq_analytics_component_query_cache_size(self, cq_analytics_component_query_cache_size):
        """Sets the cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.


        :param cq_analytics_component_query_cache_size: The cq_analytics_component_query_cache_size of this AnalyticsComponentQueryCacheServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._cq_analytics_component_query_cache_size = cq_analytics_component_query_cache_size

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, AnalyticsComponentQueryCacheServiceProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
