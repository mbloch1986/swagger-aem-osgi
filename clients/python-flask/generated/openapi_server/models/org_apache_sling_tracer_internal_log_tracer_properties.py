# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingTracerInternalLogTracerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, tracer_sets: ConfigNodePropertyArray=None, enabled: ConfigNodePropertyBoolean=None, servlet_enabled: ConfigNodePropertyBoolean=None, recording_cache_size_in_mb: ConfigNodePropertyInteger=None, recording_cache_duration_in_secs: ConfigNodePropertyInteger=None, recording_compression_enabled: ConfigNodePropertyBoolean=None, gzip_response: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheSlingTracerInternalLogTracerProperties - a model defined in OpenAPI

        :param tracer_sets: The tracer_sets of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type tracer_sets: ConfigNodePropertyArray
        :param enabled: The enabled of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type enabled: ConfigNodePropertyBoolean
        :param servlet_enabled: The servlet_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type servlet_enabled: ConfigNodePropertyBoolean
        :param recording_cache_size_in_mb: The recording_cache_size_in_mb of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type recording_cache_size_in_mb: ConfigNodePropertyInteger
        :param recording_cache_duration_in_secs: The recording_cache_duration_in_secs of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type recording_cache_duration_in_secs: ConfigNodePropertyInteger
        :param recording_compression_enabled: The recording_compression_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type recording_compression_enabled: ConfigNodePropertyBoolean
        :param gzip_response: The gzip_response of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :type gzip_response: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'tracer_sets': ConfigNodePropertyArray,
            'enabled': ConfigNodePropertyBoolean,
            'servlet_enabled': ConfigNodePropertyBoolean,
            'recording_cache_size_in_mb': ConfigNodePropertyInteger,
            'recording_cache_duration_in_secs': ConfigNodePropertyInteger,
            'recording_compression_enabled': ConfigNodePropertyBoolean,
            'gzip_response': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'tracer_sets': 'tracerSets',
            'enabled': 'enabled',
            'servlet_enabled': 'servletEnabled',
            'recording_cache_size_in_mb': 'recordingCacheSizeInMB',
            'recording_cache_duration_in_secs': 'recordingCacheDurationInSecs',
            'recording_compression_enabled': 'recordingCompressionEnabled',
            'gzip_response': 'gzipResponse'
        }

        self._tracer_sets = tracer_sets
        self._enabled = enabled
        self._servlet_enabled = servlet_enabled
        self._recording_cache_size_in_mb = recording_cache_size_in_mb
        self._recording_cache_duration_in_secs = recording_cache_duration_in_secs
        self._recording_compression_enabled = recording_compression_enabled
        self._gzip_response = gzip_response

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingTracerInternalLogTracerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingTracerInternalLogTracerProperties of this OrgApacheSlingTracerInternalLogTracerProperties.  # noqa: E501
        :rtype: OrgApacheSlingTracerInternalLogTracerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def tracer_sets(self) -> ConfigNodePropertyArray:
        """Gets the tracer_sets of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The tracer_sets of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._tracer_sets

    @tracer_sets.setter
    def tracer_sets(self, tracer_sets: ConfigNodePropertyArray):
        """Sets the tracer_sets of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param tracer_sets: The tracer_sets of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type tracer_sets: ConfigNodePropertyArray
        """

        self._tracer_sets = tracer_sets

    @property
    def enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled: ConfigNodePropertyBoolean):
        """Sets the enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param enabled: The enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type enabled: ConfigNodePropertyBoolean
        """

        self._enabled = enabled

    @property
    def servlet_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the servlet_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The servlet_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._servlet_enabled

    @servlet_enabled.setter
    def servlet_enabled(self, servlet_enabled: ConfigNodePropertyBoolean):
        """Sets the servlet_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param servlet_enabled: The servlet_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type servlet_enabled: ConfigNodePropertyBoolean
        """

        self._servlet_enabled = servlet_enabled

    @property
    def recording_cache_size_in_mb(self) -> ConfigNodePropertyInteger:
        """Gets the recording_cache_size_in_mb of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The recording_cache_size_in_mb of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._recording_cache_size_in_mb

    @recording_cache_size_in_mb.setter
    def recording_cache_size_in_mb(self, recording_cache_size_in_mb: ConfigNodePropertyInteger):
        """Sets the recording_cache_size_in_mb of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param recording_cache_size_in_mb: The recording_cache_size_in_mb of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type recording_cache_size_in_mb: ConfigNodePropertyInteger
        """

        self._recording_cache_size_in_mb = recording_cache_size_in_mb

    @property
    def recording_cache_duration_in_secs(self) -> ConfigNodePropertyInteger:
        """Gets the recording_cache_duration_in_secs of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The recording_cache_duration_in_secs of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._recording_cache_duration_in_secs

    @recording_cache_duration_in_secs.setter
    def recording_cache_duration_in_secs(self, recording_cache_duration_in_secs: ConfigNodePropertyInteger):
        """Sets the recording_cache_duration_in_secs of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param recording_cache_duration_in_secs: The recording_cache_duration_in_secs of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type recording_cache_duration_in_secs: ConfigNodePropertyInteger
        """

        self._recording_cache_duration_in_secs = recording_cache_duration_in_secs

    @property
    def recording_compression_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the recording_compression_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The recording_compression_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._recording_compression_enabled

    @recording_compression_enabled.setter
    def recording_compression_enabled(self, recording_compression_enabled: ConfigNodePropertyBoolean):
        """Sets the recording_compression_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param recording_compression_enabled: The recording_compression_enabled of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type recording_compression_enabled: ConfigNodePropertyBoolean
        """

        self._recording_compression_enabled = recording_compression_enabled

    @property
    def gzip_response(self) -> ConfigNodePropertyBoolean:
        """Gets the gzip_response of this OrgApacheSlingTracerInternalLogTracerProperties.


        :return: The gzip_response of this OrgApacheSlingTracerInternalLogTracerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._gzip_response

    @gzip_response.setter
    def gzip_response(self, gzip_response: ConfigNodePropertyBoolean):
        """Sets the gzip_response of this OrgApacheSlingTracerInternalLogTracerProperties.


        :param gzip_response: The gzip_response of this OrgApacheSlingTracerInternalLogTracerProperties.
        :type gzip_response: ConfigNodePropertyBoolean
        """

        self._gzip_response = gzip_response
