# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_reporting_impl_r_log_analyzer_properties import ComDayCqReportingImplRLogAnalyzerProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqReportingImplRLogAnalyzerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqReportingImplRLogAnalyzerProperties=None):  # noqa: E501
        """ComDayCqReportingImplRLogAnalyzerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqReportingImplRLogAnalyzerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqReportingImplRLogAnalyzerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqReportingImplRLogAnalyzerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqReportingImplRLogAnalyzerInfo.  # noqa: E501
        :type properties: ComDayCqReportingImplRLogAnalyzerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqReportingImplRLogAnalyzerProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqReportingImplRLogAnalyzerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReportingImplRLogAnalyzerInfo of this ComDayCqReportingImplRLogAnalyzerInfo.  # noqa: E501
        :rtype: ComDayCqReportingImplRLogAnalyzerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqReportingImplRLogAnalyzerInfo.


        :return: The pid of this ComDayCqReportingImplRLogAnalyzerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqReportingImplRLogAnalyzerInfo.


        :param pid: The pid of this ComDayCqReportingImplRLogAnalyzerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqReportingImplRLogAnalyzerInfo.


        :return: The title of this ComDayCqReportingImplRLogAnalyzerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqReportingImplRLogAnalyzerInfo.


        :param title: The title of this ComDayCqReportingImplRLogAnalyzerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqReportingImplRLogAnalyzerInfo.


        :return: The description of this ComDayCqReportingImplRLogAnalyzerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqReportingImplRLogAnalyzerInfo.


        :param description: The description of this ComDayCqReportingImplRLogAnalyzerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqReportingImplRLogAnalyzerProperties:
        """Gets the properties of this ComDayCqReportingImplRLogAnalyzerInfo.


        :return: The properties of this ComDayCqReportingImplRLogAnalyzerInfo.
        :rtype: ComDayCqReportingImplRLogAnalyzerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqReportingImplRLogAnalyzerProperties):
        """Sets the properties of this ComDayCqReportingImplRLogAnalyzerInfo.


        :param properties: The properties of this ComDayCqReportingImplRLogAnalyzerInfo.
        :type properties: ComDayCqReportingImplRLogAnalyzerProperties
        """

        self._properties = properties
