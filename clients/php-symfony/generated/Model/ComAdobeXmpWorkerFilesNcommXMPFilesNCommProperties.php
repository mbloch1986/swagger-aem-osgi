<?php
/**
 * ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties
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
 * Class representing the ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("maxConnections")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $maxConnections;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("maxRequests")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $maxRequests;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("requestTimeout")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $requestTimeout;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("logDir")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $logDir;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->maxConnections = isset($data['maxConnections']) ? $data['maxConnections'] : null;
        $this->maxRequests = isset($data['maxRequests']) ? $data['maxRequests'] : null;
        $this->requestTimeout = isset($data['requestTimeout']) ? $data['requestTimeout'] : null;
        $this->logDir = isset($data['logDir']) ? $data['logDir'] : null;
    }

    /**
     * Gets maxConnections.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getMaxConnections()
    {
        return $this->maxConnections;
    }

    /**
     * Sets maxConnections.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $maxConnections
     *
     * @return $this
     */
    public function setMaxConnections(ConfigNodePropertyString $maxConnections = null)
    {
        $this->maxConnections = $maxConnections;

        return $this;
    }

    /**
     * Gets maxRequests.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getMaxRequests()
    {
        return $this->maxRequests;
    }

    /**
     * Sets maxRequests.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $maxRequests
     *
     * @return $this
     */
    public function setMaxRequests(ConfigNodePropertyString $maxRequests = null)
    {
        $this->maxRequests = $maxRequests;

        return $this;
    }

    /**
     * Gets requestTimeout.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getRequestTimeout()
    {
        return $this->requestTimeout;
    }

    /**
     * Sets requestTimeout.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $requestTimeout
     *
     * @return $this
     */
    public function setRequestTimeout(ConfigNodePropertyString $requestTimeout = null)
    {
        $this->requestTimeout = $requestTimeout;

        return $this;
    }

    /**
     * Gets logDir.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getLogDir()
    {
        return $this->logDir;
    }

    /**
     * Sets logDir.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $logDir
     *
     * @return $this
     */
    public function setLogDir(ConfigNodePropertyString $logDir = null)
    {
        $this->logDir = $logDir;

        return $this;
    }
}

