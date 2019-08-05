# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, handler_name: ConfigNodePropertyString=None, user_expiration_time: ConfigNodePropertyString=None, user_auto_membership: ConfigNodePropertyArray=None, user_property_mapping: ConfigNodePropertyArray=None, user_path_prefix: ConfigNodePropertyString=None, user_membership_exp_time: ConfigNodePropertyString=None, user_membership_nesting_depth: ConfigNodePropertyInteger=None, user_dynamic_membership: ConfigNodePropertyBoolean=None, user_disable_missing: ConfigNodePropertyBoolean=None, group_expiration_time: ConfigNodePropertyString=None, group_auto_membership: ConfigNodePropertyArray=None, group_property_mapping: ConfigNodePropertyArray=None, group_path_prefix: ConfigNodePropertyString=None, enable_rfc7613_usercase_mapped_profile: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties - a model defined in OpenAPI

        :param handler_name: The handler_name of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type handler_name: ConfigNodePropertyString
        :param user_expiration_time: The user_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_expiration_time: ConfigNodePropertyString
        :param user_auto_membership: The user_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_auto_membership: ConfigNodePropertyArray
        :param user_property_mapping: The user_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_property_mapping: ConfigNodePropertyArray
        :param user_path_prefix: The user_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_path_prefix: ConfigNodePropertyString
        :param user_membership_exp_time: The user_membership_exp_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_membership_exp_time: ConfigNodePropertyString
        :param user_membership_nesting_depth: The user_membership_nesting_depth of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_membership_nesting_depth: ConfigNodePropertyInteger
        :param user_dynamic_membership: The user_dynamic_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_dynamic_membership: ConfigNodePropertyBoolean
        :param user_disable_missing: The user_disable_missing of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type user_disable_missing: ConfigNodePropertyBoolean
        :param group_expiration_time: The group_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type group_expiration_time: ConfigNodePropertyString
        :param group_auto_membership: The group_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type group_auto_membership: ConfigNodePropertyArray
        :param group_property_mapping: The group_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type group_property_mapping: ConfigNodePropertyArray
        :param group_path_prefix: The group_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type group_path_prefix: ConfigNodePropertyString
        :param enable_rfc7613_usercase_mapped_profile: The enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :type enable_rfc7613_usercase_mapped_profile: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'handler_name': ConfigNodePropertyString,
            'user_expiration_time': ConfigNodePropertyString,
            'user_auto_membership': ConfigNodePropertyArray,
            'user_property_mapping': ConfigNodePropertyArray,
            'user_path_prefix': ConfigNodePropertyString,
            'user_membership_exp_time': ConfigNodePropertyString,
            'user_membership_nesting_depth': ConfigNodePropertyInteger,
            'user_dynamic_membership': ConfigNodePropertyBoolean,
            'user_disable_missing': ConfigNodePropertyBoolean,
            'group_expiration_time': ConfigNodePropertyString,
            'group_auto_membership': ConfigNodePropertyArray,
            'group_property_mapping': ConfigNodePropertyArray,
            'group_path_prefix': ConfigNodePropertyString,
            'enable_rfc7613_usercase_mapped_profile': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'handler_name': 'handler.name',
            'user_expiration_time': 'user.expirationTime',
            'user_auto_membership': 'user.autoMembership',
            'user_property_mapping': 'user.propertyMapping',
            'user_path_prefix': 'user.pathPrefix',
            'user_membership_exp_time': 'user.membershipExpTime',
            'user_membership_nesting_depth': 'user.membershipNestingDepth',
            'user_dynamic_membership': 'user.dynamicMembership',
            'user_disable_missing': 'user.disableMissing',
            'group_expiration_time': 'group.expirationTime',
            'group_auto_membership': 'group.autoMembership',
            'group_property_mapping': 'group.propertyMapping',
            'group_path_prefix': 'group.pathPrefix',
            'enable_rfc7613_usercase_mapped_profile': 'enableRFC7613UsercaseMappedProfile'
        }

        self._handler_name = handler_name
        self._user_expiration_time = user_expiration_time
        self._user_auto_membership = user_auto_membership
        self._user_property_mapping = user_property_mapping
        self._user_path_prefix = user_path_prefix
        self._user_membership_exp_time = user_membership_exp_time
        self._user_membership_nesting_depth = user_membership_nesting_depth
        self._user_dynamic_membership = user_dynamic_membership
        self._user_disable_missing = user_disable_missing
        self._group_expiration_time = group_expiration_time
        self._group_auto_membership = group_auto_membership
        self._group_property_mapping = group_property_mapping
        self._group_path_prefix = group_path_prefix
        self._enable_rfc7613_usercase_mapped_profile = enable_rfc7613_usercase_mapped_profile

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def handler_name(self) -> ConfigNodePropertyString:
        """Gets the handler_name of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The handler_name of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._handler_name

    @handler_name.setter
    def handler_name(self, handler_name: ConfigNodePropertyString):
        """Sets the handler_name of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param handler_name: The handler_name of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type handler_name: ConfigNodePropertyString
        """

        self._handler_name = handler_name

    @property
    def user_expiration_time(self) -> ConfigNodePropertyString:
        """Gets the user_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._user_expiration_time

    @user_expiration_time.setter
    def user_expiration_time(self, user_expiration_time: ConfigNodePropertyString):
        """Sets the user_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_expiration_time: The user_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_expiration_time: ConfigNodePropertyString
        """

        self._user_expiration_time = user_expiration_time

    @property
    def user_auto_membership(self) -> ConfigNodePropertyArray:
        """Gets the user_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._user_auto_membership

    @user_auto_membership.setter
    def user_auto_membership(self, user_auto_membership: ConfigNodePropertyArray):
        """Sets the user_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_auto_membership: The user_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_auto_membership: ConfigNodePropertyArray
        """

        self._user_auto_membership = user_auto_membership

    @property
    def user_property_mapping(self) -> ConfigNodePropertyArray:
        """Gets the user_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._user_property_mapping

    @user_property_mapping.setter
    def user_property_mapping(self, user_property_mapping: ConfigNodePropertyArray):
        """Sets the user_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_property_mapping: The user_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_property_mapping: ConfigNodePropertyArray
        """

        self._user_property_mapping = user_property_mapping

    @property
    def user_path_prefix(self) -> ConfigNodePropertyString:
        """Gets the user_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._user_path_prefix

    @user_path_prefix.setter
    def user_path_prefix(self, user_path_prefix: ConfigNodePropertyString):
        """Sets the user_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_path_prefix: The user_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_path_prefix: ConfigNodePropertyString
        """

        self._user_path_prefix = user_path_prefix

    @property
    def user_membership_exp_time(self) -> ConfigNodePropertyString:
        """Gets the user_membership_exp_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_membership_exp_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._user_membership_exp_time

    @user_membership_exp_time.setter
    def user_membership_exp_time(self, user_membership_exp_time: ConfigNodePropertyString):
        """Sets the user_membership_exp_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_membership_exp_time: The user_membership_exp_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_membership_exp_time: ConfigNodePropertyString
        """

        self._user_membership_exp_time = user_membership_exp_time

    @property
    def user_membership_nesting_depth(self) -> ConfigNodePropertyInteger:
        """Gets the user_membership_nesting_depth of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_membership_nesting_depth of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._user_membership_nesting_depth

    @user_membership_nesting_depth.setter
    def user_membership_nesting_depth(self, user_membership_nesting_depth: ConfigNodePropertyInteger):
        """Sets the user_membership_nesting_depth of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_membership_nesting_depth: The user_membership_nesting_depth of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_membership_nesting_depth: ConfigNodePropertyInteger
        """

        self._user_membership_nesting_depth = user_membership_nesting_depth

    @property
    def user_dynamic_membership(self) -> ConfigNodePropertyBoolean:
        """Gets the user_dynamic_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_dynamic_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._user_dynamic_membership

    @user_dynamic_membership.setter
    def user_dynamic_membership(self, user_dynamic_membership: ConfigNodePropertyBoolean):
        """Sets the user_dynamic_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_dynamic_membership: The user_dynamic_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_dynamic_membership: ConfigNodePropertyBoolean
        """

        self._user_dynamic_membership = user_dynamic_membership

    @property
    def user_disable_missing(self) -> ConfigNodePropertyBoolean:
        """Gets the user_disable_missing of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The user_disable_missing of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._user_disable_missing

    @user_disable_missing.setter
    def user_disable_missing(self, user_disable_missing: ConfigNodePropertyBoolean):
        """Sets the user_disable_missing of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param user_disable_missing: The user_disable_missing of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type user_disable_missing: ConfigNodePropertyBoolean
        """

        self._user_disable_missing = user_disable_missing

    @property
    def group_expiration_time(self) -> ConfigNodePropertyString:
        """Gets the group_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The group_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._group_expiration_time

    @group_expiration_time.setter
    def group_expiration_time(self, group_expiration_time: ConfigNodePropertyString):
        """Sets the group_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param group_expiration_time: The group_expiration_time of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type group_expiration_time: ConfigNodePropertyString
        """

        self._group_expiration_time = group_expiration_time

    @property
    def group_auto_membership(self) -> ConfigNodePropertyArray:
        """Gets the group_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The group_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._group_auto_membership

    @group_auto_membership.setter
    def group_auto_membership(self, group_auto_membership: ConfigNodePropertyArray):
        """Sets the group_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param group_auto_membership: The group_auto_membership of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type group_auto_membership: ConfigNodePropertyArray
        """

        self._group_auto_membership = group_auto_membership

    @property
    def group_property_mapping(self) -> ConfigNodePropertyArray:
        """Gets the group_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The group_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._group_property_mapping

    @group_property_mapping.setter
    def group_property_mapping(self, group_property_mapping: ConfigNodePropertyArray):
        """Sets the group_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param group_property_mapping: The group_property_mapping of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type group_property_mapping: ConfigNodePropertyArray
        """

        self._group_property_mapping = group_property_mapping

    @property
    def group_path_prefix(self) -> ConfigNodePropertyString:
        """Gets the group_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The group_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._group_path_prefix

    @group_path_prefix.setter
    def group_path_prefix(self, group_path_prefix: ConfigNodePropertyString):
        """Sets the group_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param group_path_prefix: The group_path_prefix of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type group_path_prefix: ConfigNodePropertyString
        """

        self._group_path_prefix = group_path_prefix

    @property
    def enable_rfc7613_usercase_mapped_profile(self) -> ConfigNodePropertyBoolean:
        """Gets the enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :return: The enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_rfc7613_usercase_mapped_profile

    @enable_rfc7613_usercase_mapped_profile.setter
    def enable_rfc7613_usercase_mapped_profile(self, enable_rfc7613_usercase_mapped_profile: ConfigNodePropertyBoolean):
        """Sets the enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.


        :param enable_rfc7613_usercase_mapped_profile: The enable_rfc7613_usercase_mapped_profile of this OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.
        :type enable_rfc7613_usercase_mapped_profile: ConfigNodePropertyBoolean
        """

        self._enable_rfc7613_usercase_mapped_profile = enable_rfc7613_usercase_mapped_profile