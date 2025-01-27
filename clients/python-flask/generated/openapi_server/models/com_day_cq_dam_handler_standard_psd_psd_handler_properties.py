# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamHandlerStandardPsdPsdHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, large_file_threshold: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComDayCqDamHandlerStandardPsdPsdHandlerProperties - a model defined in OpenAPI

        :param large_file_threshold: The large_file_threshold of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.  # noqa: E501
        :type large_file_threshold: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'large_file_threshold': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'large_file_threshold': 'large_file_threshold'
        }

        self._large_file_threshold = large_file_threshold

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamHandlerStandardPsdPsdHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamHandlerStandardPsdPsdHandlerProperties of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.  # noqa: E501
        :rtype: ComDayCqDamHandlerStandardPsdPsdHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def large_file_threshold(self) -> ConfigNodePropertyInteger:
        """Gets the large_file_threshold of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.


        :return: The large_file_threshold of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._large_file_threshold

    @large_file_threshold.setter
    def large_file_threshold(self, large_file_threshold: ConfigNodePropertyInteger):
        """Sets the large_file_threshold of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.


        :param large_file_threshold: The large_file_threshold of this ComDayCqDamHandlerStandardPsdPsdHandlerProperties.
        :type large_file_threshold: ConfigNodePropertyInteger
        """

        self._large_file_threshold = large_file_threshold
