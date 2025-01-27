# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, job_consumermanager_disable_distribution: ConfigNodePropertyBoolean=None, startup_delay: ConfigNodePropertyInteger=None, cleanup_period: ConfigNodePropertyInteger=None):  # noqa: E501
        """OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties - a model defined in OpenAPI

        :param job_consumermanager_disable_distribution: The job_consumermanager_disable_distribution of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.  # noqa: E501
        :type job_consumermanager_disable_distribution: ConfigNodePropertyBoolean
        :param startup_delay: The startup_delay of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.  # noqa: E501
        :type startup_delay: ConfigNodePropertyInteger
        :param cleanup_period: The cleanup_period of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.  # noqa: E501
        :type cleanup_period: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'job_consumermanager_disable_distribution': ConfigNodePropertyBoolean,
            'startup_delay': ConfigNodePropertyInteger,
            'cleanup_period': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'job_consumermanager_disable_distribution': 'job.consumermanager.disableDistribution',
            'startup_delay': 'startup.delay',
            'cleanup_period': 'cleanup.period'
        }

        self._job_consumermanager_disable_distribution = job_consumermanager_disable_distribution
        self._startup_delay = startup_delay
        self._cleanup_period = cleanup_period

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingEventImplJobsJcrPersistenceHandlerProperties of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.  # noqa: E501
        :rtype: OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def job_consumermanager_disable_distribution(self) -> ConfigNodePropertyBoolean:
        """Gets the job_consumermanager_disable_distribution of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :return: The job_consumermanager_disable_distribution of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._job_consumermanager_disable_distribution

    @job_consumermanager_disable_distribution.setter
    def job_consumermanager_disable_distribution(self, job_consumermanager_disable_distribution: ConfigNodePropertyBoolean):
        """Sets the job_consumermanager_disable_distribution of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :param job_consumermanager_disable_distribution: The job_consumermanager_disable_distribution of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :type job_consumermanager_disable_distribution: ConfigNodePropertyBoolean
        """

        self._job_consumermanager_disable_distribution = job_consumermanager_disable_distribution

    @property
    def startup_delay(self) -> ConfigNodePropertyInteger:
        """Gets the startup_delay of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :return: The startup_delay of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._startup_delay

    @startup_delay.setter
    def startup_delay(self, startup_delay: ConfigNodePropertyInteger):
        """Sets the startup_delay of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :param startup_delay: The startup_delay of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :type startup_delay: ConfigNodePropertyInteger
        """

        self._startup_delay = startup_delay

    @property
    def cleanup_period(self) -> ConfigNodePropertyInteger:
        """Gets the cleanup_period of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :return: The cleanup_period of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cleanup_period

    @cleanup_period.setter
    def cleanup_period(self, cleanup_period: ConfigNodePropertyInteger):
        """Sets the cleanup_period of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.


        :param cleanup_period: The cleanup_period of this OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.
        :type cleanup_period: ConfigNodePropertyInteger
        """

        self._cleanup_period = cleanup_period
