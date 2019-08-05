# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, liverelationshipmgr_relationsconfig_default: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties - a model defined in OpenAPI

        :param liverelationshipmgr_relationsconfig_default: The liverelationshipmgr_relationsconfig_default of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.  # noqa: E501
        :type liverelationshipmgr_relationsconfig_default: ConfigNodePropertyString
        """
        self.openapi_types = {
            'liverelationshipmgr_relationsconfig_default': ConfigNodePropertyString
        }

        self.attribute_map = {
            'liverelationshipmgr_relationsconfig_default': 'liverelationshipmgr.relationsconfig.default'
        }

        self._liverelationshipmgr_relationsconfig_default = liverelationshipmgr_relationsconfig_default

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmMsmImplLiveRelationshipManagerImplProperties of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.  # noqa: E501
        :rtype: ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def liverelationshipmgr_relationsconfig_default(self) -> ConfigNodePropertyString:
        """Gets the liverelationshipmgr_relationsconfig_default of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.


        :return: The liverelationshipmgr_relationsconfig_default of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._liverelationshipmgr_relationsconfig_default

    @liverelationshipmgr_relationsconfig_default.setter
    def liverelationshipmgr_relationsconfig_default(self, liverelationshipmgr_relationsconfig_default: ConfigNodePropertyString):
        """Sets the liverelationshipmgr_relationsconfig_default of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.


        :param liverelationshipmgr_relationsconfig_default: The liverelationshipmgr_relationsconfig_default of this ComDayCqWcmMsmImplLiveRelationshipManagerImplProperties.
        :type liverelationshipmgr_relationsconfig_default: ConfigNodePropertyString
        """

        self._liverelationshipmgr_relationsconfig_default = liverelationshipmgr_relationsconfig_default