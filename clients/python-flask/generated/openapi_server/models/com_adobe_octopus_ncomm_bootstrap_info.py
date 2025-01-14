# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_octopus_ncomm_bootstrap_properties import ComAdobeOctopusNcommBootstrapProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeOctopusNcommBootstrapInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeOctopusNcommBootstrapProperties=None):  # noqa: E501
        """ComAdobeOctopusNcommBootstrapInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeOctopusNcommBootstrapInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeOctopusNcommBootstrapInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeOctopusNcommBootstrapInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeOctopusNcommBootstrapInfo.  # noqa: E501
        :type properties: ComAdobeOctopusNcommBootstrapProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeOctopusNcommBootstrapProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeOctopusNcommBootstrapInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeOctopusNcommBootstrapInfo of this ComAdobeOctopusNcommBootstrapInfo.  # noqa: E501
        :rtype: ComAdobeOctopusNcommBootstrapInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeOctopusNcommBootstrapInfo.


        :return: The pid of this ComAdobeOctopusNcommBootstrapInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeOctopusNcommBootstrapInfo.


        :param pid: The pid of this ComAdobeOctopusNcommBootstrapInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeOctopusNcommBootstrapInfo.


        :return: The title of this ComAdobeOctopusNcommBootstrapInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeOctopusNcommBootstrapInfo.


        :param title: The title of this ComAdobeOctopusNcommBootstrapInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeOctopusNcommBootstrapInfo.


        :return: The description of this ComAdobeOctopusNcommBootstrapInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeOctopusNcommBootstrapInfo.


        :param description: The description of this ComAdobeOctopusNcommBootstrapInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeOctopusNcommBootstrapProperties:
        """Gets the properties of this ComAdobeOctopusNcommBootstrapInfo.


        :return: The properties of this ComAdobeOctopusNcommBootstrapInfo.
        :rtype: ComAdobeOctopusNcommBootstrapProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeOctopusNcommBootstrapProperties):
        """Sets the properties of this ComAdobeOctopusNcommBootstrapInfo.


        :param properties: The properties of this ComAdobeOctopusNcommBootstrapInfo.
        :type properties: ComAdobeOctopusNcommBootstrapProperties
        """

        self._properties = properties
