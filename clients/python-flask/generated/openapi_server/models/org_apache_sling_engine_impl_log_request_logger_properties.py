# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingEngineImplLogRequestLoggerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, request_log_output: ConfigNodePropertyString=None, request_log_outputtype: ConfigNodePropertyDropDown=None, request_log_enabled: ConfigNodePropertyBoolean=None, access_log_output: ConfigNodePropertyString=None, access_log_outputtype: ConfigNodePropertyDropDown=None, access_log_enabled: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheSlingEngineImplLogRequestLoggerProperties - a model defined in OpenAPI

        :param request_log_output: The request_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type request_log_output: ConfigNodePropertyString
        :param request_log_outputtype: The request_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type request_log_outputtype: ConfigNodePropertyDropDown
        :param request_log_enabled: The request_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type request_log_enabled: ConfigNodePropertyBoolean
        :param access_log_output: The access_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type access_log_output: ConfigNodePropertyString
        :param access_log_outputtype: The access_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type access_log_outputtype: ConfigNodePropertyDropDown
        :param access_log_enabled: The access_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :type access_log_enabled: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'request_log_output': ConfigNodePropertyString,
            'request_log_outputtype': ConfigNodePropertyDropDown,
            'request_log_enabled': ConfigNodePropertyBoolean,
            'access_log_output': ConfigNodePropertyString,
            'access_log_outputtype': ConfigNodePropertyDropDown,
            'access_log_enabled': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'request_log_output': 'request.log.output',
            'request_log_outputtype': 'request.log.outputtype',
            'request_log_enabled': 'request.log.enabled',
            'access_log_output': 'access.log.output',
            'access_log_outputtype': 'access.log.outputtype',
            'access_log_enabled': 'access.log.enabled'
        }

        self._request_log_output = request_log_output
        self._request_log_outputtype = request_log_outputtype
        self._request_log_enabled = request_log_enabled
        self._access_log_output = access_log_output
        self._access_log_outputtype = access_log_outputtype
        self._access_log_enabled = access_log_enabled

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingEngineImplLogRequestLoggerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingEngineImplLogRequestLoggerProperties of this OrgApacheSlingEngineImplLogRequestLoggerProperties.  # noqa: E501
        :rtype: OrgApacheSlingEngineImplLogRequestLoggerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def request_log_output(self) -> ConfigNodePropertyString:
        """Gets the request_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The request_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._request_log_output

    @request_log_output.setter
    def request_log_output(self, request_log_output: ConfigNodePropertyString):
        """Sets the request_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param request_log_output: The request_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type request_log_output: ConfigNodePropertyString
        """

        self._request_log_output = request_log_output

    @property
    def request_log_outputtype(self) -> ConfigNodePropertyDropDown:
        """Gets the request_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The request_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._request_log_outputtype

    @request_log_outputtype.setter
    def request_log_outputtype(self, request_log_outputtype: ConfigNodePropertyDropDown):
        """Sets the request_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param request_log_outputtype: The request_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type request_log_outputtype: ConfigNodePropertyDropDown
        """

        self._request_log_outputtype = request_log_outputtype

    @property
    def request_log_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the request_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The request_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._request_log_enabled

    @request_log_enabled.setter
    def request_log_enabled(self, request_log_enabled: ConfigNodePropertyBoolean):
        """Sets the request_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param request_log_enabled: The request_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type request_log_enabled: ConfigNodePropertyBoolean
        """

        self._request_log_enabled = request_log_enabled

    @property
    def access_log_output(self) -> ConfigNodePropertyString:
        """Gets the access_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The access_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._access_log_output

    @access_log_output.setter
    def access_log_output(self, access_log_output: ConfigNodePropertyString):
        """Sets the access_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param access_log_output: The access_log_output of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type access_log_output: ConfigNodePropertyString
        """

        self._access_log_output = access_log_output

    @property
    def access_log_outputtype(self) -> ConfigNodePropertyDropDown:
        """Gets the access_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The access_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._access_log_outputtype

    @access_log_outputtype.setter
    def access_log_outputtype(self, access_log_outputtype: ConfigNodePropertyDropDown):
        """Sets the access_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param access_log_outputtype: The access_log_outputtype of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type access_log_outputtype: ConfigNodePropertyDropDown
        """

        self._access_log_outputtype = access_log_outputtype

    @property
    def access_log_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the access_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :return: The access_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._access_log_enabled

    @access_log_enabled.setter
    def access_log_enabled(self, access_log_enabled: ConfigNodePropertyBoolean):
        """Sets the access_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.


        :param access_log_enabled: The access_log_enabled of this OrgApacheSlingEngineImplLogRequestLoggerProperties.
        :type access_log_enabled: ConfigNodePropertyBoolean
        """

        self._access_log_enabled = access_log_enabled