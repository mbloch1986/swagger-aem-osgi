<?php
/**
 * OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties
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
 * OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingDistributionSerializationImplVltVaultDistributionProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'type' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown',
        'import_mode' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'acl_handling' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'package_roots' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'package_filters' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'property_filters' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'temp_fs_folder' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'use_binary_references' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'auto_save_threshold' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'cleanup_delay' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'file_threshold' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'mega_bytes' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown',
        'use_off_heap_memory' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'digest_algorithm' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown',
        'monitoring_queue_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'paths_mapping' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'strict_import' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'name' => null,
        'type' => null,
        'import_mode' => null,
        'acl_handling' => null,
        'package_roots' => null,
        'package_filters' => null,
        'property_filters' => null,
        'temp_fs_folder' => null,
        'use_binary_references' => null,
        'auto_save_threshold' => null,
        'cleanup_delay' => null,
        'file_threshold' => null,
        'mega_bytes' => null,
        'use_off_heap_memory' => null,
        'digest_algorithm' => null,
        'monitoring_queue_size' => null,
        'paths_mapping' => null,
        'strict_import' => null
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
        'name' => 'name',
        'type' => 'type',
        'import_mode' => 'importMode',
        'acl_handling' => 'aclHandling',
        'package_roots' => 'package.roots',
        'package_filters' => 'package.filters',
        'property_filters' => 'property.filters',
        'temp_fs_folder' => 'tempFsFolder',
        'use_binary_references' => 'useBinaryReferences',
        'auto_save_threshold' => 'autoSaveThreshold',
        'cleanup_delay' => 'cleanupDelay',
        'file_threshold' => 'fileThreshold',
        'mega_bytes' => 'MEGA_BYTES',
        'use_off_heap_memory' => 'useOffHeapMemory',
        'digest_algorithm' => 'digestAlgorithm',
        'monitoring_queue_size' => 'monitoringQueueSize',
        'paths_mapping' => 'pathsMapping',
        'strict_import' => 'strictImport'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'name' => 'setName',
        'type' => 'setType',
        'import_mode' => 'setImportMode',
        'acl_handling' => 'setAclHandling',
        'package_roots' => 'setPackageRoots',
        'package_filters' => 'setPackageFilters',
        'property_filters' => 'setPropertyFilters',
        'temp_fs_folder' => 'setTempFsFolder',
        'use_binary_references' => 'setUseBinaryReferences',
        'auto_save_threshold' => 'setAutoSaveThreshold',
        'cleanup_delay' => 'setCleanupDelay',
        'file_threshold' => 'setFileThreshold',
        'mega_bytes' => 'setMegaBytes',
        'use_off_heap_memory' => 'setUseOffHeapMemory',
        'digest_algorithm' => 'setDigestAlgorithm',
        'monitoring_queue_size' => 'setMonitoringQueueSize',
        'paths_mapping' => 'setPathsMapping',
        'strict_import' => 'setStrictImport'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'name' => 'getName',
        'type' => 'getType',
        'import_mode' => 'getImportMode',
        'acl_handling' => 'getAclHandling',
        'package_roots' => 'getPackageRoots',
        'package_filters' => 'getPackageFilters',
        'property_filters' => 'getPropertyFilters',
        'temp_fs_folder' => 'getTempFsFolder',
        'use_binary_references' => 'getUseBinaryReferences',
        'auto_save_threshold' => 'getAutoSaveThreshold',
        'cleanup_delay' => 'getCleanupDelay',
        'file_threshold' => 'getFileThreshold',
        'mega_bytes' => 'getMegaBytes',
        'use_off_heap_memory' => 'getUseOffHeapMemory',
        'digest_algorithm' => 'getDigestAlgorithm',
        'monitoring_queue_size' => 'getMonitoringQueueSize',
        'paths_mapping' => 'getPathsMapping',
        'strict_import' => 'getStrictImport'
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
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['import_mode'] = isset($data['import_mode']) ? $data['import_mode'] : null;
        $this->container['acl_handling'] = isset($data['acl_handling']) ? $data['acl_handling'] : null;
        $this->container['package_roots'] = isset($data['package_roots']) ? $data['package_roots'] : null;
        $this->container['package_filters'] = isset($data['package_filters']) ? $data['package_filters'] : null;
        $this->container['property_filters'] = isset($data['property_filters']) ? $data['property_filters'] : null;
        $this->container['temp_fs_folder'] = isset($data['temp_fs_folder']) ? $data['temp_fs_folder'] : null;
        $this->container['use_binary_references'] = isset($data['use_binary_references']) ? $data['use_binary_references'] : null;
        $this->container['auto_save_threshold'] = isset($data['auto_save_threshold']) ? $data['auto_save_threshold'] : null;
        $this->container['cleanup_delay'] = isset($data['cleanup_delay']) ? $data['cleanup_delay'] : null;
        $this->container['file_threshold'] = isset($data['file_threshold']) ? $data['file_threshold'] : null;
        $this->container['mega_bytes'] = isset($data['mega_bytes']) ? $data['mega_bytes'] : null;
        $this->container['use_off_heap_memory'] = isset($data['use_off_heap_memory']) ? $data['use_off_heap_memory'] : null;
        $this->container['digest_algorithm'] = isset($data['digest_algorithm']) ? $data['digest_algorithm'] : null;
        $this->container['monitoring_queue_size'] = isset($data['monitoring_queue_size']) ? $data['monitoring_queue_size'] : null;
        $this->container['paths_mapping'] = isset($data['paths_mapping']) ? $data['paths_mapping'] : null;
        $this->container['strict_import'] = isset($data['strict_import']) ? $data['strict_import'] : null;
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
     * Gets name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $name name
     *
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets type
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $type type
     *
     * @return $this
     */
    public function setType($type)
    {
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets import_mode
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getImportMode()
    {
        return $this->container['import_mode'];
    }

    /**
     * Sets import_mode
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $import_mode import_mode
     *
     * @return $this
     */
    public function setImportMode($import_mode)
    {
        $this->container['import_mode'] = $import_mode;

        return $this;
    }

    /**
     * Gets acl_handling
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getAclHandling()
    {
        return $this->container['acl_handling'];
    }

    /**
     * Sets acl_handling
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $acl_handling acl_handling
     *
     * @return $this
     */
    public function setAclHandling($acl_handling)
    {
        $this->container['acl_handling'] = $acl_handling;

        return $this;
    }

    /**
     * Gets package_roots
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getPackageRoots()
    {
        return $this->container['package_roots'];
    }

    /**
     * Sets package_roots
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $package_roots package_roots
     *
     * @return $this
     */
    public function setPackageRoots($package_roots)
    {
        $this->container['package_roots'] = $package_roots;

        return $this;
    }

    /**
     * Gets package_filters
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getPackageFilters()
    {
        return $this->container['package_filters'];
    }

    /**
     * Sets package_filters
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $package_filters package_filters
     *
     * @return $this
     */
    public function setPackageFilters($package_filters)
    {
        $this->container['package_filters'] = $package_filters;

        return $this;
    }

    /**
     * Gets property_filters
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getPropertyFilters()
    {
        return $this->container['property_filters'];
    }

    /**
     * Sets property_filters
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $property_filters property_filters
     *
     * @return $this
     */
    public function setPropertyFilters($property_filters)
    {
        $this->container['property_filters'] = $property_filters;

        return $this;
    }

    /**
     * Gets temp_fs_folder
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getTempFsFolder()
    {
        return $this->container['temp_fs_folder'];
    }

    /**
     * Sets temp_fs_folder
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $temp_fs_folder temp_fs_folder
     *
     * @return $this
     */
    public function setTempFsFolder($temp_fs_folder)
    {
        $this->container['temp_fs_folder'] = $temp_fs_folder;

        return $this;
    }

    /**
     * Gets use_binary_references
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getUseBinaryReferences()
    {
        return $this->container['use_binary_references'];
    }

    /**
     * Sets use_binary_references
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $use_binary_references use_binary_references
     *
     * @return $this
     */
    public function setUseBinaryReferences($use_binary_references)
    {
        $this->container['use_binary_references'] = $use_binary_references;

        return $this;
    }

    /**
     * Gets auto_save_threshold
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getAutoSaveThreshold()
    {
        return $this->container['auto_save_threshold'];
    }

    /**
     * Sets auto_save_threshold
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $auto_save_threshold auto_save_threshold
     *
     * @return $this
     */
    public function setAutoSaveThreshold($auto_save_threshold)
    {
        $this->container['auto_save_threshold'] = $auto_save_threshold;

        return $this;
    }

    /**
     * Gets cleanup_delay
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getCleanupDelay()
    {
        return $this->container['cleanup_delay'];
    }

    /**
     * Sets cleanup_delay
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $cleanup_delay cleanup_delay
     *
     * @return $this
     */
    public function setCleanupDelay($cleanup_delay)
    {
        $this->container['cleanup_delay'] = $cleanup_delay;

        return $this;
    }

    /**
     * Gets file_threshold
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getFileThreshold()
    {
        return $this->container['file_threshold'];
    }

    /**
     * Sets file_threshold
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $file_threshold file_threshold
     *
     * @return $this
     */
    public function setFileThreshold($file_threshold)
    {
        $this->container['file_threshold'] = $file_threshold;

        return $this;
    }

    /**
     * Gets mega_bytes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getMegaBytes()
    {
        return $this->container['mega_bytes'];
    }

    /**
     * Sets mega_bytes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $mega_bytes mega_bytes
     *
     * @return $this
     */
    public function setMegaBytes($mega_bytes)
    {
        $this->container['mega_bytes'] = $mega_bytes;

        return $this;
    }

    /**
     * Gets use_off_heap_memory
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getUseOffHeapMemory()
    {
        return $this->container['use_off_heap_memory'];
    }

    /**
     * Sets use_off_heap_memory
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $use_off_heap_memory use_off_heap_memory
     *
     * @return $this
     */
    public function setUseOffHeapMemory($use_off_heap_memory)
    {
        $this->container['use_off_heap_memory'] = $use_off_heap_memory;

        return $this;
    }

    /**
     * Gets digest_algorithm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getDigestAlgorithm()
    {
        return $this->container['digest_algorithm'];
    }

    /**
     * Sets digest_algorithm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $digest_algorithm digest_algorithm
     *
     * @return $this
     */
    public function setDigestAlgorithm($digest_algorithm)
    {
        $this->container['digest_algorithm'] = $digest_algorithm;

        return $this;
    }

    /**
     * Gets monitoring_queue_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getMonitoringQueueSize()
    {
        return $this->container['monitoring_queue_size'];
    }

    /**
     * Sets monitoring_queue_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $monitoring_queue_size monitoring_queue_size
     *
     * @return $this
     */
    public function setMonitoringQueueSize($monitoring_queue_size)
    {
        $this->container['monitoring_queue_size'] = $monitoring_queue_size;

        return $this;
    }

    /**
     * Gets paths_mapping
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getPathsMapping()
    {
        return $this->container['paths_mapping'];
    }

    /**
     * Sets paths_mapping
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $paths_mapping paths_mapping
     *
     * @return $this
     */
    public function setPathsMapping($paths_mapping)
    {
        $this->container['paths_mapping'] = $paths_mapping;

        return $this;
    }

    /**
     * Gets strict_import
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getStrictImport()
    {
        return $this->container['strict_import'];
    }

    /**
     * Sets strict_import
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $strict_import strict_import
     *
     * @return $this
     */
    public function setStrictImport($strict_import)
    {
        $this->container['strict_import'] = $strict_import;

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

