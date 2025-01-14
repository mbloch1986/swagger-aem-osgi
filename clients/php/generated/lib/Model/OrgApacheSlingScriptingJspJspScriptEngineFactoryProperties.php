<?php
/**
 * OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties
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
 * OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheSlingScriptingJspJspScriptEngineFactoryProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'jasper_compiler_target_vm' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'jasper_compiler_source_vm' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'jasper_classdebuginfo' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_enable_pooling' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_ie_class_id' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'jasper_gen_string_as_char_array' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_keepgenerated' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_mappedfile' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_trim_spaces' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'jasper_display_source_fragments' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'default_is_session' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'jasper_compiler_target_vm' => null,
        'jasper_compiler_source_vm' => null,
        'jasper_classdebuginfo' => null,
        'jasper_enable_pooling' => null,
        'jasper_ie_class_id' => null,
        'jasper_gen_string_as_char_array' => null,
        'jasper_keepgenerated' => null,
        'jasper_mappedfile' => null,
        'jasper_trim_spaces' => null,
        'jasper_display_source_fragments' => null,
        'default_is_session' => null
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
        'jasper_compiler_target_vm' => 'jasper.compilerTargetVM',
        'jasper_compiler_source_vm' => 'jasper.compilerSourceVM',
        'jasper_classdebuginfo' => 'jasper.classdebuginfo',
        'jasper_enable_pooling' => 'jasper.enablePooling',
        'jasper_ie_class_id' => 'jasper.ieClassId',
        'jasper_gen_string_as_char_array' => 'jasper.genStringAsCharArray',
        'jasper_keepgenerated' => 'jasper.keepgenerated',
        'jasper_mappedfile' => 'jasper.mappedfile',
        'jasper_trim_spaces' => 'jasper.trimSpaces',
        'jasper_display_source_fragments' => 'jasper.displaySourceFragments',
        'default_is_session' => 'default.is.session'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'jasper_compiler_target_vm' => 'setJasperCompilerTargetVm',
        'jasper_compiler_source_vm' => 'setJasperCompilerSourceVm',
        'jasper_classdebuginfo' => 'setJasperClassdebuginfo',
        'jasper_enable_pooling' => 'setJasperEnablePooling',
        'jasper_ie_class_id' => 'setJasperIeClassId',
        'jasper_gen_string_as_char_array' => 'setJasperGenStringAsCharArray',
        'jasper_keepgenerated' => 'setJasperKeepgenerated',
        'jasper_mappedfile' => 'setJasperMappedfile',
        'jasper_trim_spaces' => 'setJasperTrimSpaces',
        'jasper_display_source_fragments' => 'setJasperDisplaySourceFragments',
        'default_is_session' => 'setDefaultIsSession'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'jasper_compiler_target_vm' => 'getJasperCompilerTargetVm',
        'jasper_compiler_source_vm' => 'getJasperCompilerSourceVm',
        'jasper_classdebuginfo' => 'getJasperClassdebuginfo',
        'jasper_enable_pooling' => 'getJasperEnablePooling',
        'jasper_ie_class_id' => 'getJasperIeClassId',
        'jasper_gen_string_as_char_array' => 'getJasperGenStringAsCharArray',
        'jasper_keepgenerated' => 'getJasperKeepgenerated',
        'jasper_mappedfile' => 'getJasperMappedfile',
        'jasper_trim_spaces' => 'getJasperTrimSpaces',
        'jasper_display_source_fragments' => 'getJasperDisplaySourceFragments',
        'default_is_session' => 'getDefaultIsSession'
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
        $this->container['jasper_compiler_target_vm'] = isset($data['jasper_compiler_target_vm']) ? $data['jasper_compiler_target_vm'] : null;
        $this->container['jasper_compiler_source_vm'] = isset($data['jasper_compiler_source_vm']) ? $data['jasper_compiler_source_vm'] : null;
        $this->container['jasper_classdebuginfo'] = isset($data['jasper_classdebuginfo']) ? $data['jasper_classdebuginfo'] : null;
        $this->container['jasper_enable_pooling'] = isset($data['jasper_enable_pooling']) ? $data['jasper_enable_pooling'] : null;
        $this->container['jasper_ie_class_id'] = isset($data['jasper_ie_class_id']) ? $data['jasper_ie_class_id'] : null;
        $this->container['jasper_gen_string_as_char_array'] = isset($data['jasper_gen_string_as_char_array']) ? $data['jasper_gen_string_as_char_array'] : null;
        $this->container['jasper_keepgenerated'] = isset($data['jasper_keepgenerated']) ? $data['jasper_keepgenerated'] : null;
        $this->container['jasper_mappedfile'] = isset($data['jasper_mappedfile']) ? $data['jasper_mappedfile'] : null;
        $this->container['jasper_trim_spaces'] = isset($data['jasper_trim_spaces']) ? $data['jasper_trim_spaces'] : null;
        $this->container['jasper_display_source_fragments'] = isset($data['jasper_display_source_fragments']) ? $data['jasper_display_source_fragments'] : null;
        $this->container['default_is_session'] = isset($data['default_is_session']) ? $data['default_is_session'] : null;
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
     * Gets jasper_compiler_target_vm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getJasperCompilerTargetVm()
    {
        return $this->container['jasper_compiler_target_vm'];
    }

    /**
     * Sets jasper_compiler_target_vm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $jasper_compiler_target_vm jasper_compiler_target_vm
     *
     * @return $this
     */
    public function setJasperCompilerTargetVm($jasper_compiler_target_vm)
    {
        $this->container['jasper_compiler_target_vm'] = $jasper_compiler_target_vm;

        return $this;
    }

    /**
     * Gets jasper_compiler_source_vm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getJasperCompilerSourceVm()
    {
        return $this->container['jasper_compiler_source_vm'];
    }

    /**
     * Sets jasper_compiler_source_vm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $jasper_compiler_source_vm jasper_compiler_source_vm
     *
     * @return $this
     */
    public function setJasperCompilerSourceVm($jasper_compiler_source_vm)
    {
        $this->container['jasper_compiler_source_vm'] = $jasper_compiler_source_vm;

        return $this;
    }

    /**
     * Gets jasper_classdebuginfo
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperClassdebuginfo()
    {
        return $this->container['jasper_classdebuginfo'];
    }

    /**
     * Sets jasper_classdebuginfo
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_classdebuginfo jasper_classdebuginfo
     *
     * @return $this
     */
    public function setJasperClassdebuginfo($jasper_classdebuginfo)
    {
        $this->container['jasper_classdebuginfo'] = $jasper_classdebuginfo;

        return $this;
    }

    /**
     * Gets jasper_enable_pooling
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperEnablePooling()
    {
        return $this->container['jasper_enable_pooling'];
    }

    /**
     * Sets jasper_enable_pooling
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_enable_pooling jasper_enable_pooling
     *
     * @return $this
     */
    public function setJasperEnablePooling($jasper_enable_pooling)
    {
        $this->container['jasper_enable_pooling'] = $jasper_enable_pooling;

        return $this;
    }

    /**
     * Gets jasper_ie_class_id
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getJasperIeClassId()
    {
        return $this->container['jasper_ie_class_id'];
    }

    /**
     * Sets jasper_ie_class_id
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $jasper_ie_class_id jasper_ie_class_id
     *
     * @return $this
     */
    public function setJasperIeClassId($jasper_ie_class_id)
    {
        $this->container['jasper_ie_class_id'] = $jasper_ie_class_id;

        return $this;
    }

    /**
     * Gets jasper_gen_string_as_char_array
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperGenStringAsCharArray()
    {
        return $this->container['jasper_gen_string_as_char_array'];
    }

    /**
     * Sets jasper_gen_string_as_char_array
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_gen_string_as_char_array jasper_gen_string_as_char_array
     *
     * @return $this
     */
    public function setJasperGenStringAsCharArray($jasper_gen_string_as_char_array)
    {
        $this->container['jasper_gen_string_as_char_array'] = $jasper_gen_string_as_char_array;

        return $this;
    }

    /**
     * Gets jasper_keepgenerated
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperKeepgenerated()
    {
        return $this->container['jasper_keepgenerated'];
    }

    /**
     * Sets jasper_keepgenerated
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_keepgenerated jasper_keepgenerated
     *
     * @return $this
     */
    public function setJasperKeepgenerated($jasper_keepgenerated)
    {
        $this->container['jasper_keepgenerated'] = $jasper_keepgenerated;

        return $this;
    }

    /**
     * Gets jasper_mappedfile
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperMappedfile()
    {
        return $this->container['jasper_mappedfile'];
    }

    /**
     * Sets jasper_mappedfile
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_mappedfile jasper_mappedfile
     *
     * @return $this
     */
    public function setJasperMappedfile($jasper_mappedfile)
    {
        $this->container['jasper_mappedfile'] = $jasper_mappedfile;

        return $this;
    }

    /**
     * Gets jasper_trim_spaces
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperTrimSpaces()
    {
        return $this->container['jasper_trim_spaces'];
    }

    /**
     * Sets jasper_trim_spaces
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_trim_spaces jasper_trim_spaces
     *
     * @return $this
     */
    public function setJasperTrimSpaces($jasper_trim_spaces)
    {
        $this->container['jasper_trim_spaces'] = $jasper_trim_spaces;

        return $this;
    }

    /**
     * Gets jasper_display_source_fragments
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperDisplaySourceFragments()
    {
        return $this->container['jasper_display_source_fragments'];
    }

    /**
     * Sets jasper_display_source_fragments
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $jasper_display_source_fragments jasper_display_source_fragments
     *
     * @return $this
     */
    public function setJasperDisplaySourceFragments($jasper_display_source_fragments)
    {
        $this->container['jasper_display_source_fragments'] = $jasper_display_source_fragments;

        return $this;
    }

    /**
     * Gets default_is_session
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getDefaultIsSession()
    {
        return $this->container['default_is_session'];
    }

    /**
     * Sets default_is_session
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $default_is_session default_is_session
     *
     * @return $this
     */
    public function setDefaultIsSession($default_is_session)
    {
        $this->container['default_is_session'] = $default_is_session;

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


