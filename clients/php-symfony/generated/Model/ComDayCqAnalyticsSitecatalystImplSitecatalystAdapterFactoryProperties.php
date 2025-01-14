<?php
/**
 * ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties
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
 * Class representing the ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.analytics.adapterfactory.contextstores")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqAnalyticsAdapterfactoryContextstores;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqAnalyticsAdapterfactoryContextstores = isset($data['cqAnalyticsAdapterfactoryContextstores']) ? $data['cqAnalyticsAdapterfactoryContextstores'] : null;
    }

    /**
     * Gets cqAnalyticsAdapterfactoryContextstores.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqAnalyticsAdapterfactoryContextstores()
    {
        return $this->cqAnalyticsAdapterfactoryContextstores;
    }

    /**
     * Sets cqAnalyticsAdapterfactoryContextstores.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqAnalyticsAdapterfactoryContextstores
     *
     * @return $this
     */
    public function setCqAnalyticsAdapterfactoryContextstores(ConfigNodePropertyArray $cqAnalyticsAdapterfactoryContextstores = null)
    {
        $this->cqAnalyticsAdapterfactoryContextstores = $cqAnalyticsAdapterfactoryContextstores;

        return $this;
    }
}


