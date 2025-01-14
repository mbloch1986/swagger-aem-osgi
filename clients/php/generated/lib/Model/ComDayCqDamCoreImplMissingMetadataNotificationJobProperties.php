<?php
/**
 * ComDayCqDamCoreImplMissingMetadataNotificationJobProperties
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
 * ComDayCqDamCoreImplMissingMetadataNotificationJobProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqDamCoreImplMissingMetadataNotificationJobProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqDamCoreImplMissingMetadataNotificationJobProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'cq_dam_missingmetadata_notification_scheduler_istimebased' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'cq_dam_missingmetadata_notification_scheduler_timebased_rule' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'cq_dam_missingmetadata_notification_scheduler_period_rule' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'cq_dam_missingmetadata_notification_recipient' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'cq_dam_missingmetadata_notification_scheduler_istimebased' => null,
        'cq_dam_missingmetadata_notification_scheduler_timebased_rule' => null,
        'cq_dam_missingmetadata_notification_scheduler_period_rule' => null,
        'cq_dam_missingmetadata_notification_recipient' => null
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
        'cq_dam_missingmetadata_notification_scheduler_istimebased' => 'cq.dam.missingmetadata.notification.scheduler.istimebased',
        'cq_dam_missingmetadata_notification_scheduler_timebased_rule' => 'cq.dam.missingmetadata.notification.scheduler.timebased.rule',
        'cq_dam_missingmetadata_notification_scheduler_period_rule' => 'cq.dam.missingmetadata.notification.scheduler.period.rule',
        'cq_dam_missingmetadata_notification_recipient' => 'cq.dam.missingmetadata.notification.recipient'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'cq_dam_missingmetadata_notification_scheduler_istimebased' => 'setCqDamMissingmetadataNotificationSchedulerIstimebased',
        'cq_dam_missingmetadata_notification_scheduler_timebased_rule' => 'setCqDamMissingmetadataNotificationSchedulerTimebasedRule',
        'cq_dam_missingmetadata_notification_scheduler_period_rule' => 'setCqDamMissingmetadataNotificationSchedulerPeriodRule',
        'cq_dam_missingmetadata_notification_recipient' => 'setCqDamMissingmetadataNotificationRecipient'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'cq_dam_missingmetadata_notification_scheduler_istimebased' => 'getCqDamMissingmetadataNotificationSchedulerIstimebased',
        'cq_dam_missingmetadata_notification_scheduler_timebased_rule' => 'getCqDamMissingmetadataNotificationSchedulerTimebasedRule',
        'cq_dam_missingmetadata_notification_scheduler_period_rule' => 'getCqDamMissingmetadataNotificationSchedulerPeriodRule',
        'cq_dam_missingmetadata_notification_recipient' => 'getCqDamMissingmetadataNotificationRecipient'
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
        $this->container['cq_dam_missingmetadata_notification_scheduler_istimebased'] = isset($data['cq_dam_missingmetadata_notification_scheduler_istimebased']) ? $data['cq_dam_missingmetadata_notification_scheduler_istimebased'] : null;
        $this->container['cq_dam_missingmetadata_notification_scheduler_timebased_rule'] = isset($data['cq_dam_missingmetadata_notification_scheduler_timebased_rule']) ? $data['cq_dam_missingmetadata_notification_scheduler_timebased_rule'] : null;
        $this->container['cq_dam_missingmetadata_notification_scheduler_period_rule'] = isset($data['cq_dam_missingmetadata_notification_scheduler_period_rule']) ? $data['cq_dam_missingmetadata_notification_scheduler_period_rule'] : null;
        $this->container['cq_dam_missingmetadata_notification_recipient'] = isset($data['cq_dam_missingmetadata_notification_recipient']) ? $data['cq_dam_missingmetadata_notification_recipient'] : null;
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
     * Gets cq_dam_missingmetadata_notification_scheduler_istimebased
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getCqDamMissingmetadataNotificationSchedulerIstimebased()
    {
        return $this->container['cq_dam_missingmetadata_notification_scheduler_istimebased'];
    }

    /**
     * Sets cq_dam_missingmetadata_notification_scheduler_istimebased
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $cq_dam_missingmetadata_notification_scheduler_istimebased cq_dam_missingmetadata_notification_scheduler_istimebased
     *
     * @return $this
     */
    public function setCqDamMissingmetadataNotificationSchedulerIstimebased($cq_dam_missingmetadata_notification_scheduler_istimebased)
    {
        $this->container['cq_dam_missingmetadata_notification_scheduler_istimebased'] = $cq_dam_missingmetadata_notification_scheduler_istimebased;

        return $this;
    }

    /**
     * Gets cq_dam_missingmetadata_notification_scheduler_timebased_rule
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getCqDamMissingmetadataNotificationSchedulerTimebasedRule()
    {
        return $this->container['cq_dam_missingmetadata_notification_scheduler_timebased_rule'];
    }

    /**
     * Sets cq_dam_missingmetadata_notification_scheduler_timebased_rule
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $cq_dam_missingmetadata_notification_scheduler_timebased_rule cq_dam_missingmetadata_notification_scheduler_timebased_rule
     *
     * @return $this
     */
    public function setCqDamMissingmetadataNotificationSchedulerTimebasedRule($cq_dam_missingmetadata_notification_scheduler_timebased_rule)
    {
        $this->container['cq_dam_missingmetadata_notification_scheduler_timebased_rule'] = $cq_dam_missingmetadata_notification_scheduler_timebased_rule;

        return $this;
    }

    /**
     * Gets cq_dam_missingmetadata_notification_scheduler_period_rule
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamMissingmetadataNotificationSchedulerPeriodRule()
    {
        return $this->container['cq_dam_missingmetadata_notification_scheduler_period_rule'];
    }

    /**
     * Sets cq_dam_missingmetadata_notification_scheduler_period_rule
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $cq_dam_missingmetadata_notification_scheduler_period_rule cq_dam_missingmetadata_notification_scheduler_period_rule
     *
     * @return $this
     */
    public function setCqDamMissingmetadataNotificationSchedulerPeriodRule($cq_dam_missingmetadata_notification_scheduler_period_rule)
    {
        $this->container['cq_dam_missingmetadata_notification_scheduler_period_rule'] = $cq_dam_missingmetadata_notification_scheduler_period_rule;

        return $this;
    }

    /**
     * Gets cq_dam_missingmetadata_notification_recipient
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getCqDamMissingmetadataNotificationRecipient()
    {
        return $this->container['cq_dam_missingmetadata_notification_recipient'];
    }

    /**
     * Sets cq_dam_missingmetadata_notification_recipient
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $cq_dam_missingmetadata_notification_recipient cq_dam_missingmetadata_notification_recipient
     *
     * @return $this
     */
    public function setCqDamMissingmetadataNotificationRecipient($cq_dam_missingmetadata_notification_recipient)
    {
        $this->container['cq_dam_missingmetadata_notification_recipient'] = $cq_dam_missingmetadata_notification_recipient;

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


