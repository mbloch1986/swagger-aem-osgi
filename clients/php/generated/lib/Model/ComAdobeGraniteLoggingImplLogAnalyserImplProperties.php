<?php
/**
 * ComAdobeGraniteLoggingImplLogAnalyserImplProperties
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
 * ComAdobeGraniteLoggingImplLogAnalyserImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeGraniteLoggingImplLogAnalyserImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeGraniteLoggingImplLogAnalyserImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'messages_queue_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'logger_config' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'messages_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'messages_queue_size' => null,
        'logger_config' => null,
        'messages_size' => null
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
        'messages_queue_size' => 'messages.queue.size',
        'logger_config' => 'logger.config',
        'messages_size' => 'messages.size'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'messages_queue_size' => 'setMessagesQueueSize',
        'logger_config' => 'setLoggerConfig',
        'messages_size' => 'setMessagesSize'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'messages_queue_size' => 'getMessagesQueueSize',
        'logger_config' => 'getLoggerConfig',
        'messages_size' => 'getMessagesSize'
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
        $this->container['messages_queue_size'] = isset($data['messages_queue_size']) ? $data['messages_queue_size'] : null;
        $this->container['logger_config'] = isset($data['logger_config']) ? $data['logger_config'] : null;
        $this->container['messages_size'] = isset($data['messages_size']) ? $data['messages_size'] : null;
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
     * Gets messages_queue_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getMessagesQueueSize()
    {
        return $this->container['messages_queue_size'];
    }

    /**
     * Sets messages_queue_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $messages_queue_size messages_queue_size
     *
     * @return $this
     */
    public function setMessagesQueueSize($messages_queue_size)
    {
        $this->container['messages_queue_size'] = $messages_queue_size;

        return $this;
    }

    /**
     * Gets logger_config
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getLoggerConfig()
    {
        return $this->container['logger_config'];
    }

    /**
     * Sets logger_config
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $logger_config logger_config
     *
     * @return $this
     */
    public function setLoggerConfig($logger_config)
    {
        $this->container['logger_config'] = $logger_config;

        return $this;
    }

    /**
     * Gets messages_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getMessagesSize()
    {
        return $this->container['messages_size'];
    }

    /**
     * Sets messages_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $messages_size messages_size
     *
     * @return $this
     */
    public function setMessagesSize($messages_size)
    {
        $this->container['messages_size'] = $messages_size;

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


