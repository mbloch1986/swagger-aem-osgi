# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingEngineImplSlingMainServletProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, sling_max_calls: ConfigNodePropertyInteger=None, sling_max_inclusions: ConfigNodePropertyInteger=None, sling_trace_allow: ConfigNodePropertyBoolean=None, sling_max_record_requests: ConfigNodePropertyInteger=None, sling_store_pattern_requests: ConfigNodePropertyArray=None, sling_serverinfo: ConfigNodePropertyString=None, sling_additional_response_headers: ConfigNodePropertyArray=None):  # noqa: E501
        """OrgApacheSlingEngineImplSlingMainServletProperties - a model defined in OpenAPI

        :param sling_max_calls: The sling_max_calls of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_max_calls: ConfigNodePropertyInteger
        :param sling_max_inclusions: The sling_max_inclusions of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_max_inclusions: ConfigNodePropertyInteger
        :param sling_trace_allow: The sling_trace_allow of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_trace_allow: ConfigNodePropertyBoolean
        :param sling_max_record_requests: The sling_max_record_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_max_record_requests: ConfigNodePropertyInteger
        :param sling_store_pattern_requests: The sling_store_pattern_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_store_pattern_requests: ConfigNodePropertyArray
        :param sling_serverinfo: The sling_serverinfo of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_serverinfo: ConfigNodePropertyString
        :param sling_additional_response_headers: The sling_additional_response_headers of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :type sling_additional_response_headers: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'sling_max_calls': ConfigNodePropertyInteger,
            'sling_max_inclusions': ConfigNodePropertyInteger,
            'sling_trace_allow': ConfigNodePropertyBoolean,
            'sling_max_record_requests': ConfigNodePropertyInteger,
            'sling_store_pattern_requests': ConfigNodePropertyArray,
            'sling_serverinfo': ConfigNodePropertyString,
            'sling_additional_response_headers': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'sling_max_calls': 'sling.max.calls',
            'sling_max_inclusions': 'sling.max.inclusions',
            'sling_trace_allow': 'sling.trace.allow',
            'sling_max_record_requests': 'sling.max.record.requests',
            'sling_store_pattern_requests': 'sling.store.pattern.requests',
            'sling_serverinfo': 'sling.serverinfo',
            'sling_additional_response_headers': 'sling.additional.response.headers'
        }

        self._sling_max_calls = sling_max_calls
        self._sling_max_inclusions = sling_max_inclusions
        self._sling_trace_allow = sling_trace_allow
        self._sling_max_record_requests = sling_max_record_requests
        self._sling_store_pattern_requests = sling_store_pattern_requests
        self._sling_serverinfo = sling_serverinfo
        self._sling_additional_response_headers = sling_additional_response_headers

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingEngineImplSlingMainServletProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingEngineImplSlingMainServletProperties of this OrgApacheSlingEngineImplSlingMainServletProperties.  # noqa: E501
        :rtype: OrgApacheSlingEngineImplSlingMainServletProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def sling_max_calls(self) -> ConfigNodePropertyInteger:
        """Gets the sling_max_calls of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_max_calls of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._sling_max_calls

    @sling_max_calls.setter
    def sling_max_calls(self, sling_max_calls: ConfigNodePropertyInteger):
        """Sets the sling_max_calls of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_max_calls: The sling_max_calls of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_max_calls: ConfigNodePropertyInteger
        """

        self._sling_max_calls = sling_max_calls

    @property
    def sling_max_inclusions(self) -> ConfigNodePropertyInteger:
        """Gets the sling_max_inclusions of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_max_inclusions of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._sling_max_inclusions

    @sling_max_inclusions.setter
    def sling_max_inclusions(self, sling_max_inclusions: ConfigNodePropertyInteger):
        """Sets the sling_max_inclusions of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_max_inclusions: The sling_max_inclusions of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_max_inclusions: ConfigNodePropertyInteger
        """

        self._sling_max_inclusions = sling_max_inclusions

    @property
    def sling_trace_allow(self) -> ConfigNodePropertyBoolean:
        """Gets the sling_trace_allow of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_trace_allow of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._sling_trace_allow

    @sling_trace_allow.setter
    def sling_trace_allow(self, sling_trace_allow: ConfigNodePropertyBoolean):
        """Sets the sling_trace_allow of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_trace_allow: The sling_trace_allow of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_trace_allow: ConfigNodePropertyBoolean
        """

        self._sling_trace_allow = sling_trace_allow

    @property
    def sling_max_record_requests(self) -> ConfigNodePropertyInteger:
        """Gets the sling_max_record_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_max_record_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._sling_max_record_requests

    @sling_max_record_requests.setter
    def sling_max_record_requests(self, sling_max_record_requests: ConfigNodePropertyInteger):
        """Sets the sling_max_record_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_max_record_requests: The sling_max_record_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_max_record_requests: ConfigNodePropertyInteger
        """

        self._sling_max_record_requests = sling_max_record_requests

    @property
    def sling_store_pattern_requests(self) -> ConfigNodePropertyArray:
        """Gets the sling_store_pattern_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_store_pattern_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._sling_store_pattern_requests

    @sling_store_pattern_requests.setter
    def sling_store_pattern_requests(self, sling_store_pattern_requests: ConfigNodePropertyArray):
        """Sets the sling_store_pattern_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_store_pattern_requests: The sling_store_pattern_requests of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_store_pattern_requests: ConfigNodePropertyArray
        """

        self._sling_store_pattern_requests = sling_store_pattern_requests

    @property
    def sling_serverinfo(self) -> ConfigNodePropertyString:
        """Gets the sling_serverinfo of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_serverinfo of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._sling_serverinfo

    @sling_serverinfo.setter
    def sling_serverinfo(self, sling_serverinfo: ConfigNodePropertyString):
        """Sets the sling_serverinfo of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_serverinfo: The sling_serverinfo of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_serverinfo: ConfigNodePropertyString
        """

        self._sling_serverinfo = sling_serverinfo

    @property
    def sling_additional_response_headers(self) -> ConfigNodePropertyArray:
        """Gets the sling_additional_response_headers of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :return: The sling_additional_response_headers of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._sling_additional_response_headers

    @sling_additional_response_headers.setter
    def sling_additional_response_headers(self, sling_additional_response_headers: ConfigNodePropertyArray):
        """Sets the sling_additional_response_headers of this OrgApacheSlingEngineImplSlingMainServletProperties.


        :param sling_additional_response_headers: The sling_additional_response_headers of this OrgApacheSlingEngineImplSlingMainServletProperties.
        :type sling_additional_response_headers: ConfigNodePropertyArray
        """

        self._sling_additional_response_headers = sling_additional_response_headers
