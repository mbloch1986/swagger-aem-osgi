<?php
/**
 * ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties
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
 * Class representing the ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteBundlesHcImplJobsHealthCheckProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("hc.tags")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $hcTags;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("max.queued.jobs")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $maxQueuedJobs;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->hcTags = isset($data['hcTags']) ? $data['hcTags'] : null;
        $this->maxQueuedJobs = isset($data['maxQueuedJobs']) ? $data['maxQueuedJobs'] : null;
    }

    /**
     * Gets hcTags.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getHcTags()
    {
        return $this->hcTags;
    }

    /**
     * Sets hcTags.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $hcTags
     *
     * @return $this
     */
    public function setHcTags(ConfigNodePropertyArray $hcTags = null)
    {
        $this->hcTags = $hcTags;

        return $this;
    }

    /**
     * Gets maxQueuedJobs.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getMaxQueuedJobs()
    {
        return $this->maxQueuedJobs;
    }

    /**
     * Sets maxQueuedJobs.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $maxQueuedJobs
     *
     * @return $this
     */
    public function setMaxQueuedJobs(ConfigNodePropertyInteger $maxQueuedJobs = null)
    {
        $this->maxQueuedJobs = $maxQueuedJobs;

        return $this;
    }
}

