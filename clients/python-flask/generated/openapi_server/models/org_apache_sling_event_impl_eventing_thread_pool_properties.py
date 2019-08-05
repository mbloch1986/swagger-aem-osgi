# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingEventImplEventingThreadPoolProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, min_pool_size: ConfigNodePropertyInteger=None):  # noqa: E501
        """OrgApacheSlingEventImplEventingThreadPoolProperties - a model defined in OpenAPI

        :param min_pool_size: The min_pool_size of this OrgApacheSlingEventImplEventingThreadPoolProperties.  # noqa: E501
        :type min_pool_size: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'min_pool_size': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'min_pool_size': 'minPoolSize'
        }

        self._min_pool_size = min_pool_size

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingEventImplEventingThreadPoolProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingEventImplEventingThreadPoolProperties of this OrgApacheSlingEventImplEventingThreadPoolProperties.  # noqa: E501
        :rtype: OrgApacheSlingEventImplEventingThreadPoolProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def min_pool_size(self) -> ConfigNodePropertyInteger:
        """Gets the min_pool_size of this OrgApacheSlingEventImplEventingThreadPoolProperties.


        :return: The min_pool_size of this OrgApacheSlingEventImplEventingThreadPoolProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._min_pool_size

    @min_pool_size.setter
    def min_pool_size(self, min_pool_size: ConfigNodePropertyInteger):
        """Sets the min_pool_size of this OrgApacheSlingEventImplEventingThreadPoolProperties.


        :param min_pool_size: The min_pool_size of this OrgApacheSlingEventImplEventingThreadPoolProperties.
        :type min_pool_size: ConfigNodePropertyInteger
        """

        self._min_pool_size = min_pool_size