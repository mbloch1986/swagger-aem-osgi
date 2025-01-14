# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_accountverification_impl_account_management_config_im_properties import ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties=None):  # noqa: E501
        """ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :return: The pid of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :param pid: The pid of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :return: The title of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :param title: The title of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :return: The description of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :param description: The description of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties:
        """Gets the properties of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :return: The properties of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :rtype: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties):
        """Sets the properties of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.


        :param properties: The properties of this ComAdobeCqSocialAccountverificationImplAccountManagementConfigImInfo.
        :type properties: ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties
        """

        self._properties = properties
