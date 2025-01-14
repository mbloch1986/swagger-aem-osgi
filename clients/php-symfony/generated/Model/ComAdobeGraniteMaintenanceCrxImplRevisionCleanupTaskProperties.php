<?php
/**
 * ComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties
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
 * Class representing the ComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("full.gc.days")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $fullGcDays;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->fullGcDays = isset($data['fullGcDays']) ? $data['fullGcDays'] : null;
    }

    /**
     * Gets fullGcDays.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getFullGcDays()
    {
        return $this->fullGcDays;
    }

    /**
     * Sets fullGcDays.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $fullGcDays
     *
     * @return $this
     */
    public function setFullGcDays(ConfigNodePropertyArray $fullGcDays = null)
    {
        $this->fullGcDays = $fullGcDays;

        return $this;
    }
}


