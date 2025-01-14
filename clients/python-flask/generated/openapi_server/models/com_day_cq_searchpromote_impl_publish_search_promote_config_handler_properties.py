# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_searchpromote_confighandler_enabled: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties - a model defined in OpenAPI

        :param cq_searchpromote_confighandler_enabled: The cq_searchpromote_confighandler_enabled of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.  # noqa: E501
        :type cq_searchpromote_confighandler_enabled: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'cq_searchpromote_confighandler_enabled': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'cq_searchpromote_confighandler_enabled': 'cq.searchpromote.confighandler.enabled'
        }

        self._cq_searchpromote_confighandler_enabled = cq_searchpromote_confighandler_enabled

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.  # noqa: E501
        :rtype: ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_searchpromote_confighandler_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the cq_searchpromote_confighandler_enabled of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.


        :return: The cq_searchpromote_confighandler_enabled of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._cq_searchpromote_confighandler_enabled

    @cq_searchpromote_confighandler_enabled.setter
    def cq_searchpromote_confighandler_enabled(self, cq_searchpromote_confighandler_enabled: ConfigNodePropertyBoolean):
        """Sets the cq_searchpromote_confighandler_enabled of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.


        :param cq_searchpromote_confighandler_enabled: The cq_searchpromote_confighandler_enabled of this ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.
        :type cq_searchpromote_confighandler_enabled: ConfigNodePropertyBoolean
        """

        self._cq_searchpromote_confighandler_enabled = cq_searchpromote_confighandler_enabled
