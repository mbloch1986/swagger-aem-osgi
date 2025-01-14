# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_contentsync_impl_handler_pages_update_handler_properties import ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties=None):  # noqa: E501
        """ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.  # noqa: E501
        :type properties: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.  # noqa: E501
        :rtype: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :return: The pid of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :param pid: The pid of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :return: The title of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :param title: The title of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :return: The description of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :param description: The description of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties:
        """Gets the properties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :return: The properties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :rtype: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties):
        """Sets the properties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.


        :param properties: The properties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo.
        :type properties: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties
        """

        self._properties = properties
