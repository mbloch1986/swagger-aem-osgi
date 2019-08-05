<?php
/**
 * ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties
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
 * ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'comAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'com_adobe_granite_jetty_ssl_port' => '\OpenAPI\Client\Model\ConfigNodePropertyInteger',
        'com_adobe_granite_jetty_ssl_keystore_user' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'com_adobe_granite_jetty_ssl_keystore_password' => '\OpenAPI\Client\Model\ConfigNodePropertyString',
        'com_adobe_granite_jetty_ssl_ciphersuites_excluded' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'com_adobe_granite_jetty_ssl_ciphersuites_included' => '\OpenAPI\Client\Model\ConfigNodePropertyArray',
        'com_adobe_granite_jetty_ssl_client_certificate' => '\OpenAPI\Client\Model\ConfigNodePropertyDropDown'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'com_adobe_granite_jetty_ssl_port' => null,
        'com_adobe_granite_jetty_ssl_keystore_user' => null,
        'com_adobe_granite_jetty_ssl_keystore_password' => null,
        'com_adobe_granite_jetty_ssl_ciphersuites_excluded' => null,
        'com_adobe_granite_jetty_ssl_ciphersuites_included' => null,
        'com_adobe_granite_jetty_ssl_client_certificate' => null
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
        'com_adobe_granite_jetty_ssl_port' => 'com.adobe.granite.jetty.ssl.port',
        'com_adobe_granite_jetty_ssl_keystore_user' => 'com.adobe.granite.jetty.ssl.keystore.user',
        'com_adobe_granite_jetty_ssl_keystore_password' => 'com.adobe.granite.jetty.ssl.keystore.password',
        'com_adobe_granite_jetty_ssl_ciphersuites_excluded' => 'com.adobe.granite.jetty.ssl.ciphersuites.excluded',
        'com_adobe_granite_jetty_ssl_ciphersuites_included' => 'com.adobe.granite.jetty.ssl.ciphersuites.included',
        'com_adobe_granite_jetty_ssl_client_certificate' => 'com.adobe.granite.jetty.ssl.client.certificate'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'com_adobe_granite_jetty_ssl_port' => 'setComAdobeGraniteJettySslPort',
        'com_adobe_granite_jetty_ssl_keystore_user' => 'setComAdobeGraniteJettySslKeystoreUser',
        'com_adobe_granite_jetty_ssl_keystore_password' => 'setComAdobeGraniteJettySslKeystorePassword',
        'com_adobe_granite_jetty_ssl_ciphersuites_excluded' => 'setComAdobeGraniteJettySslCiphersuitesExcluded',
        'com_adobe_granite_jetty_ssl_ciphersuites_included' => 'setComAdobeGraniteJettySslCiphersuitesIncluded',
        'com_adobe_granite_jetty_ssl_client_certificate' => 'setComAdobeGraniteJettySslClientCertificate'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'com_adobe_granite_jetty_ssl_port' => 'getComAdobeGraniteJettySslPort',
        'com_adobe_granite_jetty_ssl_keystore_user' => 'getComAdobeGraniteJettySslKeystoreUser',
        'com_adobe_granite_jetty_ssl_keystore_password' => 'getComAdobeGraniteJettySslKeystorePassword',
        'com_adobe_granite_jetty_ssl_ciphersuites_excluded' => 'getComAdobeGraniteJettySslCiphersuitesExcluded',
        'com_adobe_granite_jetty_ssl_ciphersuites_included' => 'getComAdobeGraniteJettySslCiphersuitesIncluded',
        'com_adobe_granite_jetty_ssl_client_certificate' => 'getComAdobeGraniteJettySslClientCertificate'
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
        $this->container['com_adobe_granite_jetty_ssl_port'] = isset($data['com_adobe_granite_jetty_ssl_port']) ? $data['com_adobe_granite_jetty_ssl_port'] : null;
        $this->container['com_adobe_granite_jetty_ssl_keystore_user'] = isset($data['com_adobe_granite_jetty_ssl_keystore_user']) ? $data['com_adobe_granite_jetty_ssl_keystore_user'] : null;
        $this->container['com_adobe_granite_jetty_ssl_keystore_password'] = isset($data['com_adobe_granite_jetty_ssl_keystore_password']) ? $data['com_adobe_granite_jetty_ssl_keystore_password'] : null;
        $this->container['com_adobe_granite_jetty_ssl_ciphersuites_excluded'] = isset($data['com_adobe_granite_jetty_ssl_ciphersuites_excluded']) ? $data['com_adobe_granite_jetty_ssl_ciphersuites_excluded'] : null;
        $this->container['com_adobe_granite_jetty_ssl_ciphersuites_included'] = isset($data['com_adobe_granite_jetty_ssl_ciphersuites_included']) ? $data['com_adobe_granite_jetty_ssl_ciphersuites_included'] : null;
        $this->container['com_adobe_granite_jetty_ssl_client_certificate'] = isset($data['com_adobe_granite_jetty_ssl_client_certificate']) ? $data['com_adobe_granite_jetty_ssl_client_certificate'] : null;
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
     * Gets com_adobe_granite_jetty_ssl_port
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyInteger|null
     */
    public function getComAdobeGraniteJettySslPort()
    {
        return $this->container['com_adobe_granite_jetty_ssl_port'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_port
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyInteger|null $com_adobe_granite_jetty_ssl_port com_adobe_granite_jetty_ssl_port
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslPort($com_adobe_granite_jetty_ssl_port)
    {
        $this->container['com_adobe_granite_jetty_ssl_port'] = $com_adobe_granite_jetty_ssl_port;

        return $this;
    }

    /**
     * Gets com_adobe_granite_jetty_ssl_keystore_user
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getComAdobeGraniteJettySslKeystoreUser()
    {
        return $this->container['com_adobe_granite_jetty_ssl_keystore_user'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_keystore_user
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $com_adobe_granite_jetty_ssl_keystore_user com_adobe_granite_jetty_ssl_keystore_user
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslKeystoreUser($com_adobe_granite_jetty_ssl_keystore_user)
    {
        $this->container['com_adobe_granite_jetty_ssl_keystore_user'] = $com_adobe_granite_jetty_ssl_keystore_user;

        return $this;
    }

    /**
     * Gets com_adobe_granite_jetty_ssl_keystore_password
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyString|null
     */
    public function getComAdobeGraniteJettySslKeystorePassword()
    {
        return $this->container['com_adobe_granite_jetty_ssl_keystore_password'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_keystore_password
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyString|null $com_adobe_granite_jetty_ssl_keystore_password com_adobe_granite_jetty_ssl_keystore_password
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslKeystorePassword($com_adobe_granite_jetty_ssl_keystore_password)
    {
        $this->container['com_adobe_granite_jetty_ssl_keystore_password'] = $com_adobe_granite_jetty_ssl_keystore_password;

        return $this;
    }

    /**
     * Gets com_adobe_granite_jetty_ssl_ciphersuites_excluded
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getComAdobeGraniteJettySslCiphersuitesExcluded()
    {
        return $this->container['com_adobe_granite_jetty_ssl_ciphersuites_excluded'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_ciphersuites_excluded
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $com_adobe_granite_jetty_ssl_ciphersuites_excluded com_adobe_granite_jetty_ssl_ciphersuites_excluded
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslCiphersuitesExcluded($com_adobe_granite_jetty_ssl_ciphersuites_excluded)
    {
        $this->container['com_adobe_granite_jetty_ssl_ciphersuites_excluded'] = $com_adobe_granite_jetty_ssl_ciphersuites_excluded;

        return $this;
    }

    /**
     * Gets com_adobe_granite_jetty_ssl_ciphersuites_included
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyArray|null
     */
    public function getComAdobeGraniteJettySslCiphersuitesIncluded()
    {
        return $this->container['com_adobe_granite_jetty_ssl_ciphersuites_included'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_ciphersuites_included
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyArray|null $com_adobe_granite_jetty_ssl_ciphersuites_included com_adobe_granite_jetty_ssl_ciphersuites_included
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslCiphersuitesIncluded($com_adobe_granite_jetty_ssl_ciphersuites_included)
    {
        $this->container['com_adobe_granite_jetty_ssl_ciphersuites_included'] = $com_adobe_granite_jetty_ssl_ciphersuites_included;

        return $this;
    }

    /**
     * Gets com_adobe_granite_jetty_ssl_client_certificate
     *
     * @return \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null
     */
    public function getComAdobeGraniteJettySslClientCertificate()
    {
        return $this->container['com_adobe_granite_jetty_ssl_client_certificate'];
    }

    /**
     * Sets com_adobe_granite_jetty_ssl_client_certificate
     *
     * @param \OpenAPI\Client\Model\ConfigNodePropertyDropDown|null $com_adobe_granite_jetty_ssl_client_certificate com_adobe_granite_jetty_ssl_client_certificate
     *
     * @return $this
     */
    public function setComAdobeGraniteJettySslClientCertificate($com_adobe_granite_jetty_ssl_client_certificate)
    {
        $this->container['com_adobe_granite_jetty_ssl_client_certificate'] = $com_adobe_granite_jetty_ssl_client_certificate;

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

