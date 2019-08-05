<?php
/**
 * OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties
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
 * OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'path' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'ignored_paths_patterns' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'service_name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'deep' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'name' => null,
        'path' => null,
        'ignored_paths_patterns' => null,
        'service_name' => null,
        'deep' => null
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
        'path' => 'path',
        'ignored_paths_patterns' => 'ignoredPathsPatterns',
        'service_name' => 'serviceName',
        'deep' => 'deep'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'name' => 'setName',
        'path' => 'setPath',
        'ignored_paths_patterns' => 'setIgnoredPathsPatterns',
        'service_name' => 'setServiceName',
        'deep' => 'setDeep'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'name' => 'getName',
        'path' => 'getPath',
        'ignored_paths_patterns' => 'getIgnoredPathsPatterns',
        'service_name' => 'getServiceName',
        'deep' => 'getDeep'
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
        $this->container['path'] = isset($data['path']) ? $data['path'] : null;
        $this->container['ignored_paths_patterns'] = isset($data['ignored_paths_patterns']) ? $data['ignored_paths_patterns'] : null;
        $this->container['service_name'] = isset($data['service_name']) ? $data['service_name'] : null;
        $this->container['deep'] = isset($data['deep']) ? $data['deep'] : null;
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
     * Gets path
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getPath()
    {
        return $this->container['path'];
    }

    /**
     * Sets path
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $path path
     *
     * @return $this
     */
    public function setPath($path)
    {
        $this->container['path'] = $path;

        return $this;
    }

    /**
     * Gets ignored_paths_patterns
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getIgnoredPathsPatterns()
    {
        return $this->container['ignored_paths_patterns'];
    }

    /**
     * Sets ignored_paths_patterns
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $ignored_paths_patterns ignored_paths_patterns
     *
     * @return $this
     */
    public function setIgnoredPathsPatterns($ignored_paths_patterns)
    {
        $this->container['ignored_paths_patterns'] = $ignored_paths_patterns;

        return $this;
    }

    /**
     * Gets service_name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getServiceName()
    {
        return $this->container['service_name'];
    }

    /**
     * Sets service_name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $service_name service_name
     *
     * @return $this
     */
    public function setServiceName($service_name)
    {
        $this->container['service_name'] = $service_name;

        return $this;
    }

    /**
     * Gets deep
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDeep()
    {
        return $this->container['deep'];
    }

    /**
     * Sets deep
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $deep deep
     *
     * @return $this
     */
    public function setDeep($deep)
    {
        $this->container['deep'] = $deep;

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

