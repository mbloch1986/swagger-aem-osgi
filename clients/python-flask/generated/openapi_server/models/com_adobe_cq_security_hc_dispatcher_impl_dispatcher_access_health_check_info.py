# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_security_hc_dispatcher_impl_dispatcher_access_health_check_properties import ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties=None):  # noqa: E501
        """ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.  # noqa: E501
        :type properties: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.  # noqa: E501
        :rtype: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :return: The pid of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :param pid: The pid of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :return: The title of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :param title: The title of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :return: The description of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :param description: The description of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties:
        """Gets the properties of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :return: The properties of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :rtype: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties):
        """Sets the properties of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.


        :param properties: The properties of this ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckInfo.
        :type properties: ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties
        """

        self._properties = properties
