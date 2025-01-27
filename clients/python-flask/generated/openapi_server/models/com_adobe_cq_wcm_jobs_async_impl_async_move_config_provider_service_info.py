# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_wcm_jobs_async_impl_async_move_config_provider_service_properties import ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties=None):  # noqa: E501
        """ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.  # noqa: E501
        :type properties: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.  # noqa: E501
        :rtype: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :return: The pid of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :param pid: The pid of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :return: The title of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :param title: The title of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :return: The description of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :param description: The description of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties:
        """Gets the properties of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :return: The properties of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :rtype: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties):
        """Sets the properties of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.


        :param properties: The properties of this ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.
        :type properties: ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties
        """

        self._properties = properties
