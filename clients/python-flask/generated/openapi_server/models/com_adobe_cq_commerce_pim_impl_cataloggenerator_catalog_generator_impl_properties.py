# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_commerce_cataloggenerator_bucketsize: ConfigNodePropertyInteger=None, cq_commerce_cataloggenerator_bucketname: ConfigNodePropertyString=None, cq_commerce_cataloggenerator_excludedtemplateproperties: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties - a model defined in OpenAPI

        :param cq_commerce_cataloggenerator_bucketsize: The cq_commerce_cataloggenerator_bucketsize of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.  # noqa: E501
        :type cq_commerce_cataloggenerator_bucketsize: ConfigNodePropertyInteger
        :param cq_commerce_cataloggenerator_bucketname: The cq_commerce_cataloggenerator_bucketname of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.  # noqa: E501
        :type cq_commerce_cataloggenerator_bucketname: ConfigNodePropertyString
        :param cq_commerce_cataloggenerator_excludedtemplateproperties: The cq_commerce_cataloggenerator_excludedtemplateproperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.  # noqa: E501
        :type cq_commerce_cataloggenerator_excludedtemplateproperties: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'cq_commerce_cataloggenerator_bucketsize': ConfigNodePropertyInteger,
            'cq_commerce_cataloggenerator_bucketname': ConfigNodePropertyString,
            'cq_commerce_cataloggenerator_excludedtemplateproperties': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'cq_commerce_cataloggenerator_bucketsize': 'cq.commerce.cataloggenerator.bucketsize',
            'cq_commerce_cataloggenerator_bucketname': 'cq.commerce.cataloggenerator.bucketname',
            'cq_commerce_cataloggenerator_excludedtemplateproperties': 'cq.commerce.cataloggenerator.excludedtemplateproperties'
        }

        self._cq_commerce_cataloggenerator_bucketsize = cq_commerce_cataloggenerator_bucketsize
        self._cq_commerce_cataloggenerator_bucketname = cq_commerce_cataloggenerator_bucketname
        self._cq_commerce_cataloggenerator_excludedtemplateproperties = cq_commerce_cataloggenerator_excludedtemplateproperties

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.  # noqa: E501
        :rtype: ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_commerce_cataloggenerator_bucketsize(self) -> ConfigNodePropertyInteger:
        """Gets the cq_commerce_cataloggenerator_bucketsize of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :return: The cq_commerce_cataloggenerator_bucketsize of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_commerce_cataloggenerator_bucketsize

    @cq_commerce_cataloggenerator_bucketsize.setter
    def cq_commerce_cataloggenerator_bucketsize(self, cq_commerce_cataloggenerator_bucketsize: ConfigNodePropertyInteger):
        """Sets the cq_commerce_cataloggenerator_bucketsize of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :param cq_commerce_cataloggenerator_bucketsize: The cq_commerce_cataloggenerator_bucketsize of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :type cq_commerce_cataloggenerator_bucketsize: ConfigNodePropertyInteger
        """

        self._cq_commerce_cataloggenerator_bucketsize = cq_commerce_cataloggenerator_bucketsize

    @property
    def cq_commerce_cataloggenerator_bucketname(self) -> ConfigNodePropertyString:
        """Gets the cq_commerce_cataloggenerator_bucketname of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :return: The cq_commerce_cataloggenerator_bucketname of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._cq_commerce_cataloggenerator_bucketname

    @cq_commerce_cataloggenerator_bucketname.setter
    def cq_commerce_cataloggenerator_bucketname(self, cq_commerce_cataloggenerator_bucketname: ConfigNodePropertyString):
        """Sets the cq_commerce_cataloggenerator_bucketname of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :param cq_commerce_cataloggenerator_bucketname: The cq_commerce_cataloggenerator_bucketname of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :type cq_commerce_cataloggenerator_bucketname: ConfigNodePropertyString
        """

        self._cq_commerce_cataloggenerator_bucketname = cq_commerce_cataloggenerator_bucketname

    @property
    def cq_commerce_cataloggenerator_excludedtemplateproperties(self) -> ConfigNodePropertyArray:
        """Gets the cq_commerce_cataloggenerator_excludedtemplateproperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :return: The cq_commerce_cataloggenerator_excludedtemplateproperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._cq_commerce_cataloggenerator_excludedtemplateproperties

    @cq_commerce_cataloggenerator_excludedtemplateproperties.setter
    def cq_commerce_cataloggenerator_excludedtemplateproperties(self, cq_commerce_cataloggenerator_excludedtemplateproperties: ConfigNodePropertyArray):
        """Sets the cq_commerce_cataloggenerator_excludedtemplateproperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.


        :param cq_commerce_cataloggenerator_excludedtemplateproperties: The cq_commerce_cataloggenerator_excludedtemplateproperties of this ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.
        :type cq_commerce_cataloggenerator_excludedtemplateproperties: ConfigNodePropertyArray
        """

        self._cq_commerce_cataloggenerator_excludedtemplateproperties = cq_commerce_cataloggenerator_excludedtemplateproperties