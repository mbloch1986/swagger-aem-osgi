# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_bundles_hc_impl_sling_java_script_handler_health_check_properties import ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties=None):  # noqa: E501
        """ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.  # noqa: E501
        :type properties: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.  # noqa: E501
        :rtype: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :return: The pid of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :param pid: The pid of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :return: The title of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :param title: The title of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :return: The description of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :param description: The description of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties:
        """Gets the properties of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :return: The properties of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :rtype: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties):
        """Sets the properties of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.


        :param properties: The properties of this ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo.
        :type properties: ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties
        """

        self._properties = properties
