<?php
/**
 * OrgApacheSlingResourcemergerPickerOverridingProperties
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
 * Class representing the OrgApacheSlingResourcemergerPickerOverridingProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingResourcemergerPickerOverridingProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("merge.root")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $mergeRoot;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("merge.readOnly")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $mergeReadOnly;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->mergeRoot = isset($data['mergeRoot']) ? $data['mergeRoot'] : null;
        $this->mergeReadOnly = isset($data['mergeReadOnly']) ? $data['mergeReadOnly'] : null;
    }

    /**
     * Gets mergeRoot.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getMergeRoot()
    {
        return $this->mergeRoot;
    }

    /**
     * Sets mergeRoot.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $mergeRoot
     *
     * @return $this
     */
    public function setMergeRoot(ConfigNodePropertyString $mergeRoot = null)
    {
        $this->mergeRoot = $mergeRoot;

        return $this;
    }

    /**
     * Gets mergeReadOnly.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getMergeReadOnly()
    {
        return $this->mergeReadOnly;
    }

    /**
     * Sets mergeReadOnly.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $mergeReadOnly
     *
     * @return $this
     */
    public function setMergeReadOnly(ConfigNodePropertyBoolean $mergeReadOnly = null)
    {
        $this->mergeReadOnly = $mergeReadOnly;

        return $this;
    }
}


