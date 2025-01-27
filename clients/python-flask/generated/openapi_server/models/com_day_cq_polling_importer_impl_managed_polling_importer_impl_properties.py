# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqPollingImporterImplManagedPollingImporterImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, importer_user: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqPollingImporterImplManagedPollingImporterImplProperties - a model defined in OpenAPI

        :param importer_user: The importer_user of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.  # noqa: E501
        :type importer_user: ConfigNodePropertyString
        """
        self.openapi_types = {
            'importer_user': ConfigNodePropertyString
        }

        self.attribute_map = {
            'importer_user': 'importer.user'
        }

        self._importer_user = importer_user

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqPollingImporterImplManagedPollingImporterImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqPollingImporterImplManagedPollingImporterImplProperties of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.  # noqa: E501
        :rtype: ComDayCqPollingImporterImplManagedPollingImporterImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def importer_user(self) -> ConfigNodePropertyString:
        """Gets the importer_user of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.


        :return: The importer_user of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._importer_user

    @importer_user.setter
    def importer_user(self, importer_user: ConfigNodePropertyString):
        """Sets the importer_user of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.


        :param importer_user: The importer_user of this ComDayCqPollingImporterImplManagedPollingImporterImplProperties.
        :type importer_user: ConfigNodePropertyString
        """

        self._importer_user = importer_user
