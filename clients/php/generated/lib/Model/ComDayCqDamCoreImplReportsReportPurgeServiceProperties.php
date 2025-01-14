<?php
/**
 * ComDayCqDamCoreImplReportsReportPurgeServiceProperties
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
 * ComDayCqDamCoreImplReportsReportPurgeServiceProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqDamCoreImplReportsReportPurgeServiceProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqDamCoreImplReportsReportPurgeServiceProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'scheduler_expression' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'max_saved_reports' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'time_duration' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'enable_report_purge' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'scheduler_expression' => null,
        'max_saved_reports' => null,
        'time_duration' => null,
        'enable_report_purge' => null
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
        'scheduler_expression' => 'scheduler.expression',
        'max_saved_reports' => 'maxSavedReports',
        'time_duration' => 'timeDuration',
        'enable_report_purge' => 'enableReportPurge'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'scheduler_expression' => 'setSchedulerExpression',
        'max_saved_reports' => 'setMaxSavedReports',
        'time_duration' => 'setTimeDuration',
        'enable_report_purge' => 'setEnableReportPurge'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'scheduler_expression' => 'getSchedulerExpression',
        'max_saved_reports' => 'getMaxSavedReports',
        'time_duration' => 'getTimeDuration',
        'enable_report_purge' => 'getEnableReportPurge'
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
        $this->container['scheduler_expression'] = isset($data['scheduler_expression']) ? $data['scheduler_expression'] : null;
        $this->container['max_saved_reports'] = isset($data['max_saved_reports']) ? $data['max_saved_reports'] : null;
        $this->container['time_duration'] = isset($data['time_duration']) ? $data['time_duration'] : null;
        $this->container['enable_report_purge'] = isset($data['enable_report_purge']) ? $data['enable_report_purge'] : null;
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
     * Gets scheduler_expression
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSchedulerExpression()
    {
        return $this->container['scheduler_expression'];
    }

    /**
     * Sets scheduler_expression
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $scheduler_expression scheduler_expression
     *
     * @return $this
     */
    public function setSchedulerExpression($scheduler_expression)
    {
        $this->container['scheduler_expression'] = $scheduler_expression;

        return $this;
    }

    /**
     * Gets max_saved_reports
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getMaxSavedReports()
    {
        return $this->container['max_saved_reports'];
    }

    /**
     * Sets max_saved_reports
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $max_saved_reports max_saved_reports
     *
     * @return $this
     */
    public function setMaxSavedReports($max_saved_reports)
    {
        $this->container['max_saved_reports'] = $max_saved_reports;

        return $this;
    }

    /**
     * Gets time_duration
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getTimeDuration()
    {
        return $this->container['time_duration'];
    }

    /**
     * Sets time_duration
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $time_duration time_duration
     *
     * @return $this
     */
    public function setTimeDuration($time_duration)
    {
        $this->container['time_duration'] = $time_duration;

        return $this;
    }

    /**
     * Gets enable_report_purge
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableReportPurge()
    {
        return $this->container['enable_report_purge'];
    }

    /**
     * Sets enable_report_purge
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enable_report_purge enable_report_purge
     *
     * @return $this
     */
    public function setEnableReportPurge($enable_report_purge)
    {
        $this->container['enable_report_purge'] = $enable_report_purge;

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


