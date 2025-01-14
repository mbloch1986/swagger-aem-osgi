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


class ComDayCqWcmCoreImplVersionManagerImplProperties(object):
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
        'versionmanager_create_version_on_activation': 'ConfigNodePropertyBoolean',
        'versionmanager_purging_enabled': 'ConfigNodePropertyBoolean',
        'versionmanager_purge_paths': 'ConfigNodePropertyArray',
        'versionmanager_iv_paths': 'ConfigNodePropertyArray',
        'versionmanager_max_age_days': 'ConfigNodePropertyInteger',
        'versionmanager_max_number_versions': 'ConfigNodePropertyInteger',
        'versionmanager_min_number_versions': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'versionmanager_create_version_on_activation': 'versionmanager.createVersionOnActivation',
        'versionmanager_purging_enabled': 'versionmanager.purgingEnabled',
        'versionmanager_purge_paths': 'versionmanager.purgePaths',
        'versionmanager_iv_paths': 'versionmanager.ivPaths',
        'versionmanager_max_age_days': 'versionmanager.maxAgeDays',
        'versionmanager_max_number_versions': 'versionmanager.maxNumberVersions',
        'versionmanager_min_number_versions': 'versionmanager.minNumberVersions'
    }

    def __init__(self, versionmanager_create_version_on_activation=None, versionmanager_purging_enabled=None, versionmanager_purge_paths=None, versionmanager_iv_paths=None, versionmanager_max_age_days=None, versionmanager_max_number_versions=None, versionmanager_min_number_versions=None):  # noqa: E501
        """ComDayCqWcmCoreImplVersionManagerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._versionmanager_create_version_on_activation = None
        self._versionmanager_purging_enabled = None
        self._versionmanager_purge_paths = None
        self._versionmanager_iv_paths = None
        self._versionmanager_max_age_days = None
        self._versionmanager_max_number_versions = None
        self._versionmanager_min_number_versions = None
        self.discriminator = None

        if versionmanager_create_version_on_activation is not None:
            self.versionmanager_create_version_on_activation = versionmanager_create_version_on_activation
        if versionmanager_purging_enabled is not None:
            self.versionmanager_purging_enabled = versionmanager_purging_enabled
        if versionmanager_purge_paths is not None:
            self.versionmanager_purge_paths = versionmanager_purge_paths
        if versionmanager_iv_paths is not None:
            self.versionmanager_iv_paths = versionmanager_iv_paths
        if versionmanager_max_age_days is not None:
            self.versionmanager_max_age_days = versionmanager_max_age_days
        if versionmanager_max_number_versions is not None:
            self.versionmanager_max_number_versions = versionmanager_max_number_versions
        if versionmanager_min_number_versions is not None:
            self.versionmanager_min_number_versions = versionmanager_min_number_versions

    @property
    def versionmanager_create_version_on_activation(self):
        """Gets the versionmanager_create_version_on_activation of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_create_version_on_activation of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._versionmanager_create_version_on_activation

    @versionmanager_create_version_on_activation.setter
    def versionmanager_create_version_on_activation(self, versionmanager_create_version_on_activation):
        """Sets the versionmanager_create_version_on_activation of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_create_version_on_activation: The versionmanager_create_version_on_activation of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._versionmanager_create_version_on_activation = versionmanager_create_version_on_activation

    @property
    def versionmanager_purging_enabled(self):
        """Gets the versionmanager_purging_enabled of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_purging_enabled of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._versionmanager_purging_enabled

    @versionmanager_purging_enabled.setter
    def versionmanager_purging_enabled(self, versionmanager_purging_enabled):
        """Sets the versionmanager_purging_enabled of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_purging_enabled: The versionmanager_purging_enabled of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._versionmanager_purging_enabled = versionmanager_purging_enabled

    @property
    def versionmanager_purge_paths(self):
        """Gets the versionmanager_purge_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_purge_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._versionmanager_purge_paths

    @versionmanager_purge_paths.setter
    def versionmanager_purge_paths(self, versionmanager_purge_paths):
        """Sets the versionmanager_purge_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_purge_paths: The versionmanager_purge_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._versionmanager_purge_paths = versionmanager_purge_paths

    @property
    def versionmanager_iv_paths(self):
        """Gets the versionmanager_iv_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_iv_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._versionmanager_iv_paths

    @versionmanager_iv_paths.setter
    def versionmanager_iv_paths(self, versionmanager_iv_paths):
        """Sets the versionmanager_iv_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_iv_paths: The versionmanager_iv_paths of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._versionmanager_iv_paths = versionmanager_iv_paths

    @property
    def versionmanager_max_age_days(self):
        """Gets the versionmanager_max_age_days of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_max_age_days of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._versionmanager_max_age_days

    @versionmanager_max_age_days.setter
    def versionmanager_max_age_days(self, versionmanager_max_age_days):
        """Sets the versionmanager_max_age_days of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_max_age_days: The versionmanager_max_age_days of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._versionmanager_max_age_days = versionmanager_max_age_days

    @property
    def versionmanager_max_number_versions(self):
        """Gets the versionmanager_max_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_max_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._versionmanager_max_number_versions

    @versionmanager_max_number_versions.setter
    def versionmanager_max_number_versions(self, versionmanager_max_number_versions):
        """Sets the versionmanager_max_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_max_number_versions: The versionmanager_max_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._versionmanager_max_number_versions = versionmanager_max_number_versions

    @property
    def versionmanager_min_number_versions(self):
        """Gets the versionmanager_min_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501


        :return: The versionmanager_min_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._versionmanager_min_number_versions

    @versionmanager_min_number_versions.setter
    def versionmanager_min_number_versions(self, versionmanager_min_number_versions):
        """Sets the versionmanager_min_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.


        :param versionmanager_min_number_versions: The versionmanager_min_number_versions of this ComDayCqWcmCoreImplVersionManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._versionmanager_min_number_versions = versionmanager_min_number_versions

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
        if not isinstance(other, ComDayCqWcmCoreImplVersionManagerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
