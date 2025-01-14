# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_properties import ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties=None):  # noqa: E501
        """ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.  # noqa: E501
        :type properties: ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamS7damCommonPostServletsSetModifyHandlerInfo of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.  # noqa: E501
        :rtype: ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :return: The pid of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :param pid: The pid of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :return: The title of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :param title: The title of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :return: The description of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :param description: The description of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties:
        """Gets the properties of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :return: The properties of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :rtype: ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties):
        """Sets the properties of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.


        :param properties: The properties of this ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.
        :type properties: ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties
        """

        self._properties = properties
