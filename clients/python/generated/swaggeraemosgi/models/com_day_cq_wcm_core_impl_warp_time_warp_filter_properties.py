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


class ComDayCqWcmCoreImplWarpTimeWarpFilterProperties(object):
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
        'filter_order': 'ConfigNodePropertyString',
        'filter_scope': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'filter_order': 'filter.order',
        'filter_scope': 'filter.scope'
    }

    def __init__(self, filter_order=None, filter_scope=None):  # noqa: E501
        """ComDayCqWcmCoreImplWarpTimeWarpFilterProperties - a model defined in OpenAPI"""  # noqa: E501

        self._filter_order = None
        self._filter_scope = None
        self.discriminator = None

        if filter_order is not None:
            self.filter_order = filter_order
        if filter_scope is not None:
            self.filter_scope = filter_scope

    @property
    def filter_order(self):
        """Gets the filter_order of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501


        :return: The filter_order of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._filter_order

    @filter_order.setter
    def filter_order(self, filter_order):
        """Sets the filter_order of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.


        :param filter_order: The filter_order of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._filter_order = filter_order

    @property
    def filter_scope(self):
        """Gets the filter_scope of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501


        :return: The filter_scope of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._filter_scope

    @filter_scope.setter
    def filter_scope(self, filter_scope):
        """Sets the filter_scope of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.


        :param filter_scope: The filter_scope of this ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._filter_scope = filter_scope

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
        if not isinstance(other, ComDayCqWcmCoreImplWarpTimeWarpFilterProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
