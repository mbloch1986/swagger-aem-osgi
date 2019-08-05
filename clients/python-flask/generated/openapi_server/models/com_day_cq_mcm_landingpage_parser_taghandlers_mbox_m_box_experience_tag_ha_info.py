# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_mcm_landingpage_parser_taghandlers_mbox_m_box_experience_tag_ha_properties import ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties=None):  # noqa: E501
        """ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.  # noqa: E501
        :type properties: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.  # noqa: E501
        :rtype: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :return: The pid of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :param pid: The pid of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :return: The title of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :param title: The title of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :return: The description of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :param description: The description of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties:
        """Gets the properties of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :return: The properties of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :rtype: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties):
        """Sets the properties of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.


        :param properties: The properties of this ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaInfo.
        :type properties: ComDayCqMcmLandingpageParserTaghandlersMboxMBoxExperienceTagHaProperties
        """

        self._properties = properties