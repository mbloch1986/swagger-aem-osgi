<?php
/**
 * OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
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
 * Class representing the OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("alias")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $alias;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("dav.create-absolute-uri")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $davCreateAbsoluteUri;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("dav.protectedhandlers")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $davProtectedhandlers;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->alias = isset($data['alias']) ? $data['alias'] : null;
        $this->davCreateAbsoluteUri = isset($data['davCreateAbsoluteUri']) ? $data['davCreateAbsoluteUri'] : null;
        $this->davProtectedhandlers = isset($data['davProtectedhandlers']) ? $data['davProtectedhandlers'] : null;
    }

    /**
     * Gets alias.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAlias()
    {
        return $this->alias;
    }

    /**
     * Sets alias.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $alias
     *
     * @return $this
     */
    public function setAlias(ConfigNodePropertyString $alias = null)
    {
        $this->alias = $alias;

        return $this;
    }

    /**
     * Gets davCreateAbsoluteUri.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getDavCreateAbsoluteUri()
    {
        return $this->davCreateAbsoluteUri;
    }

    /**
     * Sets davCreateAbsoluteUri.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $davCreateAbsoluteUri
     *
     * @return $this
     */
    public function setDavCreateAbsoluteUri(ConfigNodePropertyBoolean $davCreateAbsoluteUri = null)
    {
        $this->davCreateAbsoluteUri = $davCreateAbsoluteUri;

        return $this;
    }

    /**
     * Gets davProtectedhandlers.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getDavProtectedhandlers()
    {
        return $this->davProtectedhandlers;
    }

    /**
     * Sets davProtectedhandlers.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $davProtectedhandlers
     *
     * @return $this
     */
    public function setDavProtectedhandlers(ConfigNodePropertyString $davProtectedhandlers = null)
    {
        $this->davProtectedhandlers = $davProtectedhandlers;

        return $this;
    }
}

