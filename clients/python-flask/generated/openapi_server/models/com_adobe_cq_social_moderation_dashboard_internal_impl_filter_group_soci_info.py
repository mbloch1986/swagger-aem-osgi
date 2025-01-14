# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_moderation_dashboard_internal_impl_filter_group_soci_properties import ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties=None):  # noqa: E501
        """ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :return: The pid of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :param pid: The pid of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :return: The title of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :param title: The title of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :return: The description of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :param description: The description of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties:
        """Gets the properties of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :return: The properties of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :rtype: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties):
        """Sets the properties of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.


        :param properties: The properties of this ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociInfo.
        :type properties: ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties
        """

        self._properties = properties
