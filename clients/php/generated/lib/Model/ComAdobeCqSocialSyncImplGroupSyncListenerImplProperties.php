<?php
/**
 * ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties
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
 * ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeCqSocialSyncImplGroupSyncListenerImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'nodetypes' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'ignorableprops' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'ignorablenodes' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'enabled' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'distfolders' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'nodetypes' => null,
        'ignorableprops' => null,
        'ignorablenodes' => null,
        'enabled' => null,
        'distfolders' => null
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
        'nodetypes' => 'nodetypes',
        'ignorableprops' => 'ignorableprops',
        'ignorablenodes' => 'ignorablenodes',
        'enabled' => 'enabled',
        'distfolders' => 'distfolders'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'nodetypes' => 'setNodetypes',
        'ignorableprops' => 'setIgnorableprops',
        'ignorablenodes' => 'setIgnorablenodes',
        'enabled' => 'setEnabled',
        'distfolders' => 'setDistfolders'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'nodetypes' => 'getNodetypes',
        'ignorableprops' => 'getIgnorableprops',
        'ignorablenodes' => 'getIgnorablenodes',
        'enabled' => 'getEnabled',
        'distfolders' => 'getDistfolders'
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
        $this->container['nodetypes'] = isset($data['nodetypes']) ? $data['nodetypes'] : null;
        $this->container['ignorableprops'] = isset($data['ignorableprops']) ? $data['ignorableprops'] : null;
        $this->container['ignorablenodes'] = isset($data['ignorablenodes']) ? $data['ignorablenodes'] : null;
        $this->container['enabled'] = isset($data['enabled']) ? $data['enabled'] : null;
        $this->container['distfolders'] = isset($data['distfolders']) ? $data['distfolders'] : null;
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
     * Gets nodetypes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getNodetypes()
    {
        return $this->container['nodetypes'];
    }

    /**
     * Sets nodetypes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $nodetypes nodetypes
     *
     * @return $this
     */
    public function setNodetypes($nodetypes)
    {
        $this->container['nodetypes'] = $nodetypes;

        return $this;
    }

    /**
     * Gets ignorableprops
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getIgnorableprops()
    {
        return $this->container['ignorableprops'];
    }

    /**
     * Sets ignorableprops
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $ignorableprops ignorableprops
     *
     * @return $this
     */
    public function setIgnorableprops($ignorableprops)
    {
        $this->container['ignorableprops'] = $ignorableprops;

        return $this;
    }

    /**
     * Gets ignorablenodes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getIgnorablenodes()
    {
        return $this->container['ignorablenodes'];
    }

    /**
     * Sets ignorablenodes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $ignorablenodes ignorablenodes
     *
     * @return $this
     */
    public function setIgnorablenodes($ignorablenodes)
    {
        $this->container['ignorablenodes'] = $ignorablenodes;

        return $this;
    }

    /**
     * Gets enabled
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnabled()
    {
        return $this->container['enabled'];
    }

    /**
     * Sets enabled
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enabled enabled
     *
     * @return $this
     */
    public function setEnabled($enabled)
    {
        $this->container['enabled'] = $enabled;

        return $this;
    }

    /**
     * Gets distfolders
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getDistfolders()
    {
        return $this->container['distfolders'];
    }

    /**
     * Sets distfolders
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $distfolders distfolders
     *
     * @return $this
     */
    public function setDistfolders($distfolders)
    {
        $this->container['distfolders'] = $distfolders;

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


