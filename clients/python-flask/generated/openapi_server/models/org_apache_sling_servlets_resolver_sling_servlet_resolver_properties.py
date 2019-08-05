# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingServletsResolverSlingServletResolverProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, servletresolver_servlet_root: ConfigNodePropertyString=None, servletresolver_cache_size: ConfigNodePropertyInteger=None, servletresolver_paths: ConfigNodePropertyArray=None, servletresolver_default_extensions: ConfigNodePropertyArray=None):  # noqa: E501
        """OrgApacheSlingServletsResolverSlingServletResolverProperties - a model defined in OpenAPI

        :param servletresolver_servlet_root: The servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type servletresolver_servlet_root: ConfigNodePropertyString
        :param servletresolver_cache_size: The servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type servletresolver_cache_size: ConfigNodePropertyInteger
        :param servletresolver_paths: The servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type servletresolver_paths: ConfigNodePropertyArray
        :param servletresolver_default_extensions: The servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type servletresolver_default_extensions: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'servletresolver_servlet_root': ConfigNodePropertyString,
            'servletresolver_cache_size': ConfigNodePropertyInteger,
            'servletresolver_paths': ConfigNodePropertyArray,
            'servletresolver_default_extensions': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'servletresolver_servlet_root': 'servletresolver.servletRoot',
            'servletresolver_cache_size': 'servletresolver.cacheSize',
            'servletresolver_paths': 'servletresolver.paths',
            'servletresolver_default_extensions': 'servletresolver.defaultExtensions'
        }

        self._servletresolver_servlet_root = servletresolver_servlet_root
        self._servletresolver_cache_size = servletresolver_cache_size
        self._servletresolver_paths = servletresolver_paths
        self._servletresolver_default_extensions = servletresolver_default_extensions

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingServletsResolverSlingServletResolverProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingServletsResolverSlingServletResolverProperties of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :rtype: OrgApacheSlingServletsResolverSlingServletResolverProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def servletresolver_servlet_root(self) -> ConfigNodePropertyString:
        """Gets the servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :return: The servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._servletresolver_servlet_root

    @servletresolver_servlet_root.setter
    def servletresolver_servlet_root(self, servletresolver_servlet_root: ConfigNodePropertyString):
        """Sets the servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_servlet_root: The servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :type servletresolver_servlet_root: ConfigNodePropertyString
        """

        self._servletresolver_servlet_root = servletresolver_servlet_root

    @property
    def servletresolver_cache_size(self) -> ConfigNodePropertyInteger:
        """Gets the servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :return: The servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._servletresolver_cache_size

    @servletresolver_cache_size.setter
    def servletresolver_cache_size(self, servletresolver_cache_size: ConfigNodePropertyInteger):
        """Sets the servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_cache_size: The servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :type servletresolver_cache_size: ConfigNodePropertyInteger
        """

        self._servletresolver_cache_size = servletresolver_cache_size

    @property
    def servletresolver_paths(self) -> ConfigNodePropertyArray:
        """Gets the servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :return: The servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._servletresolver_paths

    @servletresolver_paths.setter
    def servletresolver_paths(self, servletresolver_paths: ConfigNodePropertyArray):
        """Sets the servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_paths: The servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :type servletresolver_paths: ConfigNodePropertyArray
        """

        self._servletresolver_paths = servletresolver_paths

    @property
    def servletresolver_default_extensions(self) -> ConfigNodePropertyArray:
        """Gets the servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :return: The servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._servletresolver_default_extensions

    @servletresolver_default_extensions.setter
    def servletresolver_default_extensions(self, servletresolver_default_extensions: ConfigNodePropertyArray):
        """Sets the servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_default_extensions: The servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.
        :type servletresolver_default_extensions: ConfigNodePropertyArray
        """

        self._servletresolver_default_extensions = servletresolver_default_extensions