<?php
/**
 * OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties
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
 * OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingDistributionPackagingImplExporterRemoteDistributiProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'name' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'endpoints' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'pull_items' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'package_builder_target' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'transport_secret_provider_target' => '\OpenAPI\Client\Model\ConfigNodePropertyString'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'name' => null,
        'endpoints' => null,
        'pull_items' => null,
        'package_builder_target' => null,
        'transport_secret_provider_target' => null
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
        'name' => 'name',
        'endpoints' => 'endpoints',
        'pull_items' => 'pull.items',
        'package_builder_target' => 'packageBuilder.target',
        'transport_secret_provider_target' => 'transportSecretProvider.target'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'name' => 'setName',
        'endpoints' => 'setEndpoints',
        'pull_items' => 'setPullItems',
        'package_builder_target' => 'setPackageBuilderTarget',
        'transport_secret_provider_target' => 'setTransportSecretProviderTarget'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'name' => 'getName',
        'endpoints' => 'getEndpoints',
        'pull_items' => 'getPullItems',
        'package_builder_target' => 'getPackageBuilderTarget',
        'transport_secret_provider_target' => 'getTransportSecretProviderTarget'
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
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['endpoints'] = isset($data['endpoints']) ? $data['endpoints'] : null;
        $this->container['pull_items'] = isset($data['pull_items']) ? $data['pull_items'] : null;
        $this->container['package_builder_target'] = isset($data['package_builder_target']) ? $data['package_builder_target'] : null;
        $this->container['transport_secret_provider_target'] = isset($data['transport_secret_provider_target']) ? $data['transport_secret_provider_target'] : null;
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
     * Gets name
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $name name
     *
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets endpoints
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getEndpoints()
    {
        return $this->container['endpoints'];
    }

    /**
     * Sets endpoints
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $endpoints endpoints
     *
     * @return $this
     */
    public function setEndpoints($endpoints)
    {
        $this->container['endpoints'] = $endpoints;

        return $this;
    }

    /**
     * Gets pull_items
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPullItems()
    {
        return $this->container['pull_items'];
    }

    /**
     * Sets pull_items
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $pull_items pull_items
     *
     * @return $this
     */
    public function setPullItems($pull_items)
    {
        $this->container['pull_items'] = $pull_items;

        return $this;
    }

    /**
     * Gets package_builder_target
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getPackageBuilderTarget()
    {
        return $this->container['package_builder_target'];
    }

    /**
     * Sets package_builder_target
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $package_builder_target package_builder_target
     *
     * @return $this
     */
    public function setPackageBuilderTarget($package_builder_target)
    {
        $this->container['package_builder_target'] = $package_builder_target;

        return $this;
    }

    /**
     * Gets transport_secret_provider_target
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getTransportSecretProviderTarget()
    {
        return $this->container['transport_secret_provider_target'];
    }

    /**
     * Sets transport_secret_provider_target
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $transport_secret_provider_target transport_secret_provider_target
     *
     * @return $this
     */
    public function setTransportSecretProviderTarget($transport_secret_provider_target)
    {
        $this->container['transport_secret_provider_target'] = $transport_secret_provider_target;

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


