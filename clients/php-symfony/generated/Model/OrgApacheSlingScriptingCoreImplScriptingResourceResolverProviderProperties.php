<?php
/**
 * OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties
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
 * Class representing the OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("log.stacktrace.onclose")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $logStacktraceOnclose;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->logStacktraceOnclose = isset($data['logStacktraceOnclose']) ? $data['logStacktraceOnclose'] : null;
    }

    /**
     * Gets logStacktraceOnclose.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getLogStacktraceOnclose()
    {
        return $this->logStacktraceOnclose;
    }

    /**
     * Sets logStacktraceOnclose.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $logStacktraceOnclose
     *
     * @return $this
     */
    public function setLogStacktraceOnclose(ConfigNodePropertyBoolean $logStacktraceOnclose = null)
    {
        $this->logStacktraceOnclose = $logStacktraceOnclose;

        return $this;
    }
}


