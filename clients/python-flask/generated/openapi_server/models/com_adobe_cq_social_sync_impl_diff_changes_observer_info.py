# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_sync_impl_diff_changes_observer_properties import ComAdobeCqSocialSyncImplDiffChangesObserverProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialSyncImplDiffChangesObserverInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialSyncImplDiffChangesObserverProperties=None):  # noqa: E501
        """ComAdobeCqSocialSyncImplDiffChangesObserverInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialSyncImplDiffChangesObserverProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialSyncImplDiffChangesObserverProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialSyncImplDiffChangesObserverInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialSyncImplDiffChangesObserverInfo of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialSyncImplDiffChangesObserverInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :return: The pid of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :param pid: The pid of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :return: The title of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :param title: The title of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :return: The description of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :param description: The description of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialSyncImplDiffChangesObserverProperties:
        """Gets the properties of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :return: The properties of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :rtype: ComAdobeCqSocialSyncImplDiffChangesObserverProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialSyncImplDiffChangesObserverProperties):
        """Sets the properties of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.


        :param properties: The properties of this ComAdobeCqSocialSyncImplDiffChangesObserverInfo.
        :type properties: ComAdobeCqSocialSyncImplDiffChangesObserverProperties
        """

        self._properties = properties
