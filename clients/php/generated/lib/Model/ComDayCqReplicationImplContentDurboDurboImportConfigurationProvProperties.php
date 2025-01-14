<?php
/**
 * ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties
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
 * ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'preserve_hierarchy_nodes' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'ignore_versioning' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'import_acl' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'save_threshold' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'preserve_user_paths' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'preserve_uuid' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'preserve_uuid_nodetypes' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'preserve_uuid_subtrees' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'auto_commit' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'preserve_hierarchy_nodes' => null,
        'ignore_versioning' => null,
        'import_acl' => null,
        'save_threshold' => null,
        'preserve_user_paths' => null,
        'preserve_uuid' => null,
        'preserve_uuid_nodetypes' => null,
        'preserve_uuid_subtrees' => null,
        'auto_commit' => null
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
        'preserve_hierarchy_nodes' => 'preserve.hierarchy.nodes',
        'ignore_versioning' => 'ignore.versioning',
        'import_acl' => 'import.acl',
        'save_threshold' => 'save.threshold',
        'preserve_user_paths' => 'preserve.user.paths',
        'preserve_uuid' => 'preserve.uuid',
        'preserve_uuid_nodetypes' => 'preserve.uuid.nodetypes',
        'preserve_uuid_subtrees' => 'preserve.uuid.subtrees',
        'auto_commit' => 'auto.commit'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'preserve_hierarchy_nodes' => 'setPreserveHierarchyNodes',
        'ignore_versioning' => 'setIgnoreVersioning',
        'import_acl' => 'setImportAcl',
        'save_threshold' => 'setSaveThreshold',
        'preserve_user_paths' => 'setPreserveUserPaths',
        'preserve_uuid' => 'setPreserveUuid',
        'preserve_uuid_nodetypes' => 'setPreserveUuidNodetypes',
        'preserve_uuid_subtrees' => 'setPreserveUuidSubtrees',
        'auto_commit' => 'setAutoCommit'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'preserve_hierarchy_nodes' => 'getPreserveHierarchyNodes',
        'ignore_versioning' => 'getIgnoreVersioning',
        'import_acl' => 'getImportAcl',
        'save_threshold' => 'getSaveThreshold',
        'preserve_user_paths' => 'getPreserveUserPaths',
        'preserve_uuid' => 'getPreserveUuid',
        'preserve_uuid_nodetypes' => 'getPreserveUuidNodetypes',
        'preserve_uuid_subtrees' => 'getPreserveUuidSubtrees',
        'auto_commit' => 'getAutoCommit'
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
        $this->container['preserve_hierarchy_nodes'] = isset($data['preserve_hierarchy_nodes']) ? $data['preserve_hierarchy_nodes'] : null;
        $this->container['ignore_versioning'] = isset($data['ignore_versioning']) ? $data['ignore_versioning'] : null;
        $this->container['import_acl'] = isset($data['import_acl']) ? $data['import_acl'] : null;
        $this->container['save_threshold'] = isset($data['save_threshold']) ? $data['save_threshold'] : null;
        $this->container['preserve_user_paths'] = isset($data['preserve_user_paths']) ? $data['preserve_user_paths'] : null;
        $this->container['preserve_uuid'] = isset($data['preserve_uuid']) ? $data['preserve_uuid'] : null;
        $this->container['preserve_uuid_nodetypes'] = isset($data['preserve_uuid_nodetypes']) ? $data['preserve_uuid_nodetypes'] : null;
        $this->container['preserve_uuid_subtrees'] = isset($data['preserve_uuid_subtrees']) ? $data['preserve_uuid_subtrees'] : null;
        $this->container['auto_commit'] = isset($data['auto_commit']) ? $data['auto_commit'] : null;
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
     * Gets preserve_hierarchy_nodes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getPreserveHierarchyNodes()
    {
        return $this->container['preserve_hierarchy_nodes'];
    }

    /**
     * Sets preserve_hierarchy_nodes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $preserve_hierarchy_nodes preserve_hierarchy_nodes
     *
     * @return $this
     */
    public function setPreserveHierarchyNodes($preserve_hierarchy_nodes)
    {
        $this->container['preserve_hierarchy_nodes'] = $preserve_hierarchy_nodes;

        return $this;
    }

    /**
     * Gets ignore_versioning
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getIgnoreVersioning()
    {
        return $this->container['ignore_versioning'];
    }

    /**
     * Sets ignore_versioning
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $ignore_versioning ignore_versioning
     *
     * @return $this
     */
    public function setIgnoreVersioning($ignore_versioning)
    {
        $this->container['ignore_versioning'] = $ignore_versioning;

        return $this;
    }

    /**
     * Gets import_acl
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getImportAcl()
    {
        return $this->container['import_acl'];
    }

    /**
     * Sets import_acl
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $import_acl import_acl
     *
     * @return $this
     */
    public function setImportAcl($import_acl)
    {
        $this->container['import_acl'] = $import_acl;

        return $this;
    }

    /**
     * Gets save_threshold
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getSaveThreshold()
    {
        return $this->container['save_threshold'];
    }

    /**
     * Sets save_threshold
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $save_threshold save_threshold
     *
     * @return $this
     */
    public function setSaveThreshold($save_threshold)
    {
        $this->container['save_threshold'] = $save_threshold;

        return $this;
    }

    /**
     * Gets preserve_user_paths
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getPreserveUserPaths()
    {
        return $this->container['preserve_user_paths'];
    }

    /**
     * Sets preserve_user_paths
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $preserve_user_paths preserve_user_paths
     *
     * @return $this
     */
    public function setPreserveUserPaths($preserve_user_paths)
    {
        $this->container['preserve_user_paths'] = $preserve_user_paths;

        return $this;
    }

    /**
     * Gets preserve_uuid
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getPreserveUuid()
    {
        return $this->container['preserve_uuid'];
    }

    /**
     * Sets preserve_uuid
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $preserve_uuid preserve_uuid
     *
     * @return $this
     */
    public function setPreserveUuid($preserve_uuid)
    {
        $this->container['preserve_uuid'] = $preserve_uuid;

        return $this;
    }

    /**
     * Gets preserve_uuid_nodetypes
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getPreserveUuidNodetypes()
    {
        return $this->container['preserve_uuid_nodetypes'];
    }

    /**
     * Sets preserve_uuid_nodetypes
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $preserve_uuid_nodetypes preserve_uuid_nodetypes
     *
     * @return $this
     */
    public function setPreserveUuidNodetypes($preserve_uuid_nodetypes)
    {
        $this->container['preserve_uuid_nodetypes'] = $preserve_uuid_nodetypes;

        return $this;
    }

    /**
     * Gets preserve_uuid_subtrees
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getPreserveUuidSubtrees()
    {
        return $this->container['preserve_uuid_subtrees'];
    }

    /**
     * Sets preserve_uuid_subtrees
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $preserve_uuid_subtrees preserve_uuid_subtrees
     *
     * @return $this
     */
    public function setPreserveUuidSubtrees($preserve_uuid_subtrees)
    {
        $this->container['preserve_uuid_subtrees'] = $preserve_uuid_subtrees;

        return $this;
    }

    /**
     * Gets auto_commit
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getAutoCommit()
    {
        return $this->container['auto_commit'];
    }

    /**
     * Sets auto_commit
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $auto_commit auto_commit
     *
     * @return $this
     */
    public function setAutoCommit($auto_commit)
    {
        $this->container['auto_commit'] = $auto_commit;

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


