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
 * OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties_H
#define OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties: public OAIObject {
public:
    OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties();
    OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties(QString json);
    ~OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingLinks() const;
    void setCqContentsyncPathrewritertransformerMappingLinks(const OAIConfigNodePropertyArray &cq_contentsync_pathrewritertransformer_mapping_links);

    OAIConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingClientlibs() const;
    void setCqContentsyncPathrewritertransformerMappingClientlibs(const OAIConfigNodePropertyArray &cq_contentsync_pathrewritertransformer_mapping_clientlibs);

    OAIConfigNodePropertyArray getCqContentsyncPathrewritertransformerMappingImages() const;
    void setCqContentsyncPathrewritertransformerMappingImages(const OAIConfigNodePropertyArray &cq_contentsync_pathrewritertransformer_mapping_images);

    OAIConfigNodePropertyString getCqContentsyncPathrewritertransformerAttributePattern() const;
    void setCqContentsyncPathrewritertransformerAttributePattern(const OAIConfigNodePropertyString &cq_contentsync_pathrewritertransformer_attribute_pattern);

    OAIConfigNodePropertyString getCqContentsyncPathrewritertransformerClientlibraryPattern() const;
    void setCqContentsyncPathrewritertransformerClientlibraryPattern(const OAIConfigNodePropertyString &cq_contentsync_pathrewritertransformer_clientlibrary_pattern);

    OAIConfigNodePropertyString getCqContentsyncPathrewritertransformerClientlibraryReplace() const;
    void setCqContentsyncPathrewritertransformerClientlibraryReplace(const OAIConfigNodePropertyString &cq_contentsync_pathrewritertransformer_clientlibrary_replace);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_contentsync_pathrewritertransformer_mapping_links;
    bool m_cq_contentsync_pathrewritertransformer_mapping_links_isSet;

    OAIConfigNodePropertyArray cq_contentsync_pathrewritertransformer_mapping_clientlibs;
    bool m_cq_contentsync_pathrewritertransformer_mapping_clientlibs_isSet;

    OAIConfigNodePropertyArray cq_contentsync_pathrewritertransformer_mapping_images;
    bool m_cq_contentsync_pathrewritertransformer_mapping_images_isSet;

    OAIConfigNodePropertyString cq_contentsync_pathrewritertransformer_attribute_pattern;
    bool m_cq_contentsync_pathrewritertransformer_attribute_pattern_isSet;

    OAIConfigNodePropertyString cq_contentsync_pathrewritertransformer_clientlibrary_pattern;
    bool m_cq_contentsync_pathrewritertransformer_clientlibrary_pattern_isSet;

    OAIConfigNodePropertyString cq_contentsync_pathrewritertransformer_clientlibrary_replace;
    bool m_cq_contentsync_pathrewritertransformer_clientlibrary_replace_isSet;

};

}

#endif // OAIComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties_H
