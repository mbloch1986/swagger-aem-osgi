# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_screens_impl_remote_impl_distributed_http_client_impl_properties import ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties=None):  # noqa: E501
        """ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.  # noqa: E501
        :type properties: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.  # noqa: E501
        :rtype: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :return: The pid of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :param pid: The pid of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :return: The title of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :param title: The title of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :return: The description of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :param description: The description of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties:
        """Gets the properties of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :return: The properties of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :rtype: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties):
        """Sets the properties of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.


        :param properties: The properties of this ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplInfo.
        :type properties: ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties
        """

        self._properties = properties
