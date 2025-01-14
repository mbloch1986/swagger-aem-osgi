<?php
/**
 * OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties
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
 * Class representing the OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("osgi.http.whiteboard.context.select")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $osgiHttpWhiteboardContextSelect;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("osgi.http.whiteboard.listener")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $osgiHttpWhiteboardListener;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("auth.sudo.cookie")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $authSudoCookie;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("auth.sudo.parameter")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $authSudoParameter;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("auth.annonymous")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $authAnnonymous;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("sling.auth.requirements")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $slingAuthRequirements;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("sling.auth.anonymous.user")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $slingAuthAnonymousUser;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("sling.auth.anonymous.password")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $slingAuthAnonymousPassword;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("auth.http")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $authHttp;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("auth.http.realm")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $authHttpRealm;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("auth.uri.suffix")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $authUriSuffix;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->osgiHttpWhiteboardContextSelect = isset($data['osgiHttpWhiteboardContextSelect']) ? $data['osgiHttpWhiteboardContextSelect'] : null;
        $this->osgiHttpWhiteboardListener = isset($data['osgiHttpWhiteboardListener']) ? $data['osgiHttpWhiteboardListener'] : null;
        $this->authSudoCookie = isset($data['authSudoCookie']) ? $data['authSudoCookie'] : null;
        $this->authSudoParameter = isset($data['authSudoParameter']) ? $data['authSudoParameter'] : null;
        $this->authAnnonymous = isset($data['authAnnonymous']) ? $data['authAnnonymous'] : null;
        $this->slingAuthRequirements = isset($data['slingAuthRequirements']) ? $data['slingAuthRequirements'] : null;
        $this->slingAuthAnonymousUser = isset($data['slingAuthAnonymousUser']) ? $data['slingAuthAnonymousUser'] : null;
        $this->slingAuthAnonymousPassword = isset($data['slingAuthAnonymousPassword']) ? $data['slingAuthAnonymousPassword'] : null;
        $this->authHttp = isset($data['authHttp']) ? $data['authHttp'] : null;
        $this->authHttpRealm = isset($data['authHttpRealm']) ? $data['authHttpRealm'] : null;
        $this->authUriSuffix = isset($data['authUriSuffix']) ? $data['authUriSuffix'] : null;
    }

    /**
     * Gets osgiHttpWhiteboardContextSelect.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getOsgiHttpWhiteboardContextSelect()
    {
        return $this->osgiHttpWhiteboardContextSelect;
    }

    /**
     * Sets osgiHttpWhiteboardContextSelect.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $osgiHttpWhiteboardContextSelect
     *
     * @return $this
     */
    public function setOsgiHttpWhiteboardContextSelect(ConfigNodePropertyString $osgiHttpWhiteboardContextSelect = null)
    {
        $this->osgiHttpWhiteboardContextSelect = $osgiHttpWhiteboardContextSelect;

        return $this;
    }

    /**
     * Gets osgiHttpWhiteboardListener.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getOsgiHttpWhiteboardListener()
    {
        return $this->osgiHttpWhiteboardListener;
    }

    /**
     * Sets osgiHttpWhiteboardListener.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $osgiHttpWhiteboardListener
     *
     * @return $this
     */
    public function setOsgiHttpWhiteboardListener(ConfigNodePropertyString $osgiHttpWhiteboardListener = null)
    {
        $this->osgiHttpWhiteboardListener = $osgiHttpWhiteboardListener;

        return $this;
    }

    /**
     * Gets authSudoCookie.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAuthSudoCookie()
    {
        return $this->authSudoCookie;
    }

    /**
     * Sets authSudoCookie.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $authSudoCookie
     *
     * @return $this
     */
    public function setAuthSudoCookie(ConfigNodePropertyString $authSudoCookie = null)
    {
        $this->authSudoCookie = $authSudoCookie;

        return $this;
    }

    /**
     * Gets authSudoParameter.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAuthSudoParameter()
    {
        return $this->authSudoParameter;
    }

    /**
     * Sets authSudoParameter.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $authSudoParameter
     *
     * @return $this
     */
    public function setAuthSudoParameter(ConfigNodePropertyString $authSudoParameter = null)
    {
        $this->authSudoParameter = $authSudoParameter;

        return $this;
    }

    /**
     * Gets authAnnonymous.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getAuthAnnonymous()
    {
        return $this->authAnnonymous;
    }

    /**
     * Sets authAnnonymous.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $authAnnonymous
     *
     * @return $this
     */
    public function setAuthAnnonymous(ConfigNodePropertyBoolean $authAnnonymous = null)
    {
        $this->authAnnonymous = $authAnnonymous;

        return $this;
    }

    /**
     * Gets slingAuthRequirements.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getSlingAuthRequirements()
    {
        return $this->slingAuthRequirements;
    }

    /**
     * Sets slingAuthRequirements.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $slingAuthRequirements
     *
     * @return $this
     */
    public function setSlingAuthRequirements(ConfigNodePropertyArray $slingAuthRequirements = null)
    {
        $this->slingAuthRequirements = $slingAuthRequirements;

        return $this;
    }

    /**
     * Gets slingAuthAnonymousUser.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getSlingAuthAnonymousUser()
    {
        return $this->slingAuthAnonymousUser;
    }

    /**
     * Sets slingAuthAnonymousUser.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $slingAuthAnonymousUser
     *
     * @return $this
     */
    public function setSlingAuthAnonymousUser(ConfigNodePropertyString $slingAuthAnonymousUser = null)
    {
        $this->slingAuthAnonymousUser = $slingAuthAnonymousUser;

        return $this;
    }

    /**
     * Gets slingAuthAnonymousPassword.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getSlingAuthAnonymousPassword()
    {
        return $this->slingAuthAnonymousPassword;
    }

    /**
     * Sets slingAuthAnonymousPassword.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $slingAuthAnonymousPassword
     *
     * @return $this
     */
    public function setSlingAuthAnonymousPassword(ConfigNodePropertyString $slingAuthAnonymousPassword = null)
    {
        $this->slingAuthAnonymousPassword = $slingAuthAnonymousPassword;

        return $this;
    }

    /**
     * Gets authHttp.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getAuthHttp()
    {
        return $this->authHttp;
    }

    /**
     * Sets authHttp.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $authHttp
     *
     * @return $this
     */
    public function setAuthHttp(ConfigNodePropertyDropDown $authHttp = null)
    {
        $this->authHttp = $authHttp;

        return $this;
    }

    /**
     * Gets authHttpRealm.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getAuthHttpRealm()
    {
        return $this->authHttpRealm;
    }

    /**
     * Sets authHttpRealm.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $authHttpRealm
     *
     * @return $this
     */
    public function setAuthHttpRealm(ConfigNodePropertyString $authHttpRealm = null)
    {
        $this->authHttpRealm = $authHttpRealm;

        return $this;
    }

    /**
     * Gets authUriSuffix.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getAuthUriSuffix()
    {
        return $this->authUriSuffix;
    }

    /**
     * Sets authUriSuffix.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $authUriSuffix
     *
     * @return $this
     */
    public function setAuthUriSuffix(ConfigNodePropertyArray $authUriSuffix = null)
    {
        $this->authUriSuffix = $authUriSuffix;

        return $this;
    }
}


