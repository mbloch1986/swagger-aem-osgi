<?php
/**
 * ComAdobeCqDeserfwImplDeserializationFirewallImplProperties
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
 * ComAdobeCqDeserfwImplDeserializationFirewallImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeCqDeserfwImplDeserializationFirewallImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeCqDeserfwImplDeserializationFirewallImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'firewall_deserialization_whitelist' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'firewall_deserialization_blacklist' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'firewall_deserialization_diagnostics' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'firewall_deserialization_whitelist' => null,
        'firewall_deserialization_blacklist' => null,
        'firewall_deserialization_diagnostics' => null
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
        'firewall_deserialization_whitelist' => 'firewall.deserialization.whitelist',
        'firewall_deserialization_blacklist' => 'firewall.deserialization.blacklist',
        'firewall_deserialization_diagnostics' => 'firewall.deserialization.diagnostics'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'firewall_deserialization_whitelist' => 'setFirewallDeserializationWhitelist',
        'firewall_deserialization_blacklist' => 'setFirewallDeserializationBlacklist',
        'firewall_deserialization_diagnostics' => 'setFirewallDeserializationDiagnostics'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'firewall_deserialization_whitelist' => 'getFirewallDeserializationWhitelist',
        'firewall_deserialization_blacklist' => 'getFirewallDeserializationBlacklist',
        'firewall_deserialization_diagnostics' => 'getFirewallDeserializationDiagnostics'
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
        $this->container['firewall_deserialization_whitelist'] = isset($data['firewall_deserialization_whitelist']) ? $data['firewall_deserialization_whitelist'] : null;
        $this->container['firewall_deserialization_blacklist'] = isset($data['firewall_deserialization_blacklist']) ? $data['firewall_deserialization_blacklist'] : null;
        $this->container['firewall_deserialization_diagnostics'] = isset($data['firewall_deserialization_diagnostics']) ? $data['firewall_deserialization_diagnostics'] : null;
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
     * Gets firewall_deserialization_whitelist
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getFirewallDeserializationWhitelist()
    {
        return $this->container['firewall_deserialization_whitelist'];
    }

    /**
     * Sets firewall_deserialization_whitelist
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $firewall_deserialization_whitelist firewall_deserialization_whitelist
     *
     * @return $this
     */
    public function setFirewallDeserializationWhitelist($firewall_deserialization_whitelist)
    {
        $this->container['firewall_deserialization_whitelist'] = $firewall_deserialization_whitelist;

        return $this;
    }

    /**
     * Gets firewall_deserialization_blacklist
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getFirewallDeserializationBlacklist()
    {
        return $this->container['firewall_deserialization_blacklist'];
    }

    /**
     * Sets firewall_deserialization_blacklist
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $firewall_deserialization_blacklist firewall_deserialization_blacklist
     *
     * @return $this
     */
    public function setFirewallDeserializationBlacklist($firewall_deserialization_blacklist)
    {
        $this->container['firewall_deserialization_blacklist'] = $firewall_deserialization_blacklist;

        return $this;
    }

    /**
     * Gets firewall_deserialization_diagnostics
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getFirewallDeserializationDiagnostics()
    {
        return $this->container['firewall_deserialization_diagnostics'];
    }

    /**
     * Sets firewall_deserialization_diagnostics
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $firewall_deserialization_diagnostics firewall_deserialization_diagnostics
     *
     * @return $this
     */
    public function setFirewallDeserializationDiagnostics($firewall_deserialization_diagnostics)
    {
        $this->container['firewall_deserialization_diagnostics'] = $firewall_deserialization_diagnostics;

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


