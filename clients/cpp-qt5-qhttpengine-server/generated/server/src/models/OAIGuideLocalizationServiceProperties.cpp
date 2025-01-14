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


#include "OAIGuideLocalizationServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGuideLocalizationServiceProperties::OAIGuideLocalizationServiceProperties(QString json) {
    this->fromJson(json);
}

OAIGuideLocalizationServiceProperties::OAIGuideLocalizationServiceProperties() {
    this->init();
}

OAIGuideLocalizationServiceProperties::~OAIGuideLocalizationServiceProperties() {
    
}

void
OAIGuideLocalizationServiceProperties::init() {
    m_supported_locales_isSet = false;
    m_localizable_properties_isSet = false;
}

void
OAIGuideLocalizationServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIGuideLocalizationServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(supported_locales, json[QString("supportedLocales")]);
    
    ::OpenAPI::fromJsonValue(localizable_properties, json[QString("Localizable Properties")]);
    
}

QString
OAIGuideLocalizationServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGuideLocalizationServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(supported_locales.isSet()){
        obj.insert(QString("supportedLocales"), ::OpenAPI::toJsonValue(supported_locales));
    }
	if(localizable_properties.isSet()){
        obj.insert(QString("Localizable Properties"), ::OpenAPI::toJsonValue(localizable_properties));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIGuideLocalizationServiceProperties::getSupportedLocales() const {
    return supported_locales;
}
void
OAIGuideLocalizationServiceProperties::setSupportedLocales(const OAIConfigNodePropertyArray &supported_locales) {
    this->supported_locales = supported_locales;
    this->m_supported_locales_isSet = true;
}

OAIConfigNodePropertyArray
OAIGuideLocalizationServiceProperties::getLocalizableProperties() const {
    return localizable_properties;
}
void
OAIGuideLocalizationServiceProperties::setLocalizableProperties(const OAIConfigNodePropertyArray &localizable_properties) {
    this->localizable_properties = localizable_properties;
    this->m_localizable_properties_isSet = true;
}


bool
OAIGuideLocalizationServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(supported_locales.isSet()){ isObjectUpdated = true; break;}
    
        if(localizable_properties.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

