# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, merge_root: ConfigNodePropertyString=None, merge_read_only: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties - a model defined in OpenAPI

        :param merge_root: The merge_root of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.  # noqa: E501
        :type merge_root: ConfigNodePropertyString
        :param merge_read_only: The merge_read_only of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.  # noqa: E501
        :type merge_read_only: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'merge_root': ConfigNodePropertyString,
            'merge_read_only': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'merge_root': 'merge.root',
            'merge_read_only': 'merge.readOnly'
        }

        self._merge_root = merge_root
        self._merge_read_only = merge_read_only

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.  # noqa: E501
        :rtype: OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def merge_root(self) -> ConfigNodePropertyString:
        """Gets the merge_root of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.


        :return: The merge_root of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._merge_root

    @merge_root.setter
    def merge_root(self, merge_root: ConfigNodePropertyString):
        """Sets the merge_root of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.


        :param merge_root: The merge_root of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.
        :type merge_root: ConfigNodePropertyString
        """

        self._merge_root = merge_root

    @property
    def merge_read_only(self) -> ConfigNodePropertyBoolean:
        """Gets the merge_read_only of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.


        :return: The merge_read_only of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._merge_read_only

    @merge_read_only.setter
    def merge_read_only(self, merge_read_only: ConfigNodePropertyBoolean):
        """Sets the merge_read_only of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.


        :param merge_read_only: The merge_read_only of this OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.
        :type merge_read_only: ConfigNodePropertyBoolean
        """

        self._merge_read_only = merge_read_only
