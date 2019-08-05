# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, process_label: ConfigNodePropertyString=None, notify_on_complete: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties - a model defined in OpenAPI

        :param process_label: The process_label of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.  # noqa: E501
        :type process_label: ConfigNodePropertyString
        :param notify_on_complete: The notify_on_complete of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.  # noqa: E501
        :type notify_on_complete: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'process_label': ConfigNodePropertyString,
            'notify_on_complete': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'process_label': 'process.label',
            'notify_on_complete': 'Notify on Complete'
        }

        self._process_label = process_label
        self._notify_on_complete = notify_on_complete

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.  # noqa: E501
        :rtype: ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def process_label(self) -> ConfigNodePropertyString:
        """Gets the process_label of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.


        :return: The process_label of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._process_label

    @process_label.setter
    def process_label(self, process_label: ConfigNodePropertyString):
        """Sets the process_label of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.


        :param process_label: The process_label of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.
        :type process_label: ConfigNodePropertyString
        """

        self._process_label = process_label

    @property
    def notify_on_complete(self) -> ConfigNodePropertyBoolean:
        """Gets the notify_on_complete of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.


        :return: The notify_on_complete of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._notify_on_complete

    @notify_on_complete.setter
    def notify_on_complete(self, notify_on_complete: ConfigNodePropertyBoolean):
        """Sets the notify_on_complete of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.


        :param notify_on_complete: The notify_on_complete of this ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.
        :type notify_on_complete: ConfigNodePropertyBoolean
        """

        self._notify_on_complete = notify_on_complete