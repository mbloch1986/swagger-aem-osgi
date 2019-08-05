<?php
/**
 * OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties
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
 * OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheFelixWebconsoleInternalServletOsgiManagerProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'manager_root' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'http_service_filter' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'default_render' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'realm' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'username' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'password' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'category' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'locale' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'loglevel' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown',
        'plugins' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'manager_root' => null,
        'http_service_filter' => null,
        'default_render' => null,
        'realm' => null,
        'username' => null,
        'password' => null,
        'category' => null,
        'locale' => null,
        'loglevel' => null,
        'plugins' => null
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
        'manager_root' => 'manager.root',
        'http_service_filter' => 'http.service.filter',
        'default_render' => 'default.render',
        'realm' => 'realm',
        'username' => 'username',
        'password' => 'password',
        'category' => 'category',
        'locale' => 'locale',
        'loglevel' => 'loglevel',
        'plugins' => 'plugins'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'manager_root' => 'setManagerRoot',
        'http_service_filter' => 'setHttpServiceFilter',
        'default_render' => 'setDefaultRender',
        'realm' => 'setRealm',
        'username' => 'setUsername',
        'password' => 'setPassword',
        'category' => 'setCategory',
        'locale' => 'setLocale',
        'loglevel' => 'setLoglevel',
        'plugins' => 'setPlugins'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'manager_root' => 'getManagerRoot',
        'http_service_filter' => 'getHttpServiceFilter',
        'default_render' => 'getDefaultRender',
        'realm' => 'getRealm',
        'username' => 'getUsername',
        'password' => 'getPassword',
        'category' => 'getCategory',
        'locale' => 'getLocale',
        'loglevel' => 'getLoglevel',
        'plugins' => 'getPlugins'
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
        $this->container['manager_root'] = isset($data['manager_root']) ? $data['manager_root'] : null;
        $this->container['http_service_filter'] = isset($data['http_service_filter']) ? $data['http_service_filter'] : null;
        $this->container['default_render'] = isset($data['default_render']) ? $data['default_render'] : null;
        $this->container['realm'] = isset($data['realm']) ? $data['realm'] : null;
        $this->container['username'] = isset($data['username']) ? $data['username'] : null;
        $this->container['password'] = isset($data['password']) ? $data['password'] : null;
        $this->container['category'] = isset($data['category']) ? $data['category'] : null;
        $this->container['locale'] = isset($data['locale']) ? $data['locale'] : null;
        $this->container['loglevel'] = isset($data['loglevel']) ? $data['loglevel'] : null;
        $this->container['plugins'] = isset($data['plugins']) ? $data['plugins'] : null;
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
     * Gets manager_root
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getManagerRoot()
    {
        return $this->container['manager_root'];
    }

    /**
     * Sets manager_root
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $manager_root manager_root
     *
     * @return $this
     */
    public function setManagerRoot($manager_root)
    {
        $this->container['manager_root'] = $manager_root;

        return $this;
    }

    /**
     * Gets http_service_filter
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getHttpServiceFilter()
    {
        return $this->container['http_service_filter'];
    }

    /**
     * Sets http_service_filter
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $http_service_filter http_service_filter
     *
     * @return $this
     */
    public function setHttpServiceFilter($http_service_filter)
    {
        $this->container['http_service_filter'] = $http_service_filter;

        return $this;
    }

    /**
     * Gets default_render
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getDefaultRender()
    {
        return $this->container['default_render'];
    }

    /**
     * Sets default_render
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $default_render default_render
     *
     * @return $this
     */
    public function setDefaultRender($default_render)
    {
        $this->container['default_render'] = $default_render;

        return $this;
    }

    /**
     * Gets realm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getRealm()
    {
        return $this->container['realm'];
    }

    /**
     * Sets realm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $realm realm
     *
     * @return $this
     */
    public function setRealm($realm)
    {
        $this->container['realm'] = $realm;

        return $this;
    }

    /**
     * Gets username
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getUsername()
    {
        return $this->container['username'];
    }

    /**
     * Sets username
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $username username
     *
     * @return $this
     */
    public function setUsername($username)
    {
        $this->container['username'] = $username;

        return $this;
    }

    /**
     * Gets password
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getPassword()
    {
        return $this->container['password'];
    }

    /**
     * Sets password
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $password password
     *
     * @return $this
     */
    public function setPassword($password)
    {
        $this->container['password'] = $password;

        return $this;
    }

    /**
     * Gets category
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getCategory()
    {
        return $this->container['category'];
    }

    /**
     * Sets category
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $category category
     *
     * @return $this
     */
    public function setCategory($category)
    {
        $this->container['category'] = $category;

        return $this;
    }

    /**
     * Gets locale
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getLocale()
    {
        return $this->container['locale'];
    }

    /**
     * Sets locale
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $locale locale
     *
     * @return $this
     */
    public function setLocale($locale)
    {
        $this->container['locale'] = $locale;

        return $this;
    }

    /**
     * Gets loglevel
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getLoglevel()
    {
        return $this->container['loglevel'];
    }

    /**
     * Sets loglevel
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $loglevel loglevel
     *
     * @return $this
     */
    public function setLoglevel($loglevel)
    {
        $this->container['loglevel'] = $loglevel;

        return $this;
    }

    /**
     * Gets plugins
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getPlugins()
    {
        return $this->container['plugins'];
    }

    /**
     * Sets plugins
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $plugins plugins
     *
     * @return $this
     */
    public function setPlugins($plugins)
    {
        $this->container['plugins'] = $plugins;

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

