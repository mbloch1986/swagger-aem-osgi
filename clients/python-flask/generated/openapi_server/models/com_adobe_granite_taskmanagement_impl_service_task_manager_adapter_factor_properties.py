# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, adapter_condition: ConfigNodePropertyString=None, taskmanager_admingroups: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties - a model defined in OpenAPI

        :param adapter_condition: The adapter_condition of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.  # noqa: E501
        :type adapter_condition: ConfigNodePropertyString
        :param taskmanager_admingroups: The taskmanager_admingroups of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.  # noqa: E501
        :type taskmanager_admingroups: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'adapter_condition': ConfigNodePropertyString,
            'taskmanager_admingroups': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'adapter_condition': 'adapter.condition',
            'taskmanager_admingroups': 'taskmanager.admingroups'
        }

        self._adapter_condition = adapter_condition
        self._taskmanager_admingroups = taskmanager_admingroups

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.  # noqa: E501
        :rtype: ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def adapter_condition(self) -> ConfigNodePropertyString:
        """Gets the adapter_condition of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.


        :return: The adapter_condition of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._adapter_condition

    @adapter_condition.setter
    def adapter_condition(self, adapter_condition: ConfigNodePropertyString):
        """Sets the adapter_condition of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.


        :param adapter_condition: The adapter_condition of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.
        :type adapter_condition: ConfigNodePropertyString
        """

        self._adapter_condition = adapter_condition

    @property
    def taskmanager_admingroups(self) -> ConfigNodePropertyArray:
        """Gets the taskmanager_admingroups of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.


        :return: The taskmanager_admingroups of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._taskmanager_admingroups

    @taskmanager_admingroups.setter
    def taskmanager_admingroups(self, taskmanager_admingroups: ConfigNodePropertyArray):
        """Sets the taskmanager_admingroups of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.


        :param taskmanager_admingroups: The taskmanager_admingroups of this ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.
        :type taskmanager_admingroups: ConfigNodePropertyArray
        """

        self._taskmanager_admingroups = taskmanager_admingroups
