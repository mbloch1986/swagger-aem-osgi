# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties import ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties=None):  # noqa: E501
        """ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.  # noqa: E501
        :type properties: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.  # noqa: E501
        :rtype: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :return: The pid of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :param pid: The pid of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :return: The title of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :param title: The title of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :return: The description of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :param description: The description of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties:
        """Gets the properties of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :return: The properties of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :rtype: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties):
        """Sets the properties of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.


        :param properties: The properties of this ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplInfo.
        :type properties: ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties
        """

        self._properties = properties
