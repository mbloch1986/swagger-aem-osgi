<?php
/**
 * ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties
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
 * Class representing the ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmFoundationImplAdaptiveImageComponentServletProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("adapt.supported.widths")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $adaptSupportedWidths;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->adaptSupportedWidths = isset($data['adaptSupportedWidths']) ? $data['adaptSupportedWidths'] : null;
    }

    /**
     * Gets adaptSupportedWidths.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getAdaptSupportedWidths()
    {
        return $this->adaptSupportedWidths;
    }

    /**
     * Sets adaptSupportedWidths.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $adaptSupportedWidths
     *
     * @return $this
     */
    public function setAdaptSupportedWidths(ConfigNodePropertyArray $adaptSupportedWidths = null)
    {
        $this->adaptSupportedWidths = $adaptSupportedWidths;

        return $this;
    }
}

