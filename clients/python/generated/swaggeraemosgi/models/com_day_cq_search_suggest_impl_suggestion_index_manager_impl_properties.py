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


class ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties(object):
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
        'path_builder_target': 'ConfigNodePropertyString',
        'suggest_basepath': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'path_builder_target': 'pathBuilder.target',
        'suggest_basepath': 'suggest.basepath'
    }

    def __init__(self, path_builder_target=None, suggest_basepath=None):  # noqa: E501
        """ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._path_builder_target = None
        self._suggest_basepath = None
        self.discriminator = None

        if path_builder_target is not None:
            self.path_builder_target = path_builder_target
        if suggest_basepath is not None:
            self.suggest_basepath = suggest_basepath

    @property
    def path_builder_target(self):
        """Gets the path_builder_target of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501


        :return: The path_builder_target of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._path_builder_target

    @path_builder_target.setter
    def path_builder_target(self, path_builder_target):
        """Sets the path_builder_target of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.


        :param path_builder_target: The path_builder_target of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._path_builder_target = path_builder_target

    @property
    def suggest_basepath(self):
        """Gets the suggest_basepath of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501


        :return: The suggest_basepath of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._suggest_basepath

    @suggest_basepath.setter
    def suggest_basepath(self, suggest_basepath):
        """Sets the suggest_basepath of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.


        :param suggest_basepath: The suggest_basepath of this ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._suggest_basepath = suggest_basepath

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
        if not isinstance(other, ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
