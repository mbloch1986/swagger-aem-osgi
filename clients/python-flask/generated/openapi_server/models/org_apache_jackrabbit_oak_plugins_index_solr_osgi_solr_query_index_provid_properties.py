# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, query_aggregation: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties - a model defined in OpenAPI

        :param query_aggregation: The query_aggregation of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.  # noqa: E501
        :type query_aggregation: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'query_aggregation': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'query_aggregation': 'query.aggregation'
        }

        self._query_aggregation = query_aggregation

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def query_aggregation(self) -> ConfigNodePropertyBoolean:
        """Gets the query_aggregation of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.


        :return: The query_aggregation of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._query_aggregation

    @query_aggregation.setter
    def query_aggregation(self, query_aggregation: ConfigNodePropertyBoolean):
        """Sets the query_aggregation of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.


        :param query_aggregation: The query_aggregation of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.
        :type query_aggregation: ConfigNodePropertyBoolean
        """

        self._query_aggregation = query_aggregation
