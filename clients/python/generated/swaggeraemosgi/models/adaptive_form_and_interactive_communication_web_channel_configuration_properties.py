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


class AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties(object):
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
        'show_placeholder': 'ConfigNodePropertyBoolean',
        'maximum_cache_entries': 'ConfigNodePropertyInteger',
        'af_scripting_compatversion': 'ConfigNodePropertyDropDown',
        'make_file_name_unique': 'ConfigNodePropertyBoolean',
        'generating_compliant_data': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'show_placeholder': 'showPlaceholder',
        'maximum_cache_entries': 'maximumCacheEntries',
        'af_scripting_compatversion': 'af.scripting.compatversion',
        'make_file_name_unique': 'makeFileNameUnique',
        'generating_compliant_data': 'generatingCompliantData'
    }

    def __init__(self, show_placeholder=None, maximum_cache_entries=None, af_scripting_compatversion=None, make_file_name_unique=None, generating_compliant_data=None):  # noqa: E501
        """AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties - a model defined in OpenAPI"""  # noqa: E501

        self._show_placeholder = None
        self._maximum_cache_entries = None
        self._af_scripting_compatversion = None
        self._make_file_name_unique = None
        self._generating_compliant_data = None
        self.discriminator = None

        if show_placeholder is not None:
            self.show_placeholder = show_placeholder
        if maximum_cache_entries is not None:
            self.maximum_cache_entries = maximum_cache_entries
        if af_scripting_compatversion is not None:
            self.af_scripting_compatversion = af_scripting_compatversion
        if make_file_name_unique is not None:
            self.make_file_name_unique = make_file_name_unique
        if generating_compliant_data is not None:
            self.generating_compliant_data = generating_compliant_data

    @property
    def show_placeholder(self):
        """Gets the show_placeholder of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501


        :return: The show_placeholder of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._show_placeholder

    @show_placeholder.setter
    def show_placeholder(self, show_placeholder):
        """Sets the show_placeholder of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.


        :param show_placeholder: The show_placeholder of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._show_placeholder = show_placeholder

    @property
    def maximum_cache_entries(self):
        """Gets the maximum_cache_entries of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501


        :return: The maximum_cache_entries of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._maximum_cache_entries

    @maximum_cache_entries.setter
    def maximum_cache_entries(self, maximum_cache_entries):
        """Sets the maximum_cache_entries of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.


        :param maximum_cache_entries: The maximum_cache_entries of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._maximum_cache_entries = maximum_cache_entries

    @property
    def af_scripting_compatversion(self):
        """Gets the af_scripting_compatversion of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501


        :return: The af_scripting_compatversion of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._af_scripting_compatversion

    @af_scripting_compatversion.setter
    def af_scripting_compatversion(self, af_scripting_compatversion):
        """Sets the af_scripting_compatversion of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.


        :param af_scripting_compatversion: The af_scripting_compatversion of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._af_scripting_compatversion = af_scripting_compatversion

    @property
    def make_file_name_unique(self):
        """Gets the make_file_name_unique of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501


        :return: The make_file_name_unique of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._make_file_name_unique

    @make_file_name_unique.setter
    def make_file_name_unique(self, make_file_name_unique):
        """Sets the make_file_name_unique of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.


        :param make_file_name_unique: The make_file_name_unique of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._make_file_name_unique = make_file_name_unique

    @property
    def generating_compliant_data(self):
        """Gets the generating_compliant_data of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501


        :return: The generating_compliant_data of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._generating_compliant_data

    @generating_compliant_data.setter
    def generating_compliant_data(self, generating_compliant_data):
        """Sets the generating_compliant_data of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.


        :param generating_compliant_data: The generating_compliant_data of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._generating_compliant_data = generating_compliant_data

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
        if not isinstance(other, AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
