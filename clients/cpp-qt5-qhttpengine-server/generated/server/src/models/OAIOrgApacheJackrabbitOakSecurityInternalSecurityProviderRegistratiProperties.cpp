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


#include "OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::~OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties() {
    
}

void
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::init() {
    m_required_service_pids_isSet = false;
    m_authorization_composition_type_isSet = false;
}

void
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(required_service_pids, json[QString("requiredServicePids")]);
    
    ::OpenAPI::fromJsonValue(authorization_composition_type, json[QString("authorizationCompositionType")]);
    
}

QString
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::asJsonObject() const {
    QJsonObject obj;
	if(required_service_pids.isSet()){
        obj.insert(QString("requiredServicePids"), ::OpenAPI::toJsonValue(required_service_pids));
    }
	if(authorization_composition_type.isSet()){
        obj.insert(QString("authorizationCompositionType"), ::OpenAPI::toJsonValue(authorization_composition_type));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::getRequiredServicePids() const {
    return required_service_pids;
}
void
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::setRequiredServicePids(const OAIConfigNodePropertyArray &required_service_pids) {
    this->required_service_pids = required_service_pids;
    this->m_required_service_pids_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::getAuthorizationCompositionType() const {
    return authorization_composition_type;
}
void
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::setAuthorizationCompositionType(const OAIConfigNodePropertyDropDown &authorization_composition_type) {
    this->authorization_composition_type = authorization_composition_type;
    this->m_authorization_composition_type_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(required_service_pids.isSet()){ isObjectUpdated = true; break;}
    
        if(authorization_composition_type.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
