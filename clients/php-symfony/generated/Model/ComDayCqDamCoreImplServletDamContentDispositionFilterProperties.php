<?php
/**
 * ComDayCqDamCoreImplServletDamContentDispositionFilterProperties
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
 * Class representing the ComDayCqDamCoreImplServletDamContentDispositionFilterProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamCoreImplServletDamContentDispositionFilterProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.mime.type.blacklist")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqMimeTypeBlacklist;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("cq.dam.empty.mime")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $cqDamEmptyMime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqMimeTypeBlacklist = isset($data['cqMimeTypeBlacklist']) ? $data['cqMimeTypeBlacklist'] : null;
        $this->cqDamEmptyMime = isset($data['cqDamEmptyMime']) ? $data['cqDamEmptyMime'] : null;
    }

    /**
     * Gets cqMimeTypeBlacklist.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqMimeTypeBlacklist()
    {
        return $this->cqMimeTypeBlacklist;
    }

    /**
     * Sets cqMimeTypeBlacklist.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqMimeTypeBlacklist
     *
     * @return $this
     */
    public function setCqMimeTypeBlacklist(ConfigNodePropertyArray $cqMimeTypeBlacklist = null)
    {
        $this->cqMimeTypeBlacklist = $cqMimeTypeBlacklist;

        return $this;
    }

    /**
     * Gets cqDamEmptyMime.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getCqDamEmptyMime()
    {
        return $this->cqDamEmptyMime;
    }

    /**
     * Sets cqDamEmptyMime.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $cqDamEmptyMime
     *
     * @return $this
     */
    public function setCqDamEmptyMime(ConfigNodePropertyBoolean $cqDamEmptyMime = null)
    {
        $this->cqDamEmptyMime = $cqDamEmptyMime;

        return $this;
    }
}


