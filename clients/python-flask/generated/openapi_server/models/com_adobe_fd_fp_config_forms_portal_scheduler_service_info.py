# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_fd_fp_config_forms_portal_scheduler_service_properties import ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties=None):  # noqa: E501
        """ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.  # noqa: E501
        :type properties: ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeFdFpConfigFormsPortalSchedulerServiceInfo of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.  # noqa: E501
        :rtype: ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :return: The pid of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :param pid: The pid of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :return: The title of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :param title: The title of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :return: The description of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :param description: The description of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties:
        """Gets the properties of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :return: The properties of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :rtype: ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties):
        """Sets the properties of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.


        :param properties: The properties of this ComAdobeFdFpConfigFormsPortalSchedulerServiceInfo.
        :type properties: ComAdobeFdFpConfigFormsPortalSchedulerServiceProperties
        """

        self._properties = properties
