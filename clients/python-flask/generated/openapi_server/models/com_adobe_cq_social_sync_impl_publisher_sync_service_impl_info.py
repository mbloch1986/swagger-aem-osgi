# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_sync_impl_publisher_sync_service_impl_properties import ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties=None):  # noqa: E501
        """ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialSyncImplPublisherSyncServiceImplInfo of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :return: The pid of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :param pid: The pid of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :return: The title of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :param title: The title of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :return: The description of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :param description: The description of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties:
        """Gets the properties of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :return: The properties of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :rtype: ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties):
        """Sets the properties of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.


        :param properties: The properties of this ComAdobeCqSocialSyncImplPublisherSyncServiceImplInfo.
        :type properties: ComAdobeCqSocialSyncImplPublisherSyncServiceImplProperties
        """

        self._properties = properties