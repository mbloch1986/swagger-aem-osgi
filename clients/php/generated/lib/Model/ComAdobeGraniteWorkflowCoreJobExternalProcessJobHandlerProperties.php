<?php
/**
 * ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties
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
 * ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'default_timeout' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'max_timeout' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'default_period' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'default_timeout' => null,
        'max_timeout' => null,
        'default_period' => null
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
        'default_timeout' => 'default.timeout',
        'max_timeout' => 'max.timeout',
        'default_period' => 'default.period'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'default_timeout' => 'setDefaultTimeout',
        'max_timeout' => 'setMaxTimeout',
        'default_period' => 'setDefaultPeriod'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'default_timeout' => 'getDefaultTimeout',
        'max_timeout' => 'getMaxTimeout',
        'default_period' => 'getDefaultPeriod'
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
        $this->container['default_timeout'] = isset($data['default_timeout']) ? $data['default_timeout'] : null;
        $this->container['max_timeout'] = isset($data['max_timeout']) ? $data['max_timeout'] : null;
        $this->container['default_period'] = isset($data['default_period']) ? $data['default_period'] : null;
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
     * Gets default_timeout
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getDefaultTimeout()
    {
        return $this->container['default_timeout'];
    }

    /**
     * Sets default_timeout
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $default_timeout default_timeout
     *
     * @return $this
     */
    public function setDefaultTimeout($default_timeout)
    {
        $this->container['default_timeout'] = $default_timeout;

        return $this;
    }

    /**
     * Gets max_timeout
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getMaxTimeout()
    {
        return $this->container['max_timeout'];
    }

    /**
     * Sets max_timeout
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $max_timeout max_timeout
     *
     * @return $this
     */
    public function setMaxTimeout($max_timeout)
    {
        $this->container['max_timeout'] = $max_timeout;

        return $this;
    }

    /**
     * Gets default_period
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getDefaultPeriod()
    {
        return $this->container['default_period'];
    }

    /**
     * Sets default_period
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $default_period default_period
     *
     * @return $this
     */
    public function setDefaultPeriod($default_period)
    {
        $this->container['default_period'] = $default_period;

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


