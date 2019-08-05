<?php
/**
 * ComDayCqDamCoreImplServletMetadataGetServletProperties
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
 * ComDayCqDamCoreImplServletMetadataGetServletProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqDamCoreImplServletMetadataGetServletProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqDamCoreImplServletMetadataGetServletProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'sling_servlet_resource_types' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'sling_servlet_methods' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'sling_servlet_extensions' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'sling_servlet_selectors' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'sling_servlet_resource_types' => null,
        'sling_servlet_methods' => null,
        'sling_servlet_extensions' => null,
        'sling_servlet_selectors' => null
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
        'sling_servlet_resource_types' => 'sling.servlet.resourceTypes',
        'sling_servlet_methods' => 'sling.servlet.methods',
        'sling_servlet_extensions' => 'sling.servlet.extensions',
        'sling_servlet_selectors' => 'sling.servlet.selectors'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'sling_servlet_resource_types' => 'setSlingServletResourceTypes',
        'sling_servlet_methods' => 'setSlingServletMethods',
        'sling_servlet_extensions' => 'setSlingServletExtensions',
        'sling_servlet_selectors' => 'setSlingServletSelectors'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'sling_servlet_resource_types' => 'getSlingServletResourceTypes',
        'sling_servlet_methods' => 'getSlingServletMethods',
        'sling_servlet_extensions' => 'getSlingServletExtensions',
        'sling_servlet_selectors' => 'getSlingServletSelectors'
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
        $this->container['sling_servlet_resource_types'] = isset($data['sling_servlet_resource_types']) ? $data['sling_servlet_resource_types'] : null;
        $this->container['sling_servlet_methods'] = isset($data['sling_servlet_methods']) ? $data['sling_servlet_methods'] : null;
        $this->container['sling_servlet_extensions'] = isset($data['sling_servlet_extensions']) ? $data['sling_servlet_extensions'] : null;
        $this->container['sling_servlet_selectors'] = isset($data['sling_servlet_selectors']) ? $data['sling_servlet_selectors'] : null;
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
     * Gets sling_servlet_resource_types
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSlingServletResourceTypes()
    {
        return $this->container['sling_servlet_resource_types'];
    }

    /**
     * Sets sling_servlet_resource_types
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sling_servlet_resource_types sling_servlet_resource_types
     *
     * @return $this
     */
    public function setSlingServletResourceTypes($sling_servlet_resource_types)
    {
        $this->container['sling_servlet_resource_types'] = $sling_servlet_resource_types;

        return $this;
    }

    /**
     * Gets sling_servlet_methods
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSlingServletMethods()
    {
        return $this->container['sling_servlet_methods'];
    }

    /**
     * Sets sling_servlet_methods
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sling_servlet_methods sling_servlet_methods
     *
     * @return $this
     */
    public function setSlingServletMethods($sling_servlet_methods)
    {
        $this->container['sling_servlet_methods'] = $sling_servlet_methods;

        return $this;
    }

    /**
     * Gets sling_servlet_extensions
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSlingServletExtensions()
    {
        return $this->container['sling_servlet_extensions'];
    }

    /**
     * Sets sling_servlet_extensions
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sling_servlet_extensions sling_servlet_extensions
     *
     * @return $this
     */
    public function setSlingServletExtensions($sling_servlet_extensions)
    {
        $this->container['sling_servlet_extensions'] = $sling_servlet_extensions;

        return $this;
    }

    /**
     * Gets sling_servlet_selectors
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSlingServletSelectors()
    {
        return $this->container['sling_servlet_selectors'];
    }

    /**
     * Sets sling_servlet_selectors
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sling_servlet_selectors sling_servlet_selectors
     *
     * @return $this
     */
    public function setSlingServletSelectors($sling_servlet_selectors)
    {
        $this->container['sling_servlet_selectors'] = $sling_servlet_selectors;

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

