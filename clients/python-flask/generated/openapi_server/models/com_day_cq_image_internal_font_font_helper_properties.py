# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqImageInternalFontFontHelperProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, fontpath: ConfigNodePropertyArray=None, oversampling_factor: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComDayCqImageInternalFontFontHelperProperties - a model defined in OpenAPI

        :param fontpath: The fontpath of this ComDayCqImageInternalFontFontHelperProperties.  # noqa: E501
        :type fontpath: ConfigNodePropertyArray
        :param oversampling_factor: The oversampling_factor of this ComDayCqImageInternalFontFontHelperProperties.  # noqa: E501
        :type oversampling_factor: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'fontpath': ConfigNodePropertyArray,
            'oversampling_factor': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'fontpath': 'fontpath',
            'oversampling_factor': 'oversamplingFactor'
        }

        self._fontpath = fontpath
        self._oversampling_factor = oversampling_factor

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqImageInternalFontFontHelperProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqImageInternalFontFontHelperProperties of this ComDayCqImageInternalFontFontHelperProperties.  # noqa: E501
        :rtype: ComDayCqImageInternalFontFontHelperProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def fontpath(self) -> ConfigNodePropertyArray:
        """Gets the fontpath of this ComDayCqImageInternalFontFontHelperProperties.


        :return: The fontpath of this ComDayCqImageInternalFontFontHelperProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._fontpath

    @fontpath.setter
    def fontpath(self, fontpath: ConfigNodePropertyArray):
        """Sets the fontpath of this ComDayCqImageInternalFontFontHelperProperties.


        :param fontpath: The fontpath of this ComDayCqImageInternalFontFontHelperProperties.
        :type fontpath: ConfigNodePropertyArray
        """

        self._fontpath = fontpath

    @property
    def oversampling_factor(self) -> ConfigNodePropertyInteger:
        """Gets the oversampling_factor of this ComDayCqImageInternalFontFontHelperProperties.


        :return: The oversampling_factor of this ComDayCqImageInternalFontFontHelperProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._oversampling_factor

    @oversampling_factor.setter
    def oversampling_factor(self, oversampling_factor: ConfigNodePropertyInteger):
        """Sets the oversampling_factor of this ComDayCqImageInternalFontFontHelperProperties.


        :param oversampling_factor: The oversampling_factor of this ComDayCqImageInternalFontFontHelperProperties.
        :type oversampling_factor: ConfigNodePropertyInteger
        """

        self._oversampling_factor = oversampling_factor
