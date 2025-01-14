<?php
/**
 * OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties
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
 * Class representing the OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("dav.root")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $davRoot;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("dav.create-absolute-uri")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $davCreateAbsoluteUri;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("dav.realm")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $davRealm;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("collection.types")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $collectionTypes;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("filter.prefixes")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $filterPrefixes;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("filter.types")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $filterTypes;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("filter.uris")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $filterUris;

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
        $this->davRoot = isset($data['davRoot']) ? $data['davRoot'] : null;
        $this->davCreateAbsoluteUri = isset($data['davCreateAbsoluteUri']) ? $data['davCreateAbsoluteUri'] : null;
        $this->davRealm = isset($data['davRealm']) ? $data['davRealm'] : null;
        $this->collectionTypes = isset($data['collectionTypes']) ? $data['collectionTypes'] : null;
        $this->filterPrefixes = isset($data['filterPrefixes']) ? $data['filterPrefixes'] : null;
        $this->filterTypes = isset($data['filterTypes']) ? $data['filterTypes'] : null;
        $this->filterUris = isset($data['filterUris']) ? $data['filterUris'] : null;
        $this->typeCollections = isset($data['typeCollections']) ? $data['typeCollections'] : null;
        $this->typeNoncollections = isset($data['typeNoncollections']) ? $data['typeNoncollections'] : null;
        $this->typeContent = isset($data['typeContent']) ? $data['typeContent'] : null;
    }

    /**
     * Gets davRoot.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getDavRoot()
    {
        return $this->davRoot;
    }

    /**
     * Sets davRoot.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $davRoot
     *
     * @return $this
     */
    public function setDavRoot(ConfigNodePropertyString $davRoot = null)
    {
        $this->davRoot = $davRoot;

        return $this;
    }

    /**
     * Gets davCreateAbsoluteUri.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getDavCreateAbsoluteUri()
    {
        return $this->davCreateAbsoluteUri;
    }

    /**
     * Sets davCreateAbsoluteUri.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $davCreateAbsoluteUri
     *
     * @return $this
     */
    public function setDavCreateAbsoluteUri(ConfigNodePropertyBoolean $davCreateAbsoluteUri = null)
    {
        $this->davCreateAbsoluteUri = $davCreateAbsoluteUri;

        return $this;
    }

    /**
     * Gets davRealm.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getDavRealm()
    {
        return $this->davRealm;
    }

    /**
     * Sets davRealm.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $davRealm
     *
     * @return $this
     */
    public function setDavRealm(ConfigNodePropertyString $davRealm = null)
    {
        $this->davRealm = $davRealm;

        return $this;
    }

    /**
     * Gets collectionTypes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCollectionTypes()
    {
        return $this->collectionTypes;
    }

    /**
     * Sets collectionTypes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $collectionTypes
     *
     * @return $this
     */
    public function setCollectionTypes(ConfigNodePropertyArray $collectionTypes = null)
    {
        $this->collectionTypes = $collectionTypes;

        return $this;
    }

    /**
     * Gets filterPrefixes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getFilterPrefixes()
    {
        return $this->filterPrefixes;
    }

    /**
     * Sets filterPrefixes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $filterPrefixes
     *
     * @return $this
     */
    public function setFilterPrefixes(ConfigNodePropertyArray $filterPrefixes = null)
    {
        $this->filterPrefixes = $filterPrefixes;

        return $this;
    }

    /**
     * Gets filterTypes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getFilterTypes()
    {
        return $this->filterTypes;
    }

    /**
     * Sets filterTypes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $filterTypes
     *
     * @return $this
     */
    public function setFilterTypes(ConfigNodePropertyString $filterTypes = null)
    {
        $this->filterTypes = $filterTypes;

        return $this;
    }

    /**
     * Gets filterUris.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getFilterUris()
    {
        return $this->filterUris;
    }

    /**
     * Sets filterUris.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $filterUris
     *
     * @return $this
     */
    public function setFilterUris(ConfigNodePropertyString $filterUris = null)
    {
        $this->filterUris = $filterUris;

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


