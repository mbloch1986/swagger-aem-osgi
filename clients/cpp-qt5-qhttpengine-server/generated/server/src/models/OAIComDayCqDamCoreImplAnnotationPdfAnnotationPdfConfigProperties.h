/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties_H
#define OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties();
    OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties(QString json);
    ~OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentWidth() const;
    void setCqDamConfigAnnotationPdfDocumentWidth(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_document_width);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentHeight() const;
    void setCqDamConfigAnnotationPdfDocumentHeight(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_document_height);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentPaddingHorizontal() const;
    void setCqDamConfigAnnotationPdfDocumentPaddingHorizontal(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_document_padding_horizontal);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfDocumentPaddingVertical() const;
    void setCqDamConfigAnnotationPdfDocumentPaddingVertical(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_document_padding_vertical);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfFontSize() const;
    void setCqDamConfigAnnotationPdfFontSize(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_font_size);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfFontColor() const;
    void setCqDamConfigAnnotationPdfFontColor(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_font_color);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfFontFamily() const;
    void setCqDamConfigAnnotationPdfFontFamily(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_font_family);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfFontLight() const;
    void setCqDamConfigAnnotationPdfFontLight(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_font_light);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfMarginTextImage() const;
    void setCqDamConfigAnnotationPdfMarginTextImage(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_margin_text_image);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfMinImageHeight() const;
    void setCqDamConfigAnnotationPdfMinImageHeight(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_min_image_height);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfReviewStatusWidth() const;
    void setCqDamConfigAnnotationPdfReviewStatusWidth(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_review_status_width);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorApproved() const;
    void setCqDamConfigAnnotationPdfReviewStatusColorApproved(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_review_status_color_approved);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorRejected() const;
    void setCqDamConfigAnnotationPdfReviewStatusColorRejected(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_review_status_color_rejected);

    OAIConfigNodePropertyString getCqDamConfigAnnotationPdfReviewStatusColorChangesRequested() const;
    void setCqDamConfigAnnotationPdfReviewStatusColorChangesRequested(const OAIConfigNodePropertyString &cq_dam_config_annotation_pdf_review_status_color_changes_requested);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfAnnotationMarkerWidth() const;
    void setCqDamConfigAnnotationPdfAnnotationMarkerWidth(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_annotation_marker_width);

    OAIConfigNodePropertyInteger getCqDamConfigAnnotationPdfAssetMinheight() const;
    void setCqDamConfigAnnotationPdfAssetMinheight(const OAIConfigNodePropertyInteger &cq_dam_config_annotation_pdf_asset_minheight);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_document_width;
    bool m_cq_dam_config_annotation_pdf_document_width_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_document_height;
    bool m_cq_dam_config_annotation_pdf_document_height_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_document_padding_horizontal;
    bool m_cq_dam_config_annotation_pdf_document_padding_horizontal_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_document_padding_vertical;
    bool m_cq_dam_config_annotation_pdf_document_padding_vertical_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_font_size;
    bool m_cq_dam_config_annotation_pdf_font_size_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_font_color;
    bool m_cq_dam_config_annotation_pdf_font_color_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_font_family;
    bool m_cq_dam_config_annotation_pdf_font_family_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_font_light;
    bool m_cq_dam_config_annotation_pdf_font_light_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_margin_text_image;
    bool m_cq_dam_config_annotation_pdf_margin_text_image_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_min_image_height;
    bool m_cq_dam_config_annotation_pdf_min_image_height_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_review_status_width;
    bool m_cq_dam_config_annotation_pdf_review_status_width_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_review_status_color_approved;
    bool m_cq_dam_config_annotation_pdf_review_status_color_approved_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_review_status_color_rejected;
    bool m_cq_dam_config_annotation_pdf_review_status_color_rejected_isSet;

    OAIConfigNodePropertyString cq_dam_config_annotation_pdf_review_status_color_changes_requested;
    bool m_cq_dam_config_annotation_pdf_review_status_color_changes_requested_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_annotation_marker_width;
    bool m_cq_dam_config_annotation_pdf_annotation_marker_width_isSet;

    OAIConfigNodePropertyInteger cq_dam_config_annotation_pdf_asset_minheight;
    bool m_cq_dam_config_annotation_pdf_asset_minheight_isSet;

};

}

#endif // OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties_H
