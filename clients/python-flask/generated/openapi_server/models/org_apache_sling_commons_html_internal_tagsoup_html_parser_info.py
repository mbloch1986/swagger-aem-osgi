# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.org_apache_sling_commons_html_internal_tagsoup_html_parser_properties import OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties=None):  # noqa: E501
        """OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo - a model defined in OpenAPI

        :param pid: The pid of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.  # noqa: E501
        :type title: str
        :param description: The description of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.  # noqa: E501
        :type properties: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties
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
    def from_dict(cls, dikt) -> 'OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.  # noqa: E501
        :rtype: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :return: The pid of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :param pid: The pid of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :return: The title of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :param title: The title of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :return: The description of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :param description: The description of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties:
        """Gets the properties of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :return: The properties of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :rtype: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties):
        """Sets the properties of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.


        :param properties: The properties of this OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.
        :type properties: OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties
        """

        self._properties = properties
