<?php
/**
 * ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties
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
 * Class representing the ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("jmx.objectname")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $jmxObjectname;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->jmxObjectname = isset($data['jmxObjectname']) ? $data['jmxObjectname'] : null;
    }

    /**
     * Gets jmxObjectname.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getJmxObjectname()
    {
        return $this->jmxObjectname;
    }

    /**
     * Sets jmxObjectname.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $jmxObjectname
     *
     * @return $this
     */
    public function setJmxObjectname(ConfigNodePropertyString $jmxObjectname = null)
    {
        $this->jmxObjectname = $jmxObjectname;

        return $this;
    }
}


