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


class OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties(object):
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
        'enabled': 'ConfigNodePropertyBoolean',
        'config_property_inheritance_property_names': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'enabled': 'enabled',
        'config_property_inheritance_property_names': 'configPropertyInheritancePropertyNames'
    }

    def __init__(self, enabled=None, config_property_inheritance_property_names=None):  # noqa: E501
        """OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties - a model defined in OpenAPI"""  # noqa: E501

        self._enabled = None
        self._config_property_inheritance_property_names = None
        self.discriminator = None

        if enabled is not None:
            self.enabled = enabled
        if config_property_inheritance_property_names is not None:
            self.config_property_inheritance_property_names = config_property_inheritance_property_names

    @property
    def enabled(self):
        """Gets the enabled of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501


        :return: The enabled of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled):
        """Sets the enabled of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.


        :param enabled: The enabled of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._enabled = enabled

    @property
    def config_property_inheritance_property_names(self):
        """Gets the config_property_inheritance_property_names of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501


        :return: The config_property_inheritance_property_names of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._config_property_inheritance_property_names

    @config_property_inheritance_property_names.setter
    def config_property_inheritance_property_names(self, config_property_inheritance_property_names):
        """Sets the config_property_inheritance_property_names of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.


        :param config_property_inheritance_property_names: The config_property_inheritance_property_names of this OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._config_property_inheritance_property_names = config_property_inheritance_property_names

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
        if not isinstance(other, OrgApacheSlingCaconfigImplDefDefaultConfigurationInheritanceStraProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other