# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, dav_root: ConfigNodePropertyString=None, dav_create_absolute_uri: ConfigNodePropertyBoolean=None, dav_realm: ConfigNodePropertyString=None, collection_types: ConfigNodePropertyArray=None, filter_prefixes: ConfigNodePropertyArray=None, filter_types: ConfigNodePropertyString=None, filter_uris: ConfigNodePropertyString=None, type_collections: ConfigNodePropertyString=None, type_noncollections: ConfigNodePropertyString=None, type_content: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties - a model defined in OpenAPI

        :param dav_root: The dav_root of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type dav_root: ConfigNodePropertyString
        :param dav_create_absolute_uri: The dav_create_absolute_uri of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type dav_create_absolute_uri: ConfigNodePropertyBoolean
        :param dav_realm: The dav_realm of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type dav_realm: ConfigNodePropertyString
        :param collection_types: The collection_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type collection_types: ConfigNodePropertyArray
        :param filter_prefixes: The filter_prefixes of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type filter_prefixes: ConfigNodePropertyArray
        :param filter_types: The filter_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type filter_types: ConfigNodePropertyString
        :param filter_uris: The filter_uris of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type filter_uris: ConfigNodePropertyString
        :param type_collections: The type_collections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type type_collections: ConfigNodePropertyString
        :param type_noncollections: The type_noncollections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type type_noncollections: ConfigNodePropertyString
        :param type_content: The type_content of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :type type_content: ConfigNodePropertyString
        """
        self.openapi_types = {
            'dav_root': ConfigNodePropertyString,
            'dav_create_absolute_uri': ConfigNodePropertyBoolean,
            'dav_realm': ConfigNodePropertyString,
            'collection_types': ConfigNodePropertyArray,
            'filter_prefixes': ConfigNodePropertyArray,
            'filter_types': ConfigNodePropertyString,
            'filter_uris': ConfigNodePropertyString,
            'type_collections': ConfigNodePropertyString,
            'type_noncollections': ConfigNodePropertyString,
            'type_content': ConfigNodePropertyString
        }

        self.attribute_map = {
            'dav_root': 'dav.root',
            'dav_create_absolute_uri': 'dav.create-absolute-uri',
            'dav_realm': 'dav.realm',
            'collection_types': 'collection.types',
            'filter_prefixes': 'filter.prefixes',
            'filter_types': 'filter.types',
            'filter_uris': 'filter.uris',
            'type_collections': 'type.collections',
            'type_noncollections': 'type.noncollections',
            'type_content': 'type.content'
        }

        self._dav_root = dav_root
        self._dav_create_absolute_uri = dav_create_absolute_uri
        self._dav_realm = dav_realm
        self._collection_types = collection_types
        self._filter_prefixes = filter_prefixes
        self._filter_types = filter_types
        self._filter_uris = filter_uris
        self._type_collections = type_collections
        self._type_noncollections = type_noncollections
        self._type_content = type_content

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.  # noqa: E501
        :rtype: OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def dav_root(self) -> ConfigNodePropertyString:
        """Gets the dav_root of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The dav_root of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._dav_root

    @dav_root.setter
    def dav_root(self, dav_root: ConfigNodePropertyString):
        """Sets the dav_root of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param dav_root: The dav_root of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type dav_root: ConfigNodePropertyString
        """

        self._dav_root = dav_root

    @property
    def dav_create_absolute_uri(self) -> ConfigNodePropertyBoolean:
        """Gets the dav_create_absolute_uri of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The dav_create_absolute_uri of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._dav_create_absolute_uri

    @dav_create_absolute_uri.setter
    def dav_create_absolute_uri(self, dav_create_absolute_uri: ConfigNodePropertyBoolean):
        """Sets the dav_create_absolute_uri of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param dav_create_absolute_uri: The dav_create_absolute_uri of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type dav_create_absolute_uri: ConfigNodePropertyBoolean
        """

        self._dav_create_absolute_uri = dav_create_absolute_uri

    @property
    def dav_realm(self) -> ConfigNodePropertyString:
        """Gets the dav_realm of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The dav_realm of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._dav_realm

    @dav_realm.setter
    def dav_realm(self, dav_realm: ConfigNodePropertyString):
        """Sets the dav_realm of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param dav_realm: The dav_realm of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type dav_realm: ConfigNodePropertyString
        """

        self._dav_realm = dav_realm

    @property
    def collection_types(self) -> ConfigNodePropertyArray:
        """Gets the collection_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The collection_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._collection_types

    @collection_types.setter
    def collection_types(self, collection_types: ConfigNodePropertyArray):
        """Sets the collection_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param collection_types: The collection_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type collection_types: ConfigNodePropertyArray
        """

        self._collection_types = collection_types

    @property
    def filter_prefixes(self) -> ConfigNodePropertyArray:
        """Gets the filter_prefixes of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The filter_prefixes of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._filter_prefixes

    @filter_prefixes.setter
    def filter_prefixes(self, filter_prefixes: ConfigNodePropertyArray):
        """Sets the filter_prefixes of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param filter_prefixes: The filter_prefixes of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type filter_prefixes: ConfigNodePropertyArray
        """

        self._filter_prefixes = filter_prefixes

    @property
    def filter_types(self) -> ConfigNodePropertyString:
        """Gets the filter_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The filter_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._filter_types

    @filter_types.setter
    def filter_types(self, filter_types: ConfigNodePropertyString):
        """Sets the filter_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param filter_types: The filter_types of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type filter_types: ConfigNodePropertyString
        """

        self._filter_types = filter_types

    @property
    def filter_uris(self) -> ConfigNodePropertyString:
        """Gets the filter_uris of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The filter_uris of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._filter_uris

    @filter_uris.setter
    def filter_uris(self, filter_uris: ConfigNodePropertyString):
        """Sets the filter_uris of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param filter_uris: The filter_uris of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type filter_uris: ConfigNodePropertyString
        """

        self._filter_uris = filter_uris

    @property
    def type_collections(self) -> ConfigNodePropertyString:
        """Gets the type_collections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The type_collections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._type_collections

    @type_collections.setter
    def type_collections(self, type_collections: ConfigNodePropertyString):
        """Sets the type_collections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param type_collections: The type_collections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type type_collections: ConfigNodePropertyString
        """

        self._type_collections = type_collections

    @property
    def type_noncollections(self) -> ConfigNodePropertyString:
        """Gets the type_noncollections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The type_noncollections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._type_noncollections

    @type_noncollections.setter
    def type_noncollections(self, type_noncollections: ConfigNodePropertyString):
        """Sets the type_noncollections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param type_noncollections: The type_noncollections of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type type_noncollections: ConfigNodePropertyString
        """

        self._type_noncollections = type_noncollections

    @property
    def type_content(self) -> ConfigNodePropertyString:
        """Gets the type_content of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :return: The type_content of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._type_content

    @type_content.setter
    def type_content(self, type_content: ConfigNodePropertyString):
        """Sets the type_content of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.


        :param type_content: The type_content of this OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties.
        :type type_content: ConfigNodePropertyString
        """

        self._type_content = type_content
