<?php
/**
 * ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties
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
 * Class representing the ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("scheduler.period")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $schedulerPeriod;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("scheduler.concurrent")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $schedulerConcurrent;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("good_link_test_interval")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $goodLinkTestInterval;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("bad_link_test_interval")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $badLinkTestInterval;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("link_unused_interval")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $linkUnusedInterval;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("connection.timeout")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $connectionTimeout;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->schedulerPeriod = isset($data['schedulerPeriod']) ? $data['schedulerPeriod'] : null;
        $this->schedulerConcurrent = isset($data['schedulerConcurrent']) ? $data['schedulerConcurrent'] : null;
        $this->goodLinkTestInterval = isset($data['goodLinkTestInterval']) ? $data['goodLinkTestInterval'] : null;
        $this->badLinkTestInterval = isset($data['badLinkTestInterval']) ? $data['badLinkTestInterval'] : null;
        $this->linkUnusedInterval = isset($data['linkUnusedInterval']) ? $data['linkUnusedInterval'] : null;
        $this->connectionTimeout = isset($data['connectionTimeout']) ? $data['connectionTimeout'] : null;
    }

    /**
     * Gets schedulerPeriod.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getSchedulerPeriod()
    {
        return $this->schedulerPeriod;
    }

    /**
     * Sets schedulerPeriod.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $schedulerPeriod
     *
     * @return $this
     */
    public function setSchedulerPeriod(ConfigNodePropertyInteger $schedulerPeriod = null)
    {
        $this->schedulerPeriod = $schedulerPeriod;

        return $this;
    }

    /**
     * Gets schedulerConcurrent.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getSchedulerConcurrent()
    {
        return $this->schedulerConcurrent;
    }

    /**
     * Sets schedulerConcurrent.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $schedulerConcurrent
     *
     * @return $this
     */
    public function setSchedulerConcurrent(ConfigNodePropertyBoolean $schedulerConcurrent = null)
    {
        $this->schedulerConcurrent = $schedulerConcurrent;

        return $this;
    }

    /**
     * Gets goodLinkTestInterval.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getGoodLinkTestInterval()
    {
        return $this->goodLinkTestInterval;
    }

    /**
     * Sets goodLinkTestInterval.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $goodLinkTestInterval
     *
     * @return $this
     */
    public function setGoodLinkTestInterval(ConfigNodePropertyInteger $goodLinkTestInterval = null)
    {
        $this->goodLinkTestInterval = $goodLinkTestInterval;

        return $this;
    }

    /**
     * Gets badLinkTestInterval.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getBadLinkTestInterval()
    {
        return $this->badLinkTestInterval;
    }

    /**
     * Sets badLinkTestInterval.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $badLinkTestInterval
     *
     * @return $this
     */
    public function setBadLinkTestInterval(ConfigNodePropertyInteger $badLinkTestInterval = null)
    {
        $this->badLinkTestInterval = $badLinkTestInterval;

        return $this;
    }

    /**
     * Gets linkUnusedInterval.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getLinkUnusedInterval()
    {
        return $this->linkUnusedInterval;
    }

    /**
     * Sets linkUnusedInterval.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $linkUnusedInterval
     *
     * @return $this
     */
    public function setLinkUnusedInterval(ConfigNodePropertyInteger $linkUnusedInterval = null)
    {
        $this->linkUnusedInterval = $linkUnusedInterval;

        return $this;
    }

    /**
     * Gets connectionTimeout.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getConnectionTimeout()
    {
        return $this->connectionTimeout;
    }

    /**
     * Sets connectionTimeout.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $connectionTimeout
     *
     * @return $this
     */
    public function setConnectionTimeout(ConfigNodePropertyInteger $connectionTimeout = null)
    {
        $this->connectionTimeout = $connectionTimeout;

        return $this;
    }
}

