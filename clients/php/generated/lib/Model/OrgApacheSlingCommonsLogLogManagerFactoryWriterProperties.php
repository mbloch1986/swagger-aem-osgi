<?php
/**
 * OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties
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
 * OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingCommonsLogLogManagerFactoryWriterProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'org_apache_sling_commons_log_file' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'org_apache_sling_commons_log_file_number' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'org_apache_sling_commons_log_file_size' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'org_apache_sling_commons_log_file_buffered' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'org_apache_sling_commons_log_file' => null,
        'org_apache_sling_commons_log_file_number' => null,
        'org_apache_sling_commons_log_file_size' => null,
        'org_apache_sling_commons_log_file_buffered' => null
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
        'org_apache_sling_commons_log_file' => 'org.apache.sling.commons.log.file',
        'org_apache_sling_commons_log_file_number' => 'org.apache.sling.commons.log.file.number',
        'org_apache_sling_commons_log_file_size' => 'org.apache.sling.commons.log.file.size',
        'org_apache_sling_commons_log_file_buffered' => 'org.apache.sling.commons.log.file.buffered'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'org_apache_sling_commons_log_file' => 'setOrgApacheSlingCommonsLogFile',
        'org_apache_sling_commons_log_file_number' => 'setOrgApacheSlingCommonsLogFileNumber',
        'org_apache_sling_commons_log_file_size' => 'setOrgApacheSlingCommonsLogFileSize',
        'org_apache_sling_commons_log_file_buffered' => 'setOrgApacheSlingCommonsLogFileBuffered'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'org_apache_sling_commons_log_file' => 'getOrgApacheSlingCommonsLogFile',
        'org_apache_sling_commons_log_file_number' => 'getOrgApacheSlingCommonsLogFileNumber',
        'org_apache_sling_commons_log_file_size' => 'getOrgApacheSlingCommonsLogFileSize',
        'org_apache_sling_commons_log_file_buffered' => 'getOrgApacheSlingCommonsLogFileBuffered'
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
        $this->container['org_apache_sling_commons_log_file'] = isset($data['org_apache_sling_commons_log_file']) ? $data['org_apache_sling_commons_log_file'] : null;
        $this->container['org_apache_sling_commons_log_file_number'] = isset($data['org_apache_sling_commons_log_file_number']) ? $data['org_apache_sling_commons_log_file_number'] : null;
        $this->container['org_apache_sling_commons_log_file_size'] = isset($data['org_apache_sling_commons_log_file_size']) ? $data['org_apache_sling_commons_log_file_size'] : null;
        $this->container['org_apache_sling_commons_log_file_buffered'] = isset($data['org_apache_sling_commons_log_file_buffered']) ? $data['org_apache_sling_commons_log_file_buffered'] : null;
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
     * Gets org_apache_sling_commons_log_file
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOrgApacheSlingCommonsLogFile()
    {
        return $this->container['org_apache_sling_commons_log_file'];
    }

    /**
     * Sets org_apache_sling_commons_log_file
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $org_apache_sling_commons_log_file org_apache_sling_commons_log_file
     *
     * @return $this
     */
    public function setOrgApacheSlingCommonsLogFile($org_apache_sling_commons_log_file)
    {
        $this->container['org_apache_sling_commons_log_file'] = $org_apache_sling_commons_log_file;

        return $this;
    }

    /**
     * Gets org_apache_sling_commons_log_file_number
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getOrgApacheSlingCommonsLogFileNumber()
    {
        return $this->container['org_apache_sling_commons_log_file_number'];
    }

    /**
     * Sets org_apache_sling_commons_log_file_number
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $org_apache_sling_commons_log_file_number org_apache_sling_commons_log_file_number
     *
     * @return $this
     */
    public function setOrgApacheSlingCommonsLogFileNumber($org_apache_sling_commons_log_file_number)
    {
        $this->container['org_apache_sling_commons_log_file_number'] = $org_apache_sling_commons_log_file_number;

        return $this;
    }

    /**
     * Gets org_apache_sling_commons_log_file_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getOrgApacheSlingCommonsLogFileSize()
    {
        return $this->container['org_apache_sling_commons_log_file_size'];
    }

    /**
     * Sets org_apache_sling_commons_log_file_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $org_apache_sling_commons_log_file_size org_apache_sling_commons_log_file_size
     *
     * @return $this
     */
    public function setOrgApacheSlingCommonsLogFileSize($org_apache_sling_commons_log_file_size)
    {
        $this->container['org_apache_sling_commons_log_file_size'] = $org_apache_sling_commons_log_file_size;

        return $this;
    }

    /**
     * Gets org_apache_sling_commons_log_file_buffered
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getOrgApacheSlingCommonsLogFileBuffered()
    {
        return $this->container['org_apache_sling_commons_log_file_buffered'];
    }

    /**
     * Sets org_apache_sling_commons_log_file_buffered
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $org_apache_sling_commons_log_file_buffered org_apache_sling_commons_log_file_buffered
     *
     * @return $this
     */
    public function setOrgApacheSlingCommonsLogFileBuffered($org_apache_sling_commons_log_file_buffered)
    {
        $this->container['org_apache_sling_commons_log_file_buffered'] = $org_apache_sling_commons_log_file_buffered;

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

