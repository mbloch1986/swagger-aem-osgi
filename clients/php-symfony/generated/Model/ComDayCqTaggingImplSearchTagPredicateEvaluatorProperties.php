<?php
/**
 * ComDayCqTaggingImplSearchTagPredicateEvaluatorProperties
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
 * Class representing the ComDayCqTaggingImplSearchTagPredicateEvaluatorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqTaggingImplSearchTagPredicateEvaluatorProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("ignore_path")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $ignorePath;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->ignorePath = isset($data['ignorePath']) ? $data['ignorePath'] : null;
    }

    /**
     * Gets ignorePath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getIgnorePath()
    {
        return $this->ignorePath;
    }

    /**
     * Sets ignorePath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $ignorePath
     *
     * @return $this
     */
    public function setIgnorePath(ConfigNodePropertyBoolean $ignorePath = null)
    {
        $this->ignorePath = $ignorePath;

        return $this;
    }
}


