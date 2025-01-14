<?php
/**
 * OrgApacheFelixHttpSslfilterSslFilterProperties
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
 * OrgApacheFelixHttpSslfilterSslFilterProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheFelixHttpSslfilterSslFilterProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheFelixHttpSslfilterSslFilterProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'ssl_forward_header' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'ssl_forward_value' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'ssl_forward_cert_header' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'rewrite_absolute_urls' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'ssl_forward_header' => null,
        'ssl_forward_value' => null,
        'ssl_forward_cert_header' => null,
        'rewrite_absolute_urls' => null
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
        'ssl_forward_header' => 'ssl-forward.header',
        'ssl_forward_value' => 'ssl-forward.value',
        'ssl_forward_cert_header' => 'ssl-forward-cert.header',
        'rewrite_absolute_urls' => 'rewrite.absolute.urls'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'ssl_forward_header' => 'setSslForwardHeader',
        'ssl_forward_value' => 'setSslForwardValue',
        'ssl_forward_cert_header' => 'setSslForwardCertHeader',
        'rewrite_absolute_urls' => 'setRewriteAbsoluteUrls'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'ssl_forward_header' => 'getSslForwardHeader',
        'ssl_forward_value' => 'getSslForwardValue',
        'ssl_forward_cert_header' => 'getSslForwardCertHeader',
        'rewrite_absolute_urls' => 'getRewriteAbsoluteUrls'
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
        $this->container['ssl_forward_header'] = isset($data['ssl_forward_header']) ? $data['ssl_forward_header'] : null;
        $this->container['ssl_forward_value'] = isset($data['ssl_forward_value']) ? $data['ssl_forward_value'] : null;
        $this->container['ssl_forward_cert_header'] = isset($data['ssl_forward_cert_header']) ? $data['ssl_forward_cert_header'] : null;
        $this->container['rewrite_absolute_urls'] = isset($data['rewrite_absolute_urls']) ? $data['rewrite_absolute_urls'] : null;
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
     * Gets ssl_forward_header
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSslForwardHeader()
    {
        return $this->container['ssl_forward_header'];
    }

    /**
     * Sets ssl_forward_header
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $ssl_forward_header ssl_forward_header
     *
     * @return $this
     */
    public function setSslForwardHeader($ssl_forward_header)
    {
        $this->container['ssl_forward_header'] = $ssl_forward_header;

        return $this;
    }

    /**
     * Gets ssl_forward_value
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSslForwardValue()
    {
        return $this->container['ssl_forward_value'];
    }

    /**
     * Sets ssl_forward_value
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $ssl_forward_value ssl_forward_value
     *
     * @return $this
     */
    public function setSslForwardValue($ssl_forward_value)
    {
        $this->container['ssl_forward_value'] = $ssl_forward_value;

        return $this;
    }

    /**
     * Gets ssl_forward_cert_header
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSslForwardCertHeader()
    {
        return $this->container['ssl_forward_cert_header'];
    }

    /**
     * Sets ssl_forward_cert_header
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $ssl_forward_cert_header ssl_forward_cert_header
     *
     * @return $this
     */
    public function setSslForwardCertHeader($ssl_forward_cert_header)
    {
        $this->container['ssl_forward_cert_header'] = $ssl_forward_cert_header;

        return $this;
    }

    /**
     * Gets rewrite_absolute_urls
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getRewriteAbsoluteUrls()
    {
        return $this->container['rewrite_absolute_urls'];
    }

    /**
     * Sets rewrite_absolute_urls
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $rewrite_absolute_urls rewrite_absolute_urls
     *
     * @return $this
     */
    public function setRewriteAbsoluteUrls($rewrite_absolute_urls)
    {
        $this->container['rewrite_absolute_urls'] = $rewrite_absolute_urls;

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


