# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_handler_standard_psd_psd_handler_properties import ComDayCqDamHandlerStandardPsdPsdHandlerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamHandlerStandardPsdPsdHandlerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamHandlerStandardPsdPsdHandlerProperties=None):  # noqa: E501
        """ComDayCqDamHandlerStandardPsdPsdHandlerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.  # noqa: E501
        :type properties: ComDayCqDamHandlerStandardPsdPsdHandlerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamHandlerStandardPsdPsdHandlerProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamHandlerStandardPsdPsdHandlerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamHandlerStandardPsdPsdHandlerInfo of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.  # noqa: E501
        :rtype: ComDayCqDamHandlerStandardPsdPsdHandlerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :return: The pid of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :param pid: The pid of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :return: The title of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :param title: The title of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :return: The description of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :param description: The description of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamHandlerStandardPsdPsdHandlerProperties:
        """Gets the properties of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :return: The properties of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :rtype: ComDayCqDamHandlerStandardPsdPsdHandlerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamHandlerStandardPsdPsdHandlerProperties):
        """Sets the properties of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.


        :param properties: The properties of this ComDayCqDamHandlerStandardPsdPsdHandlerInfo.
        :type properties: ComDayCqDamHandlerStandardPsdPsdHandlerProperties
        """

        self._properties = properties
