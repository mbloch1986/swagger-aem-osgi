<?php
/**
 * ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties
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
 * Class representing the ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scene7FlashTemplates.rti")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $scene7FlashTemplatesRti;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scene7FlashTemplates.rsi")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $scene7FlashTemplatesRsi;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scene7FlashTemplates.rb")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $scene7FlashTemplatesRb;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scene7FlashTemplates.rurl")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $scene7FlashTemplatesRurl;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("scene7FlashTemplate.urlFormatParameter")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $scene7FlashTemplateUrlFormatParameter;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->scene7FlashTemplatesRti = isset($data['scene7FlashTemplatesRti']) ? $data['scene7FlashTemplatesRti'] : null;
        $this->scene7FlashTemplatesRsi = isset($data['scene7FlashTemplatesRsi']) ? $data['scene7FlashTemplatesRsi'] : null;
        $this->scene7FlashTemplatesRb = isset($data['scene7FlashTemplatesRb']) ? $data['scene7FlashTemplatesRb'] : null;
        $this->scene7FlashTemplatesRurl = isset($data['scene7FlashTemplatesRurl']) ? $data['scene7FlashTemplatesRurl'] : null;
        $this->scene7FlashTemplateUrlFormatParameter = isset($data['scene7FlashTemplateUrlFormatParameter']) ? $data['scene7FlashTemplateUrlFormatParameter'] : null;
    }

    /**
     * Gets scene7FlashTemplatesRti.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getScene7FlashTemplatesRti()
    {
        return $this->scene7FlashTemplatesRti;
    }

    /**
     * Sets scene7FlashTemplatesRti.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $scene7FlashTemplatesRti
     *
     * @return $this
     */
    public function setScene7FlashTemplatesRti(ConfigNodePropertyString $scene7FlashTemplatesRti = null)
    {
        $this->scene7FlashTemplatesRti = $scene7FlashTemplatesRti;

        return $this;
    }

    /**
     * Gets scene7FlashTemplatesRsi.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getScene7FlashTemplatesRsi()
    {
        return $this->scene7FlashTemplatesRsi;
    }

    /**
     * Sets scene7FlashTemplatesRsi.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $scene7FlashTemplatesRsi
     *
     * @return $this
     */
    public function setScene7FlashTemplatesRsi(ConfigNodePropertyString $scene7FlashTemplatesRsi = null)
    {
        $this->scene7FlashTemplatesRsi = $scene7FlashTemplatesRsi;

        return $this;
    }

    /**
     * Gets scene7FlashTemplatesRb.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getScene7FlashTemplatesRb()
    {
        return $this->scene7FlashTemplatesRb;
    }

    /**
     * Sets scene7FlashTemplatesRb.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $scene7FlashTemplatesRb
     *
     * @return $this
     */
    public function setScene7FlashTemplatesRb(ConfigNodePropertyString $scene7FlashTemplatesRb = null)
    {
        $this->scene7FlashTemplatesRb = $scene7FlashTemplatesRb;

        return $this;
    }

    /**
     * Gets scene7FlashTemplatesRurl.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getScene7FlashTemplatesRurl()
    {
        return $this->scene7FlashTemplatesRurl;
    }

    /**
     * Sets scene7FlashTemplatesRurl.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $scene7FlashTemplatesRurl
     *
     * @return $this
     */
    public function setScene7FlashTemplatesRurl(ConfigNodePropertyString $scene7FlashTemplatesRurl = null)
    {
        $this->scene7FlashTemplatesRurl = $scene7FlashTemplatesRurl;

        return $this;
    }

    /**
     * Gets scene7FlashTemplateUrlFormatParameter.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getScene7FlashTemplateUrlFormatParameter()
    {
        return $this->scene7FlashTemplateUrlFormatParameter;
    }

    /**
     * Sets scene7FlashTemplateUrlFormatParameter.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $scene7FlashTemplateUrlFormatParameter
     *
     * @return $this
     */
    public function setScene7FlashTemplateUrlFormatParameter(ConfigNodePropertyString $scene7FlashTemplateUrlFormatParameter = null)
    {
        $this->scene7FlashTemplateUrlFormatParameter = $scene7FlashTemplateUrlFormatParameter;

        return $this;
    }
}


