# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, illegal_char_mapping: ConfigNodePropertyString=None, page_sub_tree_activation_check: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties - a model defined in OpenAPI

        :param illegal_char_mapping: The illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :type illegal_char_mapping: ConfigNodePropertyString
        :param page_sub_tree_activation_check: The page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :type page_sub_tree_activation_check: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'illegal_char_mapping': ConfigNodePropertyString,
            'page_sub_tree_activation_check': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'illegal_char_mapping': 'illegalCharMapping',
            'page_sub_tree_activation_check': 'pageSubTreeActivationCheck'
        }

        self._illegal_char_mapping = illegal_char_mapping
        self._page_sub_tree_activation_check = page_sub_tree_activation_check

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplPagePageManagerFactoryImplProperties of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def illegal_char_mapping(self) -> ConfigNodePropertyString:
        """Gets the illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :return: The illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._illegal_char_mapping

    @illegal_char_mapping.setter
    def illegal_char_mapping(self, illegal_char_mapping: ConfigNodePropertyString):
        """Sets the illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :param illegal_char_mapping: The illegal_char_mapping of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.
        :type illegal_char_mapping: ConfigNodePropertyString
        """

        self._illegal_char_mapping = illegal_char_mapping

    @property
    def page_sub_tree_activation_check(self) -> ConfigNodePropertyBoolean:
        """Gets the page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :return: The page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._page_sub_tree_activation_check

    @page_sub_tree_activation_check.setter
    def page_sub_tree_activation_check(self, page_sub_tree_activation_check: ConfigNodePropertyBoolean):
        """Sets the page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.


        :param page_sub_tree_activation_check: The page_sub_tree_activation_check of this ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.
        :type page_sub_tree_activation_check: ConfigNodePropertyBoolean
        """

        self._page_sub_tree_activation_check = page_sub_tree_activation_check