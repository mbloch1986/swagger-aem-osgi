# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_security_acl_setup_properties import ComDayCqSecurityACLSetupProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqSecurityACLSetupInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqSecurityACLSetupProperties=None, bundle_location: str=None, service_location: str=None):  # noqa: E501
        """ComDayCqSecurityACLSetupInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type properties: ComDayCqSecurityACLSetupProperties
        :param bundle_location: The bundle_location of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type bundle_location: str
        :param service_location: The service_location of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :type service_location: str
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqSecurityACLSetupProperties,
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
    def from_dict(cls, dikt) -> 'ComDayCqSecurityACLSetupInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqSecurityACLSetupInfo of this ComDayCqSecurityACLSetupInfo.  # noqa: E501
        :rtype: ComDayCqSecurityACLSetupInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqSecurityACLSetupInfo.


        :return: The pid of this ComDayCqSecurityACLSetupInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqSecurityACLSetupInfo.


        :param pid: The pid of this ComDayCqSecurityACLSetupInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqSecurityACLSetupInfo.


        :return: The title of this ComDayCqSecurityACLSetupInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqSecurityACLSetupInfo.


        :param title: The title of this ComDayCqSecurityACLSetupInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqSecurityACLSetupInfo.


        :return: The description of this ComDayCqSecurityACLSetupInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqSecurityACLSetupInfo.


        :param description: The description of this ComDayCqSecurityACLSetupInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqSecurityACLSetupProperties:
        """Gets the properties of this ComDayCqSecurityACLSetupInfo.


        :return: The properties of this ComDayCqSecurityACLSetupInfo.
        :rtype: ComDayCqSecurityACLSetupProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqSecurityACLSetupProperties):
        """Sets the properties of this ComDayCqSecurityACLSetupInfo.


        :param properties: The properties of this ComDayCqSecurityACLSetupInfo.
        :type properties: ComDayCqSecurityACLSetupProperties
        """

        self._properties = properties

    @property
    def bundle_location(self) -> str:
        """Gets the bundle_location of this ComDayCqSecurityACLSetupInfo.


        :return: The bundle_location of this ComDayCqSecurityACLSetupInfo.
        :rtype: str
        """
        return self._bundle_location

    @bundle_location.setter
    def bundle_location(self, bundle_location: str):
        """Sets the bundle_location of this ComDayCqSecurityACLSetupInfo.


        :param bundle_location: The bundle_location of this ComDayCqSecurityACLSetupInfo.
        :type bundle_location: str
        """

        self._bundle_location = bundle_location

    @property
    def service_location(self) -> str:
        """Gets the service_location of this ComDayCqSecurityACLSetupInfo.


        :return: The service_location of this ComDayCqSecurityACLSetupInfo.
        :rtype: str
        """
        return self._service_location

    @service_location.setter
    def service_location(self, service_location: str):
        """Sets the service_location of this ComDayCqSecurityACLSetupInfo.


        :param service_location: The service_location of this ComDayCqSecurityACLSetupInfo.
        :type service_location: str
        """

        self._service_location = service_location
