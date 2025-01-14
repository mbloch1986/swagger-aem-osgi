<?php
/**
 * OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties
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
 * Class representing the OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("tokenExpiration")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $tokenExpiration;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("tokenLength")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $tokenLength;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("tokenRefresh")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $tokenRefresh;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("tokenCleanupThreshold")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $tokenCleanupThreshold;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("passwordHashAlgorithm")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $passwordHashAlgorithm;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("passwordHashIterations")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $passwordHashIterations;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("passwordSaltSize")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $passwordSaltSize;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->tokenExpiration = isset($data['tokenExpiration']) ? $data['tokenExpiration'] : null;
        $this->tokenLength = isset($data['tokenLength']) ? $data['tokenLength'] : null;
        $this->tokenRefresh = isset($data['tokenRefresh']) ? $data['tokenRefresh'] : null;
        $this->tokenCleanupThreshold = isset($data['tokenCleanupThreshold']) ? $data['tokenCleanupThreshold'] : null;
        $this->passwordHashAlgorithm = isset($data['passwordHashAlgorithm']) ? $data['passwordHashAlgorithm'] : null;
        $this->passwordHashIterations = isset($data['passwordHashIterations']) ? $data['passwordHashIterations'] : null;
        $this->passwordSaltSize = isset($data['passwordSaltSize']) ? $data['passwordSaltSize'] : null;
    }

    /**
     * Gets tokenExpiration.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getTokenExpiration()
    {
        return $this->tokenExpiration;
    }

    /**
     * Sets tokenExpiration.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $tokenExpiration
     *
     * @return $this
     */
    public function setTokenExpiration(ConfigNodePropertyString $tokenExpiration = null)
    {
        $this->tokenExpiration = $tokenExpiration;

        return $this;
    }

    /**
     * Gets tokenLength.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getTokenLength()
    {
        return $this->tokenLength;
    }

    /**
     * Sets tokenLength.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $tokenLength
     *
     * @return $this
     */
    public function setTokenLength(ConfigNodePropertyString $tokenLength = null)
    {
        $this->tokenLength = $tokenLength;

        return $this;
    }

    /**
     * Gets tokenRefresh.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getTokenRefresh()
    {
        return $this->tokenRefresh;
    }

    /**
     * Sets tokenRefresh.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $tokenRefresh
     *
     * @return $this
     */
    public function setTokenRefresh(ConfigNodePropertyBoolean $tokenRefresh = null)
    {
        $this->tokenRefresh = $tokenRefresh;

        return $this;
    }

    /**
     * Gets tokenCleanupThreshold.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getTokenCleanupThreshold()
    {
        return $this->tokenCleanupThreshold;
    }

    /**
     * Sets tokenCleanupThreshold.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $tokenCleanupThreshold
     *
     * @return $this
     */
    public function setTokenCleanupThreshold(ConfigNodePropertyInteger $tokenCleanupThreshold = null)
    {
        $this->tokenCleanupThreshold = $tokenCleanupThreshold;

        return $this;
    }

    /**
     * Gets passwordHashAlgorithm.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPasswordHashAlgorithm()
    {
        return $this->passwordHashAlgorithm;
    }

    /**
     * Sets passwordHashAlgorithm.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $passwordHashAlgorithm
     *
     * @return $this
     */
    public function setPasswordHashAlgorithm(ConfigNodePropertyString $passwordHashAlgorithm = null)
    {
        $this->passwordHashAlgorithm = $passwordHashAlgorithm;

        return $this;
    }

    /**
     * Gets passwordHashIterations.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordHashIterations()
    {
        return $this->passwordHashIterations;
    }

    /**
     * Sets passwordHashIterations.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $passwordHashIterations
     *
     * @return $this
     */
    public function setPasswordHashIterations(ConfigNodePropertyInteger $passwordHashIterations = null)
    {
        $this->passwordHashIterations = $passwordHashIterations;

        return $this;
    }

    /**
     * Gets passwordSaltSize.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getPasswordSaltSize()
    {
        return $this->passwordSaltSize;
    }

    /**
     * Sets passwordSaltSize.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $passwordSaltSize
     *
     * @return $this
     */
    public function setPasswordSaltSize(ConfigNodePropertyInteger $passwordSaltSize = null)
    {
        $this->passwordSaltSize = $passwordSaltSize;

        return $this;
    }
}


