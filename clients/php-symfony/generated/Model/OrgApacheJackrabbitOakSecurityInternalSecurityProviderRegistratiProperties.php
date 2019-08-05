<?php
/**
 * OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties
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
 * Class representing the OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("requiredServicePids")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $requiredServicePids;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("authorizationCompositionType")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $authorizationCompositionType;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->requiredServicePids = isset($data['requiredServicePids']) ? $data['requiredServicePids'] : null;
        $this->authorizationCompositionType = isset($data['authorizationCompositionType']) ? $data['authorizationCompositionType'] : null;
    }

    /**
     * Gets requiredServicePids.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getRequiredServicePids()
    {
        return $this->requiredServicePids;
    }

    /**
     * Sets requiredServicePids.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $requiredServicePids
     *
     * @return $this
     */
    public function setRequiredServicePids(ConfigNodePropertyArray $requiredServicePids = null)
    {
        $this->requiredServicePids = $requiredServicePids;

        return $this;
    }

    /**
     * Gets authorizationCompositionType.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getAuthorizationCompositionType()
    {
        return $this->authorizationCompositionType;
    }

    /**
     * Sets authorizationCompositionType.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $authorizationCompositionType
     *
     * @return $this
     */
    public function setAuthorizationCompositionType(ConfigNodePropertyDropDown $authorizationCompositionType = null)
    {
        $this->authorizationCompositionType = $authorizationCompositionType;

        return $this;
    }
}

