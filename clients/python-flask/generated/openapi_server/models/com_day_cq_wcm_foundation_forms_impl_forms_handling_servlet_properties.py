# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name_whitelist: ConfigNodePropertyString=None, allow_expressions: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties - a model defined in OpenAPI

        :param name_whitelist: The name_whitelist of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.  # noqa: E501
        :type name_whitelist: ConfigNodePropertyString
        :param allow_expressions: The allow_expressions of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.  # noqa: E501
        :type allow_expressions: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'name_whitelist': ConfigNodePropertyString,
            'allow_expressions': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'name_whitelist': 'name.whitelist',
            'allow_expressions': 'allow.expressions'
        }

        self._name_whitelist = name_whitelist
        self._allow_expressions = allow_expressions

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmFoundationFormsImplFormsHandlingServletProperties of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.  # noqa: E501
        :rtype: ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name_whitelist(self) -> ConfigNodePropertyString:
        """Gets the name_whitelist of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.


        :return: The name_whitelist of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._name_whitelist

    @name_whitelist.setter
    def name_whitelist(self, name_whitelist: ConfigNodePropertyString):
        """Sets the name_whitelist of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.


        :param name_whitelist: The name_whitelist of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.
        :type name_whitelist: ConfigNodePropertyString
        """

        self._name_whitelist = name_whitelist

    @property
    def allow_expressions(self) -> ConfigNodePropertyBoolean:
        """Gets the allow_expressions of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.


        :return: The allow_expressions of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._allow_expressions

    @allow_expressions.setter
    def allow_expressions(self, allow_expressions: ConfigNodePropertyBoolean):
        """Sets the allow_expressions of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.


        :param allow_expressions: The allow_expressions of this ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties.
        :type allow_expressions: ConfigNodePropertyBoolean
        """

        self._allow_expressions = allow_expressions
