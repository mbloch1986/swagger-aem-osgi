# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreProcessMetadataProcessorProcessProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, process_label: ConfigNodePropertyString=None, cq_dam_enable_sha1: ConfigNodePropertyBoolean=None, cq_dam_metadata_xssprotected_properties: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqDamCoreProcessMetadataProcessorProcessProperties - a model defined in OpenAPI

        :param process_label: The process_label of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.  # noqa: E501
        :type process_label: ConfigNodePropertyString
        :param cq_dam_enable_sha1: The cq_dam_enable_sha1 of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.  # noqa: E501
        :type cq_dam_enable_sha1: ConfigNodePropertyBoolean
        :param cq_dam_metadata_xssprotected_properties: The cq_dam_metadata_xssprotected_properties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.  # noqa: E501
        :type cq_dam_metadata_xssprotected_properties: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'process_label': ConfigNodePropertyString,
            'cq_dam_enable_sha1': ConfigNodePropertyBoolean,
            'cq_dam_metadata_xssprotected_properties': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'process_label': 'process.label',
            'cq_dam_enable_sha1': 'cq.dam.enable.sha1',
            'cq_dam_metadata_xssprotected_properties': 'cq.dam.metadata.xssprotected.properties'
        }

        self._process_label = process_label
        self._cq_dam_enable_sha1 = cq_dam_enable_sha1
        self._cq_dam_metadata_xssprotected_properties = cq_dam_metadata_xssprotected_properties

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreProcessMetadataProcessorProcessProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreProcessMetadataProcessorProcessProperties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.  # noqa: E501
        :rtype: ComDayCqDamCoreProcessMetadataProcessorProcessProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def process_label(self) -> ConfigNodePropertyString:
        """Gets the process_label of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :return: The process_label of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._process_label

    @process_label.setter
    def process_label(self, process_label: ConfigNodePropertyString):
        """Sets the process_label of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :param process_label: The process_label of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :type process_label: ConfigNodePropertyString
        """

        self._process_label = process_label

    @property
    def cq_dam_enable_sha1(self) -> ConfigNodePropertyBoolean:
        """Gets the cq_dam_enable_sha1 of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :return: The cq_dam_enable_sha1 of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._cq_dam_enable_sha1

    @cq_dam_enable_sha1.setter
    def cq_dam_enable_sha1(self, cq_dam_enable_sha1: ConfigNodePropertyBoolean):
        """Sets the cq_dam_enable_sha1 of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :param cq_dam_enable_sha1: The cq_dam_enable_sha1 of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :type cq_dam_enable_sha1: ConfigNodePropertyBoolean
        """

        self._cq_dam_enable_sha1 = cq_dam_enable_sha1

    @property
    def cq_dam_metadata_xssprotected_properties(self) -> ConfigNodePropertyArray:
        """Gets the cq_dam_metadata_xssprotected_properties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :return: The cq_dam_metadata_xssprotected_properties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._cq_dam_metadata_xssprotected_properties

    @cq_dam_metadata_xssprotected_properties.setter
    def cq_dam_metadata_xssprotected_properties(self, cq_dam_metadata_xssprotected_properties: ConfigNodePropertyArray):
        """Sets the cq_dam_metadata_xssprotected_properties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.


        :param cq_dam_metadata_xssprotected_properties: The cq_dam_metadata_xssprotected_properties of this ComDayCqDamCoreProcessMetadataProcessorProcessProperties.
        :type cq_dam_metadata_xssprotected_properties: ConfigNodePropertyArray
        """

        self._cq_dam_metadata_xssprotected_properties = cq_dam_metadata_xssprotected_properties