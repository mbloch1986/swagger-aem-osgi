<?php
/**
 * ComAdobeCqDtmReactorImplServiceWebServiceImplProperties
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
 * Class representing the ComAdobeCqDtmReactorImplServiceWebServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqDtmReactorImplServiceWebServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("endpointUri")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $endpointUri;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("connectionTimeout")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $connectionTimeout;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("socketTimeout")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $socketTimeout;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->endpointUri = isset($data['endpointUri']) ? $data['endpointUri'] : null;
        $this->connectionTimeout = isset($data['connectionTimeout']) ? $data['connectionTimeout'] : null;
        $this->socketTimeout = isset($data['socketTimeout']) ? $data['socketTimeout'] : null;
    }

    /**
     * Gets endpointUri.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getEndpointUri()
    {
        return $this->endpointUri;
    }

    /**
     * Sets endpointUri.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $endpointUri
     *
     * @return $this
     */
    public function setEndpointUri(ConfigNodePropertyString $endpointUri = null)
    {
        $this->endpointUri = $endpointUri;

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

    /**
     * Gets socketTimeout.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getSocketTimeout()
    {
        return $this->socketTimeout;
    }

    /**
     * Sets socketTimeout.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $socketTimeout
     *
     * @return $this
     */
    public function setSocketTimeout(ConfigNodePropertyInteger $socketTimeout = null)
    {
        $this->socketTimeout = $socketTimeout;

        return $this;
    }
}


