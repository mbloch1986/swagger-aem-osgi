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


class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties(object):
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
        'query_limit_in_memory': 'ConfigNodePropertyInteger',
        'query_limit_reads': 'ConfigNodePropertyInteger',
        'query_fail_traversal': 'ConfigNodePropertyBoolean',
        'fast_query_size': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'query_limit_in_memory': 'queryLimitInMemory',
        'query_limit_reads': 'queryLimitReads',
        'query_fail_traversal': 'queryFailTraversal',
        'fast_query_size': 'fastQuerySize'
    }

    def __init__(self, query_limit_in_memory=None, query_limit_reads=None, query_fail_traversal=None, fast_query_size=None):  # noqa: E501
        """OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties - a model defined in OpenAPI"""  # noqa: E501

        self._query_limit_in_memory = None
        self._query_limit_reads = None
        self._query_fail_traversal = None
        self._fast_query_size = None
        self.discriminator = None

        if query_limit_in_memory is not None:
            self.query_limit_in_memory = query_limit_in_memory
        if query_limit_reads is not None:
            self.query_limit_reads = query_limit_reads
        if query_fail_traversal is not None:
            self.query_fail_traversal = query_fail_traversal
        if fast_query_size is not None:
            self.fast_query_size = fast_query_size

    @property
    def query_limit_in_memory(self):
        """Gets the query_limit_in_memory of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501


        :return: The query_limit_in_memory of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._query_limit_in_memory

    @query_limit_in_memory.setter
    def query_limit_in_memory(self, query_limit_in_memory):
        """Sets the query_limit_in_memory of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.


        :param query_limit_in_memory: The query_limit_in_memory of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._query_limit_in_memory = query_limit_in_memory

    @property
    def query_limit_reads(self):
        """Gets the query_limit_reads of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501


        :return: The query_limit_reads of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._query_limit_reads

    @query_limit_reads.setter
    def query_limit_reads(self, query_limit_reads):
        """Sets the query_limit_reads of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.


        :param query_limit_reads: The query_limit_reads of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._query_limit_reads = query_limit_reads

    @property
    def query_fail_traversal(self):
        """Gets the query_fail_traversal of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501


        :return: The query_fail_traversal of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._query_fail_traversal

    @query_fail_traversal.setter
    def query_fail_traversal(self, query_fail_traversal):
        """Sets the query_fail_traversal of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.


        :param query_fail_traversal: The query_fail_traversal of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._query_fail_traversal = query_fail_traversal

    @property
    def fast_query_size(self):
        """Gets the fast_query_size of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501


        :return: The fast_query_size of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._fast_query_size

    @fast_query_size.setter
    def fast_query_size(self, fast_query_size):
        """Sets the fast_query_size of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.


        :param fast_query_size: The fast_query_size of this OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._fast_query_size = fast_query_size

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
        if not isinstance(other, OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
