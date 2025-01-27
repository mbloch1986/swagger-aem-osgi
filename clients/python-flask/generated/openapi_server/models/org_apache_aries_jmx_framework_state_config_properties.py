# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class OrgApacheAriesJmxFrameworkStateConfigProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, attribute_change_notification_enabled: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheAriesJmxFrameworkStateConfigProperties - a model defined in OpenAPI

        :param attribute_change_notification_enabled: The attribute_change_notification_enabled of this OrgApacheAriesJmxFrameworkStateConfigProperties.  # noqa: E501
        :type attribute_change_notification_enabled: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'attribute_change_notification_enabled': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'attribute_change_notification_enabled': 'attributeChangeNotificationEnabled'
        }

        self._attribute_change_notification_enabled = attribute_change_notification_enabled

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheAriesJmxFrameworkStateConfigProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheAriesJmxFrameworkStateConfigProperties of this OrgApacheAriesJmxFrameworkStateConfigProperties.  # noqa: E501
        :rtype: OrgApacheAriesJmxFrameworkStateConfigProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def attribute_change_notification_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the attribute_change_notification_enabled of this OrgApacheAriesJmxFrameworkStateConfigProperties.


        :return: The attribute_change_notification_enabled of this OrgApacheAriesJmxFrameworkStateConfigProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._attribute_change_notification_enabled

    @attribute_change_notification_enabled.setter
    def attribute_change_notification_enabled(self, attribute_change_notification_enabled: ConfigNodePropertyBoolean):
        """Sets the attribute_change_notification_enabled of this OrgApacheAriesJmxFrameworkStateConfigProperties.


        :param attribute_change_notification_enabled: The attribute_change_notification_enabled of this OrgApacheAriesJmxFrameworkStateConfigProperties.
        :type attribute_change_notification_enabled: ConfigNodePropertyBoolean
        """

        self._attribute_change_notification_enabled = attribute_change_notification_enabled
