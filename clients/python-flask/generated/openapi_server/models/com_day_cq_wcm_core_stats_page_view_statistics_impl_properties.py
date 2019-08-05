# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreStatsPageViewStatisticsImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pageviewstatistics_trackingurl: ConfigNodePropertyString=None, pageviewstatistics_trackingscript_enabled: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmCoreStatsPageViewStatisticsImplProperties - a model defined in OpenAPI

        :param pageviewstatistics_trackingurl: The pageviewstatistics_trackingurl of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.  # noqa: E501
        :type pageviewstatistics_trackingurl: ConfigNodePropertyString
        :param pageviewstatistics_trackingscript_enabled: The pageviewstatistics_trackingscript_enabled of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.  # noqa: E501
        :type pageviewstatistics_trackingscript_enabled: ConfigNodePropertyString
        """
        self.openapi_types = {
            'pageviewstatistics_trackingurl': ConfigNodePropertyString,
            'pageviewstatistics_trackingscript_enabled': ConfigNodePropertyString
        }

        self.attribute_map = {
            'pageviewstatistics_trackingurl': 'pageviewstatistics.trackingurl',
            'pageviewstatistics_trackingscript_enabled': 'pageviewstatistics.trackingscript.enabled'
        }

        self._pageviewstatistics_trackingurl = pageviewstatistics_trackingurl
        self._pageviewstatistics_trackingscript_enabled = pageviewstatistics_trackingscript_enabled

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreStatsPageViewStatisticsImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreStatsPageViewStatisticsImplProperties of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreStatsPageViewStatisticsImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pageviewstatistics_trackingurl(self) -> ConfigNodePropertyString:
        """Gets the pageviewstatistics_trackingurl of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.


        :return: The pageviewstatistics_trackingurl of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._pageviewstatistics_trackingurl

    @pageviewstatistics_trackingurl.setter
    def pageviewstatistics_trackingurl(self, pageviewstatistics_trackingurl: ConfigNodePropertyString):
        """Sets the pageviewstatistics_trackingurl of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.


        :param pageviewstatistics_trackingurl: The pageviewstatistics_trackingurl of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.
        :type pageviewstatistics_trackingurl: ConfigNodePropertyString
        """

        self._pageviewstatistics_trackingurl = pageviewstatistics_trackingurl

    @property
    def pageviewstatistics_trackingscript_enabled(self) -> ConfigNodePropertyString:
        """Gets the pageviewstatistics_trackingscript_enabled of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.


        :return: The pageviewstatistics_trackingscript_enabled of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._pageviewstatistics_trackingscript_enabled

    @pageviewstatistics_trackingscript_enabled.setter
    def pageviewstatistics_trackingscript_enabled(self, pageviewstatistics_trackingscript_enabled: ConfigNodePropertyString):
        """Sets the pageviewstatistics_trackingscript_enabled of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.


        :param pageviewstatistics_trackingscript_enabled: The pageviewstatistics_trackingscript_enabled of this ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.
        :type pageviewstatistics_trackingscript_enabled: ConfigNodePropertyString
        """

        self._pageviewstatistics_trackingscript_enabled = pageviewstatistics_trackingscript_enabled