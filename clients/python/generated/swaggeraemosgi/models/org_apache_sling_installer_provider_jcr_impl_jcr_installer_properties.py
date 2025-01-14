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


class OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties(object):
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
        'handler_schemes': 'ConfigNodePropertyArray',
        'sling_jcrinstall_folder_name_regexp': 'ConfigNodePropertyString',
        'sling_jcrinstall_folder_max_depth': 'ConfigNodePropertyInteger',
        'sling_jcrinstall_search_path': 'ConfigNodePropertyArray',
        'sling_jcrinstall_new_config_path': 'ConfigNodePropertyString',
        'sling_jcrinstall_signal_path': 'ConfigNodePropertyString',
        'sling_jcrinstall_enable_writeback': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'handler_schemes': 'handler.schemes',
        'sling_jcrinstall_folder_name_regexp': 'sling.jcrinstall.folder.name.regexp',
        'sling_jcrinstall_folder_max_depth': 'sling.jcrinstall.folder.max.depth',
        'sling_jcrinstall_search_path': 'sling.jcrinstall.search.path',
        'sling_jcrinstall_new_config_path': 'sling.jcrinstall.new.config.path',
        'sling_jcrinstall_signal_path': 'sling.jcrinstall.signal.path',
        'sling_jcrinstall_enable_writeback': 'sling.jcrinstall.enable.writeback'
    }

    def __init__(self, handler_schemes=None, sling_jcrinstall_folder_name_regexp=None, sling_jcrinstall_folder_max_depth=None, sling_jcrinstall_search_path=None, sling_jcrinstall_new_config_path=None, sling_jcrinstall_signal_path=None, sling_jcrinstall_enable_writeback=None):  # noqa: E501
        """OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties - a model defined in OpenAPI"""  # noqa: E501

        self._handler_schemes = None
        self._sling_jcrinstall_folder_name_regexp = None
        self._sling_jcrinstall_folder_max_depth = None
        self._sling_jcrinstall_search_path = None
        self._sling_jcrinstall_new_config_path = None
        self._sling_jcrinstall_signal_path = None
        self._sling_jcrinstall_enable_writeback = None
        self.discriminator = None

        if handler_schemes is not None:
            self.handler_schemes = handler_schemes
        if sling_jcrinstall_folder_name_regexp is not None:
            self.sling_jcrinstall_folder_name_regexp = sling_jcrinstall_folder_name_regexp
        if sling_jcrinstall_folder_max_depth is not None:
            self.sling_jcrinstall_folder_max_depth = sling_jcrinstall_folder_max_depth
        if sling_jcrinstall_search_path is not None:
            self.sling_jcrinstall_search_path = sling_jcrinstall_search_path
        if sling_jcrinstall_new_config_path is not None:
            self.sling_jcrinstall_new_config_path = sling_jcrinstall_new_config_path
        if sling_jcrinstall_signal_path is not None:
            self.sling_jcrinstall_signal_path = sling_jcrinstall_signal_path
        if sling_jcrinstall_enable_writeback is not None:
            self.sling_jcrinstall_enable_writeback = sling_jcrinstall_enable_writeback

    @property
    def handler_schemes(self):
        """Gets the handler_schemes of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The handler_schemes of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._handler_schemes

    @handler_schemes.setter
    def handler_schemes(self, handler_schemes):
        """Sets the handler_schemes of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param handler_schemes: The handler_schemes of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._handler_schemes = handler_schemes

    @property
    def sling_jcrinstall_folder_name_regexp(self):
        """Gets the sling_jcrinstall_folder_name_regexp of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_folder_name_regexp of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sling_jcrinstall_folder_name_regexp

    @sling_jcrinstall_folder_name_regexp.setter
    def sling_jcrinstall_folder_name_regexp(self, sling_jcrinstall_folder_name_regexp):
        """Sets the sling_jcrinstall_folder_name_regexp of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_folder_name_regexp: The sling_jcrinstall_folder_name_regexp of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sling_jcrinstall_folder_name_regexp = sling_jcrinstall_folder_name_regexp

    @property
    def sling_jcrinstall_folder_max_depth(self):
        """Gets the sling_jcrinstall_folder_max_depth of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_folder_max_depth of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._sling_jcrinstall_folder_max_depth

    @sling_jcrinstall_folder_max_depth.setter
    def sling_jcrinstall_folder_max_depth(self, sling_jcrinstall_folder_max_depth):
        """Sets the sling_jcrinstall_folder_max_depth of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_folder_max_depth: The sling_jcrinstall_folder_max_depth of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._sling_jcrinstall_folder_max_depth = sling_jcrinstall_folder_max_depth

    @property
    def sling_jcrinstall_search_path(self):
        """Gets the sling_jcrinstall_search_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_search_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._sling_jcrinstall_search_path

    @sling_jcrinstall_search_path.setter
    def sling_jcrinstall_search_path(self, sling_jcrinstall_search_path):
        """Sets the sling_jcrinstall_search_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_search_path: The sling_jcrinstall_search_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._sling_jcrinstall_search_path = sling_jcrinstall_search_path

    @property
    def sling_jcrinstall_new_config_path(self):
        """Gets the sling_jcrinstall_new_config_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_new_config_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sling_jcrinstall_new_config_path

    @sling_jcrinstall_new_config_path.setter
    def sling_jcrinstall_new_config_path(self, sling_jcrinstall_new_config_path):
        """Sets the sling_jcrinstall_new_config_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_new_config_path: The sling_jcrinstall_new_config_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sling_jcrinstall_new_config_path = sling_jcrinstall_new_config_path

    @property
    def sling_jcrinstall_signal_path(self):
        """Gets the sling_jcrinstall_signal_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_signal_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sling_jcrinstall_signal_path

    @sling_jcrinstall_signal_path.setter
    def sling_jcrinstall_signal_path(self, sling_jcrinstall_signal_path):
        """Sets the sling_jcrinstall_signal_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_signal_path: The sling_jcrinstall_signal_path of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sling_jcrinstall_signal_path = sling_jcrinstall_signal_path

    @property
    def sling_jcrinstall_enable_writeback(self):
        """Gets the sling_jcrinstall_enable_writeback of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501


        :return: The sling_jcrinstall_enable_writeback of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._sling_jcrinstall_enable_writeback

    @sling_jcrinstall_enable_writeback.setter
    def sling_jcrinstall_enable_writeback(self, sling_jcrinstall_enable_writeback):
        """Sets the sling_jcrinstall_enable_writeback of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.


        :param sling_jcrinstall_enable_writeback: The sling_jcrinstall_enable_writeback of this OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._sling_jcrinstall_enable_writeback = sling_jcrinstall_enable_writeback

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
        if not isinstance(other, OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
