# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_featureflags_impl_configured_feature_properties import OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties=None):  # noqa: E501
        """OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.  # noqa: E501
        :type properties: OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingFeatureflagsImplConfiguredFeatureInfo of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.  # noqa: E501
        :rtype: OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :return: The pid of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :param pid: The pid of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :return: The title of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :param title: The title of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :return: The description of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :param description: The description of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties:
        """Gets the properties of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :return: The properties of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :rtype: OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties):
        """Sets the properties of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.


        :param properties: The properties of this OrgApacheSlingFeatureflagsImplConfiguredFeatureInfo.
        :type properties: OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties
        """

        self._properties = properties
