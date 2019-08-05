<?php
/**
 * ComDayCqWcmCoreMvtMVTStatisticsImplProperties
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
 * Class representing the ComDayCqWcmCoreMvtMVTStatisticsImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmCoreMvtMVTStatisticsImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("mvtstatistics.trackingurl")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $mvtstatisticsTrackingurl;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->mvtstatisticsTrackingurl = isset($data['mvtstatisticsTrackingurl']) ? $data['mvtstatisticsTrackingurl'] : null;
    }

    /**
     * Gets mvtstatisticsTrackingurl.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getMvtstatisticsTrackingurl()
    {
        return $this->mvtstatisticsTrackingurl;
    }

    /**
     * Sets mvtstatisticsTrackingurl.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $mvtstatisticsTrackingurl
     *
     * @return $this
     */
    public function setMvtstatisticsTrackingurl(ConfigNodePropertyString $mvtstatisticsTrackingurl = null)
    {
        $this->mvtstatisticsTrackingurl = $mvtstatisticsTrackingurl;

        return $this;
    }
}

