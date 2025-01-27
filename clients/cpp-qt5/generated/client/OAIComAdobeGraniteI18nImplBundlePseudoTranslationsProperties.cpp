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


#include "OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties() {
    init();
}

OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::~OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::init() {
    pseudo_patterns = new OAIConfigNodePropertyArray();
    m_pseudo_patterns_isSet = false;
}

void
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::cleanup() {
    if(pseudo_patterns != nullptr) { 
        delete pseudo_patterns;
    }
}

OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties*
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pseudo_patterns, pJson["pseudo.patterns"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::asJsonObject() {
    QJsonObject obj;
    if((pseudo_patterns != nullptr) && (pseudo_patterns->isSet())){
        toJsonValue(QString("pseudo.patterns"), pseudo_patterns, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::getPseudoPatterns() {
    return pseudo_patterns;
}
void
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::setPseudoPatterns(OAIConfigNodePropertyArray* pseudo_patterns) {
    this->pseudo_patterns = pseudo_patterns;
    this->m_pseudo_patterns_isSet = true;
}


bool
OAIComAdobeGraniteI18nImplBundlePseudoTranslationsProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(pseudo_patterns != nullptr && pseudo_patterns->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

