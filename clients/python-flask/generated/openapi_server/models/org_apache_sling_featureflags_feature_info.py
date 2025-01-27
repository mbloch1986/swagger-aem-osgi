# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_featureflags_feature_properties import OrgApacheSlingFeatureflagsFeatureProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingFeatureflagsFeatureInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingFeatureflagsFeatureProperties=None):  # noqa: E501
        """OrgApacheSlingFeatureflagsFeatureInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingFeatureflagsFeatureInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingFeatureflagsFeatureInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingFeatureflagsFeatureInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingFeatureflagsFeatureInfo.  # noqa: E501
        :type properties: OrgApacheSlingFeatureflagsFeatureProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingFeatureflagsFeatureProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingFeatureflagsFeatureInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingFeatureflagsFeatureInfo of this OrgApacheSlingFeatureflagsFeatureInfo.  # noqa: E501
        :rtype: OrgApacheSlingFeatureflagsFeatureInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingFeatureflagsFeatureInfo.


        :return: The pid of this OrgApacheSlingFeatureflagsFeatureInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingFeatureflagsFeatureInfo.


        :param pid: The pid of this OrgApacheSlingFeatureflagsFeatureInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingFeatureflagsFeatureInfo.


        :return: The title of this OrgApacheSlingFeatureflagsFeatureInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingFeatureflagsFeatureInfo.


        :param title: The title of this OrgApacheSlingFeatureflagsFeatureInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingFeatureflagsFeatureInfo.


        :return: The description of this OrgApacheSlingFeatureflagsFeatureInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingFeatureflagsFeatureInfo.


        :param description: The description of this OrgApacheSlingFeatureflagsFeatureInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingFeatureflagsFeatureProperties:
        """Gets the properties of this OrgApacheSlingFeatureflagsFeatureInfo.


        :return: The properties of this OrgApacheSlingFeatureflagsFeatureInfo.
        :rtype: OrgApacheSlingFeatureflagsFeatureProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingFeatureflagsFeatureProperties):
        """Sets the properties of this OrgApacheSlingFeatureflagsFeatureInfo.


        :param properties: The properties of this OrgApacheSlingFeatureflagsFeatureInfo.
        :type properties: OrgApacheSlingFeatureflagsFeatureProperties
        """

        self._properties = properties
