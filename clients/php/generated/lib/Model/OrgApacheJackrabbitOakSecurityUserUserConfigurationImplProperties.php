<?php
/**
 * OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties
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
 * OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'orgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'users_path' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'groups_path' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'system_relative_path' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'default_depth' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'import_behavior' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown',
        'password_hash_algorithm' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'password_hash_iterations' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'password_salt_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'omit_admin_pw' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'support_auto_save' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'password_max_age' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'initial_password_change' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'password_history_size' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'password_expiry_for_admin' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean',
        'cache_expiration' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'enable_rfc7613_usercase_mapped_profile' => '\OpenAPI\Client\Model\ConfigNodePropertyBoolean'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'users_path' => null,
        'groups_path' => null,
        'system_relative_path' => null,
        'default_depth' => null,
        'import_behavior' => null,
        'password_hash_algorithm' => null,
        'password_hash_iterations' => null,
        'password_salt_size' => null,
        'omit_admin_pw' => null,
        'support_auto_save' => null,
        'password_max_age' => null,
        'initial_password_change' => null,
        'password_history_size' => null,
        'password_expiry_for_admin' => null,
        'cache_expiration' => null,
        'enable_rfc7613_usercase_mapped_profile' => null
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
        'users_path' => 'usersPath',
        'groups_path' => 'groupsPath',
        'system_relative_path' => 'systemRelativePath',
        'default_depth' => 'defaultDepth',
        'import_behavior' => 'importBehavior',
        'password_hash_algorithm' => 'passwordHashAlgorithm',
        'password_hash_iterations' => 'passwordHashIterations',
        'password_salt_size' => 'passwordSaltSize',
        'omit_admin_pw' => 'omitAdminPw',
        'support_auto_save' => 'supportAutoSave',
        'password_max_age' => 'passwordMaxAge',
        'initial_password_change' => 'initialPasswordChange',
        'password_history_size' => 'passwordHistorySize',
        'password_expiry_for_admin' => 'passwordExpiryForAdmin',
        'cache_expiration' => 'cacheExpiration',
        'enable_rfc7613_usercase_mapped_profile' => 'enableRFC7613UsercaseMappedProfile'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'users_path' => 'setUsersPath',
        'groups_path' => 'setGroupsPath',
        'system_relative_path' => 'setSystemRelativePath',
        'default_depth' => 'setDefaultDepth',
        'import_behavior' => 'setImportBehavior',
        'password_hash_algorithm' => 'setPasswordHashAlgorithm',
        'password_hash_iterations' => 'setPasswordHashIterations',
        'password_salt_size' => 'setPasswordSaltSize',
        'omit_admin_pw' => 'setOmitAdminPw',
        'support_auto_save' => 'setSupportAutoSave',
        'password_max_age' => 'setPasswordMaxAge',
        'initial_password_change' => 'setInitialPasswordChange',
        'password_history_size' => 'setPasswordHistorySize',
        'password_expiry_for_admin' => 'setPasswordExpiryForAdmin',
        'cache_expiration' => 'setCacheExpiration',
        'enable_rfc7613_usercase_mapped_profile' => 'setEnableRfc7613UsercaseMappedProfile'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'users_path' => 'getUsersPath',
        'groups_path' => 'getGroupsPath',
        'system_relative_path' => 'getSystemRelativePath',
        'default_depth' => 'getDefaultDepth',
        'import_behavior' => 'getImportBehavior',
        'password_hash_algorithm' => 'getPasswordHashAlgorithm',
        'password_hash_iterations' => 'getPasswordHashIterations',
        'password_salt_size' => 'getPasswordSaltSize',
        'omit_admin_pw' => 'getOmitAdminPw',
        'support_auto_save' => 'getSupportAutoSave',
        'password_max_age' => 'getPasswordMaxAge',
        'initial_password_change' => 'getInitialPasswordChange',
        'password_history_size' => 'getPasswordHistorySize',
        'password_expiry_for_admin' => 'getPasswordExpiryForAdmin',
        'cache_expiration' => 'getCacheExpiration',
        'enable_rfc7613_usercase_mapped_profile' => 'getEnableRfc7613UsercaseMappedProfile'
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
        $this->container['users_path'] = isset($data['users_path']) ? $data['users_path'] : null;
        $this->container['groups_path'] = isset($data['groups_path']) ? $data['groups_path'] : null;
        $this->container['system_relative_path'] = isset($data['system_relative_path']) ? $data['system_relative_path'] : null;
        $this->container['default_depth'] = isset($data['default_depth']) ? $data['default_depth'] : null;
        $this->container['import_behavior'] = isset($data['import_behavior']) ? $data['import_behavior'] : null;
        $this->container['password_hash_algorithm'] = isset($data['password_hash_algorithm']) ? $data['password_hash_algorithm'] : null;
        $this->container['password_hash_iterations'] = isset($data['password_hash_iterations']) ? $data['password_hash_iterations'] : null;
        $this->container['password_salt_size'] = isset($data['password_salt_size']) ? $data['password_salt_size'] : null;
        $this->container['omit_admin_pw'] = isset($data['omit_admin_pw']) ? $data['omit_admin_pw'] : null;
        $this->container['support_auto_save'] = isset($data['support_auto_save']) ? $data['support_auto_save'] : null;
        $this->container['password_max_age'] = isset($data['password_max_age']) ? $data['password_max_age'] : null;
        $this->container['initial_password_change'] = isset($data['initial_password_change']) ? $data['initial_password_change'] : null;
        $this->container['password_history_size'] = isset($data['password_history_size']) ? $data['password_history_size'] : null;
        $this->container['password_expiry_for_admin'] = isset($data['password_expiry_for_admin']) ? $data['password_expiry_for_admin'] : null;
        $this->container['cache_expiration'] = isset($data['cache_expiration']) ? $data['cache_expiration'] : null;
        $this->container['enable_rfc7613_usercase_mapped_profile'] = isset($data['enable_rfc7613_usercase_mapped_profile']) ? $data['enable_rfc7613_usercase_mapped_profile'] : null;
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
     * Gets users_path
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getUsersPath()
    {
        return $this->container['users_path'];
    }

    /**
     * Sets users_path
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $users_path users_path
     *
     * @return $this
     */
    public function setUsersPath($users_path)
    {
        $this->container['users_path'] = $users_path;

        return $this;
    }

    /**
     * Gets groups_path
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getGroupsPath()
    {
        return $this->container['groups_path'];
    }

    /**
     * Sets groups_path
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $groups_path groups_path
     *
     * @return $this
     */
    public function setGroupsPath($groups_path)
    {
        $this->container['groups_path'] = $groups_path;

        return $this;
    }

    /**
     * Gets system_relative_path
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getSystemRelativePath()
    {
        return $this->container['system_relative_path'];
    }

    /**
     * Sets system_relative_path
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $system_relative_path system_relative_path
     *
     * @return $this
     */
    public function setSystemRelativePath($system_relative_path)
    {
        $this->container['system_relative_path'] = $system_relative_path;

        return $this;
    }

    /**
     * Gets default_depth
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getDefaultDepth()
    {
        return $this->container['default_depth'];
    }

    /**
     * Sets default_depth
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $default_depth default_depth
     *
     * @return $this
     */
    public function setDefaultDepth($default_depth)
    {
        $this->container['default_depth'] = $default_depth;

        return $this;
    }

    /**
     * Gets import_behavior
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getImportBehavior()
    {
        return $this->container['import_behavior'];
    }

    /**
     * Sets import_behavior
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $import_behavior import_behavior
     *
     * @return $this
     */
    public function setImportBehavior($import_behavior)
    {
        $this->container['import_behavior'] = $import_behavior;

        return $this;
    }

    /**
     * Gets password_hash_algorithm
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getPasswordHashAlgorithm()
    {
        return $this->container['password_hash_algorithm'];
    }

    /**
     * Sets password_hash_algorithm
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $password_hash_algorithm password_hash_algorithm
     *
     * @return $this
     */
    public function setPasswordHashAlgorithm($password_hash_algorithm)
    {
        $this->container['password_hash_algorithm'] = $password_hash_algorithm;

        return $this;
    }

    /**
     * Gets password_hash_iterations
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordHashIterations()
    {
        return $this->container['password_hash_iterations'];
    }

    /**
     * Sets password_hash_iterations
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $password_hash_iterations password_hash_iterations
     *
     * @return $this
     */
    public function setPasswordHashIterations($password_hash_iterations)
    {
        $this->container['password_hash_iterations'] = $password_hash_iterations;

        return $this;
    }

    /**
     * Gets password_salt_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordSaltSize()
    {
        return $this->container['password_salt_size'];
    }

    /**
     * Sets password_salt_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $password_salt_size password_salt_size
     *
     * @return $this
     */
    public function setPasswordSaltSize($password_salt_size)
    {
        $this->container['password_salt_size'] = $password_salt_size;

        return $this;
    }

    /**
     * Gets omit_admin_pw
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getOmitAdminPw()
    {
        return $this->container['omit_admin_pw'];
    }

    /**
     * Sets omit_admin_pw
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $omit_admin_pw omit_admin_pw
     *
     * @return $this
     */
    public function setOmitAdminPw($omit_admin_pw)
    {
        $this->container['omit_admin_pw'] = $omit_admin_pw;

        return $this;
    }

    /**
     * Gets support_auto_save
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getSupportAutoSave()
    {
        return $this->container['support_auto_save'];
    }

    /**
     * Sets support_auto_save
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $support_auto_save support_auto_save
     *
     * @return $this
     */
    public function setSupportAutoSave($support_auto_save)
    {
        $this->container['support_auto_save'] = $support_auto_save;

        return $this;
    }

    /**
     * Gets password_max_age
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordMaxAge()
    {
        return $this->container['password_max_age'];
    }

    /**
     * Sets password_max_age
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $password_max_age password_max_age
     *
     * @return $this
     */
    public function setPasswordMaxAge($password_max_age)
    {
        $this->container['password_max_age'] = $password_max_age;

        return $this;
    }

    /**
     * Gets initial_password_change
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getInitialPasswordChange()
    {
        return $this->container['initial_password_change'];
    }

    /**
     * Sets initial_password_change
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $initial_password_change initial_password_change
     *
     * @return $this
     */
    public function setInitialPasswordChange($initial_password_change)
    {
        $this->container['initial_password_change'] = $initial_password_change;

        return $this;
    }

    /**
     * Gets password_history_size
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordHistorySize()
    {
        return $this->container['password_history_size'];
    }

    /**
     * Sets password_history_size
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $password_history_size password_history_size
     *
     * @return $this
     */
    public function setPasswordHistorySize($password_history_size)
    {
        $this->container['password_history_size'] = $password_history_size;

        return $this;
    }

    /**
     * Gets password_expiry_for_admin
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getPasswordExpiryForAdmin()
    {
        return $this->container['password_expiry_for_admin'];
    }

    /**
     * Sets password_expiry_for_admin
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $password_expiry_for_admin password_expiry_for_admin
     *
     * @return $this
     */
    public function setPasswordExpiryForAdmin($password_expiry_for_admin)
    {
        $this->container['password_expiry_for_admin'] = $password_expiry_for_admin;

        return $this;
    }

    /**
     * Gets cache_expiration
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getCacheExpiration()
    {
        return $this->container['cache_expiration'];
    }

    /**
     * Sets cache_expiration
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $cache_expiration cache_expiration
     *
     * @return $this
     */
    public function setCacheExpiration($cache_expiration)
    {
        $this->container['cache_expiration'] = $cache_expiration;

        return $this;
    }

    /**
     * Gets enable_rfc7613_usercase_mapped_profile
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableRfc7613UsercaseMappedProfile()
    {
        return $this->container['enable_rfc7613_usercase_mapped_profile'];
    }

    /**
     * Sets enable_rfc7613_usercase_mapped_profile
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyBoolean|null $enable_rfc7613_usercase_mapped_profile enable_rfc7613_usercase_mapped_profile
     *
     * @return $this
     */
    public function setEnableRfc7613UsercaseMappedProfile($enable_rfc7613_usercase_mapped_profile)
    {
        $this->container['enable_rfc7613_usercase_mapped_profile'] = $enable_rfc7613_usercase_mapped_profile;

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


