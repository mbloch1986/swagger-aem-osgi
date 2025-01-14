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


class OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties(object):
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
        'permissions_jr2': 'ConfigNodePropertyDropDown',
        'import_behavior': 'ConfigNodePropertyDropDown',
        'read_paths': 'ConfigNodePropertyArray',
        'administrative_principals': 'ConfigNodePropertyArray',
        'configuration_ranking': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'permissions_jr2': 'permissionsJr2',
        'import_behavior': 'importBehavior',
        'read_paths': 'readPaths',
        'administrative_principals': 'administrativePrincipals',
        'configuration_ranking': 'configurationRanking'
    }

    def __init__(self, permissions_jr2=None, import_behavior=None, read_paths=None, administrative_principals=None, configuration_ranking=None):  # noqa: E501
        """OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties - a model defined in OpenAPI"""  # noqa: E501

        self._permissions_jr2 = None
        self._import_behavior = None
        self._read_paths = None
        self._administrative_principals = None
        self._configuration_ranking = None
        self.discriminator = None

        if permissions_jr2 is not None:
            self.permissions_jr2 = permissions_jr2
        if import_behavior is not None:
            self.import_behavior = import_behavior
        if read_paths is not None:
            self.read_paths = read_paths
        if administrative_principals is not None:
            self.administrative_principals = administrative_principals
        if configuration_ranking is not None:
            self.configuration_ranking = configuration_ranking

    @property
    def permissions_jr2(self):
        """Gets the permissions_jr2 of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501


        :return: The permissions_jr2 of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._permissions_jr2

    @permissions_jr2.setter
    def permissions_jr2(self, permissions_jr2):
        """Sets the permissions_jr2 of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.


        :param permissions_jr2: The permissions_jr2 of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._permissions_jr2 = permissions_jr2

    @property
    def import_behavior(self):
        """Gets the import_behavior of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501


        :return: The import_behavior of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._import_behavior

    @import_behavior.setter
    def import_behavior(self, import_behavior):
        """Sets the import_behavior of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.


        :param import_behavior: The import_behavior of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._import_behavior = import_behavior

    @property
    def read_paths(self):
        """Gets the read_paths of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501


        :return: The read_paths of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._read_paths

    @read_paths.setter
    def read_paths(self, read_paths):
        """Sets the read_paths of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.


        :param read_paths: The read_paths of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._read_paths = read_paths

    @property
    def administrative_principals(self):
        """Gets the administrative_principals of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501


        :return: The administrative_principals of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._administrative_principals

    @administrative_principals.setter
    def administrative_principals(self, administrative_principals):
        """Sets the administrative_principals of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.


        :param administrative_principals: The administrative_principals of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._administrative_principals = administrative_principals

    @property
    def configuration_ranking(self):
        """Gets the configuration_ranking of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501


        :return: The configuration_ranking of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._configuration_ranking

    @configuration_ranking.setter
    def configuration_ranking(self, configuration_ranking):
        """Sets the configuration_ranking of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.


        :param configuration_ranking: The configuration_ranking of this OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._configuration_ranking = configuration_ranking

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
        if not isinstance(other, OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
