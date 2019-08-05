<?php
/**
 * OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties
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
 * OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'query_limit_in_memory' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'query_limit_reads' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'query_fail_traversal' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'fast_query_size' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'query_limit_in_memory' => null,
        'query_limit_reads' => null,
        'query_fail_traversal' => null,
        'fast_query_size' => null
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
        'query_limit_in_memory' => 'queryLimitInMemory',
        'query_limit_reads' => 'queryLimitReads',
        'query_fail_traversal' => 'queryFailTraversal',
        'fast_query_size' => 'fastQuerySize'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'query_limit_in_memory' => 'setQueryLimitInMemory',
        'query_limit_reads' => 'setQueryLimitReads',
        'query_fail_traversal' => 'setQueryFailTraversal',
        'fast_query_size' => 'setFastQuerySize'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'query_limit_in_memory' => 'getQueryLimitInMemory',
        'query_limit_reads' => 'getQueryLimitReads',
        'query_fail_traversal' => 'getQueryFailTraversal',
        'fast_query_size' => 'getFastQuerySize'
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
        $this->container['query_limit_in_memory'] = isset($data['query_limit_in_memory']) ? $data['query_limit_in_memory'] : null;
        $this->container['query_limit_reads'] = isset($data['query_limit_reads']) ? $data['query_limit_reads'] : null;
        $this->container['query_fail_traversal'] = isset($data['query_fail_traversal']) ? $data['query_fail_traversal'] : null;
        $this->container['fast_query_size'] = isset($data['fast_query_size']) ? $data['fast_query_size'] : null;
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
     * Gets query_limit_in_memory
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getQueryLimitInMemory()
    {
        return $this->container['query_limit_in_memory'];
    }

    /**
     * Sets query_limit_in_memory
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $query_limit_in_memory query_limit_in_memory
     *
     * @return $this
     */
    public function setQueryLimitInMemory($query_limit_in_memory)
    {
        $this->container['query_limit_in_memory'] = $query_limit_in_memory;

        return $this;
    }

    /**
     * Gets query_limit_reads
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getQueryLimitReads()
    {
        return $this->container['query_limit_reads'];
    }

    /**
     * Sets query_limit_reads
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $query_limit_reads query_limit_reads
     *
     * @return $this
     */
    public function setQueryLimitReads($query_limit_reads)
    {
        $this->container['query_limit_reads'] = $query_limit_reads;

        return $this;
    }

    /**
     * Gets query_fail_traversal
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getQueryFailTraversal()
    {
        return $this->container['query_fail_traversal'];
    }

    /**
     * Sets query_fail_traversal
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $query_fail_traversal query_fail_traversal
     *
     * @return $this
     */
    public function setQueryFailTraversal($query_fail_traversal)
    {
        $this->container['query_fail_traversal'] = $query_fail_traversal;

        return $this;
    }

    /**
     * Gets fast_query_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getFastQuerySize()
    {
        return $this->container['fast_query_size'];
    }

    /**
     * Sets fast_query_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $fast_query_size fast_query_size
     *
     * @return $this
     */
    public function setFastQuerySize($fast_query_size)
    {
        $this->container['fast_query_size'] = $fast_query_size;

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

