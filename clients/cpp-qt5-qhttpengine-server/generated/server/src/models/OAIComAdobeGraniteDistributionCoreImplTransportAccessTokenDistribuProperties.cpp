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


#include "OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties() {
    this->init();
}

OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::~OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties() {
    
}

void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::init() {
    m_name_isSet = false;
    m_service_name_isSet = false;
    m_user_id_isSet = false;
    m_access_token_provider_target_isSet = false;
}

void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(service_name, json[QString("serviceName")]);
    
    ::OpenAPI::fromJsonValue(user_id, json[QString("userId")]);
    
    ::OpenAPI::fromJsonValue(access_token_provider_target, json[QString("accessTokenProvider.target")]);
    
}

QString
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::asJsonObject() const {
    QJsonObject obj;
	if(name.isSet()){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(service_name.isSet()){
        obj.insert(QString("serviceName"), ::OpenAPI::toJsonValue(service_name));
    }
	if(user_id.isSet()){
        obj.insert(QString("userId"), ::OpenAPI::toJsonValue(user_id));
    }
	if(access_token_provider_target.isSet()){
        obj.insert(QString("accessTokenProvider.target"), ::OpenAPI::toJsonValue(access_token_provider_target));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getName() const {
    return name;
}
void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setName(const OAIConfigNodePropertyString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getServiceName() const {
    return service_name;
}
void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setServiceName(const OAIConfigNodePropertyString &service_name) {
    this->service_name = service_name;
    this->m_service_name_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getUserId() const {
    return user_id;
}
void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setUserId(const OAIConfigNodePropertyString &user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::getAccessTokenProviderTarget() const {
    return access_token_provider_target;
}
void
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::setAccessTokenProviderTarget(const OAIConfigNodePropertyString &access_token_provider_target) {
    this->access_token_provider_target = access_token_provider_target;
    this->m_access_token_provider_target_isSet = true;
}


bool
OAIComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(name.isSet()){ isObjectUpdated = true; break;}
    
        if(service_name.isSet()){ isObjectUpdated = true; break;}
    
        if(user_id.isSet()){ isObjectUpdated = true; break;}
    
        if(access_token_provider_target.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
