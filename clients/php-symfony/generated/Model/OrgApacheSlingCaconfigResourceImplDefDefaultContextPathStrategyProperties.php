<?php
/**
 * OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties
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
 * Class representing the OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("enabled")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $enabled;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("configRefResourceNames")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $configRefResourceNames;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("configRefPropertyNames")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $configRefPropertyNames;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("service.ranking")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $serviceRanking;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->enabled = isset($data['enabled']) ? $data['enabled'] : null;
        $this->configRefResourceNames = isset($data['configRefResourceNames']) ? $data['configRefResourceNames'] : null;
        $this->configRefPropertyNames = isset($data['configRefPropertyNames']) ? $data['configRefPropertyNames'] : null;
        $this->serviceRanking = isset($data['serviceRanking']) ? $data['serviceRanking'] : null;
    }

    /**
     * Gets enabled.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnabled()
    {
        return $this->enabled;
    }

    /**
     * Sets enabled.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $enabled
     *
     * @return $this
     */
    public function setEnabled(ConfigNodePropertyBoolean $enabled = null)
    {
        $this->enabled = $enabled;

        return $this;
    }

    /**
     * Gets configRefResourceNames.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getConfigRefResourceNames()
    {
        return $this->configRefResourceNames;
    }

    /**
     * Sets configRefResourceNames.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $configRefResourceNames
     *
     * @return $this
     */
    public function setConfigRefResourceNames(ConfigNodePropertyArray $configRefResourceNames = null)
    {
        $this->configRefResourceNames = $configRefResourceNames;

        return $this;
    }

    /**
     * Gets configRefPropertyNames.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getConfigRefPropertyNames()
    {
        return $this->configRefPropertyNames;
    }

    /**
     * Sets configRefPropertyNames.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $configRefPropertyNames
     *
     * @return $this
     */
    public function setConfigRefPropertyNames(ConfigNodePropertyArray $configRefPropertyNames = null)
    {
        $this->configRefPropertyNames = $configRefPropertyNames;

        return $this;
    }

    /**
     * Gets serviceRanking.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getServiceRanking()
    {
        return $this->serviceRanking;
    }

    /**
     * Sets serviceRanking.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $serviceRanking
     *
     * @return $this
     */
    public function setServiceRanking(ConfigNodePropertyInteger $serviceRanking = null)
    {
        $this->serviceRanking = $serviceRanking;

        return $this;
    }
}

