<?php
/**
 * ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties
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
 * ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'create_preview_enabled' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'update_preview_enabled' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'queue_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'folder_preview_rendition_regex' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'create_preview_enabled' => null,
        'update_preview_enabled' => null,
        'queue_size' => null,
        'folder_preview_rendition_regex' => null
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
        'create_preview_enabled' => 'createPreviewEnabled',
        'update_preview_enabled' => 'updatePreviewEnabled',
        'queue_size' => 'queueSize',
        'folder_preview_rendition_regex' => 'folderPreviewRenditionRegex'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'create_preview_enabled' => 'setCreatePreviewEnabled',
        'update_preview_enabled' => 'setUpdatePreviewEnabled',
        'queue_size' => 'setQueueSize',
        'folder_preview_rendition_regex' => 'setFolderPreviewRenditionRegex'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'create_preview_enabled' => 'getCreatePreviewEnabled',
        'update_preview_enabled' => 'getUpdatePreviewEnabled',
        'queue_size' => 'getQueueSize',
        'folder_preview_rendition_regex' => 'getFolderPreviewRenditionRegex'
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
        $this->container['create_preview_enabled'] = isset($data['create_preview_enabled']) ? $data['create_preview_enabled'] : null;
        $this->container['update_preview_enabled'] = isset($data['update_preview_enabled']) ? $data['update_preview_enabled'] : null;
        $this->container['queue_size'] = isset($data['queue_size']) ? $data['queue_size'] : null;
        $this->container['folder_preview_rendition_regex'] = isset($data['folder_preview_rendition_regex']) ? $data['folder_preview_rendition_regex'] : null;
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
     * Gets create_preview_enabled
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getCreatePreviewEnabled()
    {
        return $this->container['create_preview_enabled'];
    }

    /**
     * Sets create_preview_enabled
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $create_preview_enabled create_preview_enabled
     *
     * @return $this
     */
    public function setCreatePreviewEnabled($create_preview_enabled)
    {
        $this->container['create_preview_enabled'] = $create_preview_enabled;

        return $this;
    }

    /**
     * Gets update_preview_enabled
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getUpdatePreviewEnabled()
    {
        return $this->container['update_preview_enabled'];
    }

    /**
     * Sets update_preview_enabled
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $update_preview_enabled update_preview_enabled
     *
     * @return $this
     */
    public function setUpdatePreviewEnabled($update_preview_enabled)
    {
        $this->container['update_preview_enabled'] = $update_preview_enabled;

        return $this;
    }

    /**
     * Gets queue_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getQueueSize()
    {
        return $this->container['queue_size'];
    }

    /**
     * Sets queue_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $queue_size queue_size
     *
     * @return $this
     */
    public function setQueueSize($queue_size)
    {
        $this->container['queue_size'] = $queue_size;

        return $this;
    }

    /**
     * Gets folder_preview_rendition_regex
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getFolderPreviewRenditionRegex()
    {
        return $this->container['folder_preview_rendition_regex'];
    }

    /**
     * Sets folder_preview_rendition_regex
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $folder_preview_rendition_regex folder_preview_rendition_regex
     *
     * @return $this
     */
    public function setFolderPreviewRenditionRegex($folder_preview_rendition_regex)
    {
        $this->container['folder_preview_rendition_regex'] = $folder_preview_rendition_regex;

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


