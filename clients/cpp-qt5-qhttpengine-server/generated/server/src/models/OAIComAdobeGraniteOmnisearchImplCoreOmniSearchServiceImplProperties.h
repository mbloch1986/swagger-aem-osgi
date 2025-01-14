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
 * OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties_H
#define OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties: public OAIObject {
public:
    OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties();
    OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties(QString json);
    ~OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getOmnisearchSuggestionRequiretextMin() const;
    void setOmnisearchSuggestionRequiretextMin(const OAIConfigNodePropertyInteger &omnisearch_suggestion_requiretext_min);

    OAIConfigNodePropertyBoolean getOmnisearchSuggestionSpellcheckRequire() const;
    void setOmnisearchSuggestionSpellcheckRequire(const OAIConfigNodePropertyBoolean &omnisearch_suggestion_spellcheck_require);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger omnisearch_suggestion_requiretext_min;
    bool m_omnisearch_suggestion_requiretext_min_isSet;

    OAIConfigNodePropertyBoolean omnisearch_suggestion_spellcheck_require;
    bool m_omnisearch_suggestion_spellcheck_require_isSet;

};

}

#endif // OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties_H
