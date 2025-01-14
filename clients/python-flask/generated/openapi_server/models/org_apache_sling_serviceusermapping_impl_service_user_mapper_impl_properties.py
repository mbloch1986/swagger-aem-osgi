# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, user_mapping: ConfigNodePropertyArray=None, user_default: ConfigNodePropertyString=None, user_enable_default_mapping: ConfigNodePropertyBoolean=None, require_validation: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties - a model defined in OpenAPI

        :param user_mapping: The user_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.  # noqa: E501
        :type user_mapping: ConfigNodePropertyArray
        :param user_default: The user_default of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.  # noqa: E501
        :type user_default: ConfigNodePropertyString
        :param user_enable_default_mapping: The user_enable_default_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.  # noqa: E501
        :type user_enable_default_mapping: ConfigNodePropertyBoolean
        :param require_validation: The require_validation of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.  # noqa: E501
        :type require_validation: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'user_mapping': ConfigNodePropertyArray,
            'user_default': ConfigNodePropertyString,
            'user_enable_default_mapping': ConfigNodePropertyBoolean,
            'require_validation': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'user_mapping': 'user.mapping',
            'user_default': 'user.default',
            'user_enable_default_mapping': 'user.enable.default.mapping',
            'require_validation': 'require.validation'
        }

        self._user_mapping = user_mapping
        self._user_default = user_default
        self._user_enable_default_mapping = user_enable_default_mapping
        self._require_validation = require_validation

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingServiceusermappingImplServiceUserMapperImplProperties of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.  # noqa: E501
        :rtype: OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def user_mapping(self) -> ConfigNodePropertyArray:
        """Gets the user_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :return: The user_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._user_mapping

    @user_mapping.setter
    def user_mapping(self, user_mapping: ConfigNodePropertyArray):
        """Sets the user_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :param user_mapping: The user_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :type user_mapping: ConfigNodePropertyArray
        """

        self._user_mapping = user_mapping

    @property
    def user_default(self) -> ConfigNodePropertyString:
        """Gets the user_default of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :return: The user_default of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._user_default

    @user_default.setter
    def user_default(self, user_default: ConfigNodePropertyString):
        """Sets the user_default of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :param user_default: The user_default of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :type user_default: ConfigNodePropertyString
        """

        self._user_default = user_default

    @property
    def user_enable_default_mapping(self) -> ConfigNodePropertyBoolean:
        """Gets the user_enable_default_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :return: The user_enable_default_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._user_enable_default_mapping

    @user_enable_default_mapping.setter
    def user_enable_default_mapping(self, user_enable_default_mapping: ConfigNodePropertyBoolean):
        """Sets the user_enable_default_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :param user_enable_default_mapping: The user_enable_default_mapping of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :type user_enable_default_mapping: ConfigNodePropertyBoolean
        """

        self._user_enable_default_mapping = user_enable_default_mapping

    @property
    def require_validation(self) -> ConfigNodePropertyBoolean:
        """Gets the require_validation of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :return: The require_validation of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._require_validation

    @require_validation.setter
    def require_validation(self, require_validation: ConfigNodePropertyBoolean):
        """Sets the require_validation of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.


        :param require_validation: The require_validation of this OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.
        :type require_validation: ConfigNodePropertyBoolean
        """

        self._require_validation = require_validation
