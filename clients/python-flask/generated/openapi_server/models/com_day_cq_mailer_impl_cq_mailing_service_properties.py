# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqMailerImplCqMailingServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, max_recipient_count: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqMailerImplCqMailingServiceProperties - a model defined in OpenAPI

        :param max_recipient_count: The max_recipient_count of this ComDayCqMailerImplCqMailingServiceProperties.  # noqa: E501
        :type max_recipient_count: ConfigNodePropertyString
        """
        self.openapi_types = {
            'max_recipient_count': ConfigNodePropertyString
        }

        self.attribute_map = {
            'max_recipient_count': 'max.recipient.count'
        }

        self._max_recipient_count = max_recipient_count

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqMailerImplCqMailingServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqMailerImplCqMailingServiceProperties of this ComDayCqMailerImplCqMailingServiceProperties.  # noqa: E501
        :rtype: ComDayCqMailerImplCqMailingServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def max_recipient_count(self) -> ConfigNodePropertyString:
        """Gets the max_recipient_count of this ComDayCqMailerImplCqMailingServiceProperties.


        :return: The max_recipient_count of this ComDayCqMailerImplCqMailingServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._max_recipient_count

    @max_recipient_count.setter
    def max_recipient_count(self, max_recipient_count: ConfigNodePropertyString):
        """Sets the max_recipient_count of this ComDayCqMailerImplCqMailingServiceProperties.


        :param max_recipient_count: The max_recipient_count of this ComDayCqMailerImplCqMailingServiceProperties.
        :type max_recipient_count: ConfigNodePropertyString
        """

        self._max_recipient_count = max_recipient_count
