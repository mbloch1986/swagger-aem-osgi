# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComDayCqWidgetImplWidgetExtensionProviderImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, extendable_widgets: ConfigNodePropertyArray=None, widgetextensionprovider_debug: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqWidgetImplWidgetExtensionProviderImplProperties - a model defined in OpenAPI

        :param extendable_widgets: The extendable_widgets of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.  # noqa: E501
        :type extendable_widgets: ConfigNodePropertyArray
        :param widgetextensionprovider_debug: The widgetextensionprovider_debug of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.  # noqa: E501
        :type widgetextensionprovider_debug: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'extendable_widgets': ConfigNodePropertyArray,
            'widgetextensionprovider_debug': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'extendable_widgets': 'extendable.widgets',
            'widgetextensionprovider_debug': 'widgetextensionprovider.debug'
        }

        self._extendable_widgets = extendable_widgets
        self._widgetextensionprovider_debug = widgetextensionprovider_debug

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWidgetImplWidgetExtensionProviderImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWidgetImplWidgetExtensionProviderImplProperties of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.  # noqa: E501
        :rtype: ComDayCqWidgetImplWidgetExtensionProviderImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def extendable_widgets(self) -> ConfigNodePropertyArray:
        """Gets the extendable_widgets of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.


        :return: The extendable_widgets of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._extendable_widgets

    @extendable_widgets.setter
    def extendable_widgets(self, extendable_widgets: ConfigNodePropertyArray):
        """Sets the extendable_widgets of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.


        :param extendable_widgets: The extendable_widgets of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.
        :type extendable_widgets: ConfigNodePropertyArray
        """

        self._extendable_widgets = extendable_widgets

    @property
    def widgetextensionprovider_debug(self) -> ConfigNodePropertyBoolean:
        """Gets the widgetextensionprovider_debug of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.


        :return: The widgetextensionprovider_debug of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._widgetextensionprovider_debug

    @widgetextensionprovider_debug.setter
    def widgetextensionprovider_debug(self, widgetextensionprovider_debug: ConfigNodePropertyBoolean):
        """Sets the widgetextensionprovider_debug of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.


        :param widgetextensionprovider_debug: The widgetextensionprovider_debug of this ComDayCqWidgetImplWidgetExtensionProviderImplProperties.
        :type widgetextensionprovider_debug: ConfigNodePropertyBoolean
        """

        self._widgetextensionprovider_debug = widgetextensionprovider_debug
