<?php
/**
 * ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties
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
 * Class representing the ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("enableFallback")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $enableFallback;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->enableFallback = isset($data['enableFallback']) ? $data['enableFallback'] : null;
    }

    /**
     * Gets enableFallback.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getEnableFallback()
    {
        return $this->enableFallback;
    }

    /**
     * Sets enableFallback.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $enableFallback
     *
     * @return $this
     */
    public function setEnableFallback(ConfigNodePropertyBoolean $enableFallback = null)
    {
        $this->enableFallback = $enableFallback;

        return $this;
    }
}


