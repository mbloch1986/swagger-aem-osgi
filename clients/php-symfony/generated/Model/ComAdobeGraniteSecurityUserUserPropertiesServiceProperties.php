<?php
/**
 * ComAdobeGraniteSecurityUserUserPropertiesServiceProperties
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
 * Class representing the ComAdobeGraniteSecurityUserUserPropertiesServiceProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteSecurityUserUserPropertiesServiceProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("adapter.condition")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $adapterCondition;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("granite.userproperties.nodetypes")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $graniteUserpropertiesNodetypes;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("granite.userproperties.resourcetypes")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $graniteUserpropertiesResourcetypes;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->adapterCondition = isset($data['adapterCondition']) ? $data['adapterCondition'] : null;
        $this->graniteUserpropertiesNodetypes = isset($data['graniteUserpropertiesNodetypes']) ? $data['graniteUserpropertiesNodetypes'] : null;
        $this->graniteUserpropertiesResourcetypes = isset($data['graniteUserpropertiesResourcetypes']) ? $data['graniteUserpropertiesResourcetypes'] : null;
    }

    /**
     * Gets adapterCondition.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAdapterCondition()
    {
        return $this->adapterCondition;
    }

    /**
     * Sets adapterCondition.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $adapterCondition
     *
     * @return $this
     */
    public function setAdapterCondition(ConfigNodePropertyString $adapterCondition = null)
    {
        $this->adapterCondition = $adapterCondition;

        return $this;
    }

    /**
     * Gets graniteUserpropertiesNodetypes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getGraniteUserpropertiesNodetypes()
    {
        return $this->graniteUserpropertiesNodetypes;
    }

    /**
     * Sets graniteUserpropertiesNodetypes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $graniteUserpropertiesNodetypes
     *
     * @return $this
     */
    public function setGraniteUserpropertiesNodetypes(ConfigNodePropertyArray $graniteUserpropertiesNodetypes = null)
    {
        $this->graniteUserpropertiesNodetypes = $graniteUserpropertiesNodetypes;

        return $this;
    }

    /**
     * Gets graniteUserpropertiesResourcetypes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getGraniteUserpropertiesResourcetypes()
    {
        return $this->graniteUserpropertiesResourcetypes;
    }

    /**
     * Sets graniteUserpropertiesResourcetypes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $graniteUserpropertiesResourcetypes
     *
     * @return $this
     */
    public function setGraniteUserpropertiesResourcetypes(ConfigNodePropertyArray $graniteUserpropertiesResourcetypes = null)
    {
        $this->graniteUserpropertiesResourcetypes = $graniteUserpropertiesResourcetypes;

        return $this;
    }
}


