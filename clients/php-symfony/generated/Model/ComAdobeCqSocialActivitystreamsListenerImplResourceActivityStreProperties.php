<?php
/**
 * ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties
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
 * Class representing the ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("streamPath")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $streamPath;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("streamName")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $streamName;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->streamPath = isset($data['streamPath']) ? $data['streamPath'] : null;
        $this->streamName = isset($data['streamName']) ? $data['streamName'] : null;
    }

    /**
     * Gets streamPath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getStreamPath()
    {
        return $this->streamPath;
    }

    /**
     * Sets streamPath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $streamPath
     *
     * @return $this
     */
    public function setStreamPath(ConfigNodePropertyString $streamPath = null)
    {
        $this->streamPath = $streamPath;

        return $this;
    }

    /**
     * Gets streamName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getStreamName()
    {
        return $this->streamName;
    }

    /**
     * Sets streamName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $streamName
     *
     * @return $this
     */
    public function setStreamName(ConfigNodePropertyString $streamName = null)
    {
        $this->streamName = $streamName;

        return $this;
    }
}

