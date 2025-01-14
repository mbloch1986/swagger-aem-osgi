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


class OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties(object):
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
        'name': 'ConfigNodePropertyString',
        'path': 'ConfigNodePropertyString',
        'ignored_paths_patterns': 'ConfigNodePropertyArray',
        'service_name': 'ConfigNodePropertyString',
        'deep': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'name': 'name',
        'path': 'path',
        'ignored_paths_patterns': 'ignoredPathsPatterns',
        'service_name': 'serviceName',
        'deep': 'deep'
    }

    def __init__(self, name=None, path=None, ignored_paths_patterns=None, service_name=None, deep=None):  # noqa: E501
        """OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties - a model defined in OpenAPI"""  # noqa: E501

        self._name = None
        self._path = None
        self._ignored_paths_patterns = None
        self._service_name = None
        self._deep = None
        self.discriminator = None

        if name is not None:
            self.name = name
        if path is not None:
            self.path = path
        if ignored_paths_patterns is not None:
            self.ignored_paths_patterns = ignored_paths_patterns
        if service_name is not None:
            self.service_name = service_name
        if deep is not None:
            self.deep = deep

    @property
    def name(self):
        """Gets the name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501


        :return: The name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.


        :param name: The name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._name = name

    @property
    def path(self):
        """Gets the path of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501


        :return: The path of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path):
        """Sets the path of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.


        :param path: The path of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._path = path

    @property
    def ignored_paths_patterns(self):
        """Gets the ignored_paths_patterns of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501


        :return: The ignored_paths_patterns of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._ignored_paths_patterns

    @ignored_paths_patterns.setter
    def ignored_paths_patterns(self, ignored_paths_patterns):
        """Sets the ignored_paths_patterns of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.


        :param ignored_paths_patterns: The ignored_paths_patterns of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._ignored_paths_patterns = ignored_paths_patterns

    @property
    def service_name(self):
        """Gets the service_name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501


        :return: The service_name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._service_name

    @service_name.setter
    def service_name(self, service_name):
        """Sets the service_name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.


        :param service_name: The service_name of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._service_name = service_name

    @property
    def deep(self):
        """Gets the deep of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501


        :return: The deep of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._deep

    @deep.setter
    def deep(self, deep):
        """Sets the deep of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.


        :param deep: The deep of this OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._deep = deep

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
        if not isinstance(other, OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
