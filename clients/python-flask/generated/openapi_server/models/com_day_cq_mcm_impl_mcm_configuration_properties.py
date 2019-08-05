# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComDayCqMcmImplMCMConfigurationProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, experience_indirection: ConfigNodePropertyArray=None, touchpoint_indirection: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqMcmImplMCMConfigurationProperties - a model defined in OpenAPI

        :param experience_indirection: The experience_indirection of this ComDayCqMcmImplMCMConfigurationProperties.  # noqa: E501
        :type experience_indirection: ConfigNodePropertyArray
        :param touchpoint_indirection: The touchpoint_indirection of this ComDayCqMcmImplMCMConfigurationProperties.  # noqa: E501
        :type touchpoint_indirection: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'experience_indirection': ConfigNodePropertyArray,
            'touchpoint_indirection': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'experience_indirection': 'experience.indirection',
            'touchpoint_indirection': 'touchpoint.indirection'
        }

        self._experience_indirection = experience_indirection
        self._touchpoint_indirection = touchpoint_indirection

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqMcmImplMCMConfigurationProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqMcmImplMCMConfigurationProperties of this ComDayCqMcmImplMCMConfigurationProperties.  # noqa: E501
        :rtype: ComDayCqMcmImplMCMConfigurationProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def experience_indirection(self) -> ConfigNodePropertyArray:
        """Gets the experience_indirection of this ComDayCqMcmImplMCMConfigurationProperties.


        :return: The experience_indirection of this ComDayCqMcmImplMCMConfigurationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._experience_indirection

    @experience_indirection.setter
    def experience_indirection(self, experience_indirection: ConfigNodePropertyArray):
        """Sets the experience_indirection of this ComDayCqMcmImplMCMConfigurationProperties.


        :param experience_indirection: The experience_indirection of this ComDayCqMcmImplMCMConfigurationProperties.
        :type experience_indirection: ConfigNodePropertyArray
        """

        self._experience_indirection = experience_indirection

    @property
    def touchpoint_indirection(self) -> ConfigNodePropertyArray:
        """Gets the touchpoint_indirection of this ComDayCqMcmImplMCMConfigurationProperties.


        :return: The touchpoint_indirection of this ComDayCqMcmImplMCMConfigurationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._touchpoint_indirection

    @touchpoint_indirection.setter
    def touchpoint_indirection(self, touchpoint_indirection: ConfigNodePropertyArray):
        """Sets the touchpoint_indirection of this ComDayCqMcmImplMCMConfigurationProperties.


        :param touchpoint_indirection: The touchpoint_indirection of this ComDayCqMcmImplMCMConfigurationProperties.
        :type touchpoint_indirection: ConfigNodePropertyArray
        """

        self._touchpoint_indirection = touchpoint_indirection