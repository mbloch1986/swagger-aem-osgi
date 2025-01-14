# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_replication_impl_replicator_impl_properties import ComDayCqReplicationImplReplicatorImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqReplicationImplReplicatorImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqReplicationImplReplicatorImplProperties=None):  # noqa: E501
        """ComDayCqReplicationImplReplicatorImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqReplicationImplReplicatorImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqReplicationImplReplicatorImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqReplicationImplReplicatorImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqReplicationImplReplicatorImplInfo.  # noqa: E501
        :type properties: ComDayCqReplicationImplReplicatorImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqReplicationImplReplicatorImplProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqReplicationImplReplicatorImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReplicationImplReplicatorImplInfo of this ComDayCqReplicationImplReplicatorImplInfo.  # noqa: E501
        :rtype: ComDayCqReplicationImplReplicatorImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqReplicationImplReplicatorImplInfo.


        :return: The pid of this ComDayCqReplicationImplReplicatorImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqReplicationImplReplicatorImplInfo.


        :param pid: The pid of this ComDayCqReplicationImplReplicatorImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqReplicationImplReplicatorImplInfo.


        :return: The title of this ComDayCqReplicationImplReplicatorImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqReplicationImplReplicatorImplInfo.


        :param title: The title of this ComDayCqReplicationImplReplicatorImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqReplicationImplReplicatorImplInfo.


        :return: The description of this ComDayCqReplicationImplReplicatorImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqReplicationImplReplicatorImplInfo.


        :param description: The description of this ComDayCqReplicationImplReplicatorImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqReplicationImplReplicatorImplProperties:
        """Gets the properties of this ComDayCqReplicationImplReplicatorImplInfo.


        :return: The properties of this ComDayCqReplicationImplReplicatorImplInfo.
        :rtype: ComDayCqReplicationImplReplicatorImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqReplicationImplReplicatorImplProperties):
        """Sets the properties of this ComDayCqReplicationImplReplicatorImplInfo.


        :param properties: The properties of this ComDayCqReplicationImplReplicatorImplInfo.
        :type properties: ComDayCqReplicationImplReplicatorImplProperties
        """

        self._properties = properties
