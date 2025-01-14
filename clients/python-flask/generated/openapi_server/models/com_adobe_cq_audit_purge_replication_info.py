# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_cq_audit_purge_replication_properties import ComAdobeCqAuditPurgeReplicationProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqAuditPurgeReplicationInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeCqAuditPurgeReplicationProperties=None):  # noqa: E501
        """ComAdobeCqAuditPurgeReplicationInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeCqAuditPurgeReplicationInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeCqAuditPurgeReplicationInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeCqAuditPurgeReplicationInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeCqAuditPurgeReplicationInfo.  # noqa: E501
        :type properties: ComAdobeCqAuditPurgeReplicationProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeCqAuditPurgeReplicationProperties
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
    def from_dict(cls, dikt) -> 'ComAdobeCqAuditPurgeReplicationInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqAuditPurgeReplicationInfo of this ComAdobeCqAuditPurgeReplicationInfo.  # noqa: E501
        :rtype: ComAdobeCqAuditPurgeReplicationInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeCqAuditPurgeReplicationInfo.


        :return: The pid of this ComAdobeCqAuditPurgeReplicationInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeCqAuditPurgeReplicationInfo.


        :param pid: The pid of this ComAdobeCqAuditPurgeReplicationInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeCqAuditPurgeReplicationInfo.


        :return: The title of this ComAdobeCqAuditPurgeReplicationInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeCqAuditPurgeReplicationInfo.


        :param title: The title of this ComAdobeCqAuditPurgeReplicationInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeCqAuditPurgeReplicationInfo.


        :return: The description of this ComAdobeCqAuditPurgeReplicationInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeCqAuditPurgeReplicationInfo.


        :param description: The description of this ComAdobeCqAuditPurgeReplicationInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeCqAuditPurgeReplicationProperties:
        """Gets the properties of this ComAdobeCqAuditPurgeReplicationInfo.


        :return: The properties of this ComAdobeCqAuditPurgeReplicationInfo.
        :rtype: ComAdobeCqAuditPurgeReplicationProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeCqAuditPurgeReplicationProperties):
        """Sets the properties of this ComAdobeCqAuditPurgeReplicationInfo.


        :param properties: The properties of this ComAdobeCqAuditPurgeReplicationInfo.
        :type properties: ComAdobeCqAuditPurgeReplicationProperties
        """

        self._properties = properties
