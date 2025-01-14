# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_impl_asset_move_listener_properties import ComDayCqDamCoreImplAssetMoveListenerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplAssetMoveListenerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreImplAssetMoveListenerProperties=None):  # noqa: E501
        """ComDayCqDamCoreImplAssetMoveListenerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreImplAssetMoveListenerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreImplAssetMoveListenerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreImplAssetMoveListenerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreImplAssetMoveListenerInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreImplAssetMoveListenerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreImplAssetMoveListenerProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplAssetMoveListenerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplAssetMoveListenerInfo of this ComDayCqDamCoreImplAssetMoveListenerInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreImplAssetMoveListenerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :return: The pid of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :param pid: The pid of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :return: The title of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :param title: The title of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :return: The description of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :param description: The description of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreImplAssetMoveListenerProperties:
        """Gets the properties of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :return: The properties of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :rtype: ComDayCqDamCoreImplAssetMoveListenerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreImplAssetMoveListenerProperties):
        """Sets the properties of this ComDayCqDamCoreImplAssetMoveListenerInfo.


        :param properties: The properties of this ComDayCqDamCoreImplAssetMoveListenerInfo.
        :type properties: ComDayCqDamCoreImplAssetMoveListenerProperties
        """

        self._properties = properties
