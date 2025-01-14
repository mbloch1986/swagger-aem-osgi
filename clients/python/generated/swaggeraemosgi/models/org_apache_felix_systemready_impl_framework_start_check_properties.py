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


class OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties(object):
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
        'timeout': 'ConfigNodePropertyInteger',
        'target_start_level': 'ConfigNodePropertyInteger',
        'target_start_level_prop_name': 'ConfigNodePropertyString',
        'type': 'ConfigNodePropertyDropDown'
    }

    attribute_map = {
        'timeout': 'timeout',
        'target_start_level': 'target.start.level',
        'target_start_level_prop_name': 'target.start.level.prop.name',
        'type': 'type'
    }

    def __init__(self, timeout=None, target_start_level=None, target_start_level_prop_name=None, type=None):  # noqa: E501
        """OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties - a model defined in OpenAPI"""  # noqa: E501

        self._timeout = None
        self._target_start_level = None
        self._target_start_level_prop_name = None
        self._type = None
        self.discriminator = None

        if timeout is not None:
            self.timeout = timeout
        if target_start_level is not None:
            self.target_start_level = target_start_level
        if target_start_level_prop_name is not None:
            self.target_start_level_prop_name = target_start_level_prop_name
        if type is not None:
            self.type = type

    @property
    def timeout(self):
        """Gets the timeout of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501


        :return: The timeout of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._timeout

    @timeout.setter
    def timeout(self, timeout):
        """Sets the timeout of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.


        :param timeout: The timeout of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._timeout = timeout

    @property
    def target_start_level(self):
        """Gets the target_start_level of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501


        :return: The target_start_level of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._target_start_level

    @target_start_level.setter
    def target_start_level(self, target_start_level):
        """Sets the target_start_level of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.


        :param target_start_level: The target_start_level of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._target_start_level = target_start_level

    @property
    def target_start_level_prop_name(self):
        """Gets the target_start_level_prop_name of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501


        :return: The target_start_level_prop_name of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._target_start_level_prop_name

    @target_start_level_prop_name.setter
    def target_start_level_prop_name(self, target_start_level_prop_name):
        """Sets the target_start_level_prop_name of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.


        :param target_start_level_prop_name: The target_start_level_prop_name of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._target_start_level_prop_name = target_start_level_prop_name

    @property
    def type(self):
        """Gets the type of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501


        :return: The type of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.


        :param type: The type of this OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._type = type

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
        if not isinstance(other, OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
