# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplWCMDebugFilterProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, wcmdbgfilter_enabled: ConfigNodePropertyBoolean=None, wcmdbgfilter_jsp_debug: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqWcmCoreImplWCMDebugFilterProperties - a model defined in OpenAPI

        :param wcmdbgfilter_enabled: The wcmdbgfilter_enabled of this ComDayCqWcmCoreImplWCMDebugFilterProperties.  # noqa: E501
        :type wcmdbgfilter_enabled: ConfigNodePropertyBoolean
        :param wcmdbgfilter_jsp_debug: The wcmdbgfilter_jsp_debug of this ComDayCqWcmCoreImplWCMDebugFilterProperties.  # noqa: E501
        :type wcmdbgfilter_jsp_debug: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'wcmdbgfilter_enabled': ConfigNodePropertyBoolean,
            'wcmdbgfilter_jsp_debug': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'wcmdbgfilter_enabled': 'wcmdbgfilter.enabled',
            'wcmdbgfilter_jsp_debug': 'wcmdbgfilter.jspDebug'
        }

        self._wcmdbgfilter_enabled = wcmdbgfilter_enabled
        self._wcmdbgfilter_jsp_debug = wcmdbgfilter_jsp_debug

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplWCMDebugFilterProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplWCMDebugFilterProperties of this ComDayCqWcmCoreImplWCMDebugFilterProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplWCMDebugFilterProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def wcmdbgfilter_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the wcmdbgfilter_enabled of this ComDayCqWcmCoreImplWCMDebugFilterProperties.


        :return: The wcmdbgfilter_enabled of this ComDayCqWcmCoreImplWCMDebugFilterProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._wcmdbgfilter_enabled

    @wcmdbgfilter_enabled.setter
    def wcmdbgfilter_enabled(self, wcmdbgfilter_enabled: ConfigNodePropertyBoolean):
        """Sets the wcmdbgfilter_enabled of this ComDayCqWcmCoreImplWCMDebugFilterProperties.


        :param wcmdbgfilter_enabled: The wcmdbgfilter_enabled of this ComDayCqWcmCoreImplWCMDebugFilterProperties.
        :type wcmdbgfilter_enabled: ConfigNodePropertyBoolean
        """

        self._wcmdbgfilter_enabled = wcmdbgfilter_enabled

    @property
    def wcmdbgfilter_jsp_debug(self) -> ConfigNodePropertyBoolean:
        """Gets the wcmdbgfilter_jsp_debug of this ComDayCqWcmCoreImplWCMDebugFilterProperties.


        :return: The wcmdbgfilter_jsp_debug of this ComDayCqWcmCoreImplWCMDebugFilterProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._wcmdbgfilter_jsp_debug

    @wcmdbgfilter_jsp_debug.setter
    def wcmdbgfilter_jsp_debug(self, wcmdbgfilter_jsp_debug: ConfigNodePropertyBoolean):
        """Sets the wcmdbgfilter_jsp_debug of this ComDayCqWcmCoreImplWCMDebugFilterProperties.


        :param wcmdbgfilter_jsp_debug: The wcmdbgfilter_jsp_debug of this ComDayCqWcmCoreImplWCMDebugFilterProperties.
        :type wcmdbgfilter_jsp_debug: ConfigNodePropertyBoolean
        """

        self._wcmdbgfilter_jsp_debug = wcmdbgfilter_jsp_debug