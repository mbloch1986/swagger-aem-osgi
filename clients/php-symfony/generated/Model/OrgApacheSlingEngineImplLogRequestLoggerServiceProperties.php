<?php
/**
 * OrgApacheSlingEngineImplLogRequestLoggerServiceProperties
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
 * Class representing the OrgApacheSlingEngineImplLogRequestLoggerServiceProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingEngineImplLogRequestLoggerServiceProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("request.log.service.format")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $requestLogServiceFormat;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("request.log.service.output")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $requestLogServiceOutput;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("request.log.service.outputtype")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $requestLogServiceOutputtype;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("request.log.service.onentry")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $requestLogServiceOnentry;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->requestLogServiceFormat = isset($data['requestLogServiceFormat']) ? $data['requestLogServiceFormat'] : null;
        $this->requestLogServiceOutput = isset($data['requestLogServiceOutput']) ? $data['requestLogServiceOutput'] : null;
        $this->requestLogServiceOutputtype = isset($data['requestLogServiceOutputtype']) ? $data['requestLogServiceOutputtype'] : null;
        $this->requestLogServiceOnentry = isset($data['requestLogServiceOnentry']) ? $data['requestLogServiceOnentry'] : null;
    }

    /**
     * Gets requestLogServiceFormat.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getRequestLogServiceFormat()
    {
        return $this->requestLogServiceFormat;
    }

    /**
     * Sets requestLogServiceFormat.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $requestLogServiceFormat
     *
     * @return $this
     */
    public function setRequestLogServiceFormat(ConfigNodePropertyString $requestLogServiceFormat = null)
    {
        $this->requestLogServiceFormat = $requestLogServiceFormat;

        return $this;
    }

    /**
     * Gets requestLogServiceOutput.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getRequestLogServiceOutput()
    {
        return $this->requestLogServiceOutput;
    }

    /**
     * Sets requestLogServiceOutput.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $requestLogServiceOutput
     *
     * @return $this
     */
    public function setRequestLogServiceOutput(ConfigNodePropertyString $requestLogServiceOutput = null)
    {
        $this->requestLogServiceOutput = $requestLogServiceOutput;

        return $this;
    }

    /**
     * Gets requestLogServiceOutputtype.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getRequestLogServiceOutputtype()
    {
        return $this->requestLogServiceOutputtype;
    }

    /**
     * Sets requestLogServiceOutputtype.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $requestLogServiceOutputtype
     *
     * @return $this
     */
    public function setRequestLogServiceOutputtype(ConfigNodePropertyDropDown $requestLogServiceOutputtype = null)
    {
        $this->requestLogServiceOutputtype = $requestLogServiceOutputtype;

        return $this;
    }

    /**
     * Gets requestLogServiceOnentry.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getRequestLogServiceOnentry()
    {
        return $this->requestLogServiceOnentry;
    }

    /**
     * Sets requestLogServiceOnentry.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $requestLogServiceOnentry
     *
     * @return $this
     */
    public function setRequestLogServiceOnentry(ConfigNodePropertyBoolean $requestLogServiceOnentry = null)
    {
        $this->requestLogServiceOnentry = $requestLogServiceOnentry;

        return $this;
    }
}


