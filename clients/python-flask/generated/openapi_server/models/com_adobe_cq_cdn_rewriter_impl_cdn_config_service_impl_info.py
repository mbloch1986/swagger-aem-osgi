# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_cdn_rewriter_impl_cdn_config_service_impl_properties import ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties=None):  # noqa: E501
        """ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.  # noqa: E501
        :type properties: ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqCdnRewriterImplCDNConfigServiceImplInfo of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.  # noqa: E501
        :rtype: ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :return: The pid of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :param pid: The pid of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :return: The title of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :param title: The title of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :return: The description of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :param description: The description of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties:
        """Gets the properties of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :return: The properties of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :rtype: ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties):
        """Sets the properties of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.


        :param properties: The properties of this ComAdobeCqCdnRewriterImplCDNConfigServiceImplInfo.
        :type properties: ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties
        """

        self._properties = properties
