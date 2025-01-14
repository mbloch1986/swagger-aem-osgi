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
 * OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.h
 *
 * 
 */

#ifndef OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties_H
#define OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties: public OAIObject {
public:
    OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties();
    OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties(QString json);
    ~OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getLinkcheckertransformerDisableRewriting() const;
    void setLinkcheckertransformerDisableRewriting(const OAIConfigNodePropertyBoolean &linkcheckertransformer_disable_rewriting);

    OAIConfigNodePropertyBoolean getLinkcheckertransformerDisableChecking() const;
    void setLinkcheckertransformerDisableChecking(const OAIConfigNodePropertyBoolean &linkcheckertransformer_disable_checking);

    OAIConfigNodePropertyInteger getLinkcheckertransformerMapCacheSize() const;
    void setLinkcheckertransformerMapCacheSize(const OAIConfigNodePropertyInteger &linkcheckertransformer_map_cache_size);

    OAIConfigNodePropertyBoolean getLinkcheckertransformerStrictExtensionCheck() const;
    void setLinkcheckertransformerStrictExtensionCheck(const OAIConfigNodePropertyBoolean &linkcheckertransformer_strict_extension_check);

    OAIConfigNodePropertyBoolean getLinkcheckertransformerStripHtmltExtension() const;
    void setLinkcheckertransformerStripHtmltExtension(const OAIConfigNodePropertyBoolean &linkcheckertransformer_strip_htmlt_extension);

    OAIConfigNodePropertyArray getLinkcheckertransformerRewriteElements() const;
    void setLinkcheckertransformerRewriteElements(const OAIConfigNodePropertyArray &linkcheckertransformer_rewrite_elements);

    OAIConfigNodePropertyArray getLinkcheckertransformerStripExtensionPathBlacklist() const;
    void setLinkcheckertransformerStripExtensionPathBlacklist(const OAIConfigNodePropertyArray &linkcheckertransformer_strip_extension_path_blacklist);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean linkcheckertransformer_disable_rewriting;
    bool m_linkcheckertransformer_disable_rewriting_isSet;

    OAIConfigNodePropertyBoolean linkcheckertransformer_disable_checking;
    bool m_linkcheckertransformer_disable_checking_isSet;

    OAIConfigNodePropertyInteger linkcheckertransformer_map_cache_size;
    bool m_linkcheckertransformer_map_cache_size_isSet;

    OAIConfigNodePropertyBoolean linkcheckertransformer_strict_extension_check;
    bool m_linkcheckertransformer_strict_extension_check_isSet;

    OAIConfigNodePropertyBoolean linkcheckertransformer_strip_htmlt_extension;
    bool m_linkcheckertransformer_strip_htmlt_extension_isSet;

    OAIConfigNodePropertyArray linkcheckertransformer_rewrite_elements;
    bool m_linkcheckertransformer_rewrite_elements_isSet;

    OAIConfigNodePropertyArray linkcheckertransformer_strip_extension_path_blacklist;
    bool m_linkcheckertransformer_strip_extension_path_blacklist_isSet;

};

}

#endif // OAIComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties_H
