<?php
/**
 * ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties
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
 * ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'event_filter' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'fontmgr_system_font_dir' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'fontmgr_adobe_font_dir' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'fontmgr_customer_font_dir' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'event_filter' => null,
        'fontmgr_system_font_dir' => null,
        'fontmgr_adobe_font_dir' => null,
        'fontmgr_customer_font_dir' => null
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
        'event_filter' => 'event.filter',
        'fontmgr_system_font_dir' => 'fontmgr.system.font.dir',
        'fontmgr_adobe_font_dir' => 'fontmgr.adobe.font.dir',
        'fontmgr_customer_font_dir' => 'fontmgr.customer.font.dir'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'event_filter' => 'setEventFilter',
        'fontmgr_system_font_dir' => 'setFontmgrSystemFontDir',
        'fontmgr_adobe_font_dir' => 'setFontmgrAdobeFontDir',
        'fontmgr_customer_font_dir' => 'setFontmgrCustomerFontDir'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'event_filter' => 'getEventFilter',
        'fontmgr_system_font_dir' => 'getFontmgrSystemFontDir',
        'fontmgr_adobe_font_dir' => 'getFontmgrAdobeFontDir',
        'fontmgr_customer_font_dir' => 'getFontmgrCustomerFontDir'
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
        $this->container['event_filter'] = isset($data['event_filter']) ? $data['event_filter'] : null;
        $this->container['fontmgr_system_font_dir'] = isset($data['fontmgr_system_font_dir']) ? $data['fontmgr_system_font_dir'] : null;
        $this->container['fontmgr_adobe_font_dir'] = isset($data['fontmgr_adobe_font_dir']) ? $data['fontmgr_adobe_font_dir'] : null;
        $this->container['fontmgr_customer_font_dir'] = isset($data['fontmgr_customer_font_dir']) ? $data['fontmgr_customer_font_dir'] : null;
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
     * Gets event_filter
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getEventFilter()
    {
        return $this->container['event_filter'];
    }

    /**
     * Sets event_filter
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $event_filter event_filter
     *
     * @return $this
     */
    public function setEventFilter($event_filter)
    {
        $this->container['event_filter'] = $event_filter;

        return $this;
    }

    /**
     * Gets fontmgr_system_font_dir
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getFontmgrSystemFontDir()
    {
        return $this->container['fontmgr_system_font_dir'];
    }

    /**
     * Sets fontmgr_system_font_dir
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $fontmgr_system_font_dir fontmgr_system_font_dir
     *
     * @return $this
     */
    public function setFontmgrSystemFontDir($fontmgr_system_font_dir)
    {
        $this->container['fontmgr_system_font_dir'] = $fontmgr_system_font_dir;

        return $this;
    }

    /**
     * Gets fontmgr_adobe_font_dir
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getFontmgrAdobeFontDir()
    {
        return $this->container['fontmgr_adobe_font_dir'];
    }

    /**
     * Sets fontmgr_adobe_font_dir
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $fontmgr_adobe_font_dir fontmgr_adobe_font_dir
     *
     * @return $this
     */
    public function setFontmgrAdobeFontDir($fontmgr_adobe_font_dir)
    {
        $this->container['fontmgr_adobe_font_dir'] = $fontmgr_adobe_font_dir;

        return $this;
    }

    /**
     * Gets fontmgr_customer_font_dir
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getFontmgrCustomerFontDir()
    {
        return $this->container['fontmgr_customer_font_dir'];
    }

    /**
     * Sets fontmgr_customer_font_dir
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $fontmgr_customer_font_dir fontmgr_customer_font_dir
     *
     * @return $this
     */
    public function setFontmgrCustomerFontDir($fontmgr_customer_font_dir)
    {
        $this->container['fontmgr_customer_font_dir'] = $fontmgr_customer_font_dir;

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


