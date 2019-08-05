# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_widget_impl_html_library_manager_impl_properties import ComDayCqWidgetImplHtmlLibraryManagerImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWidgetImplHtmlLibraryManagerImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWidgetImplHtmlLibraryManagerImplProperties=None, bundle_location: str=None, service_location: str=None):  # noqa: E501
        """ComDayCqWidgetImplHtmlLibraryManagerImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type properties: ComDayCqWidgetImplHtmlLibraryManagerImplProperties
        :param bundle_location: The bundle_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type bundle_location: str
        :param service_location: The service_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :type service_location: str
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWidgetImplHtmlLibraryManagerImplProperties,
            'bundle_location': str,
            'service_location': str
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties',
            'bundle_location': 'bundle_location',
            'service_location': 'service_location'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties
        self._bundle_location = bundle_location
        self._service_location = service_location

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWidgetImplHtmlLibraryManagerImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWidgetImplHtmlLibraryManagerImplInfo of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.  # noqa: E501
        :rtype: ComDayCqWidgetImplHtmlLibraryManagerImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The pid of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param pid: The pid of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The title of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param title: The title of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The description of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param description: The description of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWidgetImplHtmlLibraryManagerImplProperties:
        """Gets the properties of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The properties of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: ComDayCqWidgetImplHtmlLibraryManagerImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWidgetImplHtmlLibraryManagerImplProperties):
        """Sets the properties of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param properties: The properties of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type properties: ComDayCqWidgetImplHtmlLibraryManagerImplProperties
        """

        self._properties = properties

    @property
    def bundle_location(self) -> str:
        """Gets the bundle_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The bundle_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: str
        """
        return self._bundle_location

    @bundle_location.setter
    def bundle_location(self, bundle_location: str):
        """Sets the bundle_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param bundle_location: The bundle_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type bundle_location: str
        """

        self._bundle_location = bundle_location

    @property
    def service_location(self) -> str:
        """Gets the service_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :return: The service_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :rtype: str
        """
        return self._service_location

    @service_location.setter
    def service_location(self, service_location: str):
        """Sets the service_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.


        :param service_location: The service_location of this ComDayCqWidgetImplHtmlLibraryManagerImplInfo.
        :type service_location: str
        """

        self._service_location = service_location