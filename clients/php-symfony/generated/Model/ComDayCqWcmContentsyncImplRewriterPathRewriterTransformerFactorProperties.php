<?php
/**
 * ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties
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
 * Class representing the ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.mapping.links")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqContentsyncPathrewritertransformerMappingLinks;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.mapping.clientlibs")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqContentsyncPathrewritertransformerMappingClientlibs;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.mapping.images")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $cqContentsyncPathrewritertransformerMappingImages;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.attribute.pattern")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqContentsyncPathrewritertransformerAttributePattern;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.clientlibrary.pattern")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqContentsyncPathrewritertransformerClientlibraryPattern;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.contentsync.pathrewritertransformer.clientlibrary.replace")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqContentsyncPathrewritertransformerClientlibraryReplace;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqContentsyncPathrewritertransformerMappingLinks = isset($data['cqContentsyncPathrewritertransformerMappingLinks']) ? $data['cqContentsyncPathrewritertransformerMappingLinks'] : null;
        $this->cqContentsyncPathrewritertransformerMappingClientlibs = isset($data['cqContentsyncPathrewritertransformerMappingClientlibs']) ? $data['cqContentsyncPathrewritertransformerMappingClientlibs'] : null;
        $this->cqContentsyncPathrewritertransformerMappingImages = isset($data['cqContentsyncPathrewritertransformerMappingImages']) ? $data['cqContentsyncPathrewritertransformerMappingImages'] : null;
        $this->cqContentsyncPathrewritertransformerAttributePattern = isset($data['cqContentsyncPathrewritertransformerAttributePattern']) ? $data['cqContentsyncPathrewritertransformerAttributePattern'] : null;
        $this->cqContentsyncPathrewritertransformerClientlibraryPattern = isset($data['cqContentsyncPathrewritertransformerClientlibraryPattern']) ? $data['cqContentsyncPathrewritertransformerClientlibraryPattern'] : null;
        $this->cqContentsyncPathrewritertransformerClientlibraryReplace = isset($data['cqContentsyncPathrewritertransformerClientlibraryReplace']) ? $data['cqContentsyncPathrewritertransformerClientlibraryReplace'] : null;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerMappingLinks.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqContentsyncPathrewritertransformerMappingLinks()
    {
        return $this->cqContentsyncPathrewritertransformerMappingLinks;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerMappingLinks.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqContentsyncPathrewritertransformerMappingLinks
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerMappingLinks(ConfigNodePropertyArray $cqContentsyncPathrewritertransformerMappingLinks = null)
    {
        $this->cqContentsyncPathrewritertransformerMappingLinks = $cqContentsyncPathrewritertransformerMappingLinks;

        return $this;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerMappingClientlibs.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqContentsyncPathrewritertransformerMappingClientlibs()
    {
        return $this->cqContentsyncPathrewritertransformerMappingClientlibs;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerMappingClientlibs.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqContentsyncPathrewritertransformerMappingClientlibs
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerMappingClientlibs(ConfigNodePropertyArray $cqContentsyncPathrewritertransformerMappingClientlibs = null)
    {
        $this->cqContentsyncPathrewritertransformerMappingClientlibs = $cqContentsyncPathrewritertransformerMappingClientlibs;

        return $this;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerMappingImages.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getCqContentsyncPathrewritertransformerMappingImages()
    {
        return $this->cqContentsyncPathrewritertransformerMappingImages;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerMappingImages.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $cqContentsyncPathrewritertransformerMappingImages
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerMappingImages(ConfigNodePropertyArray $cqContentsyncPathrewritertransformerMappingImages = null)
    {
        $this->cqContentsyncPathrewritertransformerMappingImages = $cqContentsyncPathrewritertransformerMappingImages;

        return $this;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerAttributePattern.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqContentsyncPathrewritertransformerAttributePattern()
    {
        return $this->cqContentsyncPathrewritertransformerAttributePattern;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerAttributePattern.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqContentsyncPathrewritertransformerAttributePattern
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerAttributePattern(ConfigNodePropertyString $cqContentsyncPathrewritertransformerAttributePattern = null)
    {
        $this->cqContentsyncPathrewritertransformerAttributePattern = $cqContentsyncPathrewritertransformerAttributePattern;

        return $this;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerClientlibraryPattern.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqContentsyncPathrewritertransformerClientlibraryPattern()
    {
        return $this->cqContentsyncPathrewritertransformerClientlibraryPattern;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerClientlibraryPattern.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqContentsyncPathrewritertransformerClientlibraryPattern
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerClientlibraryPattern(ConfigNodePropertyString $cqContentsyncPathrewritertransformerClientlibraryPattern = null)
    {
        $this->cqContentsyncPathrewritertransformerClientlibraryPattern = $cqContentsyncPathrewritertransformerClientlibraryPattern;

        return $this;
    }

    /**
     * Gets cqContentsyncPathrewritertransformerClientlibraryReplace.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqContentsyncPathrewritertransformerClientlibraryReplace()
    {
        return $this->cqContentsyncPathrewritertransformerClientlibraryReplace;
    }

    /**
     * Sets cqContentsyncPathrewritertransformerClientlibraryReplace.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqContentsyncPathrewritertransformerClientlibraryReplace
     *
     * @return $this
     */
    public function setCqContentsyncPathrewritertransformerClientlibraryReplace(ConfigNodePropertyString $cqContentsyncPathrewritertransformerClientlibraryReplace = null)
    {
        $this->cqContentsyncPathrewritertransformerClientlibraryReplace = $cqContentsyncPathrewritertransformerClientlibraryReplace;

        return $this;
    }
}

