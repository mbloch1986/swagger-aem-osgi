<?php
/**
 * ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties
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
 * Class representing the ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("resourceType.filters")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $resourceTypeFilters;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("priority")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $priority;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->resourceTypeFilters = isset($data['resourceTypeFilters']) ? $data['resourceTypeFilters'] : null;
        $this->priority = isset($data['priority']) ? $data['priority'] : null;
    }

    /**
     * Gets resourceTypeFilters.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getResourceTypeFilters()
    {
        return $this->resourceTypeFilters;
    }

    /**
     * Sets resourceTypeFilters.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $resourceTypeFilters
     *
     * @return $this
     */
    public function setResourceTypeFilters(ConfigNodePropertyArray $resourceTypeFilters = null)
    {
        $this->resourceTypeFilters = $resourceTypeFilters;

        return $this;
    }

    /**
     * Gets priority.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getPriority()
    {
        return $this->priority;
    }

    /**
     * Sets priority.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $priority
     *
     * @return $this
     */
    public function setPriority(ConfigNodePropertyInteger $priority = null)
    {
        $this->priority = $priority;

        return $this;
    }
}


