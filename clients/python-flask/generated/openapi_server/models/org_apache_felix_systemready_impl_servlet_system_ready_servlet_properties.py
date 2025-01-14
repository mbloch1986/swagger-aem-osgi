# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, osgi_http_whiteboard_servlet_pattern: ConfigNodePropertyString=None, osgi_http_whiteboard_context_select: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties - a model defined in OpenAPI

        :param osgi_http_whiteboard_servlet_pattern: The osgi_http_whiteboard_servlet_pattern of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.  # noqa: E501
        :type osgi_http_whiteboard_servlet_pattern: ConfigNodePropertyString
        :param osgi_http_whiteboard_context_select: The osgi_http_whiteboard_context_select of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.  # noqa: E501
        :type osgi_http_whiteboard_context_select: ConfigNodePropertyString
        """
        self.openapi_types = {
            'osgi_http_whiteboard_servlet_pattern': ConfigNodePropertyString,
            'osgi_http_whiteboard_context_select': ConfigNodePropertyString
        }

        self.attribute_map = {
            'osgi_http_whiteboard_servlet_pattern': 'osgi.http.whiteboard.servlet.pattern',
            'osgi_http_whiteboard_context_select': 'osgi.http.whiteboard.context.select'
        }

        self._osgi_http_whiteboard_servlet_pattern = osgi_http_whiteboard_servlet_pattern
        self._osgi_http_whiteboard_context_select = osgi_http_whiteboard_context_select

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheFelixSystemreadyImplServletSystemReadyServletProperties of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.  # noqa: E501
        :rtype: OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def osgi_http_whiteboard_servlet_pattern(self) -> ConfigNodePropertyString:
        """Gets the osgi_http_whiteboard_servlet_pattern of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.


        :return: The osgi_http_whiteboard_servlet_pattern of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._osgi_http_whiteboard_servlet_pattern

    @osgi_http_whiteboard_servlet_pattern.setter
    def osgi_http_whiteboard_servlet_pattern(self, osgi_http_whiteboard_servlet_pattern: ConfigNodePropertyString):
        """Sets the osgi_http_whiteboard_servlet_pattern of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.


        :param osgi_http_whiteboard_servlet_pattern: The osgi_http_whiteboard_servlet_pattern of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.
        :type osgi_http_whiteboard_servlet_pattern: ConfigNodePropertyString
        """

        self._osgi_http_whiteboard_servlet_pattern = osgi_http_whiteboard_servlet_pattern

    @property
    def osgi_http_whiteboard_context_select(self) -> ConfigNodePropertyString:
        """Gets the osgi_http_whiteboard_context_select of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.


        :return: The osgi_http_whiteboard_context_select of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._osgi_http_whiteboard_context_select

    @osgi_http_whiteboard_context_select.setter
    def osgi_http_whiteboard_context_select(self, osgi_http_whiteboard_context_select: ConfigNodePropertyString):
        """Sets the osgi_http_whiteboard_context_select of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.


        :param osgi_http_whiteboard_context_select: The osgi_http_whiteboard_context_select of this OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.
        :type osgi_http_whiteboard_context_select: ConfigNodePropertyString
        """

        self._osgi_http_whiteboard_context_select = osgi_http_whiteboard_context_select
