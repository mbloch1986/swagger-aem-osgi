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


class ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties(object):
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
        'illegal_char_mapping': 'ConfigNodePropertyString',
        'page_sub_tree_activation_check': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'illegal_char_mapping': 'illegalCharMapping',
        'page_sub_tree_activation_check': 'pageSubTreeActivationCheck'
    }

    def __init__(self, illegal_char_mapping=None, page_sub_tree_activation_check=None):  # noqa: E501
        """ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._illegal_char_mapping = None
        self._page_sub_tree_activation_check = None
        self.discriminator = None

        if illegal_char_mapping is not None:
            self.illegal_char_mapping = illegal_char_mapping
        if page_sub_tree_activation_check is not None:
            self.page_sub_tree_activation_check = page_sub_tree_activation_check

    @property
    def illegal_char_mapping(self):
        """Gets the illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501


        :return: The illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._illegal_char_mapping

    @illegal_char_mapping.setter
    def illegal_char_mapping(self, illegal_char_mapping):
        """Sets the illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :param illegal_char_mapping: The illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._illegal_char_mapping = illegal_char_mapping

    @property
    def page_sub_tree_activation_check(self):
        """Gets the page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501


        :return: The page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._page_sub_tree_activation_check

    @page_sub_tree_activation_check.setter
    def page_sub_tree_activation_check(self, page_sub_tree_activation_check):
        """Sets the page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :param page_sub_tree_activation_check: The page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._page_sub_tree_activation_check = page_sub_tree_activation_check

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
        if not isinstance(other, ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
