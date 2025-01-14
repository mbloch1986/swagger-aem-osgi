# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_screens_impl_screens_channel_post_processor_properties import ComAdobeCqScreensImplScreensChannelPostProcessorProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqScreensImplScreensChannelPostProcessorInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqScreensImplScreensChannelPostProcessorProperties=None):  # noqa: E501
        """ComAdobeCqScreensImplScreensChannelPostProcessorInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.  # noqa: E501
        :type properties: ComAdobeCqScreensImplScreensChannelPostProcessorProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqScreensImplScreensChannelPostProcessorProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqScreensImplScreensChannelPostProcessorInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqScreensImplScreensChannelPostProcessorInfo of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.  # noqa: E501
        :rtype: ComAdobeCqScreensImplScreensChannelPostProcessorInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :return: The pid of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :param pid: The pid of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :return: The title of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :param title: The title of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :return: The description of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :param description: The description of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqScreensImplScreensChannelPostProcessorProperties:
        """Gets the properties of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :return: The properties of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :rtype: ComAdobeCqScreensImplScreensChannelPostProcessorProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqScreensImplScreensChannelPostProcessorProperties):
        """Sets the properties of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.


        :param properties: The properties of this ComAdobeCqScreensImplScreensChannelPostProcessorInfo.
        :type properties: ComAdobeCqScreensImplScreensChannelPostProcessorProperties
        """

        self._properties = properties
