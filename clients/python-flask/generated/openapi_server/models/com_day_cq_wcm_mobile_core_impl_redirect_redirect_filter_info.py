# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties import ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties=None, bundle_location: str=None, service_location: str=None):  # noqa: E501
        """ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type properties: ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties
        :param bundle_location: The bundle_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type bundle_location: str
        :param service_location: The service_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :type service_location: str
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties,
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmMobileCoreImplRedirectRedirectFilterInfo of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.  # noqa: E501
        :rtype: ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The pid of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param pid: The pid of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The title of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param title: The title of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The description of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param description: The description of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties:
        """Gets the properties of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The properties of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties):
        """Sets the properties of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param properties: The properties of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type properties: ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties
        """

        self._properties = properties

    @property
    def bundle_location(self) -> str:
        """Gets the bundle_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The bundle_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: str
        """
        return self._bundle_location

    @bundle_location.setter
    def bundle_location(self, bundle_location: str):
        """Sets the bundle_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param bundle_location: The bundle_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type bundle_location: str
        """

        self._bundle_location = bundle_location

    @property
    def service_location(self) -> str:
        """Gets the service_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :return: The service_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :rtype: str
        """
        return self._service_location

    @service_location.setter
    def service_location(self, service_location: str):
        """Sets the service_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.


        :param service_location: The service_location of this ComDayCqWcmMobileCoreImplRedirectRedirectFilterInfo.
        :type service_location: str
        """

        self._service_location = service_location
