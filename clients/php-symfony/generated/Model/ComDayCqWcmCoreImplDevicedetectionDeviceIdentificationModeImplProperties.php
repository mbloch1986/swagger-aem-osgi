<?php
/**
 * ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties
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
 * Class representing the ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("dim.default.mode")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $dimDefaultMode;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("dim.appcache.enabled")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $dimAppcacheEnabled;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->dimDefaultMode = isset($data['dimDefaultMode']) ? $data['dimDefaultMode'] : null;
        $this->dimAppcacheEnabled = isset($data['dimAppcacheEnabled']) ? $data['dimAppcacheEnabled'] : null;
    }

    /**
     * Gets dimDefaultMode.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getDimDefaultMode()
    {
        return $this->dimDefaultMode;
    }

    /**
     * Sets dimDefaultMode.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $dimDefaultMode
     *
     * @return $this
     */
    public function setDimDefaultMode(ConfigNodePropertyDropDown $dimDefaultMode = null)
    {
        $this->dimDefaultMode = $dimDefaultMode;

        return $this;
    }

    /**
     * Gets dimAppcacheEnabled.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getDimAppcacheEnabled()
    {
        return $this->dimAppcacheEnabled;
    }

    /**
     * Sets dimAppcacheEnabled.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $dimAppcacheEnabled
     *
     * @return $this
     */
    public function setDimAppcacheEnabled(ConfigNodePropertyBoolean $dimAppcacheEnabled = null)
    {
        $this->dimAppcacheEnabled = $dimAppcacheEnabled;

        return $this;
    }
}

