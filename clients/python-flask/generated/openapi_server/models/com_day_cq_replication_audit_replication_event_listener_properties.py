# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqReplicationAuditReplicationEventListenerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, service_ranking: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComDayCqReplicationAuditReplicationEventListenerProperties - a model defined in OpenAPI

        :param service_ranking: The service_ranking of this ComDayCqReplicationAuditReplicationEventListenerProperties.  # noqa: E501
        :type service_ranking: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'service_ranking': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'service_ranking': 'service.ranking'
        }

        self._service_ranking = service_ranking

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqReplicationAuditReplicationEventListenerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReplicationAuditReplicationEventListenerProperties of this ComDayCqReplicationAuditReplicationEventListenerProperties.  # noqa: E501
        :rtype: ComDayCqReplicationAuditReplicationEventListenerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def service_ranking(self) -> ConfigNodePropertyInteger:
        """Gets the service_ranking of this ComDayCqReplicationAuditReplicationEventListenerProperties.


        :return: The service_ranking of this ComDayCqReplicationAuditReplicationEventListenerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._service_ranking

    @service_ranking.setter
    def service_ranking(self, service_ranking: ConfigNodePropertyInteger):
        """Sets the service_ranking of this ComDayCqReplicationAuditReplicationEventListenerProperties.


        :param service_ranking: The service_ranking of this ComDayCqReplicationAuditReplicationEventListenerProperties.
        :type service_ranking: ConfigNodePropertyInteger
        """

        self._service_ranking = service_ranking