<?php
/**
 * OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'disabled' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'debug' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'local_index_dir' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'enable_open_index_async' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'thread_pool_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'prefetch_index_files' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'extracted_text_cache_size_in_mb' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'extracted_text_cache_expiry_in_secs' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'always_use_pre_extracted_cache' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'boolean_clause_limit' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'enable_hybrid_indexing' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'hybrid_queue_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'disable_stored_index_definition' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'deleted_blobs_collection_enabled' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'prop_index_cleaner_interval_in_secs' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'enable_single_blob_index_files' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'disabled' => null,
        'debug' => null,
        'local_index_dir' => null,
        'enable_open_index_async' => null,
        'thread_pool_size' => null,
        'prefetch_index_files' => null,
        'extracted_text_cache_size_in_mb' => null,
        'extracted_text_cache_expiry_in_secs' => null,
        'always_use_pre_extracted_cache' => null,
        'boolean_clause_limit' => null,
        'enable_hybrid_indexing' => null,
        'hybrid_queue_size' => null,
        'disable_stored_index_definition' => null,
        'deleted_blobs_collection_enabled' => null,
        'prop_index_cleaner_interval_in_secs' => null,
        'enable_single_blob_index_files' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'disabled' => 'disabled',
        'debug' => 'debug',
        'local_index_dir' => 'localIndexDir',
        'enable_open_index_async' => 'enableOpenIndexAsync',
        'thread_pool_size' => 'threadPoolSize',
        'prefetch_index_files' => 'prefetchIndexFiles',
        'extracted_text_cache_size_in_mb' => 'extractedTextCacheSizeInMB',
        'extracted_text_cache_expiry_in_secs' => 'extractedTextCacheExpiryInSecs',
        'always_use_pre_extracted_cache' => 'alwaysUsePreExtractedCache',
        'boolean_clause_limit' => 'booleanClauseLimit',
        'enable_hybrid_indexing' => 'enableHybridIndexing',
        'hybrid_queue_size' => 'hybridQueueSize',
        'disable_stored_index_definition' => 'disableStoredIndexDefinition',
        'deleted_blobs_collection_enabled' => 'deletedBlobsCollectionEnabled',
        'prop_index_cleaner_interval_in_secs' => 'propIndexCleanerIntervalInSecs',
        'enable_single_blob_index_files' => 'enableSingleBlobIndexFiles'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'disabled' => 'setDisabled',
        'debug' => 'setDebug',
        'local_index_dir' => 'setLocalIndexDir',
        'enable_open_index_async' => 'setEnableOpenIndexAsync',
        'thread_pool_size' => 'setThreadPoolSize',
        'prefetch_index_files' => 'setPrefetchIndexFiles',
        'extracted_text_cache_size_in_mb' => 'setExtractedTextCacheSizeInMb',
        'extracted_text_cache_expiry_in_secs' => 'setExtractedTextCacheExpiryInSecs',
        'always_use_pre_extracted_cache' => 'setAlwaysUsePreExtractedCache',
        'boolean_clause_limit' => 'setBooleanClauseLimit',
        'enable_hybrid_indexing' => 'setEnableHybridIndexing',
        'hybrid_queue_size' => 'setHybridQueueSize',
        'disable_stored_index_definition' => 'setDisableStoredIndexDefinition',
        'deleted_blobs_collection_enabled' => 'setDeletedBlobsCollectionEnabled',
        'prop_index_cleaner_interval_in_secs' => 'setPropIndexCleanerIntervalInSecs',
        'enable_single_blob_index_files' => 'setEnableSingleBlobIndexFiles'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'disabled' => 'getDisabled',
        'debug' => 'getDebug',
        'local_index_dir' => 'getLocalIndexDir',
        'enable_open_index_async' => 'getEnableOpenIndexAsync',
        'thread_pool_size' => 'getThreadPoolSize',
        'prefetch_index_files' => 'getPrefetchIndexFiles',
        'extracted_text_cache_size_in_mb' => 'getExtractedTextCacheSizeInMb',
        'extracted_text_cache_expiry_in_secs' => 'getExtractedTextCacheExpiryInSecs',
        'always_use_pre_extracted_cache' => 'getAlwaysUsePreExtractedCache',
        'boolean_clause_limit' => 'getBooleanClauseLimit',
        'enable_hybrid_indexing' => 'getEnableHybridIndexing',
        'hybrid_queue_size' => 'getHybridQueueSize',
        'disable_stored_index_definition' => 'getDisableStoredIndexDefinition',
        'deleted_blobs_collection_enabled' => 'getDeletedBlobsCollectionEnabled',
        'prop_index_cleaner_interval_in_secs' => 'getPropIndexCleanerIntervalInSecs',
        'enable_single_blob_index_files' => 'getEnableSingleBlobIndexFiles'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['disabled'] = isset($data['disabled']) ? $data['disabled'] : null;
        $this->container['debug'] = isset($data['debug']) ? $data['debug'] : null;
        $this->container['local_index_dir'] = isset($data['local_index_dir']) ? $data['local_index_dir'] : null;
        $this->container['enable_open_index_async'] = isset($data['enable_open_index_async']) ? $data['enable_open_index_async'] : null;
        $this->container['thread_pool_size'] = isset($data['thread_pool_size']) ? $data['thread_pool_size'] : null;
        $this->container['prefetch_index_files'] = isset($data['prefetch_index_files']) ? $data['prefetch_index_files'] : null;
        $this->container['extracted_text_cache_size_in_mb'] = isset($data['extracted_text_cache_size_in_mb']) ? $data['extracted_text_cache_size_in_mb'] : null;
        $this->container['extracted_text_cache_expiry_in_secs'] = isset($data['extracted_text_cache_expiry_in_secs']) ? $data['extracted_text_cache_expiry_in_secs'] : null;
        $this->container['always_use_pre_extracted_cache'] = isset($data['always_use_pre_extracted_cache']) ? $data['always_use_pre_extracted_cache'] : null;
        $this->container['boolean_clause_limit'] = isset($data['boolean_clause_limit']) ? $data['boolean_clause_limit'] : null;
        $this->container['enable_hybrid_indexing'] = isset($data['enable_hybrid_indexing']) ? $data['enable_hybrid_indexing'] : null;
        $this->container['hybrid_queue_size'] = isset($data['hybrid_queue_size']) ? $data['hybrid_queue_size'] : null;
        $this->container['disable_stored_index_definition'] = isset($data['disable_stored_index_definition']) ? $data['disable_stored_index_definition'] : null;
        $this->container['deleted_blobs_collection_enabled'] = isset($data['deleted_blobs_collection_enabled']) ? $data['deleted_blobs_collection_enabled'] : null;
        $this->container['prop_index_cleaner_interval_in_secs'] = isset($data['prop_index_cleaner_interval_in_secs']) ? $data['prop_index_cleaner_interval_in_secs'] : null;
        $this->container['enable_single_blob_index_files'] = isset($data['enable_single_blob_index_files']) ? $data['enable_single_blob_index_files'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets disabled
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDisabled()
    {
        return $this->container['disabled'];
    }

    /**
     * Sets disabled
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $disabled disabled
     *
     * @return $this
     */
    public function setDisabled($disabled)
    {
        $this->container['disabled'] = $disabled;

        return $this;
    }

    /**
     * Gets debug
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDebug()
    {
        return $this->container['debug'];
    }

    /**
     * Sets debug
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $debug debug
     *
     * @return $this
     */
    public function setDebug($debug)
    {
        $this->container['debug'] = $debug;

        return $this;
    }

    /**
     * Gets local_index_dir
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getLocalIndexDir()
    {
        return $this->container['local_index_dir'];
    }

    /**
     * Sets local_index_dir
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $local_index_dir local_index_dir
     *
     * @return $this
     */
    public function setLocalIndexDir($local_index_dir)
    {
        $this->container['local_index_dir'] = $local_index_dir;

        return $this;
    }

    /**
     * Gets enable_open_index_async
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableOpenIndexAsync()
    {
        return $this->container['enable_open_index_async'];
    }

    /**
     * Sets enable_open_index_async
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enable_open_index_async enable_open_index_async
     *
     * @return $this
     */
    public function setEnableOpenIndexAsync($enable_open_index_async)
    {
        $this->container['enable_open_index_async'] = $enable_open_index_async;

        return $this;
    }

    /**
     * Gets thread_pool_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getThreadPoolSize()
    {
        return $this->container['thread_pool_size'];
    }

    /**
     * Sets thread_pool_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $thread_pool_size thread_pool_size
     *
     * @return $this
     */
    public function setThreadPoolSize($thread_pool_size)
    {
        $this->container['thread_pool_size'] = $thread_pool_size;

        return $this;
    }

    /**
     * Gets prefetch_index_files
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getPrefetchIndexFiles()
    {
        return $this->container['prefetch_index_files'];
    }

    /**
     * Sets prefetch_index_files
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $prefetch_index_files prefetch_index_files
     *
     * @return $this
     */
    public function setPrefetchIndexFiles($prefetch_index_files)
    {
        $this->container['prefetch_index_files'] = $prefetch_index_files;

        return $this;
    }

    /**
     * Gets extracted_text_cache_size_in_mb
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getExtractedTextCacheSizeInMb()
    {
        return $this->container['extracted_text_cache_size_in_mb'];
    }

    /**
     * Sets extracted_text_cache_size_in_mb
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $extracted_text_cache_size_in_mb extracted_text_cache_size_in_mb
     *
     * @return $this
     */
    public function setExtractedTextCacheSizeInMb($extracted_text_cache_size_in_mb)
    {
        $this->container['extracted_text_cache_size_in_mb'] = $extracted_text_cache_size_in_mb;

        return $this;
    }

    /**
     * Gets extracted_text_cache_expiry_in_secs
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getExtractedTextCacheExpiryInSecs()
    {
        return $this->container['extracted_text_cache_expiry_in_secs'];
    }

    /**
     * Sets extracted_text_cache_expiry_in_secs
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $extracted_text_cache_expiry_in_secs extracted_text_cache_expiry_in_secs
     *
     * @return $this
     */
    public function setExtractedTextCacheExpiryInSecs($extracted_text_cache_expiry_in_secs)
    {
        $this->container['extracted_text_cache_expiry_in_secs'] = $extracted_text_cache_expiry_in_secs;

        return $this;
    }

    /**
     * Gets always_use_pre_extracted_cache
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getAlwaysUsePreExtractedCache()
    {
        return $this->container['always_use_pre_extracted_cache'];
    }

    /**
     * Sets always_use_pre_extracted_cache
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $always_use_pre_extracted_cache always_use_pre_extracted_cache
     *
     * @return $this
     */
    public function setAlwaysUsePreExtractedCache($always_use_pre_extracted_cache)
    {
        $this->container['always_use_pre_extracted_cache'] = $always_use_pre_extracted_cache;

        return $this;
    }

    /**
     * Gets boolean_clause_limit
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getBooleanClauseLimit()
    {
        return $this->container['boolean_clause_limit'];
    }

    /**
     * Sets boolean_clause_limit
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $boolean_clause_limit boolean_clause_limit
     *
     * @return $this
     */
    public function setBooleanClauseLimit($boolean_clause_limit)
    {
        $this->container['boolean_clause_limit'] = $boolean_clause_limit;

        return $this;
    }

    /**
     * Gets enable_hybrid_indexing
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableHybridIndexing()
    {
        return $this->container['enable_hybrid_indexing'];
    }

    /**
     * Sets enable_hybrid_indexing
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enable_hybrid_indexing enable_hybrid_indexing
     *
     * @return $this
     */
    public function setEnableHybridIndexing($enable_hybrid_indexing)
    {
        $this->container['enable_hybrid_indexing'] = $enable_hybrid_indexing;

        return $this;
    }

    /**
     * Gets hybrid_queue_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getHybridQueueSize()
    {
        return $this->container['hybrid_queue_size'];
    }

    /**
     * Sets hybrid_queue_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $hybrid_queue_size hybrid_queue_size
     *
     * @return $this
     */
    public function setHybridQueueSize($hybrid_queue_size)
    {
        $this->container['hybrid_queue_size'] = $hybrid_queue_size;

        return $this;
    }

    /**
     * Gets disable_stored_index_definition
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDisableStoredIndexDefinition()
    {
        return $this->container['disable_stored_index_definition'];
    }

    /**
     * Sets disable_stored_index_definition
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $disable_stored_index_definition disable_stored_index_definition
     *
     * @return $this
     */
    public function setDisableStoredIndexDefinition($disable_stored_index_definition)
    {
        $this->container['disable_stored_index_definition'] = $disable_stored_index_definition;

        return $this;
    }

    /**
     * Gets deleted_blobs_collection_enabled
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDeletedBlobsCollectionEnabled()
    {
        return $this->container['deleted_blobs_collection_enabled'];
    }

    /**
     * Sets deleted_blobs_collection_enabled
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $deleted_blobs_collection_enabled deleted_blobs_collection_enabled
     *
     * @return $this
     */
    public function setDeletedBlobsCollectionEnabled($deleted_blobs_collection_enabled)
    {
        $this->container['deleted_blobs_collection_enabled'] = $deleted_blobs_collection_enabled;

        return $this;
    }

    /**
     * Gets prop_index_cleaner_interval_in_secs
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPropIndexCleanerIntervalInSecs()
    {
        return $this->container['prop_index_cleaner_interval_in_secs'];
    }

    /**
     * Sets prop_index_cleaner_interval_in_secs
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $prop_index_cleaner_interval_in_secs prop_index_cleaner_interval_in_secs
     *
     * @return $this
     */
    public function setPropIndexCleanerIntervalInSecs($prop_index_cleaner_interval_in_secs)
    {
        $this->container['prop_index_cleaner_interval_in_secs'] = $prop_index_cleaner_interval_in_secs;

        return $this;
    }

    /**
     * Gets enable_single_blob_index_files
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableSingleBlobIndexFiles()
    {
        return $this->container['enable_single_blob_index_files'];
    }

    /**
     * Sets enable_single_blob_index_files
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enable_single_blob_index_files enable_single_blob_index_files
     *
     * @return $this
     */
    public function setEnableSingleBlobIndexFiles($enable_single_blob_index_files)
    {
        $this->container['enable_single_blob_index_files'] = $enable_single_blob_index_files;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


