<?php
/**
 * ComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties
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
 * Class representing the ComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeGraniteAuthOauthImplOAuthAuthenticationHandlerProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $path;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->path = isset($data['path']) ? $data['path'] : null;
    }

    /**
     * Gets path.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPath()
    {
        return $this->path;
    }

    /**
     * Sets path.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $path
     *
     * @return $this
     */
    public function setPath(ConfigNodePropertyString $path = null)
    {
        $this->path = $path;

        return $this;
    }
}


