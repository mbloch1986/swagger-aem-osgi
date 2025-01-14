# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteSecurityUserUserPropertiesServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, adapter_condition: ConfigNodePropertyString=None, granite_userproperties_nodetypes: ConfigNodePropertyArray=None, granite_userproperties_resourcetypes: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeGraniteSecurityUserUserPropertiesServiceProperties - a model defined in OpenAPI

        :param adapter_condition: The adapter_condition of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.  # noqa: E501
        :type adapter_condition: ConfigNodePropertyString
        :param granite_userproperties_nodetypes: The granite_userproperties_nodetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.  # noqa: E501
        :type granite_userproperties_nodetypes: ConfigNodePropertyArray
        :param granite_userproperties_resourcetypes: The granite_userproperties_resourcetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.  # noqa: E501
        :type granite_userproperties_resourcetypes: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'adapter_condition': ConfigNodePropertyString,
            'granite_userproperties_nodetypes': ConfigNodePropertyArray,
            'granite_userproperties_resourcetypes': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'adapter_condition': 'adapter.condition',
            'granite_userproperties_nodetypes': 'granite.userproperties.nodetypes',
            'granite_userproperties_resourcetypes': 'granite.userproperties.resourcetypes'
        }

        self._adapter_condition = adapter_condition
        self._granite_userproperties_nodetypes = granite_userproperties_nodetypes
        self._granite_userproperties_resourcetypes = granite_userproperties_resourcetypes

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteSecurityUserUserPropertiesServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteSecurityUserUserPropertiesServiceProperties of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.  # noqa: E501
        :rtype: ComAdobeGraniteSecurityUserUserPropertiesServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def adapter_condition(self) -> ConfigNodePropertyString:
        """Gets the adapter_condition of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :return: The adapter_condition of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._adapter_condition

    @adapter_condition.setter
    def adapter_condition(self, adapter_condition: ConfigNodePropertyString):
        """Sets the adapter_condition of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :param adapter_condition: The adapter_condition of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :type adapter_condition: ConfigNodePropertyString
        """

        self._adapter_condition = adapter_condition

    @property
    def granite_userproperties_nodetypes(self) -> ConfigNodePropertyArray:
        """Gets the granite_userproperties_nodetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :return: The granite_userproperties_nodetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._granite_userproperties_nodetypes

    @granite_userproperties_nodetypes.setter
    def granite_userproperties_nodetypes(self, granite_userproperties_nodetypes: ConfigNodePropertyArray):
        """Sets the granite_userproperties_nodetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :param granite_userproperties_nodetypes: The granite_userproperties_nodetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :type granite_userproperties_nodetypes: ConfigNodePropertyArray
        """

        self._granite_userproperties_nodetypes = granite_userproperties_nodetypes

    @property
    def granite_userproperties_resourcetypes(self) -> ConfigNodePropertyArray:
        """Gets the granite_userproperties_resourcetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :return: The granite_userproperties_resourcetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._granite_userproperties_resourcetypes

    @granite_userproperties_resourcetypes.setter
    def granite_userproperties_resourcetypes(self, granite_userproperties_resourcetypes: ConfigNodePropertyArray):
        """Sets the granite_userproperties_resourcetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.


        :param granite_userproperties_resourcetypes: The granite_userproperties_resourcetypes of this ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.
        :type granite_userproperties_resourcetypes: ConfigNodePropertyArray
        """

        self._granite_userproperties_resourcetypes = granite_userproperties_resourcetypes
