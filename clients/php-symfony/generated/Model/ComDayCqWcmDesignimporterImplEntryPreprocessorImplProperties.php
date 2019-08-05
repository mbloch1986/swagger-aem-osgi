<?php
/**
 * ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties
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
 * Class representing the ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmDesignimporterImplEntryPreprocessorImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("search.pattern")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $searchPattern;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("replace.pattern")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $replacePattern;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->searchPattern = isset($data['searchPattern']) ? $data['searchPattern'] : null;
        $this->replacePattern = isset($data['replacePattern']) ? $data['replacePattern'] : null;
    }

    /**
     * Gets searchPattern.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getSearchPattern()
    {
        return $this->searchPattern;
    }

    /**
     * Sets searchPattern.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $searchPattern
     *
     * @return $this
     */
    public function setSearchPattern(ConfigNodePropertyString $searchPattern = null)
    {
        $this->searchPattern = $searchPattern;

        return $this;
    }

    /**
     * Gets replacePattern.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getReplacePattern()
    {
        return $this->replacePattern;
    }

    /**
     * Sets replacePattern.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $replacePattern
     *
     * @return $this
     */
    public function setReplacePattern(ConfigNodePropertyString $replacePattern = null)
    {
        $this->replacePattern = $replacePattern;

        return $this;
    }
}

