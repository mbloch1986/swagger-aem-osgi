<?php
/**
 * OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties
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
 * Class representing the OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path.desc.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $pathDescField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path.child.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $pathChildField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path.parent.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $pathParentField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path.exact.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $pathExactField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("catch.all.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $catchAllField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("collapsed.path.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $collapsedPathField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("path.depth.field")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $pathDepthField;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     * @SerializedName("commit.policy")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyDropDown")
     */
    protected $commitPolicy;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("rows")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $rows;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("path.restrictions")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $pathRestrictions;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("property.restrictions")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $propertyRestrictions;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("primarytypes.restrictions")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $primarytypesRestrictions;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("ignored.properties")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $ignoredProperties;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("used.properties")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $usedProperties;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("type.mappings")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $typeMappings;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("property.mappings")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $propertyMappings;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("collapse.jcrcontent.nodes")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $collapseJcrcontentNodes;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->pathDescField = isset($data['pathDescField']) ? $data['pathDescField'] : null;
        $this->pathChildField = isset($data['pathChildField']) ? $data['pathChildField'] : null;
        $this->pathParentField = isset($data['pathParentField']) ? $data['pathParentField'] : null;
        $this->pathExactField = isset($data['pathExactField']) ? $data['pathExactField'] : null;
        $this->catchAllField = isset($data['catchAllField']) ? $data['catchAllField'] : null;
        $this->collapsedPathField = isset($data['collapsedPathField']) ? $data['collapsedPathField'] : null;
        $this->pathDepthField = isset($data['pathDepthField']) ? $data['pathDepthField'] : null;
        $this->commitPolicy = isset($data['commitPolicy']) ? $data['commitPolicy'] : null;
        $this->rows = isset($data['rows']) ? $data['rows'] : null;
        $this->pathRestrictions = isset($data['pathRestrictions']) ? $data['pathRestrictions'] : null;
        $this->propertyRestrictions = isset($data['propertyRestrictions']) ? $data['propertyRestrictions'] : null;
        $this->primarytypesRestrictions = isset($data['primarytypesRestrictions']) ? $data['primarytypesRestrictions'] : null;
        $this->ignoredProperties = isset($data['ignoredProperties']) ? $data['ignoredProperties'] : null;
        $this->usedProperties = isset($data['usedProperties']) ? $data['usedProperties'] : null;
        $this->typeMappings = isset($data['typeMappings']) ? $data['typeMappings'] : null;
        $this->propertyMappings = isset($data['propertyMappings']) ? $data['propertyMappings'] : null;
        $this->collapseJcrcontentNodes = isset($data['collapseJcrcontentNodes']) ? $data['collapseJcrcontentNodes'] : null;
    }

    /**
     * Gets pathDescField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPathDescField()
    {
        return $this->pathDescField;
    }

    /**
     * Sets pathDescField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $pathDescField
     *
     * @return $this
     */
    public function setPathDescField(ConfigNodePropertyString $pathDescField = null)
    {
        $this->pathDescField = $pathDescField;

        return $this;
    }

    /**
     * Gets pathChildField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPathChildField()
    {
        return $this->pathChildField;
    }

    /**
     * Sets pathChildField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $pathChildField
     *
     * @return $this
     */
    public function setPathChildField(ConfigNodePropertyString $pathChildField = null)
    {
        $this->pathChildField = $pathChildField;

        return $this;
    }

    /**
     * Gets pathParentField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPathParentField()
    {
        return $this->pathParentField;
    }

    /**
     * Sets pathParentField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $pathParentField
     *
     * @return $this
     */
    public function setPathParentField(ConfigNodePropertyString $pathParentField = null)
    {
        $this->pathParentField = $pathParentField;

        return $this;
    }

    /**
     * Gets pathExactField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPathExactField()
    {
        return $this->pathExactField;
    }

    /**
     * Sets pathExactField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $pathExactField
     *
     * @return $this
     */
    public function setPathExactField(ConfigNodePropertyString $pathExactField = null)
    {
        $this->pathExactField = $pathExactField;

        return $this;
    }

    /**
     * Gets catchAllField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCatchAllField()
    {
        return $this->catchAllField;
    }

    /**
     * Sets catchAllField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $catchAllField
     *
     * @return $this
     */
    public function setCatchAllField(ConfigNodePropertyString $catchAllField = null)
    {
        $this->catchAllField = $catchAllField;

        return $this;
    }

    /**
     * Gets collapsedPathField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCollapsedPathField()
    {
        return $this->collapsedPathField;
    }

    /**
     * Sets collapsedPathField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $collapsedPathField
     *
     * @return $this
     */
    public function setCollapsedPathField(ConfigNodePropertyString $collapsedPathField = null)
    {
        $this->collapsedPathField = $collapsedPathField;

        return $this;
    }

    /**
     * Gets pathDepthField.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getPathDepthField()
    {
        return $this->pathDepthField;
    }

    /**
     * Sets pathDepthField.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $pathDepthField
     *
     * @return $this
     */
    public function setPathDepthField(ConfigNodePropertyString $pathDepthField = null)
    {
        $this->pathDepthField = $pathDepthField;

        return $this;
    }

    /**
     * Gets commitPolicy.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyDropDown|null
     */
    public function getCommitPolicy()
    {
        return $this->commitPolicy;
    }

    /**
     * Sets commitPolicy.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyDropDown|null $commitPolicy
     *
     * @return $this
     */
    public function setCommitPolicy(ConfigNodePropertyDropDown $commitPolicy = null)
    {
        $this->commitPolicy = $commitPolicy;

        return $this;
    }

    /**
     * Gets rows.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getRows()
    {
        return $this->rows;
    }

    /**
     * Sets rows.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $rows
     *
     * @return $this
     */
    public function setRows(ConfigNodePropertyInteger $rows = null)
    {
        $this->rows = $rows;

        return $this;
    }

    /**
     * Gets pathRestrictions.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getPathRestrictions()
    {
        return $this->pathRestrictions;
    }

    /**
     * Sets pathRestrictions.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $pathRestrictions
     *
     * @return $this
     */
    public function setPathRestrictions(ConfigNodePropertyBoolean $pathRestrictions = null)
    {
        $this->pathRestrictions = $pathRestrictions;

        return $this;
    }

    /**
     * Gets propertyRestrictions.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getPropertyRestrictions()
    {
        return $this->propertyRestrictions;
    }

    /**
     * Sets propertyRestrictions.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $propertyRestrictions
     *
     * @return $this
     */
    public function setPropertyRestrictions(ConfigNodePropertyBoolean $propertyRestrictions = null)
    {
        $this->propertyRestrictions = $propertyRestrictions;

        return $this;
    }

    /**
     * Gets primarytypesRestrictions.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getPrimarytypesRestrictions()
    {
        return $this->primarytypesRestrictions;
    }

    /**
     * Sets primarytypesRestrictions.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $primarytypesRestrictions
     *
     * @return $this
     */
    public function setPrimarytypesRestrictions(ConfigNodePropertyBoolean $primarytypesRestrictions = null)
    {
        $this->primarytypesRestrictions = $primarytypesRestrictions;

        return $this;
    }

    /**
     * Gets ignoredProperties.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getIgnoredProperties()
    {
        return $this->ignoredProperties;
    }

    /**
     * Sets ignoredProperties.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $ignoredProperties
     *
     * @return $this
     */
    public function setIgnoredProperties(ConfigNodePropertyArray $ignoredProperties = null)
    {
        $this->ignoredProperties = $ignoredProperties;

        return $this;
    }

    /**
     * Gets usedProperties.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getUsedProperties()
    {
        return $this->usedProperties;
    }

    /**
     * Sets usedProperties.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $usedProperties
     *
     * @return $this
     */
    public function setUsedProperties(ConfigNodePropertyArray $usedProperties = null)
    {
        $this->usedProperties = $usedProperties;

        return $this;
    }

    /**
     * Gets typeMappings.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getTypeMappings()
    {
        return $this->typeMappings;
    }

    /**
     * Sets typeMappings.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $typeMappings
     *
     * @return $this
     */
    public function setTypeMappings(ConfigNodePropertyArray $typeMappings = null)
    {
        $this->typeMappings = $typeMappings;

        return $this;
    }

    /**
     * Gets propertyMappings.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getPropertyMappings()
    {
        return $this->propertyMappings;
    }

    /**
     * Sets propertyMappings.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $propertyMappings
     *
     * @return $this
     */
    public function setPropertyMappings(ConfigNodePropertyArray $propertyMappings = null)
    {
        $this->propertyMappings = $propertyMappings;

        return $this;
    }

    /**
     * Gets collapseJcrcontentNodes.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getCollapseJcrcontentNodes()
    {
        return $this->collapseJcrcontentNodes;
    }

    /**
     * Sets collapseJcrcontentNodes.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $collapseJcrcontentNodes
     *
     * @return $this
     */
    public function setCollapseJcrcontentNodes(ConfigNodePropertyBoolean $collapseJcrcontentNodes = null)
    {
        $this->collapseJcrcontentNodes = $collapseJcrcontentNodes;

        return $this;
    }
}


