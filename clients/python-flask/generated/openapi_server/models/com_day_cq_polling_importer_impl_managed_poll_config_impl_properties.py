# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqPollingImporterImplManagedPollConfigImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id: ConfigNodePropertyString=None, enabled: ConfigNodePropertyBoolean=None, reference: ConfigNodePropertyBoolean=None, interval: ConfigNodePropertyInteger=None, expression: ConfigNodePropertyString=None, source: ConfigNodePropertyString=None, target: ConfigNodePropertyString=None, login: ConfigNodePropertyString=None, password: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqPollingImporterImplManagedPollConfigImplProperties - a model defined in OpenAPI

        :param id: The id of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type id: ConfigNodePropertyString
        :param enabled: The enabled of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type enabled: ConfigNodePropertyBoolean
        :param reference: The reference of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type reference: ConfigNodePropertyBoolean
        :param interval: The interval of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type interval: ConfigNodePropertyInteger
        :param expression: The expression of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type expression: ConfigNodePropertyString
        :param source: The source of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type source: ConfigNodePropertyString
        :param target: The target of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type target: ConfigNodePropertyString
        :param login: The login of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type login: ConfigNodePropertyString
        :param password: The password of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :type password: ConfigNodePropertyString
        """
        self.openapi_types = {
            'id': ConfigNodePropertyString,
            'enabled': ConfigNodePropertyBoolean,
            'reference': ConfigNodePropertyBoolean,
            'interval': ConfigNodePropertyInteger,
            'expression': ConfigNodePropertyString,
            'source': ConfigNodePropertyString,
            'target': ConfigNodePropertyString,
            'login': ConfigNodePropertyString,
            'password': ConfigNodePropertyString
        }

        self.attribute_map = {
            'id': 'id',
            'enabled': 'enabled',
            'reference': 'reference',
            'interval': 'interval',
            'expression': 'expression',
            'source': 'source',
            'target': 'target',
            'login': 'login',
            'password': 'password'
        }

        self._id = id
        self._enabled = enabled
        self._reference = reference
        self._interval = interval
        self._expression = expression
        self._source = source
        self._target = target
        self._login = login
        self._password = password

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqPollingImporterImplManagedPollConfigImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqPollingImporterImplManagedPollConfigImplProperties of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.  # noqa: E501
        :rtype: ComDayCqPollingImporterImplManagedPollConfigImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self) -> ConfigNodePropertyString:
        """Gets the id of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The id of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._id

    @id.setter
    def id(self, id: ConfigNodePropertyString):
        """Sets the id of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param id: The id of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type id: ConfigNodePropertyString
        """

        self._id = id

    @property
    def enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the enabled of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The enabled of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled: ConfigNodePropertyBoolean):
        """Sets the enabled of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param enabled: The enabled of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type enabled: ConfigNodePropertyBoolean
        """

        self._enabled = enabled

    @property
    def reference(self) -> ConfigNodePropertyBoolean:
        """Gets the reference of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The reference of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._reference

    @reference.setter
    def reference(self, reference: ConfigNodePropertyBoolean):
        """Sets the reference of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param reference: The reference of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type reference: ConfigNodePropertyBoolean
        """

        self._reference = reference

    @property
    def interval(self) -> ConfigNodePropertyInteger:
        """Gets the interval of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The interval of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._interval

    @interval.setter
    def interval(self, interval: ConfigNodePropertyInteger):
        """Sets the interval of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param interval: The interval of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type interval: ConfigNodePropertyInteger
        """

        self._interval = interval

    @property
    def expression(self) -> ConfigNodePropertyString:
        """Gets the expression of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The expression of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._expression

    @expression.setter
    def expression(self, expression: ConfigNodePropertyString):
        """Sets the expression of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param expression: The expression of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type expression: ConfigNodePropertyString
        """

        self._expression = expression

    @property
    def source(self) -> ConfigNodePropertyString:
        """Gets the source of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The source of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._source

    @source.setter
    def source(self, source: ConfigNodePropertyString):
        """Sets the source of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param source: The source of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type source: ConfigNodePropertyString
        """

        self._source = source

    @property
    def target(self) -> ConfigNodePropertyString:
        """Gets the target of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The target of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._target

    @target.setter
    def target(self, target: ConfigNodePropertyString):
        """Sets the target of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param target: The target of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type target: ConfigNodePropertyString
        """

        self._target = target

    @property
    def login(self) -> ConfigNodePropertyString:
        """Gets the login of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The login of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._login

    @login.setter
    def login(self, login: ConfigNodePropertyString):
        """Sets the login of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param login: The login of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type login: ConfigNodePropertyString
        """

        self._login = login

    @property
    def password(self) -> ConfigNodePropertyString:
        """Gets the password of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :return: The password of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._password

    @password.setter
    def password(self, password: ConfigNodePropertyString):
        """Sets the password of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.


        :param password: The password of this ComDayCqPollingImporterImplManagedPollConfigImplProperties.
        :type password: ConfigNodePropertyString
        """

        self._password = password