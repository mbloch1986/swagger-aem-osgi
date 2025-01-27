<?php
/**
 * ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties
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
 * Class representing the ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("omnisearch.suggestion.requiretext.min")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $omnisearchSuggestionRequiretextMin;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("omnisearch.suggestion.spellcheck.require")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $omnisearchSuggestionSpellcheckRequire;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->omnisearchSuggestionRequiretextMin = isset($data['omnisearchSuggestionRequiretextMin']) ? $data['omnisearchSuggestionRequiretextMin'] : null;
        $this->omnisearchSuggestionSpellcheckRequire = isset($data['omnisearchSuggestionSpellcheckRequire']) ? $data['omnisearchSuggestionSpellcheckRequire'] : null;
    }

    /**
     * Gets omnisearchSuggestionRequiretextMin.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getOmnisearchSuggestionRequiretextMin()
    {
        return $this->omnisearchSuggestionRequiretextMin;
    }

    /**
     * Sets omnisearchSuggestionRequiretextMin.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $omnisearchSuggestionRequiretextMin
     *
     * @return $this
     */
    public function setOmnisearchSuggestionRequiretextMin(ConfigNodePropertyInteger $omnisearchSuggestionRequiretextMin = null)
    {
        $this->omnisearchSuggestionRequiretextMin = $omnisearchSuggestionRequiretextMin;

        return $this;
    }

    /**
     * Gets omnisearchSuggestionSpellcheckRequire.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getOmnisearchSuggestionSpellcheckRequire()
    {
        return $this->omnisearchSuggestionSpellcheckRequire;
    }

    /**
     * Sets omnisearchSuggestionSpellcheckRequire.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $omnisearchSuggestionSpellcheckRequire
     *
     * @return $this
     */
    public function setOmnisearchSuggestionSpellcheckRequire(ConfigNodePropertyBoolean $omnisearchSuggestionSpellcheckRequire = null)
    {
        $this->omnisearchSuggestionSpellcheckRequire = $omnisearchSuggestionSpellcheckRequire;

        return $this;
    }
}


