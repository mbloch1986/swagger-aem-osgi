<?php
/**
 * OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
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
 * OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'org_apache_jackrabbit_oak_authentication_app_name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'org_apache_jackrabbit_oak_authentication_config_spi_name' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'org_apache_jackrabbit_oak_authentication_app_name' => null,
        'org_apache_jackrabbit_oak_authentication_config_spi_name' => null
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
        'org_apache_jackrabbit_oak_authentication_app_name' => 'org.apache.jackrabbit.oak.authentication.appName',
        'org_apache_jackrabbit_oak_authentication_config_spi_name' => 'org.apache.jackrabbit.oak.authentication.configSpiName'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'org_apache_jackrabbit_oak_authentication_app_name' => 'setOrgApacheJackrabbitOakAuthenticationAppName',
        'org_apache_jackrabbit_oak_authentication_config_spi_name' => 'setOrgApacheJackrabbitOakAuthenticationConfigSpiName'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'org_apache_jackrabbit_oak_authentication_app_name' => 'getOrgApacheJackrabbitOakAuthenticationAppName',
        'org_apache_jackrabbit_oak_authentication_config_spi_name' => 'getOrgApacheJackrabbitOakAuthenticationConfigSpiName'
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
        $this->container['org_apache_jackrabbit_oak_authentication_app_name'] = isset($data['org_apache_jackrabbit_oak_authentication_app_name']) ? $data['org_apache_jackrabbit_oak_authentication_app_name'] : null;
        $this->container['org_apache_jackrabbit_oak_authentication_config_spi_name'] = isset($data['org_apache_jackrabbit_oak_authentication_config_spi_name']) ? $data['org_apache_jackrabbit_oak_authentication_config_spi_name'] : null;
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
     * Gets org_apache_jackrabbit_oak_authentication_app_name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOrgApacheJackrabbitOakAuthenticationAppName()
    {
        return $this->container['org_apache_jackrabbit_oak_authentication_app_name'];
    }

    /**
     * Sets org_apache_jackrabbit_oak_authentication_app_name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $org_apache_jackrabbit_oak_authentication_app_name org_apache_jackrabbit_oak_authentication_app_name
     *
     * @return $this
     */
    public function setOrgApacheJackrabbitOakAuthenticationAppName($org_apache_jackrabbit_oak_authentication_app_name)
    {
        $this->container['org_apache_jackrabbit_oak_authentication_app_name'] = $org_apache_jackrabbit_oak_authentication_app_name;

        return $this;
    }

    /**
     * Gets org_apache_jackrabbit_oak_authentication_config_spi_name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOrgApacheJackrabbitOakAuthenticationConfigSpiName()
    {
        return $this->container['org_apache_jackrabbit_oak_authentication_config_spi_name'];
    }

    /**
     * Sets org_apache_jackrabbit_oak_authentication_config_spi_name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $org_apache_jackrabbit_oak_authentication_config_spi_name org_apache_jackrabbit_oak_authentication_config_spi_name
     *
     * @return $this
     */
    public function setOrgApacheJackrabbitOakAuthenticationConfigSpiName($org_apache_jackrabbit_oak_authentication_config_spi_name)
    {
        $this->container['org_apache_jackrabbit_oak_authentication_config_spi_name'] = $org_apache_jackrabbit_oak_authentication_config_spi_name;

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


