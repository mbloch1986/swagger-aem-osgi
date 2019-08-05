<?php
/**
 * ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties
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
 * Class representing the ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("facebook")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $facebook;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("twitter")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $twitter;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("provider.config.user.folder")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $providerConfigUserFolder;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->facebook = isset($data['facebook']) ? $data['facebook'] : null;
        $this->twitter = isset($data['twitter']) ? $data['twitter'] : null;
        $this->providerConfigUserFolder = isset($data['providerConfigUserFolder']) ? $data['providerConfigUserFolder'] : null;
    }

    /**
     * Gets facebook.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getFacebook()
    {
        return $this->facebook;
    }

    /**
     * Sets facebook.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $facebook
     *
     * @return $this
     */
    public function setFacebook(ConfigNodePropertyArray $facebook = null)
    {
        $this->facebook = $facebook;

        return $this;
    }

    /**
     * Gets twitter.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getTwitter()
    {
        return $this->twitter;
    }

    /**
     * Sets twitter.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $twitter
     *
     * @return $this
     */
    public function setTwitter(ConfigNodePropertyArray $twitter = null)
    {
        $this->twitter = $twitter;

        return $this;
    }

    /**
     * Gets providerConfigUserFolder.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getProviderConfigUserFolder()
    {
        return $this->providerConfigUserFolder;
    }

    /**
     * Sets providerConfigUserFolder.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $providerConfigUserFolder
     *
     * @return $this
     */
    public function setProviderConfigUserFolder(ConfigNodePropertyString $providerConfigUserFolder = null)
    {
        $this->providerConfigUserFolder = $providerConfigUserFolder;

        return $this;
    }
}

