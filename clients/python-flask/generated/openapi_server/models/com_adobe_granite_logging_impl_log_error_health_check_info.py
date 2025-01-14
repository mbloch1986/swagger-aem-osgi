# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_logging_impl_log_error_health_check_properties import ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties=None):  # noqa: E501
        """ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.  # noqa: E501
        :type properties: ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteLoggingImplLogErrorHealthCheckInfo of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.  # noqa: E501
        :rtype: ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :return: The pid of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :param pid: The pid of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :return: The title of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :param title: The title of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :return: The description of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :param description: The description of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties:
        """Gets the properties of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :return: The properties of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :rtype: ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties):
        """Sets the properties of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.


        :param properties: The properties of this ComAdobeGraniteLoggingImplLogErrorHealthCheckInfo.
        :type properties: ComAdobeGraniteLoggingImplLogErrorHealthCheckProperties
        """

        self._properties = properties
