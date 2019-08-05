# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCommonsLogLogManagerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, org_apache_sling_commons_log_level: ConfigNodePropertyDropDown=None, org_apache_sling_commons_log_file: ConfigNodePropertyString=None, org_apache_sling_commons_log_file_number: ConfigNodePropertyInteger=None, org_apache_sling_commons_log_file_size: ConfigNodePropertyString=None, org_apache_sling_commons_log_pattern: ConfigNodePropertyString=None, org_apache_sling_commons_log_configuration_file: ConfigNodePropertyString=None, org_apache_sling_commons_log_packaging_data_enabled: ConfigNodePropertyBoolean=None, org_apache_sling_commons_log_max_caller_data_depth: ConfigNodePropertyInteger=None, org_apache_sling_commons_log_max_old_file_count_in_dump: ConfigNodePropertyInteger=None, org_apache_sling_commons_log_num_of_lines: ConfigNodePropertyInteger=None):  # noqa: E501
        """OrgApacheSlingCommonsLogLogManagerProperties - a model defined in OpenAPI

        :param org_apache_sling_commons_log_level: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_level: ConfigNodePropertyDropDown
        :param org_apache_sling_commons_log_file: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_file: ConfigNodePropertyString
        :param org_apache_sling_commons_log_file_number: The org_apache_sling_commons_log_file_number of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_file_number: ConfigNodePropertyInteger
        :param org_apache_sling_commons_log_file_size: The org_apache_sling_commons_log_file_size of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_file_size: ConfigNodePropertyString
        :param org_apache_sling_commons_log_pattern: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_pattern: ConfigNodePropertyString
        :param org_apache_sling_commons_log_configuration_file: The org_apache_sling_commons_log_configuration_file of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_configuration_file: ConfigNodePropertyString
        :param org_apache_sling_commons_log_packaging_data_enabled: The org_apache_sling_commons_log_packaging_data_enabled of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_packaging_data_enabled: ConfigNodePropertyBoolean
        :param org_apache_sling_commons_log_max_caller_data_depth: The org_apache_sling_commons_log_max_caller_data_depth of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_max_caller_data_depth: ConfigNodePropertyInteger
        :param org_apache_sling_commons_log_max_old_file_count_in_dump: The org_apache_sling_commons_log_max_old_file_count_in_dump of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_max_old_file_count_in_dump: ConfigNodePropertyInteger
        :param org_apache_sling_commons_log_num_of_lines: The org_apache_sling_commons_log_num_of_lines of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :type org_apache_sling_commons_log_num_of_lines: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'org_apache_sling_commons_log_level': ConfigNodePropertyDropDown,
            'org_apache_sling_commons_log_file': ConfigNodePropertyString,
            'org_apache_sling_commons_log_file_number': ConfigNodePropertyInteger,
            'org_apache_sling_commons_log_file_size': ConfigNodePropertyString,
            'org_apache_sling_commons_log_pattern': ConfigNodePropertyString,
            'org_apache_sling_commons_log_configuration_file': ConfigNodePropertyString,
            'org_apache_sling_commons_log_packaging_data_enabled': ConfigNodePropertyBoolean,
            'org_apache_sling_commons_log_max_caller_data_depth': ConfigNodePropertyInteger,
            'org_apache_sling_commons_log_max_old_file_count_in_dump': ConfigNodePropertyInteger,
            'org_apache_sling_commons_log_num_of_lines': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'org_apache_sling_commons_log_level': 'org.apache.sling.commons.log.level',
            'org_apache_sling_commons_log_file': 'org.apache.sling.commons.log.file',
            'org_apache_sling_commons_log_file_number': 'org.apache.sling.commons.log.file.number',
            'org_apache_sling_commons_log_file_size': 'org.apache.sling.commons.log.file.size',
            'org_apache_sling_commons_log_pattern': 'org.apache.sling.commons.log.pattern',
            'org_apache_sling_commons_log_configuration_file': 'org.apache.sling.commons.log.configurationFile',
            'org_apache_sling_commons_log_packaging_data_enabled': 'org.apache.sling.commons.log.packagingDataEnabled',
            'org_apache_sling_commons_log_max_caller_data_depth': 'org.apache.sling.commons.log.maxCallerDataDepth',
            'org_apache_sling_commons_log_max_old_file_count_in_dump': 'org.apache.sling.commons.log.maxOldFileCountInDump',
            'org_apache_sling_commons_log_num_of_lines': 'org.apache.sling.commons.log.numOfLines'
        }

        self._org_apache_sling_commons_log_level = org_apache_sling_commons_log_level
        self._org_apache_sling_commons_log_file = org_apache_sling_commons_log_file
        self._org_apache_sling_commons_log_file_number = org_apache_sling_commons_log_file_number
        self._org_apache_sling_commons_log_file_size = org_apache_sling_commons_log_file_size
        self._org_apache_sling_commons_log_pattern = org_apache_sling_commons_log_pattern
        self._org_apache_sling_commons_log_configuration_file = org_apache_sling_commons_log_configuration_file
        self._org_apache_sling_commons_log_packaging_data_enabled = org_apache_sling_commons_log_packaging_data_enabled
        self._org_apache_sling_commons_log_max_caller_data_depth = org_apache_sling_commons_log_max_caller_data_depth
        self._org_apache_sling_commons_log_max_old_file_count_in_dump = org_apache_sling_commons_log_max_old_file_count_in_dump
        self._org_apache_sling_commons_log_num_of_lines = org_apache_sling_commons_log_num_of_lines

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingCommonsLogLogManagerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCommonsLogLogManagerProperties of this OrgApacheSlingCommonsLogLogManagerProperties.  # noqa: E501
        :rtype: OrgApacheSlingCommonsLogLogManagerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def org_apache_sling_commons_log_level(self) -> ConfigNodePropertyDropDown:
        """Gets the org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._org_apache_sling_commons_log_level

    @org_apache_sling_commons_log_level.setter
    def org_apache_sling_commons_log_level(self, org_apache_sling_commons_log_level: ConfigNodePropertyDropDown):
        """Sets the org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_level: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_level: ConfigNodePropertyDropDown
        """

        self._org_apache_sling_commons_log_level = org_apache_sling_commons_log_level

    @property
    def org_apache_sling_commons_log_file(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_file

    @org_apache_sling_commons_log_file.setter
    def org_apache_sling_commons_log_file(self, org_apache_sling_commons_log_file: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_file: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_file: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_file = org_apache_sling_commons_log_file

    @property
    def org_apache_sling_commons_log_file_number(self) -> ConfigNodePropertyInteger:
        """Gets the org_apache_sling_commons_log_file_number of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_file_number of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._org_apache_sling_commons_log_file_number

    @org_apache_sling_commons_log_file_number.setter
    def org_apache_sling_commons_log_file_number(self, org_apache_sling_commons_log_file_number: ConfigNodePropertyInteger):
        """Sets the org_apache_sling_commons_log_file_number of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_file_number: The org_apache_sling_commons_log_file_number of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_file_number: ConfigNodePropertyInteger
        """

        self._org_apache_sling_commons_log_file_number = org_apache_sling_commons_log_file_number

    @property
    def org_apache_sling_commons_log_file_size(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_file_size of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_file_size of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_file_size

    @org_apache_sling_commons_log_file_size.setter
    def org_apache_sling_commons_log_file_size(self, org_apache_sling_commons_log_file_size: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_file_size of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_file_size: The org_apache_sling_commons_log_file_size of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_file_size: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_file_size = org_apache_sling_commons_log_file_size

    @property
    def org_apache_sling_commons_log_pattern(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_pattern

    @org_apache_sling_commons_log_pattern.setter
    def org_apache_sling_commons_log_pattern(self, org_apache_sling_commons_log_pattern: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_pattern: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_pattern: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_pattern = org_apache_sling_commons_log_pattern

    @property
    def org_apache_sling_commons_log_configuration_file(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_configuration_file of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_configuration_file of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_configuration_file

    @org_apache_sling_commons_log_configuration_file.setter
    def org_apache_sling_commons_log_configuration_file(self, org_apache_sling_commons_log_configuration_file: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_configuration_file of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_configuration_file: The org_apache_sling_commons_log_configuration_file of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_configuration_file: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_configuration_file = org_apache_sling_commons_log_configuration_file

    @property
    def org_apache_sling_commons_log_packaging_data_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the org_apache_sling_commons_log_packaging_data_enabled of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_packaging_data_enabled of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._org_apache_sling_commons_log_packaging_data_enabled

    @org_apache_sling_commons_log_packaging_data_enabled.setter
    def org_apache_sling_commons_log_packaging_data_enabled(self, org_apache_sling_commons_log_packaging_data_enabled: ConfigNodePropertyBoolean):
        """Sets the org_apache_sling_commons_log_packaging_data_enabled of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_packaging_data_enabled: The org_apache_sling_commons_log_packaging_data_enabled of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_packaging_data_enabled: ConfigNodePropertyBoolean
        """

        self._org_apache_sling_commons_log_packaging_data_enabled = org_apache_sling_commons_log_packaging_data_enabled

    @property
    def org_apache_sling_commons_log_max_caller_data_depth(self) -> ConfigNodePropertyInteger:
        """Gets the org_apache_sling_commons_log_max_caller_data_depth of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_max_caller_data_depth of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._org_apache_sling_commons_log_max_caller_data_depth

    @org_apache_sling_commons_log_max_caller_data_depth.setter
    def org_apache_sling_commons_log_max_caller_data_depth(self, org_apache_sling_commons_log_max_caller_data_depth: ConfigNodePropertyInteger):
        """Sets the org_apache_sling_commons_log_max_caller_data_depth of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_max_caller_data_depth: The org_apache_sling_commons_log_max_caller_data_depth of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_max_caller_data_depth: ConfigNodePropertyInteger
        """

        self._org_apache_sling_commons_log_max_caller_data_depth = org_apache_sling_commons_log_max_caller_data_depth

    @property
    def org_apache_sling_commons_log_max_old_file_count_in_dump(self) -> ConfigNodePropertyInteger:
        """Gets the org_apache_sling_commons_log_max_old_file_count_in_dump of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_max_old_file_count_in_dump of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._org_apache_sling_commons_log_max_old_file_count_in_dump

    @org_apache_sling_commons_log_max_old_file_count_in_dump.setter
    def org_apache_sling_commons_log_max_old_file_count_in_dump(self, org_apache_sling_commons_log_max_old_file_count_in_dump: ConfigNodePropertyInteger):
        """Sets the org_apache_sling_commons_log_max_old_file_count_in_dump of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_max_old_file_count_in_dump: The org_apache_sling_commons_log_max_old_file_count_in_dump of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_max_old_file_count_in_dump: ConfigNodePropertyInteger
        """

        self._org_apache_sling_commons_log_max_old_file_count_in_dump = org_apache_sling_commons_log_max_old_file_count_in_dump

    @property
    def org_apache_sling_commons_log_num_of_lines(self) -> ConfigNodePropertyInteger:
        """Gets the org_apache_sling_commons_log_num_of_lines of this OrgApacheSlingCommonsLogLogManagerProperties.


        :return: The org_apache_sling_commons_log_num_of_lines of this OrgApacheSlingCommonsLogLogManagerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._org_apache_sling_commons_log_num_of_lines

    @org_apache_sling_commons_log_num_of_lines.setter
    def org_apache_sling_commons_log_num_of_lines(self, org_apache_sling_commons_log_num_of_lines: ConfigNodePropertyInteger):
        """Sets the org_apache_sling_commons_log_num_of_lines of this OrgApacheSlingCommonsLogLogManagerProperties.


        :param org_apache_sling_commons_log_num_of_lines: The org_apache_sling_commons_log_num_of_lines of this OrgApacheSlingCommonsLogLogManagerProperties.
        :type org_apache_sling_commons_log_num_of_lines: ConfigNodePropertyInteger
        """

        self._org_apache_sling_commons_log_num_of_lines = org_apache_sling_commons_log_num_of_lines