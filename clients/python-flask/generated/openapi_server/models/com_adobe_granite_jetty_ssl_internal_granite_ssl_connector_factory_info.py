# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_jetty_ssl_internal_granite_ssl_connector_factory_properties import ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties=None, additional_properties: str=None, bundle_location: str=None, service_location: str=None):  # noqa: E501
        """ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type properties: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties
        :param additional_properties: The additional_properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type additional_properties: str
        :param bundle_location: The bundle_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type bundle_location: str
        :param service_location: The service_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :type service_location: str
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties,
            'additional_properties': str,
            'bundle_location': str,
            'service_location': str
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties',
            'additional_properties': 'additionalProperties',
            'bundle_location': 'bundle_location',
            'service_location': 'service_location'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties
        self._additional_properties = additional_properties
        self._bundle_location = bundle_location
        self._service_location = service_location

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.  # noqa: E501
        :rtype: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The pid of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param pid: The pid of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The title of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param title: The title of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The description of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param description: The description of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties:
        """Gets the properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties):
        """Sets the properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param properties: The properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type properties: ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties
        """

        self._properties = properties

    @property
    def additional_properties(self) -> str:
        """Gets the additional_properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The additional_properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._additional_properties

    @additional_properties.setter
    def additional_properties(self, additional_properties: str):
        """Sets the additional_properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param additional_properties: The additional_properties of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type additional_properties: str
        """

        self._additional_properties = additional_properties

    @property
    def bundle_location(self) -> str:
        """Gets the bundle_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The bundle_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._bundle_location

    @bundle_location.setter
    def bundle_location(self, bundle_location: str):
        """Sets the bundle_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param bundle_location: The bundle_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type bundle_location: str
        """

        self._bundle_location = bundle_location

    @property
    def service_location(self) -> str:
        """Gets the service_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :return: The service_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :rtype: str
        """
        return self._service_location

    @service_location.setter
    def service_location(self, service_location: str):
        """Sets the service_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.


        :param service_location: The service_location of this ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryInfo.
        :type service_location: str
        """

        self._service_location = service_location