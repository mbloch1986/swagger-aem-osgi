# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, operation: ConfigNodePropertyString=None, email_enabled: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties - a model defined in OpenAPI

        :param operation: The operation of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.  # noqa: E501
        :type operation: ConfigNodePropertyString
        :param email_enabled: The email_enabled of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.  # noqa: E501
        :type email_enabled: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'operation': ConfigNodePropertyString,
            'email_enabled': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'operation': 'operation',
            'email_enabled': 'emailEnabled'
        }

        self._operation = operation
        self._email_enabled = email_enabled

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.  # noqa: E501
        :rtype: ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def operation(self) -> ConfigNodePropertyString:
        """Gets the operation of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.


        :return: The operation of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._operation

    @operation.setter
    def operation(self, operation: ConfigNodePropertyString):
        """Sets the operation of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.


        :param operation: The operation of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.
        :type operation: ConfigNodePropertyString
        """

        self._operation = operation

    @property
    def email_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the email_enabled of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.


        :return: The email_enabled of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._email_enabled

    @email_enabled.setter
    def email_enabled(self, email_enabled: ConfigNodePropertyBoolean):
        """Sets the email_enabled of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.


        :param email_enabled: The email_enabled of this ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.
        :type email_enabled: ConfigNodePropertyBoolean
        """

        self._email_enabled = email_enabled
