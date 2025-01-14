# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, ignore_property_name_regex: ConfigNodePropertyArray=None, config_collection_properties_resource_names: ConfigNodePropertyArray=None):  # noqa: E501
        """OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties - a model defined in OpenAPI

        :param ignore_property_name_regex: The ignore_property_name_regex of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.  # noqa: E501
        :type ignore_property_name_regex: ConfigNodePropertyArray
        :param config_collection_properties_resource_names: The config_collection_properties_resource_names of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.  # noqa: E501
        :type config_collection_properties_resource_names: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'ignore_property_name_regex': ConfigNodePropertyArray,
            'config_collection_properties_resource_names': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'ignore_property_name_regex': 'ignorePropertyNameRegex',
            'config_collection_properties_resource_names': 'configCollectionPropertiesResourceNames'
        }

        self._ignore_property_name_regex = ignore_property_name_regex
        self._config_collection_properties_resource_names = config_collection_properties_resource_names

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.  # noqa: E501
        :rtype: OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def ignore_property_name_regex(self) -> ConfigNodePropertyArray:
        """Gets the ignore_property_name_regex of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.


        :return: The ignore_property_name_regex of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._ignore_property_name_regex

    @ignore_property_name_regex.setter
    def ignore_property_name_regex(self, ignore_property_name_regex: ConfigNodePropertyArray):
        """Sets the ignore_property_name_regex of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.


        :param ignore_property_name_regex: The ignore_property_name_regex of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.
        :type ignore_property_name_regex: ConfigNodePropertyArray
        """

        self._ignore_property_name_regex = ignore_property_name_regex

    @property
    def config_collection_properties_resource_names(self) -> ConfigNodePropertyArray:
        """Gets the config_collection_properties_resource_names of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.


        :return: The config_collection_properties_resource_names of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._config_collection_properties_resource_names

    @config_collection_properties_resource_names.setter
    def config_collection_properties_resource_names(self, config_collection_properties_resource_names: ConfigNodePropertyArray):
        """Sets the config_collection_properties_resource_names of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.


        :param config_collection_properties_resource_names: The config_collection_properties_resource_names of this OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.
        :type config_collection_properties_resource_names: ConfigNodePropertyArray
        """

        self._config_collection_properties_resource_names = config_collection_properties_resource_names
