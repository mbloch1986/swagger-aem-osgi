<?php
/**
 * ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties
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
 * Class representing the ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("watchwords.positive")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $watchwordsPositive;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("watchwords.negative")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $watchwordsNegative;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("watchwords.path")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $watchwordsPath;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("sentiment.path")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $sentimentPath;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->watchwordsPositive = isset($data['watchwordsPositive']) ? $data['watchwordsPositive'] : null;
        $this->watchwordsNegative = isset($data['watchwordsNegative']) ? $data['watchwordsNegative'] : null;
        $this->watchwordsPath = isset($data['watchwordsPath']) ? $data['watchwordsPath'] : null;
        $this->sentimentPath = isset($data['sentimentPath']) ? $data['sentimentPath'] : null;
    }

    /**
     * Gets watchwordsPositive.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getWatchwordsPositive()
    {
        return $this->watchwordsPositive;
    }

    /**
     * Sets watchwordsPositive.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $watchwordsPositive
     *
     * @return $this
     */
    public function setWatchwordsPositive(ConfigNodePropertyArray $watchwordsPositive = null)
    {
        $this->watchwordsPositive = $watchwordsPositive;

        return $this;
    }

    /**
     * Gets watchwordsNegative.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getWatchwordsNegative()
    {
        return $this->watchwordsNegative;
    }

    /**
     * Sets watchwordsNegative.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $watchwordsNegative
     *
     * @return $this
     */
    public function setWatchwordsNegative(ConfigNodePropertyArray $watchwordsNegative = null)
    {
        $this->watchwordsNegative = $watchwordsNegative;

        return $this;
    }

    /**
     * Gets watchwordsPath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getWatchwordsPath()
    {
        return $this->watchwordsPath;
    }

    /**
     * Sets watchwordsPath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $watchwordsPath
     *
     * @return $this
     */
    public function setWatchwordsPath(ConfigNodePropertyString $watchwordsPath = null)
    {
        $this->watchwordsPath = $watchwordsPath;

        return $this;
    }

    /**
     * Gets sentimentPath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getSentimentPath()
    {
        return $this->sentimentPath;
    }

    /**
     * Sets sentimentPath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $sentimentPath
     *
     * @return $this
     */
    public function setSentimentPath(ConfigNodePropertyString $sentimentPath = null)
    {
        $this->sentimentPath = $sentimentPath;

        return $this;
    }
}

