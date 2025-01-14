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


class GuideLocalizationServiceProperties(object):
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
        'supported_locales': 'ConfigNodePropertyArray',
        'localizable_properties': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'supported_locales': 'supportedLocales',
        'localizable_properties': 'Localizable Properties'
    }

    def __init__(self, supported_locales=None, localizable_properties=None):  # noqa: E501
        """GuideLocalizationServiceProperties - a model defined in OpenAPI"""  # noqa: E501

        self._supported_locales = None
        self._localizable_properties = None
        self.discriminator = None

        if supported_locales is not None:
            self.supported_locales = supported_locales
        if localizable_properties is not None:
            self.localizable_properties = localizable_properties

    @property
    def supported_locales(self):
        """Gets the supported_locales of this GuideLocalizationServiceProperties.  # noqa: E501


        :return: The supported_locales of this GuideLocalizationServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._supported_locales

    @supported_locales.setter
    def supported_locales(self, supported_locales):
        """Sets the supported_locales of this GuideLocalizationServiceProperties.


        :param supported_locales: The supported_locales of this GuideLocalizationServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._supported_locales = supported_locales

    @property
    def localizable_properties(self):
        """Gets the localizable_properties of this GuideLocalizationServiceProperties.  # noqa: E501


        :return: The localizable_properties of this GuideLocalizationServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._localizable_properties

    @localizable_properties.setter
    def localizable_properties(self, localizable_properties):
        """Sets the localizable_properties of this GuideLocalizationServiceProperties.


        :param localizable_properties: The localizable_properties of this GuideLocalizationServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._localizable_properties = localizable_properties

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
        if not isinstance(other, GuideLocalizationServiceProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
