<?php
/**
 * ComDayCqImageInternalFontFontHelperProperties
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
 * Class representing the ComDayCqImageInternalFontFontHelperProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqImageInternalFontFontHelperProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("fontpath")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $fontpath;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("oversamplingFactor")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $oversamplingFactor;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->fontpath = isset($data['fontpath']) ? $data['fontpath'] : null;
        $this->oversamplingFactor = isset($data['oversamplingFactor']) ? $data['oversamplingFactor'] : null;
    }

    /**
     * Gets fontpath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getFontpath()
    {
        return $this->fontpath;
    }

    /**
     * Sets fontpath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $fontpath
     *
     * @return $this
     */
    public function setFontpath(ConfigNodePropertyArray $fontpath = null)
    {
        $this->fontpath = $fontpath;

        return $this;
    }

    /**
     * Gets oversamplingFactor.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getOversamplingFactor()
    {
        return $this->oversamplingFactor;
    }

    /**
     * Sets oversamplingFactor.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $oversamplingFactor
     *
     * @return $this
     */
    public function setOversamplingFactor(ConfigNodePropertyInteger $oversamplingFactor = null)
    {
        $this->oversamplingFactor = $oversamplingFactor;

        return $this;
    }
}


