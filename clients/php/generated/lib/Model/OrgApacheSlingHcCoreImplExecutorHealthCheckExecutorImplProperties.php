<?php
/**
 * OrgApacheSlingHcCoreImplExecutorHealthCheckExecutorImplProperties
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
 * OrgApacheSlingHcCoreImplExecutorHealthCheckExecutorImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingHcCoreImplExecutorHealthCheckExecutorImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingHcCoreImplExecutorHealthCheckExecutorImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'timeout_in_ms' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'long_running_future_threshold_for_critical_ms' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'result_cache_ttl_in_ms' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'timeout_in_ms' => null,
        'long_running_future_threshold_for_critical_ms' => null,
        'result_cache_ttl_in_ms' => null
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
        'timeout_in_ms' => 'timeoutInMs',
        'long_running_future_threshold_for_critical_ms' => 'longRunningFutureThresholdForCriticalMs',
        'result_cache_ttl_in_ms' => 'resultCacheTtlInMs'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'timeout_in_ms' => 'setTimeoutInMs',
        'long_running_future_threshold_for_critical_ms' => 'setLongRunningFutureThresholdForCriticalMs',
        'result_cache_ttl_in_ms' => 'setResultCacheTtlInMs'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'timeout_in_ms' => 'getTimeoutInMs',
        'long_running_future_threshold_for_critical_ms' => 'getLongRunningFutureThresholdForCriticalMs',
        'result_cache_ttl_in_ms' => 'getResultCacheTtlInMs'
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
        $this->container['timeout_in_ms'] = isset($data['timeout_in_ms']) ? $data['timeout_in_ms'] : null;
        $this->container['long_running_future_threshold_for_critical_ms'] = isset($data['long_running_future_threshold_for_critical_ms']) ? $data['long_running_future_threshold_for_critical_ms'] : null;
        $this->container['result_cache_ttl_in_ms'] = isset($data['result_cache_ttl_in_ms']) ? $data['result_cache_ttl_in_ms'] : null;
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
     * Gets timeout_in_ms
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getTimeoutInMs()
    {
        return $this->container['timeout_in_ms'];
    }

    /**
     * Sets timeout_in_ms
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $timeout_in_ms timeout_in_ms
     *
     * @return $this
     */
    public function setTimeoutInMs($timeout_in_ms)
    {
        $this->container['timeout_in_ms'] = $timeout_in_ms;

        return $this;
    }

    /**
     * Gets long_running_future_threshold_for_critical_ms
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getLongRunningFutureThresholdForCriticalMs()
    {
        return $this->container['long_running_future_threshold_for_critical_ms'];
    }

    /**
     * Sets long_running_future_threshold_for_critical_ms
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $long_running_future_threshold_for_critical_ms long_running_future_threshold_for_critical_ms
     *
     * @return $this
     */
    public function setLongRunningFutureThresholdForCriticalMs($long_running_future_threshold_for_critical_ms)
    {
        $this->container['long_running_future_threshold_for_critical_ms'] = $long_running_future_threshold_for_critical_ms;

        return $this;
    }

    /**
     * Gets result_cache_ttl_in_ms
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getResultCacheTtlInMs()
    {
        return $this->container['result_cache_ttl_in_ms'];
    }

    /**
     * Sets result_cache_ttl_in_ms
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $result_cache_ttl_in_ms result_cache_ttl_in_ms
     *
     * @return $this
     */
    public function setResultCacheTtlInMs($result_cache_ttl_in_ms)
    {
        $this->container['result_cache_ttl_in_ms'] = $result_cache_ttl_in_ms;

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


