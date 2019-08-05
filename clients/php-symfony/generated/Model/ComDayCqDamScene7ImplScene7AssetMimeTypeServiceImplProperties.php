<?php
/**
 * ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties
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
 * Class representing the ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.dam.scene7.assetmimetypeservice.mapping")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqDamScene7AssetmimetypeserviceMapping;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqDamScene7AssetmimetypeserviceMapping = isset($data['cqDamScene7AssetmimetypeserviceMapping']) ? $data['cqDamScene7AssetmimetypeserviceMapping'] : null;
    }

    /**
     * Gets cqDamScene7AssetmimetypeserviceMapping.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqDamScene7AssetmimetypeserviceMapping()
    {
        return $this->cqDamScene7AssetmimetypeserviceMapping;
    }

    /**
     * Sets cqDamScene7AssetmimetypeserviceMapping.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqDamScene7AssetmimetypeserviceMapping
     *
     * @return $this
     */
    public function setCqDamScene7AssetmimetypeserviceMapping(ConfigNodePropertyArray $cqDamScene7AssetmimetypeserviceMapping = null)
    {
        $this->cqDamScene7AssetmimetypeserviceMapping = $cqDamScene7AssetmimetypeserviceMapping;

        return $this;
    }
}

