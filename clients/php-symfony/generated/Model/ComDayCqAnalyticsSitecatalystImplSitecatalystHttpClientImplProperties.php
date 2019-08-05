<?php
/**
 * ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties
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
 * Class representing the ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqAnalyticsSitecatalystImplSitecatalystHttpClientImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.analytics.sitecatalyst.service.datacenter.url")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqAnalyticsSitecatalystServiceDatacenterUrl;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("devhostnamepatterns")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $devhostnamepatterns;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("connection.timeout")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $connectionTimeout;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("socket.timeout")
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
        $this->cqAnalyticsSitecatalystServiceDatacenterUrl = isset($data['cqAnalyticsSitecatalystServiceDatacenterUrl']) ? $data['cqAnalyticsSitecatalystServiceDatacenterUrl'] : null;
        $this->devhostnamepatterns = isset($data['devhostnamepatterns']) ? $data['devhostnamepatterns'] : null;
        $this->connectionTimeout = isset($data['connectionTimeout']) ? $data['connectionTimeout'] : null;
        $this->socketTimeout = isset($data['socketTimeout']) ? $data['socketTimeout'] : null;
    }

    /**
     * Gets cqAnalyticsSitecatalystServiceDatacenterUrl.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqAnalyticsSitecatalystServiceDatacenterUrl()
    {
        return $this->cqAnalyticsSitecatalystServiceDatacenterUrl;
    }

    /**
     * Sets cqAnalyticsSitecatalystServiceDatacenterUrl.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqAnalyticsSitecatalystServiceDatacenterUrl
     *
     * @return $this
     */
    public function setCqAnalyticsSitecatalystServiceDatacenterUrl(ConfigNodePropertyArray $cqAnalyticsSitecatalystServiceDatacenterUrl = null)
    {
        $this->cqAnalyticsSitecatalystServiceDatacenterUrl = $cqAnalyticsSitecatalystServiceDatacenterUrl;

        return $this;
    }

    /**
     * Gets devhostnamepatterns.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getDevhostnamepatterns()
    {
        return $this->devhostnamepatterns;
    }

    /**
     * Sets devhostnamepatterns.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $devhostnamepatterns
     *
     * @return $this
     */
    public function setDevhostnamepatterns(ConfigNodePropertyArray $devhostnamepatterns = null)
    {
        $this->devhostnamepatterns = $devhostnamepatterns;

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

