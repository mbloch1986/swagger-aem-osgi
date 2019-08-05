# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_site_impl_site_configurator_impl_properties import ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties=None):  # noqa: E501
        """ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialSiteImplSiteConfiguratorImplInfo of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :return: The pid of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :param pid: The pid of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :return: The title of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :param title: The title of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :return: The description of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :param description: The description of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties:
        """Gets the properties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :return: The properties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :rtype: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties):
        """Sets the properties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.


        :param properties: The properties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplInfo.
        :type properties: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties
        """

        self._properties = properties