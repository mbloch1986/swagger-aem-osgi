# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, disabled: ConfigNodePropertyBoolean=None, debug: ConfigNodePropertyBoolean=None, local_index_dir: ConfigNodePropertyString=None, enable_open_index_async: ConfigNodePropertyBoolean=None, thread_pool_size: ConfigNodePropertyInteger=None, prefetch_index_files: ConfigNodePropertyBoolean=None, extracted_text_cache_size_in_mb: ConfigNodePropertyInteger=None, extracted_text_cache_expiry_in_secs: ConfigNodePropertyInteger=None, always_use_pre_extracted_cache: ConfigNodePropertyBoolean=None, boolean_clause_limit: ConfigNodePropertyInteger=None, enable_hybrid_indexing: ConfigNodePropertyBoolean=None, hybrid_queue_size: ConfigNodePropertyInteger=None, disable_stored_index_definition: ConfigNodePropertyBoolean=None, deleted_blobs_collection_enabled: ConfigNodePropertyBoolean=None, prop_index_cleaner_interval_in_secs: ConfigNodePropertyInteger=None, enable_single_blob_index_files: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties - a model defined in OpenAPI

        :param disabled: The disabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type disabled: ConfigNodePropertyBoolean
        :param debug: The debug of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type debug: ConfigNodePropertyBoolean
        :param local_index_dir: The local_index_dir of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type local_index_dir: ConfigNodePropertyString
        :param enable_open_index_async: The enable_open_index_async of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type enable_open_index_async: ConfigNodePropertyBoolean
        :param thread_pool_size: The thread_pool_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type thread_pool_size: ConfigNodePropertyInteger
        :param prefetch_index_files: The prefetch_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type prefetch_index_files: ConfigNodePropertyBoolean
        :param extracted_text_cache_size_in_mb: The extracted_text_cache_size_in_mb of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type extracted_text_cache_size_in_mb: ConfigNodePropertyInteger
        :param extracted_text_cache_expiry_in_secs: The extracted_text_cache_expiry_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type extracted_text_cache_expiry_in_secs: ConfigNodePropertyInteger
        :param always_use_pre_extracted_cache: The always_use_pre_extracted_cache of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type always_use_pre_extracted_cache: ConfigNodePropertyBoolean
        :param boolean_clause_limit: The boolean_clause_limit of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type boolean_clause_limit: ConfigNodePropertyInteger
        :param enable_hybrid_indexing: The enable_hybrid_indexing of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type enable_hybrid_indexing: ConfigNodePropertyBoolean
        :param hybrid_queue_size: The hybrid_queue_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type hybrid_queue_size: ConfigNodePropertyInteger
        :param disable_stored_index_definition: The disable_stored_index_definition of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type disable_stored_index_definition: ConfigNodePropertyBoolean
        :param deleted_blobs_collection_enabled: The deleted_blobs_collection_enabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type deleted_blobs_collection_enabled: ConfigNodePropertyBoolean
        :param prop_index_cleaner_interval_in_secs: The prop_index_cleaner_interval_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type prop_index_cleaner_interval_in_secs: ConfigNodePropertyInteger
        :param enable_single_blob_index_files: The enable_single_blob_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :type enable_single_blob_index_files: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'disabled': ConfigNodePropertyBoolean,
            'debug': ConfigNodePropertyBoolean,
            'local_index_dir': ConfigNodePropertyString,
            'enable_open_index_async': ConfigNodePropertyBoolean,
            'thread_pool_size': ConfigNodePropertyInteger,
            'prefetch_index_files': ConfigNodePropertyBoolean,
            'extracted_text_cache_size_in_mb': ConfigNodePropertyInteger,
            'extracted_text_cache_expiry_in_secs': ConfigNodePropertyInteger,
            'always_use_pre_extracted_cache': ConfigNodePropertyBoolean,
            'boolean_clause_limit': ConfigNodePropertyInteger,
            'enable_hybrid_indexing': ConfigNodePropertyBoolean,
            'hybrid_queue_size': ConfigNodePropertyInteger,
            'disable_stored_index_definition': ConfigNodePropertyBoolean,
            'deleted_blobs_collection_enabled': ConfigNodePropertyBoolean,
            'prop_index_cleaner_interval_in_secs': ConfigNodePropertyInteger,
            'enable_single_blob_index_files': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'disabled': 'disabled',
            'debug': 'debug',
            'local_index_dir': 'localIndexDir',
            'enable_open_index_async': 'enableOpenIndexAsync',
            'thread_pool_size': 'threadPoolSize',
            'prefetch_index_files': 'prefetchIndexFiles',
            'extracted_text_cache_size_in_mb': 'extractedTextCacheSizeInMB',
            'extracted_text_cache_expiry_in_secs': 'extractedTextCacheExpiryInSecs',
            'always_use_pre_extracted_cache': 'alwaysUsePreExtractedCache',
            'boolean_clause_limit': 'booleanClauseLimit',
            'enable_hybrid_indexing': 'enableHybridIndexing',
            'hybrid_queue_size': 'hybridQueueSize',
            'disable_stored_index_definition': 'disableStoredIndexDefinition',
            'deleted_blobs_collection_enabled': 'deletedBlobsCollectionEnabled',
            'prop_index_cleaner_interval_in_secs': 'propIndexCleanerIntervalInSecs',
            'enable_single_blob_index_files': 'enableSingleBlobIndexFiles'
        }

        self._disabled = disabled
        self._debug = debug
        self._local_index_dir = local_index_dir
        self._enable_open_index_async = enable_open_index_async
        self._thread_pool_size = thread_pool_size
        self._prefetch_index_files = prefetch_index_files
        self._extracted_text_cache_size_in_mb = extracted_text_cache_size_in_mb
        self._extracted_text_cache_expiry_in_secs = extracted_text_cache_expiry_in_secs
        self._always_use_pre_extracted_cache = always_use_pre_extracted_cache
        self._boolean_clause_limit = boolean_clause_limit
        self._enable_hybrid_indexing = enable_hybrid_indexing
        self._hybrid_queue_size = hybrid_queue_size
        self._disable_stored_index_definition = disable_stored_index_definition
        self._deleted_blobs_collection_enabled = deleted_blobs_collection_enabled
        self._prop_index_cleaner_interval_in_secs = prop_index_cleaner_interval_in_secs
        self._enable_single_blob_index_files = enable_single_blob_index_files

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def disabled(self) -> ConfigNodePropertyBoolean:
        """Gets the disabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The disabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._disabled

    @disabled.setter
    def disabled(self, disabled: ConfigNodePropertyBoolean):
        """Sets the disabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param disabled: The disabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type disabled: ConfigNodePropertyBoolean
        """

        self._disabled = disabled

    @property
    def debug(self) -> ConfigNodePropertyBoolean:
        """Gets the debug of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The debug of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._debug

    @debug.setter
    def debug(self, debug: ConfigNodePropertyBoolean):
        """Sets the debug of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param debug: The debug of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type debug: ConfigNodePropertyBoolean
        """

        self._debug = debug

    @property
    def local_index_dir(self) -> ConfigNodePropertyString:
        """Gets the local_index_dir of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The local_index_dir of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._local_index_dir

    @local_index_dir.setter
    def local_index_dir(self, local_index_dir: ConfigNodePropertyString):
        """Sets the local_index_dir of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param local_index_dir: The local_index_dir of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type local_index_dir: ConfigNodePropertyString
        """

        self._local_index_dir = local_index_dir

    @property
    def enable_open_index_async(self) -> ConfigNodePropertyBoolean:
        """Gets the enable_open_index_async of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The enable_open_index_async of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_open_index_async

    @enable_open_index_async.setter
    def enable_open_index_async(self, enable_open_index_async: ConfigNodePropertyBoolean):
        """Sets the enable_open_index_async of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param enable_open_index_async: The enable_open_index_async of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type enable_open_index_async: ConfigNodePropertyBoolean
        """

        self._enable_open_index_async = enable_open_index_async

    @property
    def thread_pool_size(self) -> ConfigNodePropertyInteger:
        """Gets the thread_pool_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The thread_pool_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._thread_pool_size

    @thread_pool_size.setter
    def thread_pool_size(self, thread_pool_size: ConfigNodePropertyInteger):
        """Sets the thread_pool_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param thread_pool_size: The thread_pool_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type thread_pool_size: ConfigNodePropertyInteger
        """

        self._thread_pool_size = thread_pool_size

    @property
    def prefetch_index_files(self) -> ConfigNodePropertyBoolean:
        """Gets the prefetch_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The prefetch_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._prefetch_index_files

    @prefetch_index_files.setter
    def prefetch_index_files(self, prefetch_index_files: ConfigNodePropertyBoolean):
        """Sets the prefetch_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param prefetch_index_files: The prefetch_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type prefetch_index_files: ConfigNodePropertyBoolean
        """

        self._prefetch_index_files = prefetch_index_files

    @property
    def extracted_text_cache_size_in_mb(self) -> ConfigNodePropertyInteger:
        """Gets the extracted_text_cache_size_in_mb of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The extracted_text_cache_size_in_mb of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._extracted_text_cache_size_in_mb

    @extracted_text_cache_size_in_mb.setter
    def extracted_text_cache_size_in_mb(self, extracted_text_cache_size_in_mb: ConfigNodePropertyInteger):
        """Sets the extracted_text_cache_size_in_mb of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param extracted_text_cache_size_in_mb: The extracted_text_cache_size_in_mb of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type extracted_text_cache_size_in_mb: ConfigNodePropertyInteger
        """

        self._extracted_text_cache_size_in_mb = extracted_text_cache_size_in_mb

    @property
    def extracted_text_cache_expiry_in_secs(self) -> ConfigNodePropertyInteger:
        """Gets the extracted_text_cache_expiry_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The extracted_text_cache_expiry_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._extracted_text_cache_expiry_in_secs

    @extracted_text_cache_expiry_in_secs.setter
    def extracted_text_cache_expiry_in_secs(self, extracted_text_cache_expiry_in_secs: ConfigNodePropertyInteger):
        """Sets the extracted_text_cache_expiry_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param extracted_text_cache_expiry_in_secs: The extracted_text_cache_expiry_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type extracted_text_cache_expiry_in_secs: ConfigNodePropertyInteger
        """

        self._extracted_text_cache_expiry_in_secs = extracted_text_cache_expiry_in_secs

    @property
    def always_use_pre_extracted_cache(self) -> ConfigNodePropertyBoolean:
        """Gets the always_use_pre_extracted_cache of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The always_use_pre_extracted_cache of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._always_use_pre_extracted_cache

    @always_use_pre_extracted_cache.setter
    def always_use_pre_extracted_cache(self, always_use_pre_extracted_cache: ConfigNodePropertyBoolean):
        """Sets the always_use_pre_extracted_cache of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param always_use_pre_extracted_cache: The always_use_pre_extracted_cache of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type always_use_pre_extracted_cache: ConfigNodePropertyBoolean
        """

        self._always_use_pre_extracted_cache = always_use_pre_extracted_cache

    @property
    def boolean_clause_limit(self) -> ConfigNodePropertyInteger:
        """Gets the boolean_clause_limit of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The boolean_clause_limit of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._boolean_clause_limit

    @boolean_clause_limit.setter
    def boolean_clause_limit(self, boolean_clause_limit: ConfigNodePropertyInteger):
        """Sets the boolean_clause_limit of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param boolean_clause_limit: The boolean_clause_limit of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type boolean_clause_limit: ConfigNodePropertyInteger
        """

        self._boolean_clause_limit = boolean_clause_limit

    @property
    def enable_hybrid_indexing(self) -> ConfigNodePropertyBoolean:
        """Gets the enable_hybrid_indexing of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The enable_hybrid_indexing of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_hybrid_indexing

    @enable_hybrid_indexing.setter
    def enable_hybrid_indexing(self, enable_hybrid_indexing: ConfigNodePropertyBoolean):
        """Sets the enable_hybrid_indexing of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param enable_hybrid_indexing: The enable_hybrid_indexing of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type enable_hybrid_indexing: ConfigNodePropertyBoolean
        """

        self._enable_hybrid_indexing = enable_hybrid_indexing

    @property
    def hybrid_queue_size(self) -> ConfigNodePropertyInteger:
        """Gets the hybrid_queue_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The hybrid_queue_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._hybrid_queue_size

    @hybrid_queue_size.setter
    def hybrid_queue_size(self, hybrid_queue_size: ConfigNodePropertyInteger):
        """Sets the hybrid_queue_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param hybrid_queue_size: The hybrid_queue_size of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type hybrid_queue_size: ConfigNodePropertyInteger
        """

        self._hybrid_queue_size = hybrid_queue_size

    @property
    def disable_stored_index_definition(self) -> ConfigNodePropertyBoolean:
        """Gets the disable_stored_index_definition of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The disable_stored_index_definition of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._disable_stored_index_definition

    @disable_stored_index_definition.setter
    def disable_stored_index_definition(self, disable_stored_index_definition: ConfigNodePropertyBoolean):
        """Sets the disable_stored_index_definition of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param disable_stored_index_definition: The disable_stored_index_definition of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type disable_stored_index_definition: ConfigNodePropertyBoolean
        """

        self._disable_stored_index_definition = disable_stored_index_definition

    @property
    def deleted_blobs_collection_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the deleted_blobs_collection_enabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The deleted_blobs_collection_enabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._deleted_blobs_collection_enabled

    @deleted_blobs_collection_enabled.setter
    def deleted_blobs_collection_enabled(self, deleted_blobs_collection_enabled: ConfigNodePropertyBoolean):
        """Sets the deleted_blobs_collection_enabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param deleted_blobs_collection_enabled: The deleted_blobs_collection_enabled of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type deleted_blobs_collection_enabled: ConfigNodePropertyBoolean
        """

        self._deleted_blobs_collection_enabled = deleted_blobs_collection_enabled

    @property
    def prop_index_cleaner_interval_in_secs(self) -> ConfigNodePropertyInteger:
        """Gets the prop_index_cleaner_interval_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The prop_index_cleaner_interval_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._prop_index_cleaner_interval_in_secs

    @prop_index_cleaner_interval_in_secs.setter
    def prop_index_cleaner_interval_in_secs(self, prop_index_cleaner_interval_in_secs: ConfigNodePropertyInteger):
        """Sets the prop_index_cleaner_interval_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param prop_index_cleaner_interval_in_secs: The prop_index_cleaner_interval_in_secs of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type prop_index_cleaner_interval_in_secs: ConfigNodePropertyInteger
        """

        self._prop_index_cleaner_interval_in_secs = prop_index_cleaner_interval_in_secs

    @property
    def enable_single_blob_index_files(self) -> ConfigNodePropertyBoolean:
        """Gets the enable_single_blob_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :return: The enable_single_blob_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_single_blob_index_files

    @enable_single_blob_index_files.setter
    def enable_single_blob_index_files(self, enable_single_blob_index_files: ConfigNodePropertyBoolean):
        """Sets the enable_single_blob_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.


        :param enable_single_blob_index_files: The enable_single_blob_index_files of this OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.
        :type enable_single_blob_index_files: ConfigNodePropertyBoolean
        """

        self._enable_single_blob_index_files = enable_single_blob_index_files
