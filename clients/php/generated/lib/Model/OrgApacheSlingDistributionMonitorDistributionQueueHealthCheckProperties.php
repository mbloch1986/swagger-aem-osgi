<?php
/**
 * OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties
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
 * OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'hc_name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'hc_tags' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'hc_mbean_name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'number_of_retries_allowed' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'hc_name' => null,
        'hc_tags' => null,
        'hc_mbean_name' => null,
        'number_of_retries_allowed' => null
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
        'hc_name' => 'hc.name',
        'hc_tags' => 'hc.tags',
        'hc_mbean_name' => 'hc.mbean.name',
        'number_of_retries_allowed' => 'numberOfRetriesAllowed'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'hc_name' => 'setHcName',
        'hc_tags' => 'setHcTags',
        'hc_mbean_name' => 'setHcMbeanName',
        'number_of_retries_allowed' => 'setNumberOfRetriesAllowed'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'hc_name' => 'getHcName',
        'hc_tags' => 'getHcTags',
        'hc_mbean_name' => 'getHcMbeanName',
        'number_of_retries_allowed' => 'getNumberOfRetriesAllowed'
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
        $this->container['hc_name'] = isset($data['hc_name']) ? $data['hc_name'] : null;
        $this->container['hc_tags'] = isset($data['hc_tags']) ? $data['hc_tags'] : null;
        $this->container['hc_mbean_name'] = isset($data['hc_mbean_name']) ? $data['hc_mbean_name'] : null;
        $this->container['number_of_retries_allowed'] = isset($data['number_of_retries_allowed']) ? $data['number_of_retries_allowed'] : null;
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
     * Gets hc_name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getHcName()
    {
        return $this->container['hc_name'];
    }

    /**
     * Sets hc_name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $hc_name hc_name
     *
     * @return $this
     */
    public function setHcName($hc_name)
    {
        $this->container['hc_name'] = $hc_name;

        return $this;
    }

    /**
     * Gets hc_tags
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getHcTags()
    {
        return $this->container['hc_tags'];
    }

    /**
     * Sets hc_tags
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $hc_tags hc_tags
     *
     * @return $this
     */
    public function setHcTags($hc_tags)
    {
        $this->container['hc_tags'] = $hc_tags;

        return $this;
    }

    /**
     * Gets hc_mbean_name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getHcMbeanName()
    {
        return $this->container['hc_mbean_name'];
    }

    /**
     * Sets hc_mbean_name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $hc_mbean_name hc_mbean_name
     *
     * @return $this
     */
    public function setHcMbeanName($hc_mbean_name)
    {
        $this->container['hc_mbean_name'] = $hc_mbean_name;

        return $this;
    }

    /**
     * Gets number_of_retries_allowed
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getNumberOfRetriesAllowed()
    {
        return $this->container['number_of_retries_allowed'];
    }

    /**
     * Sets number_of_retries_allowed
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $number_of_retries_allowed number_of_retries_allowed
     *
     * @return $this
     */
    public function setNumberOfRetriesAllowed($number_of_retries_allowed)
    {
        $this->container['number_of_retries_allowed'] = $number_of_retries_allowed;

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


