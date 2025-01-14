<?php
/**
 * ComDayCqMcmCampaignImplIntegrationConfigImplProperties
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
 * Class representing the ComDayCqMcmCampaignImplIntegrationConfigImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqMcmCampaignImplIntegrationConfigImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("aem.mcm.campaign.formConstraints")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $aemMcmCampaignFormConstraints;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("aem.mcm.campaign.publicUrl")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $aemMcmCampaignPublicUrl;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("aem.mcm.campaign.relaxedSSL")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $aemMcmCampaignRelaxedSSL;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->aemMcmCampaignFormConstraints = isset($data['aemMcmCampaignFormConstraints']) ? $data['aemMcmCampaignFormConstraints'] : null;
        $this->aemMcmCampaignPublicUrl = isset($data['aemMcmCampaignPublicUrl']) ? $data['aemMcmCampaignPublicUrl'] : null;
        $this->aemMcmCampaignRelaxedSSL = isset($data['aemMcmCampaignRelaxedSSL']) ? $data['aemMcmCampaignRelaxedSSL'] : null;
    }

    /**
     * Gets aemMcmCampaignFormConstraints.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getAemMcmCampaignFormConstraints()
    {
        return $this->aemMcmCampaignFormConstraints;
    }

    /**
     * Sets aemMcmCampaignFormConstraints.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $aemMcmCampaignFormConstraints
     *
     * @return $this
     */
    public function setAemMcmCampaignFormConstraints(ConfigNodePropertyArray $aemMcmCampaignFormConstraints = null)
    {
        $this->aemMcmCampaignFormConstraints = $aemMcmCampaignFormConstraints;

        return $this;
    }

    /**
     * Gets aemMcmCampaignPublicUrl.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAemMcmCampaignPublicUrl()
    {
        return $this->aemMcmCampaignPublicUrl;
    }

    /**
     * Sets aemMcmCampaignPublicUrl.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $aemMcmCampaignPublicUrl
     *
     * @return $this
     */
    public function setAemMcmCampaignPublicUrl(ConfigNodePropertyString $aemMcmCampaignPublicUrl = null)
    {
        $this->aemMcmCampaignPublicUrl = $aemMcmCampaignPublicUrl;

        return $this;
    }

    /**
     * Gets aemMcmCampaignRelaxedSSL.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getAemMcmCampaignRelaxedSSL()
    {
        return $this->aemMcmCampaignRelaxedSSL;
    }

    /**
     * Sets aemMcmCampaignRelaxedSSL.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $aemMcmCampaignRelaxedSSL
     *
     * @return $this
     */
    public function setAemMcmCampaignRelaxedSSL(ConfigNodePropertyBoolean $aemMcmCampaignRelaxedSSL = null)
    {
        $this->aemMcmCampaignRelaxedSSL = $aemMcmCampaignRelaxedSSL;

        return $this;
    }
}


