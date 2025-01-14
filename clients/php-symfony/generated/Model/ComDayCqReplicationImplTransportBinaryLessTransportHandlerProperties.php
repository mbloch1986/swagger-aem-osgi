<?php
/**
 * ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties
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
 * Class representing the ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("disabled.cipher.suites")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $disabledCipherSuites;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("enabled.cipher.suites")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $enabledCipherSuites;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->disabledCipherSuites = isset($data['disabledCipherSuites']) ? $data['disabledCipherSuites'] : null;
        $this->enabledCipherSuites = isset($data['enabledCipherSuites']) ? $data['enabledCipherSuites'] : null;
    }

    /**
     * Gets disabledCipherSuites.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getDisabledCipherSuites()
    {
        return $this->disabledCipherSuites;
    }

    /**
     * Sets disabledCipherSuites.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $disabledCipherSuites
     *
     * @return $this
     */
    public function setDisabledCipherSuites(ConfigNodePropertyArray $disabledCipherSuites = null)
    {
        $this->disabledCipherSuites = $disabledCipherSuites;

        return $this;
    }

    /**
     * Gets enabledCipherSuites.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getEnabledCipherSuites()
    {
        return $this->enabledCipherSuites;
    }

    /**
     * Sets enabledCipherSuites.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $enabledCipherSuites
     *
     * @return $this
     */
    public function setEnabledCipherSuites(ConfigNodePropertyArray $enabledCipherSuites = null)
    {
        $this->enabledCipherSuites = $enabledCipherSuites;

        return $this;
    }
}


