# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_social_journal_client_endpoints_impl_journal_operations_ser_properties import ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties=None):  # noqa: E501
        """ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.  # noqa: E501
        :type properties: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.  # noqa: E501
        :rtype: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :return: The pid of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :param pid: The pid of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :return: The title of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :param title: The title of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :return: The description of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :param description: The description of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties:
        """Gets the properties of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :return: The properties of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :rtype: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties):
        """Sets the properties of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.


        :param properties: The properties of this ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerInfo.
        :type properties: ComAdobeCqSocialJournalClientEndpointsImplJournalOperationsSerProperties
        """

        self._properties = properties
