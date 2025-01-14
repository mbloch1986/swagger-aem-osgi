# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_m_properties import ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties=None):  # noqa: E501
        """ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :return: The pid of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :param pid: The pid of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :return: The title of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :param title: The title of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :return: The description of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :param description: The description of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties:
        """Gets the properties of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :return: The properties of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :rtype: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties):
        """Sets the properties of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.


        :param properties: The properties of this ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMInfo.
        :type properties: ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties
        """

        self._properties = properties
