# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server import util


class OrgApacheFelixSystemreadyImplServicesCheckProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, services_list: ConfigNodePropertyArray=None, type: ConfigNodePropertyDropDown=None):  # noqa: E501
        """OrgApacheFelixSystemreadyImplServicesCheckProperties - a model defined in OpenAPI

        :param services_list: The services_list of this OrgApacheFelixSystemreadyImplServicesCheckProperties.  # noqa: E501
        :type services_list: ConfigNodePropertyArray
        :param type: The type of this OrgApacheFelixSystemreadyImplServicesCheckProperties.  # noqa: E501
        :type type: ConfigNodePropertyDropDown
        """
        self.openapi_types = {
            'services_list': ConfigNodePropertyArray,
            'type': ConfigNodePropertyDropDown
        }

        self.attribute_map = {
            'services_list': 'services.list',
            'type': 'type'
        }

        self._services_list = services_list
        self._type = type

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheFelixSystemreadyImplServicesCheckProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheFelixSystemreadyImplServicesCheckProperties of this OrgApacheFelixSystemreadyImplServicesCheckProperties.  # noqa: E501
        :rtype: OrgApacheFelixSystemreadyImplServicesCheckProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def services_list(self) -> ConfigNodePropertyArray:
        """Gets the services_list of this OrgApacheFelixSystemreadyImplServicesCheckProperties.


        :return: The services_list of this OrgApacheFelixSystemreadyImplServicesCheckProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._services_list

    @services_list.setter
    def services_list(self, services_list: ConfigNodePropertyArray):
        """Sets the services_list of this OrgApacheFelixSystemreadyImplServicesCheckProperties.


        :param services_list: The services_list of this OrgApacheFelixSystemreadyImplServicesCheckProperties.
        :type services_list: ConfigNodePropertyArray
        """

        self._services_list = services_list

    @property
    def type(self) -> ConfigNodePropertyDropDown:
        """Gets the type of this OrgApacheFelixSystemreadyImplServicesCheckProperties.


        :return: The type of this OrgApacheFelixSystemreadyImplServicesCheckProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._type

    @type.setter
    def type(self, type: ConfigNodePropertyDropDown):
        """Sets the type of this OrgApacheFelixSystemreadyImplServicesCheckProperties.


        :param type: The type of this OrgApacheFelixSystemreadyImplServicesCheckProperties.
        :type type: ConfigNodePropertyDropDown
        """

        self._type = type
