# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, datasources: ConfigNodePropertyArray=None, step: ConfigNodePropertyInteger=None, archives: ConfigNodePropertyArray=None, path: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties - a model defined in OpenAPI

        :param datasources: The datasources of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.  # noqa: E501
        :type datasources: ConfigNodePropertyArray
        :param step: The step of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.  # noqa: E501
        :type step: ConfigNodePropertyInteger
        :param archives: The archives of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.  # noqa: E501
        :type archives: ConfigNodePropertyArray
        :param path: The path of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.  # noqa: E501
        :type path: ConfigNodePropertyString
        """
        self.openapi_types = {
            'datasources': ConfigNodePropertyArray,
            'step': ConfigNodePropertyInteger,
            'archives': ConfigNodePropertyArray,
            'path': ConfigNodePropertyString
        }

        self.attribute_map = {
            'datasources': 'datasources',
            'step': 'step',
            'archives': 'archives',
            'path': 'path'
        }

        self._datasources = datasources
        self._step = step
        self._archives = archives
        self._path = path

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.  # noqa: E501
        :rtype: OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def datasources(self) -> ConfigNodePropertyArray:
        """Gets the datasources of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :return: The datasources of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._datasources

    @datasources.setter
    def datasources(self, datasources: ConfigNodePropertyArray):
        """Sets the datasources of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :param datasources: The datasources of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :type datasources: ConfigNodePropertyArray
        """

        self._datasources = datasources

    @property
    def step(self) -> ConfigNodePropertyInteger:
        """Gets the step of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :return: The step of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._step

    @step.setter
    def step(self, step: ConfigNodePropertyInteger):
        """Sets the step of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :param step: The step of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :type step: ConfigNodePropertyInteger
        """

        self._step = step

    @property
    def archives(self) -> ConfigNodePropertyArray:
        """Gets the archives of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :return: The archives of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._archives

    @archives.setter
    def archives(self, archives: ConfigNodePropertyArray):
        """Sets the archives of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :param archives: The archives of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :type archives: ConfigNodePropertyArray
        """

        self._archives = archives

    @property
    def path(self) -> ConfigNodePropertyString:
        """Gets the path of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :return: The path of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._path

    @path.setter
    def path(self, path: ConfigNodePropertyString):
        """Sets the path of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.


        :param path: The path of this OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties.
        :type path: ConfigNodePropertyString
        """

        self._path = path
