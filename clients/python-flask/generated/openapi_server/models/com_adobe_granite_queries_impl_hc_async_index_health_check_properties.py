# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, indexing_critical_threshold: ConfigNodePropertyInteger=None, indexing_warn_threshold: ConfigNodePropertyInteger=None, hc_tags: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties - a model defined in OpenAPI

        :param indexing_critical_threshold: The indexing_critical_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.  # noqa: E501
        :type indexing_critical_threshold: ConfigNodePropertyInteger
        :param indexing_warn_threshold: The indexing_warn_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.  # noqa: E501
        :type indexing_warn_threshold: ConfigNodePropertyInteger
        :param hc_tags: The hc_tags of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.  # noqa: E501
        :type hc_tags: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'indexing_critical_threshold': ConfigNodePropertyInteger,
            'indexing_warn_threshold': ConfigNodePropertyInteger,
            'hc_tags': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'indexing_critical_threshold': 'indexing.critical.threshold',
            'indexing_warn_threshold': 'indexing.warn.threshold',
            'hc_tags': 'hc.tags'
        }

        self._indexing_critical_threshold = indexing_critical_threshold
        self._indexing_warn_threshold = indexing_warn_threshold
        self._hc_tags = hc_tags

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.  # noqa: E501
        :rtype: ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def indexing_critical_threshold(self) -> ConfigNodePropertyInteger:
        """Gets the indexing_critical_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :return: The indexing_critical_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._indexing_critical_threshold

    @indexing_critical_threshold.setter
    def indexing_critical_threshold(self, indexing_critical_threshold: ConfigNodePropertyInteger):
        """Sets the indexing_critical_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :param indexing_critical_threshold: The indexing_critical_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :type indexing_critical_threshold: ConfigNodePropertyInteger
        """

        self._indexing_critical_threshold = indexing_critical_threshold

    @property
    def indexing_warn_threshold(self) -> ConfigNodePropertyInteger:
        """Gets the indexing_warn_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :return: The indexing_warn_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._indexing_warn_threshold

    @indexing_warn_threshold.setter
    def indexing_warn_threshold(self, indexing_warn_threshold: ConfigNodePropertyInteger):
        """Sets the indexing_warn_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :param indexing_warn_threshold: The indexing_warn_threshold of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :type indexing_warn_threshold: ConfigNodePropertyInteger
        """

        self._indexing_warn_threshold = indexing_warn_threshold

    @property
    def hc_tags(self) -> ConfigNodePropertyArray:
        """Gets the hc_tags of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :return: The hc_tags of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._hc_tags

    @hc_tags.setter
    def hc_tags(self, hc_tags: ConfigNodePropertyArray):
        """Sets the hc_tags of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.


        :param hc_tags: The hc_tags of this ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.
        :type hc_tags: ConfigNodePropertyArray
        """

        self._hc_tags = hc_tags