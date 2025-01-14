<?php
/**
 * OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties
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
 * Class representing the OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("service.ranking")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $serviceRanking;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("type.collections")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $typeCollections;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("type.noncollections")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $typeNoncollections;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("type.content")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $typeContent;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->serviceRanking = isset($data['serviceRanking']) ? $data['serviceRanking'] : null;
        $this->typeCollections = isset($data['typeCollections']) ? $data['typeCollections'] : null;
        $this->typeNoncollections = isset($data['typeNoncollections']) ? $data['typeNoncollections'] : null;
        $this->typeContent = isset($data['typeContent']) ? $data['typeContent'] : null;
    }

    /**
     * Gets serviceRanking.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getServiceRanking()
    {
        return $this->serviceRanking;
    }

    /**
     * Sets serviceRanking.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $serviceRanking
     *
     * @return $this
     */
    public function setServiceRanking(ConfigNodePropertyInteger $serviceRanking = null)
    {
        $this->serviceRanking = $serviceRanking;

        return $this;
    }

    /**
     * Gets typeCollections.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getTypeCollections()
    {
        return $this->typeCollections;
    }

    /**
     * Sets typeCollections.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $typeCollections
     *
     * @return $this
     */
    public function setTypeCollections(ConfigNodePropertyString $typeCollections = null)
    {
        $this->typeCollections = $typeCollections;

        return $this;
    }

    /**
     * Gets typeNoncollections.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getTypeNoncollections()
    {
        return $this->typeNoncollections;
    }

    /**
     * Sets typeNoncollections.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $typeNoncollections
     *
     * @return $this
     */
    public function setTypeNoncollections(ConfigNodePropertyString $typeNoncollections = null)
    {
        $this->typeNoncollections = $typeNoncollections;

        return $this;
    }

    /**
     * Gets typeContent.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getTypeContent()
    {
        return $this->typeContent;
    }

    /**
     * Sets typeContent.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $typeContent
     *
     * @return $this
     */
    public function setTypeContent(ConfigNodePropertyString $typeContent = null)
    {
        $this->typeContent = $typeContent;

        return $this;
    }
}


