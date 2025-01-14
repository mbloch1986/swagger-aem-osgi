<?php
/**
 * OrgApacheHttpProxyconfiguratorProperties
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the OrgApacheHttpProxyconfiguratorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheHttpProxyconfiguratorProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("proxy.enabled")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $proxyEnabled;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("proxy.host")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $proxyHost;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("proxy.port")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $proxyPort;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("proxy.user")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $proxyUser;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("proxy.password")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $proxyPassword;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("proxy.exceptions")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $proxyExceptions;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->proxyEnabled = isset($data['proxyEnabled']) ? $data['proxyEnabled'] : null;
        $this->proxyHost = isset($data['proxyHost']) ? $data['proxyHost'] : null;
        $this->proxyPort = isset($data['proxyPort']) ? $data['proxyPort'] : null;
        $this->proxyUser = isset($data['proxyUser']) ? $data['proxyUser'] : null;
        $this->proxyPassword = isset($data['proxyPassword']) ? $data['proxyPassword'] : null;
        $this->proxyExceptions = isset($data['proxyExceptions']) ? $data['proxyExceptions'] : null;
    }

    /**
     * Gets proxyEnabled.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getProxyEnabled()
    {
        return $this->proxyEnabled;
    }

    /**
     * Sets proxyEnabled.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $proxyEnabled
     *
     * @return $this
     */
    public function setProxyEnabled(ConfigNodePropertyBoolean $proxyEnabled = null)
    {
        $this->proxyEnabled = $proxyEnabled;

        return $this;
    }

    /**
     * Gets proxyHost.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getProxyHost()
    {
        return $this->proxyHost;
    }

    /**
     * Sets proxyHost.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $proxyHost
     *
     * @return $this
     */
    public function setProxyHost(ConfigNodePropertyString $proxyHost = null)
    {
        $this->proxyHost = $proxyHost;

        return $this;
    }

    /**
     * Gets proxyPort.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getProxyPort()
    {
        return $this->proxyPort;
    }

    /**
     * Sets proxyPort.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $proxyPort
     *
     * @return $this
     */
    public function setProxyPort(ConfigNodePropertyInteger $proxyPort = null)
    {
        $this->proxyPort = $proxyPort;

        return $this;
    }

    /**
     * Gets proxyUser.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getProxyUser()
    {
        return $this->proxyUser;
    }

    /**
     * Sets proxyUser.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $proxyUser
     *
     * @return $this
     */
    public function setProxyUser(ConfigNodePropertyString $proxyUser = null)
    {
        $this->proxyUser = $proxyUser;

        return $this;
    }

    /**
     * Gets proxyPassword.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getProxyPassword()
    {
        return $this->proxyPassword;
    }

    /**
     * Sets proxyPassword.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $proxyPassword
     *
     * @return $this
     */
    public function setProxyPassword(ConfigNodePropertyString $proxyPassword = null)
    {
        $this->proxyPassword = $proxyPassword;

        return $this;
    }

    /**
     * Gets proxyExceptions.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getProxyExceptions()
    {
        return $this->proxyExceptions;
    }

    /**
     * Sets proxyExceptions.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $proxyExceptions
     *
     * @return $this
     */
    public function setProxyExceptions(ConfigNodePropertyArray $proxyExceptions = null)
    {
        $this->proxyExceptions = $proxyExceptions;

        return $this;
    }
}


