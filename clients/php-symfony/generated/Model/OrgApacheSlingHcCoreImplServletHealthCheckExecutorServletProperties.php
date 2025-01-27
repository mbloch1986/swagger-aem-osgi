<?php
/**
 * OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties
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
 * Class representing the OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("servletPath")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $servletPath;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("disabled")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $disabled;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cors.accessControlAllowOrigin")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $corsAccessControlAllowOrigin;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->servletPath = isset($data['servletPath']) ? $data['servletPath'] : null;
        $this->disabled = isset($data['disabled']) ? $data['disabled'] : null;
        $this->corsAccessControlAllowOrigin = isset($data['corsAccessControlAllowOrigin']) ? $data['corsAccessControlAllowOrigin'] : null;
    }

    /**
     * Gets servletPath.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getServletPath()
    {
        return $this->servletPath;
    }

    /**
     * Sets servletPath.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $servletPath
     *
     * @return $this
     */
    public function setServletPath(ConfigNodePropertyString $servletPath = null)
    {
        $this->servletPath = $servletPath;

        return $this;
    }

    /**
     * Gets disabled.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getDisabled()
    {
        return $this->disabled;
    }

    /**
     * Sets disabled.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $disabled
     *
     * @return $this
     */
    public function setDisabled(ConfigNodePropertyBoolean $disabled = null)
    {
        $this->disabled = $disabled;

        return $this;
    }

    /**
     * Gets corsAccessControlAllowOrigin.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCorsAccessControlAllowOrigin()
    {
        return $this->corsAccessControlAllowOrigin;
    }

    /**
     * Sets corsAccessControlAllowOrigin.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $corsAccessControlAllowOrigin
     *
     * @return $this
     */
    public function setCorsAccessControlAllowOrigin(ConfigNodePropertyString $corsAccessControlAllowOrigin = null)
    {
        $this->corsAccessControlAllowOrigin = $corsAccessControlAllowOrigin;

        return $this;
    }
}


