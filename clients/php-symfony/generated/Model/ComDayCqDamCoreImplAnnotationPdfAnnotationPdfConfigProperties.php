<?php
/**
 * ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties
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
 * Class representing the ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.document.width")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfDocumentWidth;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.document.height")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfDocumentHeight;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.document.padding.horizontal")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfDocumentPaddingHorizontal;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.document.padding.vertical")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfDocumentPaddingVertical;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.font.size")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfFontSize;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.font.color")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfFontColor;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.font.family")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfFontFamily;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.font.light")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfFontLight;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.marginTextImage")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfMarginTextImage;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.minImageHeight")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfMinImageHeight;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.reviewStatus.width")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfReviewStatusWidth;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.reviewStatus.color.approved")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfReviewStatusColorApproved;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.reviewStatus.color.rejected")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfReviewStatusColorRejected;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("cq.dam.config.annotation.pdf.reviewStatus.color.changesRequested")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $cqDamConfigAnnotationPdfReviewStatusColorChangesRequested;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.annotationMarker.width")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfAnnotationMarkerWidth;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.config.annotation.pdf.asset.minheight")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamConfigAnnotationPdfAssetMinheight;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqDamConfigAnnotationPdfDocumentWidth = isset($data['cqDamConfigAnnotationPdfDocumentWidth']) ? $data['cqDamConfigAnnotationPdfDocumentWidth'] : null;
        $this->cqDamConfigAnnotationPdfDocumentHeight = isset($data['cqDamConfigAnnotationPdfDocumentHeight']) ? $data['cqDamConfigAnnotationPdfDocumentHeight'] : null;
        $this->cqDamConfigAnnotationPdfDocumentPaddingHorizontal = isset($data['cqDamConfigAnnotationPdfDocumentPaddingHorizontal']) ? $data['cqDamConfigAnnotationPdfDocumentPaddingHorizontal'] : null;
        $this->cqDamConfigAnnotationPdfDocumentPaddingVertical = isset($data['cqDamConfigAnnotationPdfDocumentPaddingVertical']) ? $data['cqDamConfigAnnotationPdfDocumentPaddingVertical'] : null;
        $this->cqDamConfigAnnotationPdfFontSize = isset($data['cqDamConfigAnnotationPdfFontSize']) ? $data['cqDamConfigAnnotationPdfFontSize'] : null;
        $this->cqDamConfigAnnotationPdfFontColor = isset($data['cqDamConfigAnnotationPdfFontColor']) ? $data['cqDamConfigAnnotationPdfFontColor'] : null;
        $this->cqDamConfigAnnotationPdfFontFamily = isset($data['cqDamConfigAnnotationPdfFontFamily']) ? $data['cqDamConfigAnnotationPdfFontFamily'] : null;
        $this->cqDamConfigAnnotationPdfFontLight = isset($data['cqDamConfigAnnotationPdfFontLight']) ? $data['cqDamConfigAnnotationPdfFontLight'] : null;
        $this->cqDamConfigAnnotationPdfMarginTextImage = isset($data['cqDamConfigAnnotationPdfMarginTextImage']) ? $data['cqDamConfigAnnotationPdfMarginTextImage'] : null;
        $this->cqDamConfigAnnotationPdfMinImageHeight = isset($data['cqDamConfigAnnotationPdfMinImageHeight']) ? $data['cqDamConfigAnnotationPdfMinImageHeight'] : null;
        $this->cqDamConfigAnnotationPdfReviewStatusWidth = isset($data['cqDamConfigAnnotationPdfReviewStatusWidth']) ? $data['cqDamConfigAnnotationPdfReviewStatusWidth'] : null;
        $this->cqDamConfigAnnotationPdfReviewStatusColorApproved = isset($data['cqDamConfigAnnotationPdfReviewStatusColorApproved']) ? $data['cqDamConfigAnnotationPdfReviewStatusColorApproved'] : null;
        $this->cqDamConfigAnnotationPdfReviewStatusColorRejected = isset($data['cqDamConfigAnnotationPdfReviewStatusColorRejected']) ? $data['cqDamConfigAnnotationPdfReviewStatusColorRejected'] : null;
        $this->cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = isset($data['cqDamConfigAnnotationPdfReviewStatusColorChangesRequested']) ? $data['cqDamConfigAnnotationPdfReviewStatusColorChangesRequested'] : null;
        $this->cqDamConfigAnnotationPdfAnnotationMarkerWidth = isset($data['cqDamConfigAnnotationPdfAnnotationMarkerWidth']) ? $data['cqDamConfigAnnotationPdfAnnotationMarkerWidth'] : null;
        $this->cqDamConfigAnnotationPdfAssetMinheight = isset($data['cqDamConfigAnnotationPdfAssetMinheight']) ? $data['cqDamConfigAnnotationPdfAssetMinheight'] : null;
    }

    /**
     * Gets cqDamConfigAnnotationPdfDocumentWidth.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfDocumentWidth()
    {
        return $this->cqDamConfigAnnotationPdfDocumentWidth;
    }

    /**
     * Sets cqDamConfigAnnotationPdfDocumentWidth.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfDocumentWidth
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfDocumentWidth(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfDocumentWidth = null)
    {
        $this->cqDamConfigAnnotationPdfDocumentWidth = $cqDamConfigAnnotationPdfDocumentWidth;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfDocumentHeight.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfDocumentHeight()
    {
        return $this->cqDamConfigAnnotationPdfDocumentHeight;
    }

    /**
     * Sets cqDamConfigAnnotationPdfDocumentHeight.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfDocumentHeight
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfDocumentHeight(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfDocumentHeight = null)
    {
        $this->cqDamConfigAnnotationPdfDocumentHeight = $cqDamConfigAnnotationPdfDocumentHeight;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfDocumentPaddingHorizontal.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfDocumentPaddingHorizontal()
    {
        return $this->cqDamConfigAnnotationPdfDocumentPaddingHorizontal;
    }

    /**
     * Sets cqDamConfigAnnotationPdfDocumentPaddingHorizontal.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfDocumentPaddingHorizontal
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfDocumentPaddingHorizontal(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfDocumentPaddingHorizontal = null)
    {
        $this->cqDamConfigAnnotationPdfDocumentPaddingHorizontal = $cqDamConfigAnnotationPdfDocumentPaddingHorizontal;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfDocumentPaddingVertical.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfDocumentPaddingVertical()
    {
        return $this->cqDamConfigAnnotationPdfDocumentPaddingVertical;
    }

    /**
     * Sets cqDamConfigAnnotationPdfDocumentPaddingVertical.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfDocumentPaddingVertical
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfDocumentPaddingVertical(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfDocumentPaddingVertical = null)
    {
        $this->cqDamConfigAnnotationPdfDocumentPaddingVertical = $cqDamConfigAnnotationPdfDocumentPaddingVertical;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfFontSize.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfFontSize()
    {
        return $this->cqDamConfigAnnotationPdfFontSize;
    }

    /**
     * Sets cqDamConfigAnnotationPdfFontSize.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfFontSize
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfFontSize(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfFontSize = null)
    {
        $this->cqDamConfigAnnotationPdfFontSize = $cqDamConfigAnnotationPdfFontSize;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfFontColor.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfFontColor()
    {
        return $this->cqDamConfigAnnotationPdfFontColor;
    }

    /**
     * Sets cqDamConfigAnnotationPdfFontColor.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfFontColor
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfFontColor(ConfigNodePropertyString $cqDamConfigAnnotationPdfFontColor = null)
    {
        $this->cqDamConfigAnnotationPdfFontColor = $cqDamConfigAnnotationPdfFontColor;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfFontFamily.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfFontFamily()
    {
        return $this->cqDamConfigAnnotationPdfFontFamily;
    }

    /**
     * Sets cqDamConfigAnnotationPdfFontFamily.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfFontFamily
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfFontFamily(ConfigNodePropertyString $cqDamConfigAnnotationPdfFontFamily = null)
    {
        $this->cqDamConfigAnnotationPdfFontFamily = $cqDamConfigAnnotationPdfFontFamily;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfFontLight.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfFontLight()
    {
        return $this->cqDamConfigAnnotationPdfFontLight;
    }

    /**
     * Sets cqDamConfigAnnotationPdfFontLight.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfFontLight
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfFontLight(ConfigNodePropertyString $cqDamConfigAnnotationPdfFontLight = null)
    {
        $this->cqDamConfigAnnotationPdfFontLight = $cqDamConfigAnnotationPdfFontLight;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfMarginTextImage.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfMarginTextImage()
    {
        return $this->cqDamConfigAnnotationPdfMarginTextImage;
    }

    /**
     * Sets cqDamConfigAnnotationPdfMarginTextImage.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfMarginTextImage
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfMarginTextImage(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfMarginTextImage = null)
    {
        $this->cqDamConfigAnnotationPdfMarginTextImage = $cqDamConfigAnnotationPdfMarginTextImage;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfMinImageHeight.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfMinImageHeight()
    {
        return $this->cqDamConfigAnnotationPdfMinImageHeight;
    }

    /**
     * Sets cqDamConfigAnnotationPdfMinImageHeight.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfMinImageHeight
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfMinImageHeight(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfMinImageHeight = null)
    {
        $this->cqDamConfigAnnotationPdfMinImageHeight = $cqDamConfigAnnotationPdfMinImageHeight;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfReviewStatusWidth.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfReviewStatusWidth()
    {
        return $this->cqDamConfigAnnotationPdfReviewStatusWidth;
    }

    /**
     * Sets cqDamConfigAnnotationPdfReviewStatusWidth.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfReviewStatusWidth
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfReviewStatusWidth(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfReviewStatusWidth = null)
    {
        $this->cqDamConfigAnnotationPdfReviewStatusWidth = $cqDamConfigAnnotationPdfReviewStatusWidth;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfReviewStatusColorApproved.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfReviewStatusColorApproved()
    {
        return $this->cqDamConfigAnnotationPdfReviewStatusColorApproved;
    }

    /**
     * Sets cqDamConfigAnnotationPdfReviewStatusColorApproved.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfReviewStatusColorApproved
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfReviewStatusColorApproved(ConfigNodePropertyString $cqDamConfigAnnotationPdfReviewStatusColorApproved = null)
    {
        $this->cqDamConfigAnnotationPdfReviewStatusColorApproved = $cqDamConfigAnnotationPdfReviewStatusColorApproved;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfReviewStatusColorRejected.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfReviewStatusColorRejected()
    {
        return $this->cqDamConfigAnnotationPdfReviewStatusColorRejected;
    }

    /**
     * Sets cqDamConfigAnnotationPdfReviewStatusColorRejected.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfReviewStatusColorRejected
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfReviewStatusColorRejected(ConfigNodePropertyString $cqDamConfigAnnotationPdfReviewStatusColorRejected = null)
    {
        $this->cqDamConfigAnnotationPdfReviewStatusColorRejected = $cqDamConfigAnnotationPdfReviewStatusColorRejected;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfReviewStatusColorChangesRequested.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getCqDamConfigAnnotationPdfReviewStatusColorChangesRequested()
    {
        return $this->cqDamConfigAnnotationPdfReviewStatusColorChangesRequested;
    }

    /**
     * Sets cqDamConfigAnnotationPdfReviewStatusColorChangesRequested.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $cqDamConfigAnnotationPdfReviewStatusColorChangesRequested
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfReviewStatusColorChangesRequested(ConfigNodePropertyString $cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = null)
    {
        $this->cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = $cqDamConfigAnnotationPdfReviewStatusColorChangesRequested;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfAnnotationMarkerWidth.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfAnnotationMarkerWidth()
    {
        return $this->cqDamConfigAnnotationPdfAnnotationMarkerWidth;
    }

    /**
     * Sets cqDamConfigAnnotationPdfAnnotationMarkerWidth.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfAnnotationMarkerWidth
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfAnnotationMarkerWidth(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfAnnotationMarkerWidth = null)
    {
        $this->cqDamConfigAnnotationPdfAnnotationMarkerWidth = $cqDamConfigAnnotationPdfAnnotationMarkerWidth;

        return $this;
    }

    /**
     * Gets cqDamConfigAnnotationPdfAssetMinheight.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamConfigAnnotationPdfAssetMinheight()
    {
        return $this->cqDamConfigAnnotationPdfAssetMinheight;
    }

    /**
     * Sets cqDamConfigAnnotationPdfAssetMinheight.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamConfigAnnotationPdfAssetMinheight
     *
     * @return $this
     */
    public function setCqDamConfigAnnotationPdfAssetMinheight(ConfigNodePropertyInteger $cqDamConfigAnnotationPdfAssetMinheight = null)
    {
        $this->cqDamConfigAnnotationPdfAssetMinheight = $cqDamConfigAnnotationPdfAssetMinheight;

        return $this;
    }
}


