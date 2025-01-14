# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_contentsync_impl_content_sync_manager_impl_properties import ComDayCqContentsyncImplContentSyncManagerImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqContentsyncImplContentSyncManagerImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqContentsyncImplContentSyncManagerImplProperties=None):  # noqa: E501
        """ComDayCqContentsyncImplContentSyncManagerImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqContentsyncImplContentSyncManagerImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqContentsyncImplContentSyncManagerImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqContentsyncImplContentSyncManagerImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqContentsyncImplContentSyncManagerImplInfo.  # noqa: E501
        :type properties: ComDayCqContentsyncImplContentSyncManagerImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqContentsyncImplContentSyncManagerImplProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqContentsyncImplContentSyncManagerImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqContentsyncImplContentSyncManagerImplInfo of this ComDayCqContentsyncImplContentSyncManagerImplInfo.  # noqa: E501
        :rtype: ComDayCqContentsyncImplContentSyncManagerImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :return: The pid of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :param pid: The pid of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :return: The title of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :param title: The title of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :return: The description of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :param description: The description of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqContentsyncImplContentSyncManagerImplProperties:
        """Gets the properties of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :return: The properties of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :rtype: ComDayCqContentsyncImplContentSyncManagerImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqContentsyncImplContentSyncManagerImplProperties):
        """Sets the properties of this ComDayCqContentsyncImplContentSyncManagerImplInfo.


        :param properties: The properties of this ComDayCqContentsyncImplContentSyncManagerImplInfo.
        :type properties: ComDayCqContentsyncImplContentSyncManagerImplProperties
        """

        self._properties = properties
