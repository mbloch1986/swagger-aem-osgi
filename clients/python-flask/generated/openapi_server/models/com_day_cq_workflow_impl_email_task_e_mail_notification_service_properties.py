# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, notify_onupdate: ConfigNodePropertyBoolean=None, notify_oncomplete: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties - a model defined in OpenAPI

        :param notify_onupdate: The notify_onupdate of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.  # noqa: E501
        :type notify_onupdate: ConfigNodePropertyBoolean
        :param notify_oncomplete: The notify_oncomplete of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.  # noqa: E501
        :type notify_oncomplete: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'notify_onupdate': ConfigNodePropertyBoolean,
            'notify_oncomplete': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'notify_onupdate': 'notify.onupdate',
            'notify_oncomplete': 'notify.oncomplete'
        }

        self._notify_onupdate = notify_onupdate
        self._notify_oncomplete = notify_oncomplete

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.  # noqa: E501
        :rtype: ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def notify_onupdate(self) -> ConfigNodePropertyBoolean:
        """Gets the notify_onupdate of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.


        :return: The notify_onupdate of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._notify_onupdate

    @notify_onupdate.setter
    def notify_onupdate(self, notify_onupdate: ConfigNodePropertyBoolean):
        """Sets the notify_onupdate of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.


        :param notify_onupdate: The notify_onupdate of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.
        :type notify_onupdate: ConfigNodePropertyBoolean
        """

        self._notify_onupdate = notify_onupdate

    @property
    def notify_oncomplete(self) -> ConfigNodePropertyBoolean:
        """Gets the notify_oncomplete of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.


        :return: The notify_oncomplete of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._notify_oncomplete

    @notify_oncomplete.setter
    def notify_oncomplete(self, notify_oncomplete: ConfigNodePropertyBoolean):
        """Sets the notify_oncomplete of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.


        :param notify_oncomplete: The notify_oncomplete of this ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.
        :type notify_oncomplete: ConfigNodePropertyBoolean
        """

        self._notify_oncomplete = notify_oncomplete
