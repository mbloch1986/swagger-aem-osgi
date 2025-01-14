# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_commerce_impl_asset_video_handler_properties import ComAdobeCqCommerceImplAssetVideoHandlerProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqCommerceImplAssetVideoHandlerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqCommerceImplAssetVideoHandlerProperties=None):  # noqa: E501
        """ComAdobeCqCommerceImplAssetVideoHandlerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.  # noqa: E501
        :type properties: ComAdobeCqCommerceImplAssetVideoHandlerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqCommerceImplAssetVideoHandlerProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqCommerceImplAssetVideoHandlerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqCommerceImplAssetVideoHandlerInfo of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.  # noqa: E501
        :rtype: ComAdobeCqCommerceImplAssetVideoHandlerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :return: The pid of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :param pid: The pid of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :return: The title of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :param title: The title of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :return: The description of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :param description: The description of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqCommerceImplAssetVideoHandlerProperties:
        """Gets the properties of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :return: The properties of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :rtype: ComAdobeCqCommerceImplAssetVideoHandlerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqCommerceImplAssetVideoHandlerProperties):
        """Sets the properties of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.


        :param properties: The properties of this ComAdobeCqCommerceImplAssetVideoHandlerInfo.
        :type properties: ComAdobeCqCommerceImplAssetVideoHandlerProperties
        """

        self._properties = properties
