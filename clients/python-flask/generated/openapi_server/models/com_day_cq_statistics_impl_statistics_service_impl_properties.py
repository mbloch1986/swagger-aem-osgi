# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqStatisticsImplStatisticsServiceImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, scheduler_period: ConfigNodePropertyInteger=None, scheduler_concurrent: ConfigNodePropertyBoolean=None, path: ConfigNodePropertyString=None, workspace: ConfigNodePropertyString=None, keywords_path: ConfigNodePropertyString=None, async_entries: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqStatisticsImplStatisticsServiceImplProperties - a model defined in OpenAPI

        :param scheduler_period: The scheduler_period of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type scheduler_period: ConfigNodePropertyInteger
        :param scheduler_concurrent: The scheduler_concurrent of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type scheduler_concurrent: ConfigNodePropertyBoolean
        :param path: The path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type path: ConfigNodePropertyString
        :param workspace: The workspace of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type workspace: ConfigNodePropertyString
        :param keywords_path: The keywords_path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type keywords_path: ConfigNodePropertyString
        :param async_entries: The async_entries of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :type async_entries: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'scheduler_period': ConfigNodePropertyInteger,
            'scheduler_concurrent': ConfigNodePropertyBoolean,
            'path': ConfigNodePropertyString,
            'workspace': ConfigNodePropertyString,
            'keywords_path': ConfigNodePropertyString,
            'async_entries': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'scheduler_period': 'scheduler.period',
            'scheduler_concurrent': 'scheduler.concurrent',
            'path': 'path',
            'workspace': 'workspace',
            'keywords_path': 'keywordsPath',
            'async_entries': 'asyncEntries'
        }

        self._scheduler_period = scheduler_period
        self._scheduler_concurrent = scheduler_concurrent
        self._path = path
        self._workspace = workspace
        self._keywords_path = keywords_path
        self._async_entries = async_entries

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqStatisticsImplStatisticsServiceImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqStatisticsImplStatisticsServiceImplProperties of this ComDayCqStatisticsImplStatisticsServiceImplProperties.  # noqa: E501
        :rtype: ComDayCqStatisticsImplStatisticsServiceImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def scheduler_period(self) -> ConfigNodePropertyInteger:
        """Gets the scheduler_period of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The scheduler_period of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._scheduler_period

    @scheduler_period.setter
    def scheduler_period(self, scheduler_period: ConfigNodePropertyInteger):
        """Sets the scheduler_period of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param scheduler_period: The scheduler_period of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type scheduler_period: ConfigNodePropertyInteger
        """

        self._scheduler_period = scheduler_period

    @property
    def scheduler_concurrent(self) -> ConfigNodePropertyBoolean:
        """Gets the scheduler_concurrent of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The scheduler_concurrent of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._scheduler_concurrent

    @scheduler_concurrent.setter
    def scheduler_concurrent(self, scheduler_concurrent: ConfigNodePropertyBoolean):
        """Sets the scheduler_concurrent of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param scheduler_concurrent: The scheduler_concurrent of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type scheduler_concurrent: ConfigNodePropertyBoolean
        """

        self._scheduler_concurrent = scheduler_concurrent

    @property
    def path(self) -> ConfigNodePropertyString:
        """Gets the path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path: ConfigNodePropertyString):
        """Sets the path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param path: The path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type path: ConfigNodePropertyString
        """

        self._path = path

    @property
    def workspace(self) -> ConfigNodePropertyString:
        """Gets the workspace of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The workspace of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._workspace

    @workspace.setter
    def workspace(self, workspace: ConfigNodePropertyString):
        """Sets the workspace of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param workspace: The workspace of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type workspace: ConfigNodePropertyString
        """

        self._workspace = workspace

    @property
    def keywords_path(self) -> ConfigNodePropertyString:
        """Gets the keywords_path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The keywords_path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._keywords_path

    @keywords_path.setter
    def keywords_path(self, keywords_path: ConfigNodePropertyString):
        """Sets the keywords_path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param keywords_path: The keywords_path of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type keywords_path: ConfigNodePropertyString
        """

        self._keywords_path = keywords_path

    @property
    def async_entries(self) -> ConfigNodePropertyBoolean:
        """Gets the async_entries of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :return: The async_entries of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._async_entries

    @async_entries.setter
    def async_entries(self, async_entries: ConfigNodePropertyBoolean):
        """Sets the async_entries of this ComDayCqStatisticsImplStatisticsServiceImplProperties.


        :param async_entries: The async_entries of this ComDayCqStatisticsImplStatisticsServiceImplProperties.
        :type async_entries: ConfigNodePropertyBoolean
        """

        self._async_entries = async_entries