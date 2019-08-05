<?php
/**
 * ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties
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
 * Class representing the ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $name;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("locale")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $locale;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("imsConfig")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $imsConfig;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->locale = isset($data['locale']) ? $data['locale'] : null;
        $this->imsConfig = isset($data['imsConfig']) ? $data['imsConfig'] : null;
    }

    /**
     * Gets name.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $name
     *
     * @return $this
     */
    public function setName(ConfigNodePropertyString $name = null)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets locale.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getLocale()
    {
        return $this->locale;
    }

    /**
     * Sets locale.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $locale
     *
     * @return $this
     */
    public function setLocale(ConfigNodePropertyString $locale = null)
    {
        $this->locale = $locale;

        return $this;
    }

    /**
     * Gets imsConfig.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getImsConfig()
    {
        return $this->imsConfig;
    }

    /**
     * Sets imsConfig.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $imsConfig
     *
     * @return $this
     */
    public function setImsConfig(ConfigNodePropertyString $imsConfig = null)
    {
        $this->imsConfig = $imsConfig;

        return $this;
    }
}

