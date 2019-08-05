# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreMvtMVTStatisticsImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, mvtstatistics_trackingurl: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmCoreMvtMVTStatisticsImplProperties - a model defined in OpenAPI

        :param mvtstatistics_trackingurl: The mvtstatistics_trackingurl of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.  # noqa: E501
        :type mvtstatistics_trackingurl: ConfigNodePropertyString
        """
        self.openapi_types = {
            'mvtstatistics_trackingurl': ConfigNodePropertyString
        }

        self.attribute_map = {
            'mvtstatistics_trackingurl': 'mvtstatistics.trackingurl'
        }

        self._mvtstatistics_trackingurl = mvtstatistics_trackingurl

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreMvtMVTStatisticsImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreMvtMVTStatisticsImplProperties of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreMvtMVTStatisticsImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def mvtstatistics_trackingurl(self) -> ConfigNodePropertyString:
        """Gets the mvtstatistics_trackingurl of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.


        :return: The mvtstatistics_trackingurl of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._mvtstatistics_trackingurl

    @mvtstatistics_trackingurl.setter
    def mvtstatistics_trackingurl(self, mvtstatistics_trackingurl: ConfigNodePropertyString):
        """Sets the mvtstatistics_trackingurl of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.


        :param mvtstatistics_trackingurl: The mvtstatistics_trackingurl of this ComDayCqWcmCoreMvtMVTStatisticsImplProperties.
        :type mvtstatistics_trackingurl: ConfigNodePropertyString
        """

        self._mvtstatistics_trackingurl = mvtstatistics_trackingurl