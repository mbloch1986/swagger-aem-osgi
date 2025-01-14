<?php
/**
 * ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties
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
 * ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'sync_translation_state_scheduling_format' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'scheduling_repeat_translation_scheduling_format' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'sync_translation_state_lock_timeout_in_minutes' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'export_format' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'sync_translation_state_scheduling_format' => null,
        'scheduling_repeat_translation_scheduling_format' => null,
        'sync_translation_state_lock_timeout_in_minutes' => null,
        'export_format' => null
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
        'sync_translation_state_scheduling_format' => 'syncTranslationState.schedulingFormat',
        'scheduling_repeat_translation_scheduling_format' => 'schedulingRepeatTranslation.schedulingFormat',
        'sync_translation_state_lock_timeout_in_minutes' => 'syncTranslationState.lockTimeoutInMinutes',
        'export_format' => 'export.format'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'sync_translation_state_scheduling_format' => 'setSyncTranslationStateSchedulingFormat',
        'scheduling_repeat_translation_scheduling_format' => 'setSchedulingRepeatTranslationSchedulingFormat',
        'sync_translation_state_lock_timeout_in_minutes' => 'setSyncTranslationStateLockTimeoutInMinutes',
        'export_format' => 'setExportFormat'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'sync_translation_state_scheduling_format' => 'getSyncTranslationStateSchedulingFormat',
        'scheduling_repeat_translation_scheduling_format' => 'getSchedulingRepeatTranslationSchedulingFormat',
        'sync_translation_state_lock_timeout_in_minutes' => 'getSyncTranslationStateLockTimeoutInMinutes',
        'export_format' => 'getExportFormat'
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
        $this->container['sync_translation_state_scheduling_format'] = isset($data['sync_translation_state_scheduling_format']) ? $data['sync_translation_state_scheduling_format'] : null;
        $this->container['scheduling_repeat_translation_scheduling_format'] = isset($data['scheduling_repeat_translation_scheduling_format']) ? $data['scheduling_repeat_translation_scheduling_format'] : null;
        $this->container['sync_translation_state_lock_timeout_in_minutes'] = isset($data['sync_translation_state_lock_timeout_in_minutes']) ? $data['sync_translation_state_lock_timeout_in_minutes'] : null;
        $this->container['export_format'] = isset($data['export_format']) ? $data['export_format'] : null;
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
     * Gets sync_translation_state_scheduling_format
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSyncTranslationStateSchedulingFormat()
    {
        return $this->container['sync_translation_state_scheduling_format'];
    }

    /**
     * Sets sync_translation_state_scheduling_format
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sync_translation_state_scheduling_format sync_translation_state_scheduling_format
     *
     * @return $this
     */
    public function setSyncTranslationStateSchedulingFormat($sync_translation_state_scheduling_format)
    {
        $this->container['sync_translation_state_scheduling_format'] = $sync_translation_state_scheduling_format;

        return $this;
    }

    /**
     * Gets scheduling_repeat_translation_scheduling_format
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSchedulingRepeatTranslationSchedulingFormat()
    {
        return $this->container['scheduling_repeat_translation_scheduling_format'];
    }

    /**
     * Sets scheduling_repeat_translation_scheduling_format
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $scheduling_repeat_translation_scheduling_format scheduling_repeat_translation_scheduling_format
     *
     * @return $this
     */
    public function setSchedulingRepeatTranslationSchedulingFormat($scheduling_repeat_translation_scheduling_format)
    {
        $this->container['scheduling_repeat_translation_scheduling_format'] = $scheduling_repeat_translation_scheduling_format;

        return $this;
    }

    /**
     * Gets sync_translation_state_lock_timeout_in_minutes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSyncTranslationStateLockTimeoutInMinutes()
    {
        return $this->container['sync_translation_state_lock_timeout_in_minutes'];
    }

    /**
     * Sets sync_translation_state_lock_timeout_in_minutes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $sync_translation_state_lock_timeout_in_minutes sync_translation_state_lock_timeout_in_minutes
     *
     * @return $this
     */
    public function setSyncTranslationStateLockTimeoutInMinutes($sync_translation_state_lock_timeout_in_minutes)
    {
        $this->container['sync_translation_state_lock_timeout_in_minutes'] = $sync_translation_state_lock_timeout_in_minutes;

        return $this;
    }

    /**
     * Gets export_format
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getExportFormat()
    {
        return $this->container['export_format'];
    }

    /**
     * Sets export_format
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $export_format export_format
     *
     * @return $this
     */
    public function setExportFormat($export_format)
    {
        $this->container['export_format'] = $export_format;

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


