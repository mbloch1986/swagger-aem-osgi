# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.adaptive_form_and_interactive_communication_web_channel_configuration_properties import AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties  # noqa: F401,E501
from openapi_server import util


class AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties=None):  # noqa: E501
        """AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo - a model defined in OpenAPI

        :param pid: The pid of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.  # noqa: E501
        :type title: str
        :param description: The description of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.  # noqa: E501
        :type properties: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The adaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.  # noqa: E501
        :rtype: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :return: The pid of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :param pid: The pid of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :return: The title of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :param title: The title of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :return: The description of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :param description: The description of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties:
        """Gets the properties of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :return: The properties of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :rtype: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties):
        """Sets the properties of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.


        :param properties: The properties of this AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo.
        :type properties: AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
        """

        self._properties = properties
