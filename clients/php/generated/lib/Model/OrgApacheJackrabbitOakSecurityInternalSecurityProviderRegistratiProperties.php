<?php
/**
 * OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties
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
 * OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'required_service_pids' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'authorization_composition_type' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'required_service_pids' => null,
        'authorization_composition_type' => null
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
        'required_service_pids' => 'requiredServicePids',
        'authorization_composition_type' => 'authorizationCompositionType'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'required_service_pids' => 'setRequiredServicePids',
        'authorization_composition_type' => 'setAuthorizationCompositionType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'required_service_pids' => 'getRequiredServicePids',
        'authorization_composition_type' => 'getAuthorizationCompositionType'
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
        $this->container['required_service_pids'] = isset($data['required_service_pids']) ? $data['required_service_pids'] : null;
        $this->container['authorization_composition_type'] = isset($data['authorization_composition_type']) ? $data['authorization_composition_type'] : null;
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
     * Gets required_service_pids
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getRequiredServicePids()
    {
        return $this->container['required_service_pids'];
    }

    /**
     * Sets required_service_pids
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $required_service_pids required_service_pids
     *
     * @return $this
     */
    public function setRequiredServicePids($required_service_pids)
    {
        $this->container['required_service_pids'] = $required_service_pids;

        return $this;
    }

    /**
     * Gets authorization_composition_type
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getAuthorizationCompositionType()
    {
        return $this->container['authorization_composition_type'];
    }

    /**
     * Sets authorization_composition_type
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $authorization_composition_type authorization_composition_type
     *
     * @return $this
     */
    public function setAuthorizationCompositionType($authorization_composition_type)
    {
        $this->container['authorization_composition_type'] = $authorization_composition_type;

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


