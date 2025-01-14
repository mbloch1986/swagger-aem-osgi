<?php
/**
 * ComAdobeFormsCommonServletTempCleanUpTaskProperties
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
 * Class representing the ComAdobeFormsCommonServletTempCleanUpTaskProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeFormsCommonServletTempCleanUpTaskProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scheduler.expression")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $schedulerExpression;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("Duration for Temporary Storage")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $durationForTemporaryStorage;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("Duration for Anonymous Storage")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $durationForAnonymousStorage;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->schedulerExpression = isset($data['schedulerExpression']) ? $data['schedulerExpression'] : null;
        $this->durationForTemporaryStorage = isset($data['durationForTemporaryStorage']) ? $data['durationForTemporaryStorage'] : null;
        $this->durationForAnonymousStorage = isset($data['durationForAnonymousStorage']) ? $data['durationForAnonymousStorage'] : null;
    }

    /**
     * Gets schedulerExpression.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getSchedulerExpression()
    {
        return $this->schedulerExpression;
    }

    /**
     * Sets schedulerExpression.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $schedulerExpression
     *
     * @return $this
     */
    public function setSchedulerExpression(ConfigNodePropertyString $schedulerExpression = null)
    {
        $this->schedulerExpression = $schedulerExpression;

        return $this;
    }

    /**
     * Gets durationForTemporaryStorage.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getDurationForTemporaryStorage()
    {
        return $this->durationForTemporaryStorage;
    }

    /**
     * Sets durationForTemporaryStorage.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $durationForTemporaryStorage
     *
     * @return $this
     */
    public function setDurationForTemporaryStorage(ConfigNodePropertyString $durationForTemporaryStorage = null)
    {
        $this->durationForTemporaryStorage = $durationForTemporaryStorage;

        return $this;
    }

    /**
     * Gets durationForAnonymousStorage.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getDurationForAnonymousStorage()
    {
        return $this->durationForAnonymousStorage;
    }

    /**
     * Sets durationForAnonymousStorage.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $durationForAnonymousStorage
     *
     * @return $this
     */
    public function setDurationForAnonymousStorage(ConfigNodePropertyString $durationForAnonymousStorage = null)
    {
        $this->durationForAnonymousStorage = $durationForAnonymousStorage;

        return $this;
    }
}


