# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_contentinsight_impl_reporting_services_settings_provider_properties import ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties=None):  # noqa: E501
        """ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.  # noqa: E501
        :type properties: ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqContentinsightImplReportingServicesSettingsProviderInfo of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.  # noqa: E501
        :rtype: ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :return: The pid of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :param pid: The pid of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :return: The title of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :param title: The title of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :return: The description of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :param description: The description of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties:
        """Gets the properties of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :return: The properties of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :rtype: ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties):
        """Sets the properties of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.


        :param properties: The properties of this ComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.
        :type properties: ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties
        """

        self._properties = properties
