<?php
/**
 * ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties
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
 * Class representing the ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("event.topics")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $eventTopics;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("event.filter")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $eventFilter;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("translate.listener.type")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $translateListenerType;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("translate.property.list")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $translatePropertyList;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("poolSize")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $poolSize;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("maxPoolSize")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $maxPoolSize;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("queueSize")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $queueSize;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("keepAliveTime")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $keepAliveTime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->eventTopics = isset($data['eventTopics']) ? $data['eventTopics'] : null;
        $this->eventFilter = isset($data['eventFilter']) ? $data['eventFilter'] : null;
        $this->translateListenerType = isset($data['translateListenerType']) ? $data['translateListenerType'] : null;
        $this->translatePropertyList = isset($data['translatePropertyList']) ? $data['translatePropertyList'] : null;
        $this->poolSize = isset($data['poolSize']) ? $data['poolSize'] : null;
        $this->maxPoolSize = isset($data['maxPoolSize']) ? $data['maxPoolSize'] : null;
        $this->queueSize = isset($data['queueSize']) ? $data['queueSize'] : null;
        $this->keepAliveTime = isset($data['keepAliveTime']) ? $data['keepAliveTime'] : null;
    }

    /**
     * Gets eventTopics.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getEventTopics()
    {
        return $this->eventTopics;
    }

    /**
     * Sets eventTopics.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $eventTopics
     *
     * @return $this
     */
    public function setEventTopics(ConfigNodePropertyString $eventTopics = null)
    {
        $this->eventTopics = $eventTopics;

        return $this;
    }

    /**
     * Gets eventFilter.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getEventFilter()
    {
        return $this->eventFilter;
    }

    /**
     * Sets eventFilter.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $eventFilter
     *
     * @return $this
     */
    public function setEventFilter(ConfigNodePropertyString $eventFilter = null)
    {
        $this->eventFilter = $eventFilter;

        return $this;
    }

    /**
     * Gets translateListenerType.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getTranslateListenerType()
    {
        return $this->translateListenerType;
    }

    /**
     * Sets translateListenerType.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $translateListenerType
     *
     * @return $this
     */
    public function setTranslateListenerType(ConfigNodePropertyArray $translateListenerType = null)
    {
        $this->translateListenerType = $translateListenerType;

        return $this;
    }

    /**
     * Gets translatePropertyList.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getTranslatePropertyList()
    {
        return $this->translatePropertyList;
    }

    /**
     * Sets translatePropertyList.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $translatePropertyList
     *
     * @return $this
     */
    public function setTranslatePropertyList(ConfigNodePropertyArray $translatePropertyList = null)
    {
        $this->translatePropertyList = $translatePropertyList;

        return $this;
    }

    /**
     * Gets poolSize.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getPoolSize()
    {
        return $this->poolSize;
    }

    /**
     * Sets poolSize.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $poolSize
     *
     * @return $this
     */
    public function setPoolSize(ConfigNodePropertyInteger $poolSize = null)
    {
        $this->poolSize = $poolSize;

        return $this;
    }

    /**
     * Gets maxPoolSize.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getMaxPoolSize()
    {
        return $this->maxPoolSize;
    }

    /**
     * Sets maxPoolSize.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $maxPoolSize
     *
     * @return $this
     */
    public function setMaxPoolSize(ConfigNodePropertyInteger $maxPoolSize = null)
    {
        $this->maxPoolSize = $maxPoolSize;

        return $this;
    }

    /**
     * Gets queueSize.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getQueueSize()
    {
        return $this->queueSize;
    }

    /**
     * Sets queueSize.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $queueSize
     *
     * @return $this
     */
    public function setQueueSize(ConfigNodePropertyInteger $queueSize = null)
    {
        $this->queueSize = $queueSize;

        return $this;
    }

    /**
     * Gets keepAliveTime.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getKeepAliveTime()
    {
        return $this->keepAliveTime;
    }

    /**
     * Sets keepAliveTime.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $keepAliveTime
     *
     * @return $this
     */
    public function setKeepAliveTime(ConfigNodePropertyInteger $keepAliveTime = null)
    {
        $this->keepAliveTime = $keepAliveTime;

        return $this;
    }
}

