<?php
/**
 * ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties
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
 * Class representing the ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("com.adobe.cq.dam.mac.sync.damsyncservice.registered_paths")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("com.adobe.cq.dam.mac.sync.damsyncservice.sync.renditions")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("com.adobe.cq.dam.mac.sync.damsyncservice.replicate.thread.wait.ms")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("com.adobe.cq.dam.mac.sync.damsyncservice.platform")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $comAdobeCqDamMacSyncDamsyncservicePlatform;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = isset($data['comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths']) ? $data['comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths'] : null;
        $this->comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = isset($data['comAdobeCqDamMacSyncDamsyncserviceSyncRenditions']) ? $data['comAdobeCqDamMacSyncDamsyncserviceSyncRenditions'] : null;
        $this->comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = isset($data['comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs']) ? $data['comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs'] : null;
        $this->comAdobeCqDamMacSyncDamsyncservicePlatform = isset($data['comAdobeCqDamMacSyncDamsyncservicePlatform']) ? $data['comAdobeCqDamMacSyncDamsyncservicePlatform'] : null;
    }

    /**
     * Gets comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths()
    {
        return $this->comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;
    }

    /**
     * Sets comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths
     *
     * @return $this
     */
    public function setComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths(ConfigNodePropertyArray $comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = null)
    {
        $this->comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths = $comAdobeCqDamMacSyncDamsyncserviceRegisteredPaths;

        return $this;
    }

    /**
     * Gets comAdobeCqDamMacSyncDamsyncserviceSyncRenditions.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getComAdobeCqDamMacSyncDamsyncserviceSyncRenditions()
    {
        return $this->comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;
    }

    /**
     * Sets comAdobeCqDamMacSyncDamsyncserviceSyncRenditions.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $comAdobeCqDamMacSyncDamsyncserviceSyncRenditions
     *
     * @return $this
     */
    public function setComAdobeCqDamMacSyncDamsyncserviceSyncRenditions(ConfigNodePropertyBoolean $comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = null)
    {
        $this->comAdobeCqDamMacSyncDamsyncserviceSyncRenditions = $comAdobeCqDamMacSyncDamsyncserviceSyncRenditions;

        return $this;
    }

    /**
     * Gets comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs()
    {
        return $this->comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;
    }

    /**
     * Sets comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs
     *
     * @return $this
     */
    public function setComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs(ConfigNodePropertyInteger $comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = null)
    {
        $this->comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs = $comAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs;

        return $this;
    }

    /**
     * Gets comAdobeCqDamMacSyncDamsyncservicePlatform.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getComAdobeCqDamMacSyncDamsyncservicePlatform()
    {
        return $this->comAdobeCqDamMacSyncDamsyncservicePlatform;
    }

    /**
     * Sets comAdobeCqDamMacSyncDamsyncservicePlatform.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $comAdobeCqDamMacSyncDamsyncservicePlatform
     *
     * @return $this
     */
    public function setComAdobeCqDamMacSyncDamsyncservicePlatform(ConfigNodePropertyDropDown $comAdobeCqDamMacSyncDamsyncservicePlatform = null)
    {
        $this->comAdobeCqDamMacSyncDamsyncservicePlatform = $comAdobeCqDamMacSyncDamsyncservicePlatform;

        return $this;
    }
}


