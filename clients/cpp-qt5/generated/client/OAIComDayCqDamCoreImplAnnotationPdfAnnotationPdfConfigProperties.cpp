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


#include "OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties() {
    init();
}

OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::~OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::init() {
    cq_dam_config_annotation_pdf_document_width = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_document_width_isSet = false;
    cq_dam_config_annotation_pdf_document_height = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_document_height_isSet = false;
    cq_dam_config_annotation_pdf_document_padding_horizontal = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_document_padding_horizontal_isSet = false;
    cq_dam_config_annotation_pdf_document_padding_vertical = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_document_padding_vertical_isSet = false;
    cq_dam_config_annotation_pdf_font_size = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_font_size_isSet = false;
    cq_dam_config_annotation_pdf_font_color = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_font_color_isSet = false;
    cq_dam_config_annotation_pdf_font_family = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_font_family_isSet = false;
    cq_dam_config_annotation_pdf_font_light = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_font_light_isSet = false;
    cq_dam_config_annotation_pdf_margin_text_image = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_margin_text_image_isSet = false;
    cq_dam_config_annotation_pdf_min_image_height = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_min_image_height_isSet = false;
    cq_dam_config_annotation_pdf_review_status_width = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_review_status_width_isSet = false;
    cq_dam_config_annotation_pdf_review_status_color_approved = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_review_status_color_approved_isSet = false;
    cq_dam_config_annotation_pdf_review_status_color_rejected = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_review_status_color_rejected_isSet = false;
    cq_dam_config_annotation_pdf_review_status_color_changes_requested = new OAIConfigNodePropertyString();
    m_cq_dam_config_annotation_pdf_review_status_color_changes_requested_isSet = false;
    cq_dam_config_annotation_pdf_annotation_marker_width = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_annotation_marker_width_isSet = false;
    cq_dam_config_annotation_pdf_asset_minheight = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_annotation_pdf_asset_minheight_isSet = false;
}

void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::cleanup() {
    if(cq_dam_config_annotation_pdf_document_width != nullptr) { 
        delete cq_dam_config_annotation_pdf_document_width;
    }
    if(cq_dam_config_annotation_pdf_document_height != nullptr) { 
        delete cq_dam_config_annotation_pdf_document_height;
    }
    if(cq_dam_config_annotation_pdf_document_padding_horizontal != nullptr) { 
        delete cq_dam_config_annotation_pdf_document_padding_horizontal;
    }
    if(cq_dam_config_annotation_pdf_document_padding_vertical != nullptr) { 
        delete cq_dam_config_annotation_pdf_document_padding_vertical;
    }
    if(cq_dam_config_annotation_pdf_font_size != nullptr) { 
        delete cq_dam_config_annotation_pdf_font_size;
    }
    if(cq_dam_config_annotation_pdf_font_color != nullptr) { 
        delete cq_dam_config_annotation_pdf_font_color;
    }
    if(cq_dam_config_annotation_pdf_font_family != nullptr) { 
        delete cq_dam_config_annotation_pdf_font_family;
    }
    if(cq_dam_config_annotation_pdf_font_light != nullptr) { 
        delete cq_dam_config_annotation_pdf_font_light;
    }
    if(cq_dam_config_annotation_pdf_margin_text_image != nullptr) { 
        delete cq_dam_config_annotation_pdf_margin_text_image;
    }
    if(cq_dam_config_annotation_pdf_min_image_height != nullptr) { 
        delete cq_dam_config_annotation_pdf_min_image_height;
    }
    if(cq_dam_config_annotation_pdf_review_status_width != nullptr) { 
        delete cq_dam_config_annotation_pdf_review_status_width;
    }
    if(cq_dam_config_annotation_pdf_review_status_color_approved != nullptr) { 
        delete cq_dam_config_annotation_pdf_review_status_color_approved;
    }
    if(cq_dam_config_annotation_pdf_review_status_color_rejected != nullptr) { 
        delete cq_dam_config_annotation_pdf_review_status_color_rejected;
    }
    if(cq_dam_config_annotation_pdf_review_status_color_changes_requested != nullptr) { 
        delete cq_dam_config_annotation_pdf_review_status_color_changes_requested;
    }
    if(cq_dam_config_annotation_pdf_annotation_marker_width != nullptr) { 
        delete cq_dam_config_annotation_pdf_annotation_marker_width;
    }
    if(cq_dam_config_annotation_pdf_asset_minheight != nullptr) { 
        delete cq_dam_config_annotation_pdf_asset_minheight;
    }
}

OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_document_width, pJson["cq.dam.config.annotation.pdf.document.width"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_document_height, pJson["cq.dam.config.annotation.pdf.document.height"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_document_padding_horizontal, pJson["cq.dam.config.annotation.pdf.document.padding.horizontal"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_document_padding_vertical, pJson["cq.dam.config.annotation.pdf.document.padding.vertical"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_font_size, pJson["cq.dam.config.annotation.pdf.font.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_font_color, pJson["cq.dam.config.annotation.pdf.font.color"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_font_family, pJson["cq.dam.config.annotation.pdf.font.family"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_font_light, pJson["cq.dam.config.annotation.pdf.font.light"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_margin_text_image, pJson["cq.dam.config.annotation.pdf.marginTextImage"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_min_image_height, pJson["cq.dam.config.annotation.pdf.minImageHeight"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_review_status_width, pJson["cq.dam.config.annotation.pdf.reviewStatus.width"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_review_status_color_approved, pJson["cq.dam.config.annotation.pdf.reviewStatus.color.approved"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_review_status_color_rejected, pJson["cq.dam.config.annotation.pdf.reviewStatus.color.rejected"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_review_status_color_changes_requested, pJson["cq.dam.config.annotation.pdf.reviewStatus.color.changesRequested"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_annotation_marker_width, pJson["cq.dam.config.annotation.pdf.annotationMarker.width"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_annotation_pdf_asset_minheight, pJson["cq.dam.config.annotation.pdf.asset.minheight"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_dam_config_annotation_pdf_document_width != nullptr) && (cq_dam_config_annotation_pdf_document_width->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.document.width"), cq_dam_config_annotation_pdf_document_width, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_document_height != nullptr) && (cq_dam_config_annotation_pdf_document_height->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.document.height"), cq_dam_config_annotation_pdf_document_height, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_document_padding_horizontal != nullptr) && (cq_dam_config_annotation_pdf_document_padding_horizontal->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.document.padding.horizontal"), cq_dam_config_annotation_pdf_document_padding_horizontal, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_document_padding_vertical != nullptr) && (cq_dam_config_annotation_pdf_document_padding_vertical->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.document.padding.vertical"), cq_dam_config_annotation_pdf_document_padding_vertical, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_font_size != nullptr) && (cq_dam_config_annotation_pdf_font_size->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.font.size"), cq_dam_config_annotation_pdf_font_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_font_color != nullptr) && (cq_dam_config_annotation_pdf_font_color->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.font.color"), cq_dam_config_annotation_pdf_font_color, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_font_family != nullptr) && (cq_dam_config_annotation_pdf_font_family->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.font.family"), cq_dam_config_annotation_pdf_font_family, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_font_light != nullptr) && (cq_dam_config_annotation_pdf_font_light->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.font.light"), cq_dam_config_annotation_pdf_font_light, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_margin_text_image != nullptr) && (cq_dam_config_annotation_pdf_margin_text_image->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.marginTextImage"), cq_dam_config_annotation_pdf_margin_text_image, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_min_image_height != nullptr) && (cq_dam_config_annotation_pdf_min_image_height->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.minImageHeight"), cq_dam_config_annotation_pdf_min_image_height, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_review_status_width != nullptr) && (cq_dam_config_annotation_pdf_review_status_width->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.reviewStatus.width"), cq_dam_config_annotation_pdf_review_status_width, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_review_status_color_approved != nullptr) && (cq_dam_config_annotation_pdf_review_status_color_approved->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.reviewStatus.color.approved"), cq_dam_config_annotation_pdf_review_status_color_approved, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_review_status_color_rejected != nullptr) && (cq_dam_config_annotation_pdf_review_status_color_rejected->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.reviewStatus.color.rejected"), cq_dam_config_annotation_pdf_review_status_color_rejected, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_review_status_color_changes_requested != nullptr) && (cq_dam_config_annotation_pdf_review_status_color_changes_requested->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.reviewStatus.color.changesRequested"), cq_dam_config_annotation_pdf_review_status_color_changes_requested, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_config_annotation_pdf_annotation_marker_width != nullptr) && (cq_dam_config_annotation_pdf_annotation_marker_width->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.annotationMarker.width"), cq_dam_config_annotation_pdf_annotation_marker_width, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_annotation_pdf_asset_minheight != nullptr) && (cq_dam_config_annotation_pdf_asset_minheight->isSet())){
        toJsonValue(QString("cq.dam.config.annotation.pdf.asset.minheight"), cq_dam_config_annotation_pdf_asset_minheight, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfDocumentWidth() {
    return cq_dam_config_annotation_pdf_document_width;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfDocumentWidth(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_document_width) {
    this->cq_dam_config_annotation_pdf_document_width = cq_dam_config_annotation_pdf_document_width;
    this->m_cq_dam_config_annotation_pdf_document_width_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfDocumentHeight() {
    return cq_dam_config_annotation_pdf_document_height;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfDocumentHeight(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_document_height) {
    this->cq_dam_config_annotation_pdf_document_height = cq_dam_config_annotation_pdf_document_height;
    this->m_cq_dam_config_annotation_pdf_document_height_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfDocumentPaddingHorizontal() {
    return cq_dam_config_annotation_pdf_document_padding_horizontal;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfDocumentPaddingHorizontal(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_document_padding_horizontal) {
    this->cq_dam_config_annotation_pdf_document_padding_horizontal = cq_dam_config_annotation_pdf_document_padding_horizontal;
    this->m_cq_dam_config_annotation_pdf_document_padding_horizontal_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfDocumentPaddingVertical() {
    return cq_dam_config_annotation_pdf_document_padding_vertical;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfDocumentPaddingVertical(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_document_padding_vertical) {
    this->cq_dam_config_annotation_pdf_document_padding_vertical = cq_dam_config_annotation_pdf_document_padding_vertical;
    this->m_cq_dam_config_annotation_pdf_document_padding_vertical_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfFontSize() {
    return cq_dam_config_annotation_pdf_font_size;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfFontSize(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_font_size) {
    this->cq_dam_config_annotation_pdf_font_size = cq_dam_config_annotation_pdf_font_size;
    this->m_cq_dam_config_annotation_pdf_font_size_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfFontColor() {
    return cq_dam_config_annotation_pdf_font_color;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfFontColor(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_font_color) {
    this->cq_dam_config_annotation_pdf_font_color = cq_dam_config_annotation_pdf_font_color;
    this->m_cq_dam_config_annotation_pdf_font_color_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfFontFamily() {
    return cq_dam_config_annotation_pdf_font_family;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfFontFamily(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_font_family) {
    this->cq_dam_config_annotation_pdf_font_family = cq_dam_config_annotation_pdf_font_family;
    this->m_cq_dam_config_annotation_pdf_font_family_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfFontLight() {
    return cq_dam_config_annotation_pdf_font_light;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfFontLight(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_font_light) {
    this->cq_dam_config_annotation_pdf_font_light = cq_dam_config_annotation_pdf_font_light;
    this->m_cq_dam_config_annotation_pdf_font_light_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfMarginTextImage() {
    return cq_dam_config_annotation_pdf_margin_text_image;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfMarginTextImage(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_margin_text_image) {
    this->cq_dam_config_annotation_pdf_margin_text_image = cq_dam_config_annotation_pdf_margin_text_image;
    this->m_cq_dam_config_annotation_pdf_margin_text_image_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfMinImageHeight() {
    return cq_dam_config_annotation_pdf_min_image_height;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfMinImageHeight(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_min_image_height) {
    this->cq_dam_config_annotation_pdf_min_image_height = cq_dam_config_annotation_pdf_min_image_height;
    this->m_cq_dam_config_annotation_pdf_min_image_height_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfReviewStatusWidth() {
    return cq_dam_config_annotation_pdf_review_status_width;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfReviewStatusWidth(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_review_status_width) {
    this->cq_dam_config_annotation_pdf_review_status_width = cq_dam_config_annotation_pdf_review_status_width;
    this->m_cq_dam_config_annotation_pdf_review_status_width_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfReviewStatusColorApproved() {
    return cq_dam_config_annotation_pdf_review_status_color_approved;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfReviewStatusColorApproved(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_review_status_color_approved) {
    this->cq_dam_config_annotation_pdf_review_status_color_approved = cq_dam_config_annotation_pdf_review_status_color_approved;
    this->m_cq_dam_config_annotation_pdf_review_status_color_approved_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfReviewStatusColorRejected() {
    return cq_dam_config_annotation_pdf_review_status_color_rejected;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfReviewStatusColorRejected(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_review_status_color_rejected) {
    this->cq_dam_config_annotation_pdf_review_status_color_rejected = cq_dam_config_annotation_pdf_review_status_color_rejected;
    this->m_cq_dam_config_annotation_pdf_review_status_color_rejected_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfReviewStatusColorChangesRequested() {
    return cq_dam_config_annotation_pdf_review_status_color_changes_requested;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfReviewStatusColorChangesRequested(OAIConfigNodePropertyString* cq_dam_config_annotation_pdf_review_status_color_changes_requested) {
    this->cq_dam_config_annotation_pdf_review_status_color_changes_requested = cq_dam_config_annotation_pdf_review_status_color_changes_requested;
    this->m_cq_dam_config_annotation_pdf_review_status_color_changes_requested_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfAnnotationMarkerWidth() {
    return cq_dam_config_annotation_pdf_annotation_marker_width;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfAnnotationMarkerWidth(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_annotation_marker_width) {
    this->cq_dam_config_annotation_pdf_annotation_marker_width = cq_dam_config_annotation_pdf_annotation_marker_width;
    this->m_cq_dam_config_annotation_pdf_annotation_marker_width_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::getCqDamConfigAnnotationPdfAssetMinheight() {
    return cq_dam_config_annotation_pdf_asset_minheight;
}
void
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::setCqDamConfigAnnotationPdfAssetMinheight(OAIConfigNodePropertyInteger* cq_dam_config_annotation_pdf_asset_minheight) {
    this->cq_dam_config_annotation_pdf_asset_minheight = cq_dam_config_annotation_pdf_asset_minheight;
    this->m_cq_dam_config_annotation_pdf_asset_minheight_isSet = true;
}


bool
OAIComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_dam_config_annotation_pdf_document_width != nullptr && cq_dam_config_annotation_pdf_document_width->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_document_height != nullptr && cq_dam_config_annotation_pdf_document_height->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_document_padding_horizontal != nullptr && cq_dam_config_annotation_pdf_document_padding_horizontal->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_document_padding_vertical != nullptr && cq_dam_config_annotation_pdf_document_padding_vertical->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_font_size != nullptr && cq_dam_config_annotation_pdf_font_size->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_font_color != nullptr && cq_dam_config_annotation_pdf_font_color->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_font_family != nullptr && cq_dam_config_annotation_pdf_font_family->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_font_light != nullptr && cq_dam_config_annotation_pdf_font_light->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_margin_text_image != nullptr && cq_dam_config_annotation_pdf_margin_text_image->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_min_image_height != nullptr && cq_dam_config_annotation_pdf_min_image_height->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_review_status_width != nullptr && cq_dam_config_annotation_pdf_review_status_width->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_review_status_color_approved != nullptr && cq_dam_config_annotation_pdf_review_status_color_approved->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_review_status_color_rejected != nullptr && cq_dam_config_annotation_pdf_review_status_color_rejected->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_review_status_color_changes_requested != nullptr && cq_dam_config_annotation_pdf_review_status_color_changes_requested->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_annotation_marker_width != nullptr && cq_dam_config_annotation_pdf_annotation_marker_width->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_annotation_pdf_asset_minheight != nullptr && cq_dam_config_annotation_pdf_asset_minheight->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

