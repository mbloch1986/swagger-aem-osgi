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


#include "OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties() {
    init();
}

OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::~OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::init() {
    omnisearch_suggestion_requiretext_min = new OAIConfigNodePropertyInteger();
    m_omnisearch_suggestion_requiretext_min_isSet = false;
    omnisearch_suggestion_spellcheck_require = new OAIConfigNodePropertyBoolean();
    m_omnisearch_suggestion_spellcheck_require_isSet = false;
}

void
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::cleanup() {
    if(omnisearch_suggestion_requiretext_min != nullptr) { 
        delete omnisearch_suggestion_requiretext_min;
    }
    if(omnisearch_suggestion_spellcheck_require != nullptr) { 
        delete omnisearch_suggestion_spellcheck_require;
    }
}

OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties*
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&omnisearch_suggestion_requiretext_min, pJson["omnisearch.suggestion.requiretext.min"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&omnisearch_suggestion_spellcheck_require, pJson["omnisearch.suggestion.spellcheck.require"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((omnisearch_suggestion_requiretext_min != nullptr) && (omnisearch_suggestion_requiretext_min->isSet())){
        toJsonValue(QString("omnisearch.suggestion.requiretext.min"), omnisearch_suggestion_requiretext_min, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((omnisearch_suggestion_spellcheck_require != nullptr) && (omnisearch_suggestion_spellcheck_require->isSet())){
        toJsonValue(QString("omnisearch.suggestion.spellcheck.require"), omnisearch_suggestion_spellcheck_require, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::getOmnisearchSuggestionRequiretextMin() {
    return omnisearch_suggestion_requiretext_min;
}
void
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::setOmnisearchSuggestionRequiretextMin(OAIConfigNodePropertyInteger* omnisearch_suggestion_requiretext_min) {
    this->omnisearch_suggestion_requiretext_min = omnisearch_suggestion_requiretext_min;
    this->m_omnisearch_suggestion_requiretext_min_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::getOmnisearchSuggestionSpellcheckRequire() {
    return omnisearch_suggestion_spellcheck_require;
}
void
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::setOmnisearchSuggestionSpellcheckRequire(OAIConfigNodePropertyBoolean* omnisearch_suggestion_spellcheck_require) {
    this->omnisearch_suggestion_spellcheck_require = omnisearch_suggestion_spellcheck_require;
    this->m_omnisearch_suggestion_spellcheck_require_isSet = true;
}


bool
OAIComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(omnisearch_suggestion_requiretext_min != nullptr && omnisearch_suggestion_requiretext_min->isSet()){ isObjectUpdated = true; break;}
        if(omnisearch_suggestion_spellcheck_require != nullptr && omnisearch_suggestion_spellcheck_require->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

