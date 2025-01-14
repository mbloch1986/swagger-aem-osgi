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


class ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties(object):
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
        'default_connector_name': 'ConfigNodePropertyString',
        'default_category': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'default_connector_name': 'defaultConnectorName',
        'default_category': 'defaultCategory'
    }

    def __init__(self, default_connector_name=None, default_category=None):  # noqa: E501
        """ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._default_connector_name = None
        self._default_category = None
        self.discriminator = None

        if default_connector_name is not None:
            self.default_connector_name = default_connector_name
        if default_category is not None:
            self.default_category = default_category

    @property
    def default_connector_name(self):
        """Gets the default_connector_name of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501


        :return: The default_connector_name of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._default_connector_name

    @default_connector_name.setter
    def default_connector_name(self, default_connector_name):
        """Sets the default_connector_name of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.


        :param default_connector_name: The default_connector_name of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._default_connector_name = default_connector_name

    @property
    def default_category(self):
        """Gets the default_category of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501


        :return: The default_category of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._default_category

    @default_category.setter
    def default_category(self, default_category):
        """Sets the default_category of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.


        :param default_category: The default_category of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._default_category = default_category

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
        if not isinstance(other, ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
