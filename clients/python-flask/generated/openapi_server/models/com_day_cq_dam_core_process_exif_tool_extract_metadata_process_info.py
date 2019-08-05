# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_process_exif_tool_extract_metadata_process_properties import ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties=None):  # noqa: E501
        """ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreProcessExifToolExtractMetadataProcessInfo of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :return: The pid of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :param pid: The pid of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :return: The title of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :param title: The title of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :return: The description of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :param description: The description of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties:
        """Gets the properties of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :return: The properties of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :rtype: ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties):
        """Sets the properties of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.


        :param properties: The properties of this ComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.
        :type properties: ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties
        """

        self._properties = properties