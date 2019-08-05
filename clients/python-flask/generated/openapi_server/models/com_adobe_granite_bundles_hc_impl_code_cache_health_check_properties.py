# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, hc_tags: ConfigNodePropertyArray=None, minimum_code_cache_size: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties - a model defined in OpenAPI

        :param hc_tags: The hc_tags of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.  # noqa: E501
        :type hc_tags: ConfigNodePropertyArray
        :param minimum_code_cache_size: The minimum_code_cache_size of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.  # noqa: E501
        :type minimum_code_cache_size: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'hc_tags': ConfigNodePropertyArray,
            'minimum_code_cache_size': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'hc_tags': 'hc.tags',
            'minimum_code_cache_size': 'minimum.code.cache.size'
        }

        self._hc_tags = hc_tags
        self._minimum_code_cache_size = minimum_code_cache_size

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.  # noqa: E501
        :rtype: ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def hc_tags(self) -> ConfigNodePropertyArray:
        """Gets the hc_tags of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.


        :return: The hc_tags of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._hc_tags

    @hc_tags.setter
    def hc_tags(self, hc_tags: ConfigNodePropertyArray):
        """Sets the hc_tags of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.


        :param hc_tags: The hc_tags of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.
        :type hc_tags: ConfigNodePropertyArray
        """

        self._hc_tags = hc_tags

    @property
    def minimum_code_cache_size(self) -> ConfigNodePropertyInteger:
        """Gets the minimum_code_cache_size of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.


        :return: The minimum_code_cache_size of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._minimum_code_cache_size

    @minimum_code_cache_size.setter
    def minimum_code_cache_size(self, minimum_code_cache_size: ConfigNodePropertyInteger):
        """Sets the minimum_code_cache_size of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.


        :param minimum_code_cache_size: The minimum_code_cache_size of this ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.
        :type minimum_code_cache_size: ConfigNodePropertyInteger
        """

        self._minimum_code_cache_size = minimum_code_cache_size