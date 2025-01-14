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


class OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties(object):
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
        'users_path': 'ConfigNodePropertyString',
        'groups_path': 'ConfigNodePropertyString',
        'system_relative_path': 'ConfigNodePropertyString',
        'default_depth': 'ConfigNodePropertyInteger',
        'import_behavior': 'ConfigNodePropertyDropDown',
        'password_hash_algorithm': 'ConfigNodePropertyString',
        'password_hash_iterations': 'ConfigNodePropertyInteger',
        'password_salt_size': 'ConfigNodePropertyInteger',
        'omit_admin_pw': 'ConfigNodePropertyBoolean',
        'support_auto_save': 'ConfigNodePropertyBoolean',
        'password_max_age': 'ConfigNodePropertyInteger',
        'initial_password_change': 'ConfigNodePropertyBoolean',
        'password_history_size': 'ConfigNodePropertyInteger',
        'password_expiry_for_admin': 'ConfigNodePropertyBoolean',
        'cache_expiration': 'ConfigNodePropertyInteger',
        'enable_rfc7613_usercase_mapped_profile': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'users_path': 'usersPath',
        'groups_path': 'groupsPath',
        'system_relative_path': 'systemRelativePath',
        'default_depth': 'defaultDepth',
        'import_behavior': 'importBehavior',
        'password_hash_algorithm': 'passwordHashAlgorithm',
        'password_hash_iterations': 'passwordHashIterations',
        'password_salt_size': 'passwordSaltSize',
        'omit_admin_pw': 'omitAdminPw',
        'support_auto_save': 'supportAutoSave',
        'password_max_age': 'passwordMaxAge',
        'initial_password_change': 'initialPasswordChange',
        'password_history_size': 'passwordHistorySize',
        'password_expiry_for_admin': 'passwordExpiryForAdmin',
        'cache_expiration': 'cacheExpiration',
        'enable_rfc7613_usercase_mapped_profile': 'enableRFC7613UsercaseMappedProfile'
    }

    def __init__(self, users_path=None, groups_path=None, system_relative_path=None, default_depth=None, import_behavior=None, password_hash_algorithm=None, password_hash_iterations=None, password_salt_size=None, omit_admin_pw=None, support_auto_save=None, password_max_age=None, initial_password_change=None, password_history_size=None, password_expiry_for_admin=None, cache_expiration=None, enable_rfc7613_usercase_mapped_profile=None):  # noqa: E501
        """OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._users_path = None
        self._groups_path = None
        self._system_relative_path = None
        self._default_depth = None
        self._import_behavior = None
        self._password_hash_algorithm = None
        self._password_hash_iterations = None
        self._password_salt_size = None
        self._omit_admin_pw = None
        self._support_auto_save = None
        self._password_max_age = None
        self._initial_password_change = None
        self._password_history_size = None
        self._password_expiry_for_admin = None
        self._cache_expiration = None
        self._enable_rfc7613_usercase_mapped_profile = None
        self.discriminator = None

        if users_path is not None:
            self.users_path = users_path
        if groups_path is not None:
            self.groups_path = groups_path
        if system_relative_path is not None:
            self.system_relative_path = system_relative_path
        if default_depth is not None:
            self.default_depth = default_depth
        if import_behavior is not None:
            self.import_behavior = import_behavior
        if password_hash_algorithm is not None:
            self.password_hash_algorithm = password_hash_algorithm
        if password_hash_iterations is not None:
            self.password_hash_iterations = password_hash_iterations
        if password_salt_size is not None:
            self.password_salt_size = password_salt_size
        if omit_admin_pw is not None:
            self.omit_admin_pw = omit_admin_pw
        if support_auto_save is not None:
            self.support_auto_save = support_auto_save
        if password_max_age is not None:
            self.password_max_age = password_max_age
        if initial_password_change is not None:
            self.initial_password_change = initial_password_change
        if password_history_size is not None:
            self.password_history_size = password_history_size
        if password_expiry_for_admin is not None:
            self.password_expiry_for_admin = password_expiry_for_admin
        if cache_expiration is not None:
            self.cache_expiration = cache_expiration
        if enable_rfc7613_usercase_mapped_profile is not None:
            self.enable_rfc7613_usercase_mapped_profile = enable_rfc7613_usercase_mapped_profile

    @property
    def users_path(self):
        """Gets the users_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The users_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._users_path

    @users_path.setter
    def users_path(self, users_path):
        """Sets the users_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param users_path: The users_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._users_path = users_path

    @property
    def groups_path(self):
        """Gets the groups_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The groups_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._groups_path

    @groups_path.setter
    def groups_path(self, groups_path):
        """Sets the groups_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param groups_path: The groups_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._groups_path = groups_path

    @property
    def system_relative_path(self):
        """Gets the system_relative_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The system_relative_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._system_relative_path

    @system_relative_path.setter
    def system_relative_path(self, system_relative_path):
        """Sets the system_relative_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param system_relative_path: The system_relative_path of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._system_relative_path = system_relative_path

    @property
    def default_depth(self):
        """Gets the default_depth of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The default_depth of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._default_depth

    @default_depth.setter
    def default_depth(self, default_depth):
        """Sets the default_depth of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param default_depth: The default_depth of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._default_depth = default_depth

    @property
    def import_behavior(self):
        """Gets the import_behavior of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The import_behavior of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._import_behavior

    @import_behavior.setter
    def import_behavior(self, import_behavior):
        """Sets the import_behavior of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param import_behavior: The import_behavior of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._import_behavior = import_behavior

    @property
    def password_hash_algorithm(self):
        """Gets the password_hash_algorithm of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_hash_algorithm of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._password_hash_algorithm

    @password_hash_algorithm.setter
    def password_hash_algorithm(self, password_hash_algorithm):
        """Sets the password_hash_algorithm of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_hash_algorithm: The password_hash_algorithm of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._password_hash_algorithm = password_hash_algorithm

    @property
    def password_hash_iterations(self):
        """Gets the password_hash_iterations of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_hash_iterations of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._password_hash_iterations

    @password_hash_iterations.setter
    def password_hash_iterations(self, password_hash_iterations):
        """Sets the password_hash_iterations of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_hash_iterations: The password_hash_iterations of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._password_hash_iterations = password_hash_iterations

    @property
    def password_salt_size(self):
        """Gets the password_salt_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_salt_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._password_salt_size

    @password_salt_size.setter
    def password_salt_size(self, password_salt_size):
        """Sets the password_salt_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_salt_size: The password_salt_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._password_salt_size = password_salt_size

    @property
    def omit_admin_pw(self):
        """Gets the omit_admin_pw of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The omit_admin_pw of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._omit_admin_pw

    @omit_admin_pw.setter
    def omit_admin_pw(self, omit_admin_pw):
        """Sets the omit_admin_pw of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param omit_admin_pw: The omit_admin_pw of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._omit_admin_pw = omit_admin_pw

    @property
    def support_auto_save(self):
        """Gets the support_auto_save of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The support_auto_save of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._support_auto_save

    @support_auto_save.setter
    def support_auto_save(self, support_auto_save):
        """Sets the support_auto_save of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param support_auto_save: The support_auto_save of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._support_auto_save = support_auto_save

    @property
    def password_max_age(self):
        """Gets the password_max_age of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_max_age of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._password_max_age

    @password_max_age.setter
    def password_max_age(self, password_max_age):
        """Sets the password_max_age of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_max_age: The password_max_age of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._password_max_age = password_max_age

    @property
    def initial_password_change(self):
        """Gets the initial_password_change of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The initial_password_change of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._initial_password_change

    @initial_password_change.setter
    def initial_password_change(self, initial_password_change):
        """Sets the initial_password_change of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param initial_password_change: The initial_password_change of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._initial_password_change = initial_password_change

    @property
    def password_history_size(self):
        """Gets the password_history_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_history_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._password_history_size

    @password_history_size.setter
    def password_history_size(self, password_history_size):
        """Sets the password_history_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_history_size: The password_history_size of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._password_history_size = password_history_size

    @property
    def password_expiry_for_admin(self):
        """Gets the password_expiry_for_admin of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The password_expiry_for_admin of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._password_expiry_for_admin

    @password_expiry_for_admin.setter
    def password_expiry_for_admin(self, password_expiry_for_admin):
        """Sets the password_expiry_for_admin of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param password_expiry_for_admin: The password_expiry_for_admin of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._password_expiry_for_admin = password_expiry_for_admin

    @property
    def cache_expiration(self):
        """Gets the cache_expiration of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The cache_expiration of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._cache_expiration

    @cache_expiration.setter
    def cache_expiration(self, cache_expiration):
        """Sets the cache_expiration of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param cache_expiration: The cache_expiration of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._cache_expiration = cache_expiration

    @property
    def enable_rfc7613_usercase_mapped_profile(self):
        """Gets the enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501


        :return: The enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_rfc7613_usercase_mapped_profile

    @enable_rfc7613_usercase_mapped_profile.setter
    def enable_rfc7613_usercase_mapped_profile(self, enable_rfc7613_usercase_mapped_profile):
        """Sets the enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.


        :param enable_rfc7613_usercase_mapped_profile: The enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._enable_rfc7613_usercase_mapped_profile = enable_rfc7613_usercase_mapped_profile

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
        if not isinstance(other, OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
