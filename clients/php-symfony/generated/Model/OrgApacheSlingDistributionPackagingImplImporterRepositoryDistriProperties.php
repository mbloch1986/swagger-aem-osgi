<?php
/**
 * OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties
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
 * Class representing the OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $name;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("service.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $serviceName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $path;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("privilege.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $privilegeName;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->serviceName = isset($data['serviceName']) ? $data['serviceName'] : null;
        $this->path = isset($data['path']) ? $data['path'] : null;
        $this->privilegeName = isset($data['privilegeName']) ? $data['privilegeName'] : null;
    }

    /**
     * Gets name.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $name
     *
     * @return $this
     */
    public function setName(ConfigNodePropertyString $name = null)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets serviceName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getServiceName()
    {
        return $this->serviceName;
    }

    /**
     * Sets serviceName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $serviceName
     *
     * @return $this
     */
    public function setServiceName(ConfigNodePropertyString $serviceName = null)
    {
        $this->serviceName = $serviceName;

        return $this;
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

    /**
     * Gets privilegeName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPrivilegeName()
    {
        return $this->privilegeName;
    }

    /**
     * Sets privilegeName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $privilegeName
     *
     * @return $this
     */
    public function setPrivilegeName(ConfigNodePropertyString $privilegeName = null)
    {
        $this->privilegeName = $privilegeName;

        return $this;
    }
}

