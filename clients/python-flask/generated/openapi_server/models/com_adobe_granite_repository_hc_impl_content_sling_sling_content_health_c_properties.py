# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, hc_tags: ConfigNodePropertyArray=None, exclude_search_path: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties - a model defined in OpenAPI

        :param hc_tags: The hc_tags of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.  # noqa: E501
        :type hc_tags: ConfigNodePropertyArray
        :param exclude_search_path: The exclude_search_path of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.  # noqa: E501
        :type exclude_search_path: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'hc_tags': ConfigNodePropertyArray,
            'exclude_search_path': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'hc_tags': 'hc.tags',
            'exclude_search_path': 'exclude.search.path'
        }

        self._hc_tags = hc_tags
        self._exclude_search_path = exclude_search_path

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.  # noqa: E501
        :rtype: ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def hc_tags(self) -> ConfigNodePropertyArray:
        """Gets the hc_tags of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.


        :return: The hc_tags of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._hc_tags

    @hc_tags.setter
    def hc_tags(self, hc_tags: ConfigNodePropertyArray):
        """Sets the hc_tags of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.


        :param hc_tags: The hc_tags of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.
        :type hc_tags: ConfigNodePropertyArray
        """

        self._hc_tags = hc_tags

    @property
    def exclude_search_path(self) -> ConfigNodePropertyArray:
        """Gets the exclude_search_path of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.


        :return: The exclude_search_path of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._exclude_search_path

    @exclude_search_path.setter
    def exclude_search_path(self, exclude_search_path: ConfigNodePropertyArray):
        """Sets the exclude_search_path of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.


        :param exclude_search_path: The exclude_search_path of this ComAdobeGraniteRepositoryHcImplContentSlingSlingContentHealthCProperties.
        :type exclude_search_path: ConfigNodePropertyArray
        """

        self._exclude_search_path = exclude_search_path