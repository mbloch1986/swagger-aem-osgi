# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqReportingImplRLogAnalyzerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, request_log_output: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqReportingImplRLogAnalyzerProperties - a model defined in OpenAPI

        :param request_log_output: The request_log_output of this ComDayCqReportingImplRLogAnalyzerProperties.  # noqa: E501
        :type request_log_output: ConfigNodePropertyString
        """
        self.openapi_types = {
            'request_log_output': ConfigNodePropertyString
        }

        self.attribute_map = {
            'request_log_output': 'request.log.output'
        }

        self._request_log_output = request_log_output

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqReportingImplRLogAnalyzerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReportingImplRLogAnalyzerProperties of this ComDayCqReportingImplRLogAnalyzerProperties.  # noqa: E501
        :rtype: ComDayCqReportingImplRLogAnalyzerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def request_log_output(self) -> ConfigNodePropertyString:
        """Gets the request_log_output of this ComDayCqReportingImplRLogAnalyzerProperties.


        :return: The request_log_output of this ComDayCqReportingImplRLogAnalyzerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._request_log_output

    @request_log_output.setter
    def request_log_output(self, request_log_output: ConfigNodePropertyString):
        """Sets the request_log_output of this ComDayCqReportingImplRLogAnalyzerProperties.


        :param request_log_output: The request_log_output of this ComDayCqReportingImplRLogAnalyzerProperties.
        :type request_log_output: ConfigNodePropertyString
        """

        self._request_log_output = request_log_output
