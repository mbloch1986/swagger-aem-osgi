# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties import OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties=None):  # noqa: E501
        """OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.  # noqa: E501
        :type properties: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.  # noqa: E501
        :rtype: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :return: The pid of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :param pid: The pid of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :return: The title of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :param title: The title of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :return: The description of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :param description: The description of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties:
        """Gets the properties of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :return: The properties of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :rtype: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties):
        """Sets the properties of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.


        :param properties: The properties of this OrgApacheSlingDistributionPackagingImplImporterLocalDistributioInfo.
        :type properties: OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
        """

        self._properties = properties
