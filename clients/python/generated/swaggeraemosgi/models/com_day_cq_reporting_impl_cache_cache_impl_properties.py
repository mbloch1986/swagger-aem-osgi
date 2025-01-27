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


class ComDayCqReportingImplCacheCacheImplProperties(object):
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
        'repcache_enable': 'ConfigNodePropertyBoolean',
        'repcache_ttl': 'ConfigNodePropertyInteger',
        'repcache_max': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'repcache_enable': 'repcache.enable',
        'repcache_ttl': 'repcache.ttl',
        'repcache_max': 'repcache.max'
    }

    def __init__(self, repcache_enable=None, repcache_ttl=None, repcache_max=None):  # noqa: E501
        """ComDayCqReportingImplCacheCacheImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._repcache_enable = None
        self._repcache_ttl = None
        self._repcache_max = None
        self.discriminator = None

        if repcache_enable is not None:
            self.repcache_enable = repcache_enable
        if repcache_ttl is not None:
            self.repcache_ttl = repcache_ttl
        if repcache_max is not None:
            self.repcache_max = repcache_max

    @property
    def repcache_enable(self):
        """Gets the repcache_enable of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501


        :return: The repcache_enable of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._repcache_enable

    @repcache_enable.setter
    def repcache_enable(self, repcache_enable):
        """Sets the repcache_enable of this ComDayCqReportingImplCacheCacheImplProperties.


        :param repcache_enable: The repcache_enable of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._repcache_enable = repcache_enable

    @property
    def repcache_ttl(self):
        """Gets the repcache_ttl of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501


        :return: The repcache_ttl of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._repcache_ttl

    @repcache_ttl.setter
    def repcache_ttl(self, repcache_ttl):
        """Sets the repcache_ttl of this ComDayCqReportingImplCacheCacheImplProperties.


        :param repcache_ttl: The repcache_ttl of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._repcache_ttl = repcache_ttl

    @property
    def repcache_max(self):
        """Gets the repcache_max of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501


        :return: The repcache_max of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._repcache_max

    @repcache_max.setter
    def repcache_max(self, repcache_max):
        """Sets the repcache_max of this ComDayCqReportingImplCacheCacheImplProperties.


        :param repcache_max: The repcache_max of this ComDayCqReportingImplCacheCacheImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._repcache_max = repcache_max

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
        if not isinstance(other, ComDayCqReportingImplCacheCacheImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
