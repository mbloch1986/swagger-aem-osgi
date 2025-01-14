# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, felix_inventory_printer_name: ConfigNodePropertyString=None, felix_inventory_printer_title: ConfigNodePropertyString=None, path: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties - a model defined in OpenAPI

        :param felix_inventory_printer_name: The felix_inventory_printer_name of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.  # noqa: E501
        :type felix_inventory_printer_name: ConfigNodePropertyString
        :param felix_inventory_printer_title: The felix_inventory_printer_title of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.  # noqa: E501
        :type felix_inventory_printer_title: ConfigNodePropertyString
        :param path: The path of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.  # noqa: E501
        :type path: ConfigNodePropertyString
        """
        self.openapi_types = {
            'felix_inventory_printer_name': ConfigNodePropertyString,
            'felix_inventory_printer_title': ConfigNodePropertyString,
            'path': ConfigNodePropertyString
        }

        self.attribute_map = {
            'felix_inventory_printer_name': 'felix.inventory.printer.name',
            'felix_inventory_printer_title': 'felix.inventory.printer.title',
            'path': 'path'
        }

        self._felix_inventory_printer_name = felix_inventory_printer_name
        self._felix_inventory_printer_title = felix_inventory_printer_title
        self._path = path

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.  # noqa: E501
        :rtype: OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def felix_inventory_printer_name(self) -> ConfigNodePropertyString:
        """Gets the felix_inventory_printer_name of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :return: The felix_inventory_printer_name of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._felix_inventory_printer_name

    @felix_inventory_printer_name.setter
    def felix_inventory_printer_name(self, felix_inventory_printer_name: ConfigNodePropertyString):
        """Sets the felix_inventory_printer_name of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :param felix_inventory_printer_name: The felix_inventory_printer_name of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :type felix_inventory_printer_name: ConfigNodePropertyString
        """

        self._felix_inventory_printer_name = felix_inventory_printer_name

    @property
    def felix_inventory_printer_title(self) -> ConfigNodePropertyString:
        """Gets the felix_inventory_printer_title of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :return: The felix_inventory_printer_title of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._felix_inventory_printer_title

    @felix_inventory_printer_title.setter
    def felix_inventory_printer_title(self, felix_inventory_printer_title: ConfigNodePropertyString):
        """Sets the felix_inventory_printer_title of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :param felix_inventory_printer_title: The felix_inventory_printer_title of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :type felix_inventory_printer_title: ConfigNodePropertyString
        """

        self._felix_inventory_printer_title = felix_inventory_printer_title

    @property
    def path(self) -> ConfigNodePropertyString:
        """Gets the path of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :return: The path of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path: ConfigNodePropertyString):
        """Sets the path of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.


        :param path: The path of this OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.
        :type path: ConfigNodePropertyString
        """

        self._path = path
