# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, non_valid_chars: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties - a model defined in OpenAPI

        :param non_valid_chars: The non_valid_chars of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.  # noqa: E501
        :type non_valid_chars: ConfigNodePropertyString
        """
        self.openapi_types = {
            'non_valid_chars': ConfigNodePropertyString
        }

        self.attribute_map = {
            'non_valid_chars': 'nonValidChars'
        }

        self._non_valid_chars = non_valid_chars

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def non_valid_chars(self) -> ConfigNodePropertyString:
        """Gets the non_valid_chars of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.


        :return: The non_valid_chars of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._non_valid_chars

    @non_valid_chars.setter
    def non_valid_chars(self, non_valid_chars: ConfigNodePropertyString):
        """Sets the non_valid_chars of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.


        :param non_valid_chars: The non_valid_chars of this ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.
        :type non_valid_chars: ConfigNodePropertyString
        """

        self._non_valid_chars = non_valid_chars
