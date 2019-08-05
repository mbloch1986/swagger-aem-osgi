# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_core_impl_servlets_find_replace_servlet_properties import ComDayCqWcmCoreImplServletsFindReplaceServletProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplServletsFindReplaceServletInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmCoreImplServletsFindReplaceServletProperties=None):  # noqa: E501
        """ComDayCqWcmCoreImplServletsFindReplaceServletInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.  # noqa: E501
        :type properties: ComDayCqWcmCoreImplServletsFindReplaceServletProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmCoreImplServletsFindReplaceServletProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplServletsFindReplaceServletInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplServletsFindReplaceServletInfo of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplServletsFindReplaceServletInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :return: The pid of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :param pid: The pid of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :return: The title of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :param title: The title of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :return: The description of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :param description: The description of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmCoreImplServletsFindReplaceServletProperties:
        """Gets the properties of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :return: The properties of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :rtype: ComDayCqWcmCoreImplServletsFindReplaceServletProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmCoreImplServletsFindReplaceServletProperties):
        """Sets the properties of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.


        :param properties: The properties of this ComDayCqWcmCoreImplServletsFindReplaceServletInfo.
        :type properties: ComDayCqWcmCoreImplServletsFindReplaceServletProperties
        """

        self._properties = properties