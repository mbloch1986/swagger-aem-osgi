# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_commerce_pim_impl_cataloggenerator_catalog_generator_impl_properties import ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties=None):  # noqa: E501
        """ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.  # noqa: E501
        :type properties: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.  # noqa: E501
        :rtype: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :return: The pid of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :param pid: The pid of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :return: The title of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :param title: The title of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :return: The description of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :param description: The description of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties:
        """Gets the properties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :return: The properties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :rtype: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties):
        """Sets the properties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.


        :param properties: The properties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplInfo.
        :type properties: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
        """

        self._properties = properties