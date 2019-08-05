<?php
/**
 * ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties
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
 * ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'linkcheckertransformer_disable_rewriting' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'linkcheckertransformer_disable_checking' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'linkcheckertransformer_map_cache_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'linkcheckertransformer_strict_extension_check' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'linkcheckertransformer_strip_htmlt_extension' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'linkcheckertransformer_rewrite_elements' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'linkcheckertransformer_strip_extension_path_blacklist' => '\OpenAPI\Client\Model\ConfigNodePropertyArray'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'linkcheckertransformer_disable_rewriting' => null,
        'linkcheckertransformer_disable_checking' => null,
        'linkcheckertransformer_map_cache_size' => null,
        'linkcheckertransformer_strict_extension_check' => null,
        'linkcheckertransformer_strip_htmlt_extension' => null,
        'linkcheckertransformer_rewrite_elements' => null,
        'linkcheckertransformer_strip_extension_path_blacklist' => null
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
        'linkcheckertransformer_disable_rewriting' => 'linkcheckertransformer.disableRewriting',
        'linkcheckertransformer_disable_checking' => 'linkcheckertransformer.disableChecking',
        'linkcheckertransformer_map_cache_size' => 'linkcheckertransformer.mapCacheSize',
        'linkcheckertransformer_strict_extension_check' => 'linkcheckertransformer.strictExtensionCheck',
        'linkcheckertransformer_strip_htmlt_extension' => 'linkcheckertransformer.stripHtmltExtension',
        'linkcheckertransformer_rewrite_elements' => 'linkcheckertransformer.rewriteElements',
        'linkcheckertransformer_strip_extension_path_blacklist' => 'linkcheckertransformer.stripExtensionPathBlacklist'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'linkcheckertransformer_disable_rewriting' => 'setLinkcheckertransformerDisableRewriting',
        'linkcheckertransformer_disable_checking' => 'setLinkcheckertransformerDisableChecking',
        'linkcheckertransformer_map_cache_size' => 'setLinkcheckertransformerMapCacheSize',
        'linkcheckertransformer_strict_extension_check' => 'setLinkcheckertransformerStrictExtensionCheck',
        'linkcheckertransformer_strip_htmlt_extension' => 'setLinkcheckertransformerStripHtmltExtension',
        'linkcheckertransformer_rewrite_elements' => 'setLinkcheckertransformerRewriteElements',
        'linkcheckertransformer_strip_extension_path_blacklist' => 'setLinkcheckertransformerStripExtensionPathBlacklist'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'linkcheckertransformer_disable_rewriting' => 'getLinkcheckertransformerDisableRewriting',
        'linkcheckertransformer_disable_checking' => 'getLinkcheckertransformerDisableChecking',
        'linkcheckertransformer_map_cache_size' => 'getLinkcheckertransformerMapCacheSize',
        'linkcheckertransformer_strict_extension_check' => 'getLinkcheckertransformerStrictExtensionCheck',
        'linkcheckertransformer_strip_htmlt_extension' => 'getLinkcheckertransformerStripHtmltExtension',
        'linkcheckertransformer_rewrite_elements' => 'getLinkcheckertransformerRewriteElements',
        'linkcheckertransformer_strip_extension_path_blacklist' => 'getLinkcheckertransformerStripExtensionPathBlacklist'
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
        $this->container['linkcheckertransformer_disable_rewriting'] = isset($data['linkcheckertransformer_disable_rewriting']) ? $data['linkcheckertransformer_disable_rewriting'] : null;
        $this->container['linkcheckertransformer_disable_checking'] = isset($data['linkcheckertransformer_disable_checking']) ? $data['linkcheckertransformer_disable_checking'] : null;
        $this->container['linkcheckertransformer_map_cache_size'] = isset($data['linkcheckertransformer_map_cache_size']) ? $data['linkcheckertransformer_map_cache_size'] : null;
        $this->container['linkcheckertransformer_strict_extension_check'] = isset($data['linkcheckertransformer_strict_extension_check']) ? $data['linkcheckertransformer_strict_extension_check'] : null;
        $this->container['linkcheckertransformer_strip_htmlt_extension'] = isset($data['linkcheckertransformer_strip_htmlt_extension']) ? $data['linkcheckertransformer_strip_htmlt_extension'] : null;
        $this->container['linkcheckertransformer_rewrite_elements'] = isset($data['linkcheckertransformer_rewrite_elements']) ? $data['linkcheckertransformer_rewrite_elements'] : null;
        $this->container['linkcheckertransformer_strip_extension_path_blacklist'] = isset($data['linkcheckertransformer_strip_extension_path_blacklist']) ? $data['linkcheckertransformer_strip_extension_path_blacklist'] : null;
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
     * Gets linkcheckertransformer_disable_rewriting
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getLinkcheckertransformerDisableRewriting()
    {
        return $this->container['linkcheckertransformer_disable_rewriting'];
    }

    /**
     * Sets linkcheckertransformer_disable_rewriting
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $linkcheckertransformer_disable_rewriting linkcheckertransformer_disable_rewriting
     *
     * @return $this
     */
    public function setLinkcheckertransformerDisableRewriting($linkcheckertransformer_disable_rewriting)
    {
        $this->container['linkcheckertransformer_disable_rewriting'] = $linkcheckertransformer_disable_rewriting;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_disable_checking
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getLinkcheckertransformerDisableChecking()
    {
        return $this->container['linkcheckertransformer_disable_checking'];
    }

    /**
     * Sets linkcheckertransformer_disable_checking
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $linkcheckertransformer_disable_checking linkcheckertransformer_disable_checking
     *
     * @return $this
     */
    public function setLinkcheckertransformerDisableChecking($linkcheckertransformer_disable_checking)
    {
        $this->container['linkcheckertransformer_disable_checking'] = $linkcheckertransformer_disable_checking;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_map_cache_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getLinkcheckertransformerMapCacheSize()
    {
        return $this->container['linkcheckertransformer_map_cache_size'];
    }

    /**
     * Sets linkcheckertransformer_map_cache_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $linkcheckertransformer_map_cache_size linkcheckertransformer_map_cache_size
     *
     * @return $this
     */
    public function setLinkcheckertransformerMapCacheSize($linkcheckertransformer_map_cache_size)
    {
        $this->container['linkcheckertransformer_map_cache_size'] = $linkcheckertransformer_map_cache_size;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_strict_extension_check
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getLinkcheckertransformerStrictExtensionCheck()
    {
        return $this->container['linkcheckertransformer_strict_extension_check'];
    }

    /**
     * Sets linkcheckertransformer_strict_extension_check
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $linkcheckertransformer_strict_extension_check linkcheckertransformer_strict_extension_check
     *
     * @return $this
     */
    public function setLinkcheckertransformerStrictExtensionCheck($linkcheckertransformer_strict_extension_check)
    {
        $this->container['linkcheckertransformer_strict_extension_check'] = $linkcheckertransformer_strict_extension_check;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_strip_htmlt_extension
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getLinkcheckertransformerStripHtmltExtension()
    {
        return $this->container['linkcheckertransformer_strip_htmlt_extension'];
    }

    /**
     * Sets linkcheckertransformer_strip_htmlt_extension
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $linkcheckertransformer_strip_htmlt_extension linkcheckertransformer_strip_htmlt_extension
     *
     * @return $this
     */
    public function setLinkcheckertransformerStripHtmltExtension($linkcheckertransformer_strip_htmlt_extension)
    {
        $this->container['linkcheckertransformer_strip_htmlt_extension'] = $linkcheckertransformer_strip_htmlt_extension;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_rewrite_elements
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getLinkcheckertransformerRewriteElements()
    {
        return $this->container['linkcheckertransformer_rewrite_elements'];
    }

    /**
     * Sets linkcheckertransformer_rewrite_elements
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $linkcheckertransformer_rewrite_elements linkcheckertransformer_rewrite_elements
     *
     * @return $this
     */
    public function setLinkcheckertransformerRewriteElements($linkcheckertransformer_rewrite_elements)
    {
        $this->container['linkcheckertransformer_rewrite_elements'] = $linkcheckertransformer_rewrite_elements;

        return $this;
    }

    /**
     * Gets linkcheckertransformer_strip_extension_path_blacklist
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getLinkcheckertransformerStripExtensionPathBlacklist()
    {
        return $this->container['linkcheckertransformer_strip_extension_path_blacklist'];
    }

    /**
     * Sets linkcheckertransformer_strip_extension_path_blacklist
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $linkcheckertransformer_strip_extension_path_blacklist linkcheckertransformer_strip_extension_path_blacklist
     *
     * @return $this
     */
    public function setLinkcheckertransformerStripExtensionPathBlacklist($linkcheckertransformer_strip_extension_path_blacklist)
    {
        $this->container['linkcheckertransformer_strip_extension_path_blacklist'] = $linkcheckertransformer_strip_extension_path_blacklist;

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

