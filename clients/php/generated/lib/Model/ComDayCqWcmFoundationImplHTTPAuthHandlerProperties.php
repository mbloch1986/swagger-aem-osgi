<?php
/**
 * ComDayCqWcmFoundationImplHTTPAuthHandlerProperties
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
 * ComDayCqWcmFoundationImplHTTPAuthHandlerProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqWcmFoundationImplHTTPAuthHandlerProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqWcmFoundationImplHTTPAuthHandlerProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'path' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'auth_http_nologin' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'auth_http_realm' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'auth_default_loginpage' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'auth_cred_form' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'auth_cred_utf8' => '\OpenAPI\Client\Model\ConfigNodePropertyArray'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'path' => null,
        'auth_http_nologin' => null,
        'auth_http_realm' => null,
        'auth_default_loginpage' => null,
        'auth_cred_form' => null,
        'auth_cred_utf8' => null
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
        'path' => 'path',
        'auth_http_nologin' => 'auth.http.nologin',
        'auth_http_realm' => 'auth.http.realm',
        'auth_default_loginpage' => 'auth.default.loginpage',
        'auth_cred_form' => 'auth.cred.form',
        'auth_cred_utf8' => 'auth.cred.utf8'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'path' => 'setPath',
        'auth_http_nologin' => 'setAuthHttpNologin',
        'auth_http_realm' => 'setAuthHttpRealm',
        'auth_default_loginpage' => 'setAuthDefaultLoginpage',
        'auth_cred_form' => 'setAuthCredForm',
        'auth_cred_utf8' => 'setAuthCredUtf8'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'path' => 'getPath',
        'auth_http_nologin' => 'getAuthHttpNologin',
        'auth_http_realm' => 'getAuthHttpRealm',
        'auth_default_loginpage' => 'getAuthDefaultLoginpage',
        'auth_cred_form' => 'getAuthCredForm',
        'auth_cred_utf8' => 'getAuthCredUtf8'
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
        $this->container['path'] = isset($data['path']) ? $data['path'] : null;
        $this->container['auth_http_nologin'] = isset($data['auth_http_nologin']) ? $data['auth_http_nologin'] : null;
        $this->container['auth_http_realm'] = isset($data['auth_http_realm']) ? $data['auth_http_realm'] : null;
        $this->container['auth_default_loginpage'] = isset($data['auth_default_loginpage']) ? $data['auth_default_loginpage'] : null;
        $this->container['auth_cred_form'] = isset($data['auth_cred_form']) ? $data['auth_cred_form'] : null;
        $this->container['auth_cred_utf8'] = isset($data['auth_cred_utf8']) ? $data['auth_cred_utf8'] : null;
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
     * Gets auth_http_nologin
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getAuthHttpNologin()
    {
        return $this->container['auth_http_nologin'];
    }

    /**
     * Sets auth_http_nologin
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $auth_http_nologin auth_http_nologin
     *
     * @return $this
     */
    public function setAuthHttpNologin($auth_http_nologin)
    {
        $this->container['auth_http_nologin'] = $auth_http_nologin;

        return $this;
    }

    /**
     * Gets auth_http_realm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getAuthHttpRealm()
    {
        return $this->container['auth_http_realm'];
    }

    /**
     * Sets auth_http_realm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $auth_http_realm auth_http_realm
     *
     * @return $this
     */
    public function setAuthHttpRealm($auth_http_realm)
    {
        $this->container['auth_http_realm'] = $auth_http_realm;

        return $this;
    }

    /**
     * Gets auth_default_loginpage
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getAuthDefaultLoginpage()
    {
        return $this->container['auth_default_loginpage'];
    }

    /**
     * Sets auth_default_loginpage
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $auth_default_loginpage auth_default_loginpage
     *
     * @return $this
     */
    public function setAuthDefaultLoginpage($auth_default_loginpage)
    {
        $this->container['auth_default_loginpage'] = $auth_default_loginpage;

        return $this;
    }

    /**
     * Gets auth_cred_form
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getAuthCredForm()
    {
        return $this->container['auth_cred_form'];
    }

    /**
     * Sets auth_cred_form
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $auth_cred_form auth_cred_form
     *
     * @return $this
     */
    public function setAuthCredForm($auth_cred_form)
    {
        $this->container['auth_cred_form'] = $auth_cred_form;

        return $this;
    }

    /**
     * Gets auth_cred_utf8
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getAuthCredUtf8()
    {
        return $this->container['auth_cred_utf8'];
    }

    /**
     * Sets auth_cred_utf8
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $auth_cred_utf8 auth_cred_utf8
     *
     * @return $this
     */
    public function setAuthCredUtf8($auth_cred_utf8)
    {
        $this->container['auth_cred_utf8'] = $auth_cred_utf8;

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


