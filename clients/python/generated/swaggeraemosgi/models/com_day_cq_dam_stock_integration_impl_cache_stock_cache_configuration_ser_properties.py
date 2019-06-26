# coding: utf-8

"""
    Adobe Experience Manager OSGI config (AEM) API

    Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: opensource@shinesolutions.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties(object):
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
        'get_cache_expiration_unit': 'ConfigNodePropertyDropDown',
        'get_cache_expiration_value': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'get_cache_expiration_unit': 'getCacheExpirationUnit',
        'get_cache_expiration_value': 'getCacheExpirationValue'
    }

    def __init__(self, get_cache_expiration_unit=None, get_cache_expiration_value=None):  # noqa: E501
        """ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties - a model defined in OpenAPI"""  # noqa: E501

        self._get_cache_expiration_unit = None
        self._get_cache_expiration_value = None
        self.discriminator = None

        if get_cache_expiration_unit is not None:
            self.get_cache_expiration_unit = get_cache_expiration_unit
        if get_cache_expiration_value is not None:
            self.get_cache_expiration_value = get_cache_expiration_value

    @property
    def get_cache_expiration_unit(self):
        """Gets the get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501


        :return: The get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._get_cache_expiration_unit

    @get_cache_expiration_unit.setter
    def get_cache_expiration_unit(self, get_cache_expiration_unit):
        """Sets the get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :param get_cache_expiration_unit: The get_cache_expiration_unit of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._get_cache_expiration_unit = get_cache_expiration_unit

    @property
    def get_cache_expiration_value(self):
        """Gets the get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501


        :return: The get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._get_cache_expiration_value

    @get_cache_expiration_value.setter
    def get_cache_expiration_value(self, get_cache_expiration_value):
        """Sets the get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.


        :param get_cache_expiration_value: The get_cache_expiration_value of this ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._get_cache_expiration_value = get_cache_expiration_value

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
        if not isinstance(other, ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other