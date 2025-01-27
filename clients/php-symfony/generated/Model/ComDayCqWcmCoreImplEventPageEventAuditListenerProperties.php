<?php
/**
 * ComDayCqWcmCoreImplEventPageEventAuditListenerProperties
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
 * Class representing the ComDayCqWcmCoreImplEventPageEventAuditListenerProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmCoreImplEventPageEventAuditListenerProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("configured")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $configured;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->configured = isset($data['configured']) ? $data['configured'] : null;
    }

    /**
     * Gets configured.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getConfigured()
    {
        return $this->configured;
    }

    /**
     * Sets configured.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $configured
     *
     * @return $this
     */
    public function setConfigured(ConfigNodePropertyString $configured = null)
    {
        $this->configured = $configured;

        return $this;
    }
}


