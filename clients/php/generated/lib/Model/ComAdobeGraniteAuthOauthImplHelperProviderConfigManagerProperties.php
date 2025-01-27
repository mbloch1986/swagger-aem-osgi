<?php
/**
 * ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties
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
 * ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'oauth_cookie_login_timeout' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'oauth_cookie_max_age' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'oauth_cookie_login_timeout' => null,
        'oauth_cookie_max_age' => null
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
        'oauth_cookie_login_timeout' => 'oauth.cookie.login.timeout',
        'oauth_cookie_max_age' => 'oauth.cookie.max.age'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'oauth_cookie_login_timeout' => 'setOauthCookieLoginTimeout',
        'oauth_cookie_max_age' => 'setOauthCookieMaxAge'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'oauth_cookie_login_timeout' => 'getOauthCookieLoginTimeout',
        'oauth_cookie_max_age' => 'getOauthCookieMaxAge'
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
        $this->container['oauth_cookie_login_timeout'] = isset($data['oauth_cookie_login_timeout']) ? $data['oauth_cookie_login_timeout'] : null;
        $this->container['oauth_cookie_max_age'] = isset($data['oauth_cookie_max_age']) ? $data['oauth_cookie_max_age'] : null;
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
     * Gets oauth_cookie_login_timeout
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOauthCookieLoginTimeout()
    {
        return $this->container['oauth_cookie_login_timeout'];
    }

    /**
     * Sets oauth_cookie_login_timeout
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $oauth_cookie_login_timeout oauth_cookie_login_timeout
     *
     * @return $this
     */
    public function setOauthCookieLoginTimeout($oauth_cookie_login_timeout)
    {
        $this->container['oauth_cookie_login_timeout'] = $oauth_cookie_login_timeout;

        return $this;
    }

    /**
     * Gets oauth_cookie_max_age
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOauthCookieMaxAge()
    {
        return $this->container['oauth_cookie_max_age'];
    }

    /**
     * Sets oauth_cookie_max_age
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $oauth_cookie_max_age oauth_cookie_max_age
     *
     * @return $this
     */
    public function setOauthCookieMaxAge($oauth_cookie_max_age)
    {
        $this->container['oauth_cookie_max_age'] = $oauth_cookie_max_age;

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


