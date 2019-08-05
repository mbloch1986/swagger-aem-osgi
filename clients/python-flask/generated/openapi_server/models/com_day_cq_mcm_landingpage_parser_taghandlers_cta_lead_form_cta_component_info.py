# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_mcm_landingpage_parser_taghandlers_cta_lead_form_cta_component_properties import ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties=None):  # noqa: E501
        """ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.  # noqa: E501
        :type properties: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.  # noqa: E501
        :rtype: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :return: The pid of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :param pid: The pid of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :return: The title of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :param title: The title of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :return: The description of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :param description: The description of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties:
        """Gets the properties of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :return: The properties of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :rtype: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties):
        """Sets the properties of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.


        :param properties: The properties of this ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentInfo.
        :type properties: ComDayCqMcmLandingpageParserTaghandlersCtaLeadFormCTAComponentProperties
        """

        self._properties = properties