# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_enablement_learningpath_endpoints_impl_enablement_l_properties import ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties=None):  # noqa: E501
        """ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :return: The pid of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :param pid: The pid of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :return: The title of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :param title: The title of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :return: The description of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :param description: The description of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties:
        """Gets the properties of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :return: The properties of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :rtype: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties):
        """Sets the properties of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.


        :param properties: The properties of this ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLInfo.
        :type properties: ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties
        """

        self._properties = properties
