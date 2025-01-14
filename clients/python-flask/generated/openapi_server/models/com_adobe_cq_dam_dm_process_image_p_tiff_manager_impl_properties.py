# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqDamDmProcessImagePTiffManagerImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, max_memory: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComAdobeCqDamDmProcessImagePTiffManagerImplProperties - a model defined in OpenAPI

        :param max_memory: The max_memory of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.  # noqa: E501
        :type max_memory: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'max_memory': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'max_memory': 'maxMemory'
        }

        self._max_memory = max_memory

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqDamDmProcessImagePTiffManagerImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqDamDmProcessImagePTiffManagerImplProperties of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.  # noqa: E501
        :rtype: ComAdobeCqDamDmProcessImagePTiffManagerImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def max_memory(self) -> ConfigNodePropertyInteger:
        """Gets the max_memory of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.


        :return: The max_memory of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_memory

    @max_memory.setter
    def max_memory(self, max_memory: ConfigNodePropertyInteger):
        """Sets the max_memory of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.


        :param max_memory: The max_memory of this ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.
        :type max_memory: ConfigNodePropertyInteger
        """

        self._max_memory = max_memory
