<?php
/**
 * ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties
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
 * Class representing the ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties 
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
     * @SerializedName("taskmanager.admingroups")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $taskmanagerAdmingroups;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->adapterCondition = isset($data['adapterCondition']) ? $data['adapterCondition'] : null;
        $this->taskmanagerAdmingroups = isset($data['taskmanagerAdmingroups']) ? $data['taskmanagerAdmingroups'] : null;
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
     * Gets taskmanagerAdmingroups.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getTaskmanagerAdmingroups()
    {
        return $this->taskmanagerAdmingroups;
    }

    /**
     * Sets taskmanagerAdmingroups.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $taskmanagerAdmingroups
     *
     * @return $this
     */
    public function setTaskmanagerAdmingroups(ConfigNodePropertyArray $taskmanagerAdmingroups = null)
    {
        $this->taskmanagerAdmingroups = $taskmanagerAdmingroups;

        return $this;
    }
}


