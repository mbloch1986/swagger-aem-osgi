# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, sync_translation_state_scheduling_format: ConfigNodePropertyString=None, scheduling_repeat_translation_scheduling_format: ConfigNodePropertyString=None, sync_translation_state_lock_timeout_in_minutes: ConfigNodePropertyString=None, export_format: ConfigNodePropertyDropDown=None):  # noqa: E501
        """ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties - a model defined in OpenAPI

        :param sync_translation_state_scheduling_format: The sync_translation_state_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.  # noqa: E501
        :type sync_translation_state_scheduling_format: ConfigNodePropertyString
        :param scheduling_repeat_translation_scheduling_format: The scheduling_repeat_translation_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.  # noqa: E501
        :type scheduling_repeat_translation_scheduling_format: ConfigNodePropertyString
        :param sync_translation_state_lock_timeout_in_minutes: The sync_translation_state_lock_timeout_in_minutes of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.  # noqa: E501
        :type sync_translation_state_lock_timeout_in_minutes: ConfigNodePropertyString
        :param export_format: The export_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.  # noqa: E501
        :type export_format: ConfigNodePropertyDropDown
        """
        self.openapi_types = {
            'sync_translation_state_scheduling_format': ConfigNodePropertyString,
            'scheduling_repeat_translation_scheduling_format': ConfigNodePropertyString,
            'sync_translation_state_lock_timeout_in_minutes': ConfigNodePropertyString,
            'export_format': ConfigNodePropertyDropDown
        }

        self.attribute_map = {
            'sync_translation_state_scheduling_format': 'syncTranslationState.schedulingFormat',
            'scheduling_repeat_translation_scheduling_format': 'schedulingRepeatTranslation.schedulingFormat',
            'sync_translation_state_lock_timeout_in_minutes': 'syncTranslationState.lockTimeoutInMinutes',
            'export_format': 'export.format'
        }

        self._sync_translation_state_scheduling_format = sync_translation_state_scheduling_format
        self._scheduling_repeat_translation_scheduling_format = scheduling_repeat_translation_scheduling_format
        self._sync_translation_state_lock_timeout_in_minutes = sync_translation_state_lock_timeout_in_minutes
        self._export_format = export_format

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.  # noqa: E501
        :rtype: ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def sync_translation_state_scheduling_format(self) -> ConfigNodePropertyString:
        """Gets the sync_translation_state_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :return: The sync_translation_state_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._sync_translation_state_scheduling_format

    @sync_translation_state_scheduling_format.setter
    def sync_translation_state_scheduling_format(self, sync_translation_state_scheduling_format: ConfigNodePropertyString):
        """Sets the sync_translation_state_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :param sync_translation_state_scheduling_format: The sync_translation_state_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :type sync_translation_state_scheduling_format: ConfigNodePropertyString
        """

        self._sync_translation_state_scheduling_format = sync_translation_state_scheduling_format

    @property
    def scheduling_repeat_translation_scheduling_format(self) -> ConfigNodePropertyString:
        """Gets the scheduling_repeat_translation_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :return: The scheduling_repeat_translation_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._scheduling_repeat_translation_scheduling_format

    @scheduling_repeat_translation_scheduling_format.setter
    def scheduling_repeat_translation_scheduling_format(self, scheduling_repeat_translation_scheduling_format: ConfigNodePropertyString):
        """Sets the scheduling_repeat_translation_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :param scheduling_repeat_translation_scheduling_format: The scheduling_repeat_translation_scheduling_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :type scheduling_repeat_translation_scheduling_format: ConfigNodePropertyString
        """

        self._scheduling_repeat_translation_scheduling_format = scheduling_repeat_translation_scheduling_format

    @property
    def sync_translation_state_lock_timeout_in_minutes(self) -> ConfigNodePropertyString:
        """Gets the sync_translation_state_lock_timeout_in_minutes of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :return: The sync_translation_state_lock_timeout_in_minutes of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._sync_translation_state_lock_timeout_in_minutes

    @sync_translation_state_lock_timeout_in_minutes.setter
    def sync_translation_state_lock_timeout_in_minutes(self, sync_translation_state_lock_timeout_in_minutes: ConfigNodePropertyString):
        """Sets the sync_translation_state_lock_timeout_in_minutes of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :param sync_translation_state_lock_timeout_in_minutes: The sync_translation_state_lock_timeout_in_minutes of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :type sync_translation_state_lock_timeout_in_minutes: ConfigNodePropertyString
        """

        self._sync_translation_state_lock_timeout_in_minutes = sync_translation_state_lock_timeout_in_minutes

    @property
    def export_format(self) -> ConfigNodePropertyDropDown:
        """Gets the export_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :return: The export_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._export_format

    @export_format.setter
    def export_format(self, export_format: ConfigNodePropertyDropDown):
        """Sets the export_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.


        :param export_format: The export_format of this ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.
        :type export_format: ConfigNodePropertyDropDown
        """

        self._export_format = export_format
