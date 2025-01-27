<?php
/**
 * ComDayCqContentsyncImplContentSyncManagerImplProperties
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
 * Class representing the ComDayCqContentsyncImplContentSyncManagerImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqContentsyncImplContentSyncManagerImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("contentsync.fallback.authorizable")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $contentsyncFallbackAuthorizable;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("contentsync.fallback.updateuser")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $contentsyncFallbackUpdateuser;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->contentsyncFallbackAuthorizable = isset($data['contentsyncFallbackAuthorizable']) ? $data['contentsyncFallbackAuthorizable'] : null;
        $this->contentsyncFallbackUpdateuser = isset($data['contentsyncFallbackUpdateuser']) ? $data['contentsyncFallbackUpdateuser'] : null;
    }

    /**
     * Gets contentsyncFallbackAuthorizable.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getContentsyncFallbackAuthorizable()
    {
        return $this->contentsyncFallbackAuthorizable;
    }

    /**
     * Sets contentsyncFallbackAuthorizable.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $contentsyncFallbackAuthorizable
     *
     * @return $this
     */
    public function setContentsyncFallbackAuthorizable(ConfigNodePropertyString $contentsyncFallbackAuthorizable = null)
    {
        $this->contentsyncFallbackAuthorizable = $contentsyncFallbackAuthorizable;

        return $this;
    }

    /**
     * Gets contentsyncFallbackUpdateuser.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getContentsyncFallbackUpdateuser()
    {
        return $this->contentsyncFallbackUpdateuser;
    }

    /**
     * Sets contentsyncFallbackUpdateuser.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $contentsyncFallbackUpdateuser
     *
     * @return $this
     */
    public function setContentsyncFallbackUpdateuser(ConfigNodePropertyString $contentsyncFallbackUpdateuser = null)
    {
        $this->contentsyncFallbackUpdateuser = $contentsyncFallbackUpdateuser;

        return $this;
    }
}


