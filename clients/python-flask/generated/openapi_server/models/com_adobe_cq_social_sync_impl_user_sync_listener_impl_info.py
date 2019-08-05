# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_sync_impl_user_sync_listener_impl_properties import ComAdobeCqSocialSyncImplUserSyncListenerImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialSyncImplUserSyncListenerImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialSyncImplUserSyncListenerImplProperties=None):  # noqa: E501
        """ComAdobeCqSocialSyncImplUserSyncListenerImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialSyncImplUserSyncListenerImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialSyncImplUserSyncListenerImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialSyncImplUserSyncListenerImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialSyncImplUserSyncListenerImplInfo of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialSyncImplUserSyncListenerImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :return: The pid of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :param pid: The pid of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :return: The title of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :param title: The title of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :return: The description of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :param description: The description of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialSyncImplUserSyncListenerImplProperties:
        """Gets the properties of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :return: The properties of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :rtype: ComAdobeCqSocialSyncImplUserSyncListenerImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialSyncImplUserSyncListenerImplProperties):
        """Sets the properties of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.


        :param properties: The properties of this ComAdobeCqSocialSyncImplUserSyncListenerImplInfo.
        :type properties: ComAdobeCqSocialSyncImplUserSyncListenerImplProperties
        """

        self._properties = properties