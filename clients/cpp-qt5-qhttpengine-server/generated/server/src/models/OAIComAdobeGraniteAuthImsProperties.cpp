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


#include "OAIComAdobeGraniteAuthImsProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteAuthImsProperties::OAIComAdobeGraniteAuthImsProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteAuthImsProperties::OAIComAdobeGraniteAuthImsProperties() {
    this->init();
}

OAIComAdobeGraniteAuthImsProperties::~OAIComAdobeGraniteAuthImsProperties() {
    
}

void
OAIComAdobeGraniteAuthImsProperties::init() {
    m_configid_isSet = false;
    m_scope_isSet = false;
}

void
OAIComAdobeGraniteAuthImsProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteAuthImsProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(configid, json[QString("configid")]);
    
    ::OpenAPI::fromJsonValue(scope, json[QString("scope")]);
    
}

QString
OAIComAdobeGraniteAuthImsProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteAuthImsProperties::asJsonObject() const {
    QJsonObject obj;
	if(configid.isSet()){
        obj.insert(QString("configid"), ::OpenAPI::toJsonValue(configid));
    }
	if(scope.isSet()){
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(scope));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteAuthImsProperties::getConfigid() const {
    return configid;
}
void
OAIComAdobeGraniteAuthImsProperties::setConfigid(const OAIConfigNodePropertyString &configid) {
    this->configid = configid;
    this->m_configid_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteAuthImsProperties::getScope() const {
    return scope;
}
void
OAIComAdobeGraniteAuthImsProperties::setScope(const OAIConfigNodePropertyString &scope) {
    this->scope = scope;
    this->m_scope_isSet = true;
}


bool
OAIComAdobeGraniteAuthImsProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(configid.isSet()){ isObjectUpdated = true; break;}
    
        if(scope.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

