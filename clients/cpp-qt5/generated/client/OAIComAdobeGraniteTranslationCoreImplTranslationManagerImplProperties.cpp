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


#include "OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties() {
    init();
}

OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::~OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::init() {
    default_connector_name = new OAIConfigNodePropertyString();
    m_default_connector_name_isSet = false;
    default_category = new OAIConfigNodePropertyString();
    m_default_category_isSet = false;
}

void
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::cleanup() {
    if(default_connector_name != nullptr) { 
        delete default_connector_name;
    }
    if(default_category != nullptr) { 
        delete default_category;
    }
}

OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties*
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&default_connector_name, pJson["defaultConnectorName"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&default_category, pJson["defaultCategory"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::asJsonObject() {
    QJsonObject obj;
    if((default_connector_name != nullptr) && (default_connector_name->isSet())){
        toJsonValue(QString("defaultConnectorName"), default_connector_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((default_category != nullptr) && (default_category->isSet())){
        toJsonValue(QString("defaultCategory"), default_category, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::getDefaultConnectorName() {
    return default_connector_name;
}
void
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::setDefaultConnectorName(OAIConfigNodePropertyString* default_connector_name) {
    this->default_connector_name = default_connector_name;
    this->m_default_connector_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::getDefaultCategory() {
    return default_category;
}
void
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::setDefaultCategory(OAIConfigNodePropertyString* default_category) {
    this->default_category = default_category;
    this->m_default_category_isSet = true;
}


bool
OAIComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(default_connector_name != nullptr && default_connector_name->isSet()){ isObjectUpdated = true; break;}
        if(default_category != nullptr && default_category->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

