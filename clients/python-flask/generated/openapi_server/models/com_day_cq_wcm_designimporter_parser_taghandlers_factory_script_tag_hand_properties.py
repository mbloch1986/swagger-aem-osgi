# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, service_ranking: ConfigNodePropertyInteger=None, tagpattern: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties - a model defined in OpenAPI

        :param service_ranking: The service_ranking of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.  # noqa: E501
        :type service_ranking: ConfigNodePropertyInteger
        :param tagpattern: The tagpattern of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.  # noqa: E501
        :type tagpattern: ConfigNodePropertyString
        """
        self.openapi_types = {
            'service_ranking': ConfigNodePropertyInteger,
            'tagpattern': ConfigNodePropertyString
        }

        self.attribute_map = {
            'service_ranking': 'service.ranking',
            'tagpattern': 'tagpattern'
        }

        self._service_ranking = service_ranking
        self._tagpattern = tagpattern

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.  # noqa: E501
        :rtype: ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def service_ranking(self) -> ConfigNodePropertyInteger:
        """Gets the service_ranking of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.


        :return: The service_ranking of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._service_ranking

    @service_ranking.setter
    def service_ranking(self, service_ranking: ConfigNodePropertyInteger):
        """Sets the service_ranking of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.


        :param service_ranking: The service_ranking of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.
        :type service_ranking: ConfigNodePropertyInteger
        """

        self._service_ranking = service_ranking

    @property
    def tagpattern(self) -> ConfigNodePropertyString:
        """Gets the tagpattern of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.


        :return: The tagpattern of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._tagpattern

    @tagpattern.setter
    def tagpattern(self, tagpattern: ConfigNodePropertyString):
        """Sets the tagpattern of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.


        :param tagpattern: The tagpattern of this ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties.
        :type tagpattern: ConfigNodePropertyString
        """

        self._tagpattern = tagpattern
