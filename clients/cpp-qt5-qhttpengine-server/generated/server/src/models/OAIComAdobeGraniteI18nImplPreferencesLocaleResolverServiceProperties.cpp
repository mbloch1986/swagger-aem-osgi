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


#include "OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties() {
    this->init();
}

OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::~OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties() {
    
}

void
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::init() {
    m_security_preferences_name_isSet = false;
}

void
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(security_preferences_name, json[QString("security.preferences.name")]);
    
}

QString
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(security_preferences_name.isSet()){
        obj.insert(QString("security.preferences.name"), ::OpenAPI::toJsonValue(security_preferences_name));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::getSecurityPreferencesName() const {
    return security_preferences_name;
}
void
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::setSecurityPreferencesName(const OAIConfigNodePropertyString &security_preferences_name) {
    this->security_preferences_name = security_preferences_name;
    this->m_security_preferences_name_isSet = true;
}


bool
OAIComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(security_preferences_name.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
