<?php
/**
 * ComDayCqWcmCoreImplVersionPurgeTaskProperties
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
 * ComDayCqWcmCoreImplVersionPurgeTaskProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqWcmCoreImplVersionPurgeTaskProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqWcmCoreImplVersionPurgeTaskProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'versionpurge_paths' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'versionpurge_recursive' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'versionpurge_max_versions' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'versionpurge_min_versions' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'versionpurge_max_age_days' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'versionpurge_paths' => null,
        'versionpurge_recursive' => null,
        'versionpurge_max_versions' => null,
        'versionpurge_min_versions' => null,
        'versionpurge_max_age_days' => null
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
        'versionpurge_paths' => 'versionpurge.paths',
        'versionpurge_recursive' => 'versionpurge.recursive',
        'versionpurge_max_versions' => 'versionpurge.maxVersions',
        'versionpurge_min_versions' => 'versionpurge.minVersions',
        'versionpurge_max_age_days' => 'versionpurge.maxAgeDays'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'versionpurge_paths' => 'setVersionpurgePaths',
        'versionpurge_recursive' => 'setVersionpurgeRecursive',
        'versionpurge_max_versions' => 'setVersionpurgeMaxVersions',
        'versionpurge_min_versions' => 'setVersionpurgeMinVersions',
        'versionpurge_max_age_days' => 'setVersionpurgeMaxAgeDays'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'versionpurge_paths' => 'getVersionpurgePaths',
        'versionpurge_recursive' => 'getVersionpurgeRecursive',
        'versionpurge_max_versions' => 'getVersionpurgeMaxVersions',
        'versionpurge_min_versions' => 'getVersionpurgeMinVersions',
        'versionpurge_max_age_days' => 'getVersionpurgeMaxAgeDays'
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
        $this->container['versionpurge_paths'] = isset($data['versionpurge_paths']) ? $data['versionpurge_paths'] : null;
        $this->container['versionpurge_recursive'] = isset($data['versionpurge_recursive']) ? $data['versionpurge_recursive'] : null;
        $this->container['versionpurge_max_versions'] = isset($data['versionpurge_max_versions']) ? $data['versionpurge_max_versions'] : null;
        $this->container['versionpurge_min_versions'] = isset($data['versionpurge_min_versions']) ? $data['versionpurge_min_versions'] : null;
        $this->container['versionpurge_max_age_days'] = isset($data['versionpurge_max_age_days']) ? $data['versionpurge_max_age_days'] : null;
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
     * Gets versionpurge_paths
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getVersionpurgePaths()
    {
        return $this->container['versionpurge_paths'];
    }

    /**
     * Sets versionpurge_paths
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $versionpurge_paths versionpurge_paths
     *
     * @return $this
     */
    public function setVersionpurgePaths($versionpurge_paths)
    {
        $this->container['versionpurge_paths'] = $versionpurge_paths;

        return $this;
    }

    /**
     * Gets versionpurge_recursive
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getVersionpurgeRecursive()
    {
        return $this->container['versionpurge_recursive'];
    }

    /**
     * Sets versionpurge_recursive
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $versionpurge_recursive versionpurge_recursive
     *
     * @return $this
     */
    public function setVersionpurgeRecursive($versionpurge_recursive)
    {
        $this->container['versionpurge_recursive'] = $versionpurge_recursive;

        return $this;
    }

    /**
     * Gets versionpurge_max_versions
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getVersionpurgeMaxVersions()
    {
        return $this->container['versionpurge_max_versions'];
    }

    /**
     * Sets versionpurge_max_versions
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $versionpurge_max_versions versionpurge_max_versions
     *
     * @return $this
     */
    public function setVersionpurgeMaxVersions($versionpurge_max_versions)
    {
        $this->container['versionpurge_max_versions'] = $versionpurge_max_versions;

        return $this;
    }

    /**
     * Gets versionpurge_min_versions
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getVersionpurgeMinVersions()
    {
        return $this->container['versionpurge_min_versions'];
    }

    /**
     * Sets versionpurge_min_versions
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $versionpurge_min_versions versionpurge_min_versions
     *
     * @return $this
     */
    public function setVersionpurgeMinVersions($versionpurge_min_versions)
    {
        $this->container['versionpurge_min_versions'] = $versionpurge_min_versions;

        return $this;
    }

    /**
     * Gets versionpurge_max_age_days
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getVersionpurgeMaxAgeDays()
    {
        return $this->container['versionpurge_max_age_days'];
    }

    /**
     * Sets versionpurge_max_age_days
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $versionpurge_max_age_days versionpurge_max_age_days
     *
     * @return $this
     */
    public function setVersionpurgeMaxAgeDays($versionpurge_max_age_days)
    {
        $this->container['versionpurge_max_age_days'] = $versionpurge_max_age_days;

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

