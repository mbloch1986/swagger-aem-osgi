# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_commons_emailreply_impl_email_reply_configuration_imp_properties import ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties=None):  # noqa: E501
        """ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :return: The pid of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :param pid: The pid of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :return: The title of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :param title: The title of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :return: The description of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :param description: The description of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties:
        """Gets the properties of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :return: The properties of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :rtype: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties):
        """Sets the properties of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.


        :param properties: The properties of this ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpInfo.
        :type properties: ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
        """

        self._properties = properties
