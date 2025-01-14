# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_dam_core_impl_servlet_multiple_license_accept_servlet_properties import ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties=None):  # noqa: E501
        """ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.  # noqa: E501
        :type properties: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.  # noqa: E501
        :rtype: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :return: The pid of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :param pid: The pid of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :return: The title of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :param title: The title of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :return: The description of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :param description: The description of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties:
        """Gets the properties of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :return: The properties of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :rtype: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties):
        """Sets the properties of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.


        :param properties: The properties of this ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo.
        :type properties: ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties
        """

        self._properties = properties
