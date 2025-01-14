<?php
/**
 * ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties
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
 * ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'cq_commerce_cataloggenerator_bucketsize' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'cq_commerce_cataloggenerator_bucketname' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'cq_commerce_cataloggenerator_excludedtemplateproperties' => '\OpenAPI\Client\Model\ConfigNodePropertyArray'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'cq_commerce_cataloggenerator_bucketsize' => null,
        'cq_commerce_cataloggenerator_bucketname' => null,
        'cq_commerce_cataloggenerator_excludedtemplateproperties' => null
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
        'cq_commerce_cataloggenerator_bucketsize' => 'cq.commerce.cataloggenerator.bucketsize',
        'cq_commerce_cataloggenerator_bucketname' => 'cq.commerce.cataloggenerator.bucketname',
        'cq_commerce_cataloggenerator_excludedtemplateproperties' => 'cq.commerce.cataloggenerator.excludedtemplateproperties'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'cq_commerce_cataloggenerator_bucketsize' => 'setCqCommerceCataloggeneratorBucketsize',
        'cq_commerce_cataloggenerator_bucketname' => 'setCqCommerceCataloggeneratorBucketname',
        'cq_commerce_cataloggenerator_excludedtemplateproperties' => 'setCqCommerceCataloggeneratorExcludedtemplateproperties'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'cq_commerce_cataloggenerator_bucketsize' => 'getCqCommerceCataloggeneratorBucketsize',
        'cq_commerce_cataloggenerator_bucketname' => 'getCqCommerceCataloggeneratorBucketname',
        'cq_commerce_cataloggenerator_excludedtemplateproperties' => 'getCqCommerceCataloggeneratorExcludedtemplateproperties'
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
        $this->container['cq_commerce_cataloggenerator_bucketsize'] = isset($data['cq_commerce_cataloggenerator_bucketsize']) ? $data['cq_commerce_cataloggenerator_bucketsize'] : null;
        $this->container['cq_commerce_cataloggenerator_bucketname'] = isset($data['cq_commerce_cataloggenerator_bucketname']) ? $data['cq_commerce_cataloggenerator_bucketname'] : null;
        $this->container['cq_commerce_cataloggenerator_excludedtemplateproperties'] = isset($data['cq_commerce_cataloggenerator_excludedtemplateproperties']) ? $data['cq_commerce_cataloggenerator_excludedtemplateproperties'] : null;
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
     * Gets cq_commerce_cataloggenerator_bucketsize
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getCqCommerceCataloggeneratorBucketsize()
    {
        return $this->container['cq_commerce_cataloggenerator_bucketsize'];
    }

    /**
     * Sets cq_commerce_cataloggenerator_bucketsize
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $cq_commerce_cataloggenerator_bucketsize cq_commerce_cataloggenerator_bucketsize
     *
     * @return $this
     */
    public function setCqCommerceCataloggeneratorBucketsize($cq_commerce_cataloggenerator_bucketsize)
    {
        $this->container['cq_commerce_cataloggenerator_bucketsize'] = $cq_commerce_cataloggenerator_bucketsize;

        return $this;
    }

    /**
     * Gets cq_commerce_cataloggenerator_bucketname
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getCqCommerceCataloggeneratorBucketname()
    {
        return $this->container['cq_commerce_cataloggenerator_bucketname'];
    }

    /**
     * Sets cq_commerce_cataloggenerator_bucketname
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $cq_commerce_cataloggenerator_bucketname cq_commerce_cataloggenerator_bucketname
     *
     * @return $this
     */
    public function setCqCommerceCataloggeneratorBucketname($cq_commerce_cataloggenerator_bucketname)
    {
        $this->container['cq_commerce_cataloggenerator_bucketname'] = $cq_commerce_cataloggenerator_bucketname;

        return $this;
    }

    /**
     * Gets cq_commerce_cataloggenerator_excludedtemplateproperties
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getCqCommerceCataloggeneratorExcludedtemplateproperties()
    {
        return $this->container['cq_commerce_cataloggenerator_excludedtemplateproperties'];
    }

    /**
     * Sets cq_commerce_cataloggenerator_excludedtemplateproperties
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $cq_commerce_cataloggenerator_excludedtemplateproperties cq_commerce_cataloggenerator_excludedtemplateproperties
     *
     * @return $this
     */
    public function setCqCommerceCataloggeneratorExcludedtemplateproperties($cq_commerce_cataloggenerator_excludedtemplateproperties)
    {
        $this->container['cq_commerce_cataloggenerator_excludedtemplateproperties'] = $cq_commerce_cataloggenerator_excludedtemplateproperties;

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


