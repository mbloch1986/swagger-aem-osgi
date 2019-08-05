# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, org_apache_sling_commons_log_level: ConfigNodePropertyDropDown=None, org_apache_sling_commons_log_file: ConfigNodePropertyString=None, org_apache_sling_commons_log_pattern: ConfigNodePropertyString=None, org_apache_sling_commons_log_names: ConfigNodePropertyArray=None, org_apache_sling_commons_log_additiv: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties - a model defined in OpenAPI

        :param org_apache_sling_commons_log_level: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :type org_apache_sling_commons_log_level: ConfigNodePropertyDropDown
        :param org_apache_sling_commons_log_file: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :type org_apache_sling_commons_log_file: ConfigNodePropertyString
        :param org_apache_sling_commons_log_pattern: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :type org_apache_sling_commons_log_pattern: ConfigNodePropertyString
        :param org_apache_sling_commons_log_names: The org_apache_sling_commons_log_names of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :type org_apache_sling_commons_log_names: ConfigNodePropertyArray
        :param org_apache_sling_commons_log_additiv: The org_apache_sling_commons_log_additiv of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :type org_apache_sling_commons_log_additiv: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'org_apache_sling_commons_log_level': ConfigNodePropertyDropDown,
            'org_apache_sling_commons_log_file': ConfigNodePropertyString,
            'org_apache_sling_commons_log_pattern': ConfigNodePropertyString,
            'org_apache_sling_commons_log_names': ConfigNodePropertyArray,
            'org_apache_sling_commons_log_additiv': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'org_apache_sling_commons_log_level': 'org.apache.sling.commons.log.level',
            'org_apache_sling_commons_log_file': 'org.apache.sling.commons.log.file',
            'org_apache_sling_commons_log_pattern': 'org.apache.sling.commons.log.pattern',
            'org_apache_sling_commons_log_names': 'org.apache.sling.commons.log.names',
            'org_apache_sling_commons_log_additiv': 'org.apache.sling.commons.log.additiv'
        }

        self._org_apache_sling_commons_log_level = org_apache_sling_commons_log_level
        self._org_apache_sling_commons_log_file = org_apache_sling_commons_log_file
        self._org_apache_sling_commons_log_pattern = org_apache_sling_commons_log_pattern
        self._org_apache_sling_commons_log_names = org_apache_sling_commons_log_names
        self._org_apache_sling_commons_log_additiv = org_apache_sling_commons_log_additiv

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCommonsLogLogManagerFactoryConfigProperties of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.  # noqa: E501
        :rtype: OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def org_apache_sling_commons_log_level(self) -> ConfigNodePropertyDropDown:
        """Gets the org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :return: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._org_apache_sling_commons_log_level

    @org_apache_sling_commons_log_level.setter
    def org_apache_sling_commons_log_level(self, org_apache_sling_commons_log_level: ConfigNodePropertyDropDown):
        """Sets the org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :param org_apache_sling_commons_log_level: The org_apache_sling_commons_log_level of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :type org_apache_sling_commons_log_level: ConfigNodePropertyDropDown
        """

        self._org_apache_sling_commons_log_level = org_apache_sling_commons_log_level

    @property
    def org_apache_sling_commons_log_file(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :return: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_file

    @org_apache_sling_commons_log_file.setter
    def org_apache_sling_commons_log_file(self, org_apache_sling_commons_log_file: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :param org_apache_sling_commons_log_file: The org_apache_sling_commons_log_file of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :type org_apache_sling_commons_log_file: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_file = org_apache_sling_commons_log_file

    @property
    def org_apache_sling_commons_log_pattern(self) -> ConfigNodePropertyString:
        """Gets the org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :return: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_commons_log_pattern

    @org_apache_sling_commons_log_pattern.setter
    def org_apache_sling_commons_log_pattern(self, org_apache_sling_commons_log_pattern: ConfigNodePropertyString):
        """Sets the org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :param org_apache_sling_commons_log_pattern: The org_apache_sling_commons_log_pattern of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :type org_apache_sling_commons_log_pattern: ConfigNodePropertyString
        """

        self._org_apache_sling_commons_log_pattern = org_apache_sling_commons_log_pattern

    @property
    def org_apache_sling_commons_log_names(self) -> ConfigNodePropertyArray:
        """Gets the org_apache_sling_commons_log_names of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :return: The org_apache_sling_commons_log_names of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._org_apache_sling_commons_log_names

    @org_apache_sling_commons_log_names.setter
    def org_apache_sling_commons_log_names(self, org_apache_sling_commons_log_names: ConfigNodePropertyArray):
        """Sets the org_apache_sling_commons_log_names of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :param org_apache_sling_commons_log_names: The org_apache_sling_commons_log_names of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :type org_apache_sling_commons_log_names: ConfigNodePropertyArray
        """

        self._org_apache_sling_commons_log_names = org_apache_sling_commons_log_names

    @property
    def org_apache_sling_commons_log_additiv(self) -> ConfigNodePropertyBoolean:
        """Gets the org_apache_sling_commons_log_additiv of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :return: The org_apache_sling_commons_log_additiv of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._org_apache_sling_commons_log_additiv

    @org_apache_sling_commons_log_additiv.setter
    def org_apache_sling_commons_log_additiv(self, org_apache_sling_commons_log_additiv: ConfigNodePropertyBoolean):
        """Sets the org_apache_sling_commons_log_additiv of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.


        :param org_apache_sling_commons_log_additiv: The org_apache_sling_commons_log_additiv of this OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.
        :type org_apache_sling_commons_log_additiv: ConfigNodePropertyBoolean
        """

        self._org_apache_sling_commons_log_additiv = org_apache_sling_commons_log_additiv