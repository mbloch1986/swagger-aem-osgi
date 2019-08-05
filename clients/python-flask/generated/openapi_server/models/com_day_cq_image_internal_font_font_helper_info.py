# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_image_internal_font_font_helper_properties import ComDayCqImageInternalFontFontHelperProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqImageInternalFontFontHelperInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqImageInternalFontFontHelperProperties=None):  # noqa: E501
        """ComDayCqImageInternalFontFontHelperInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqImageInternalFontFontHelperInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqImageInternalFontFontHelperInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqImageInternalFontFontHelperInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqImageInternalFontFontHelperInfo.  # noqa: E501
        :type properties: ComDayCqImageInternalFontFontHelperProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqImageInternalFontFontHelperProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqImageInternalFontFontHelperInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqImageInternalFontFontHelperInfo of this ComDayCqImageInternalFontFontHelperInfo.  # noqa: E501
        :rtype: ComDayCqImageInternalFontFontHelperInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqImageInternalFontFontHelperInfo.


        :return: The pid of this ComDayCqImageInternalFontFontHelperInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqImageInternalFontFontHelperInfo.


        :param pid: The pid of this ComDayCqImageInternalFontFontHelperInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqImageInternalFontFontHelperInfo.


        :return: The title of this ComDayCqImageInternalFontFontHelperInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqImageInternalFontFontHelperInfo.


        :param title: The title of this ComDayCqImageInternalFontFontHelperInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqImageInternalFontFontHelperInfo.


        :return: The description of this ComDayCqImageInternalFontFontHelperInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqImageInternalFontFontHelperInfo.


        :param description: The description of this ComDayCqImageInternalFontFontHelperInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqImageInternalFontFontHelperProperties:
        """Gets the properties of this ComDayCqImageInternalFontFontHelperInfo.


        :return: The properties of this ComDayCqImageInternalFontFontHelperInfo.
        :rtype: ComDayCqImageInternalFontFontHelperProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqImageInternalFontFontHelperProperties):
        """Sets the properties of this ComDayCqImageInternalFontFontHelperInfo.


        :param properties: The properties of this ComDayCqImageInternalFontFontHelperInfo.
        :type properties: ComDayCqImageInternalFontFontHelperProperties
        """

        self._properties = properties