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


#include "OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties() {
    init();
}

OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::~OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::init() {
    name = new OAIConfigNodePropertyString();
    m_name_isSet = false;
    endpoint = new OAIConfigNodePropertyString();
    m_endpoint_isSet = false;
    transport_secret_provider_target = new OAIConfigNodePropertyString();
    m_transport_secret_provider_target_isSet = false;
}

void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(endpoint != nullptr) { 
        delete endpoint;
    }
    if(transport_secret_provider_target != nullptr) { 
        delete transport_secret_provider_target;
    }
}

OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties*
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&endpoint, pJson["endpoint"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&transport_secret_provider_target, pJson["transportSecretProvider.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::asJsonObject() {
    QJsonObject obj;
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((endpoint != nullptr) && (endpoint->isSet())){
        toJsonValue(QString("endpoint"), endpoint, obj, QString("OAIConfigNodePropertyString"));
    }
    if((transport_secret_provider_target != nullptr) && (transport_secret_provider_target->isSet())){
        toJsonValue(QString("transportSecretProvider.target"), transport_secret_provider_target, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::getName() {
    return name;
}
void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::setName(OAIConfigNodePropertyString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::getEndpoint() {
    return endpoint;
}
void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::setEndpoint(OAIConfigNodePropertyString* endpoint) {
    this->endpoint = endpoint;
    this->m_endpoint_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::getTransportSecretProviderTarget() {
    return transport_secret_provider_target;
}
void
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::setTransportSecretProviderTarget(OAIConfigNodePropertyString* transport_secret_provider_target) {
    this->transport_secret_provider_target = transport_secret_provider_target;
    this->m_transport_secret_provider_target_isSet = true;
}


bool
OAIOrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(endpoint != nullptr && endpoint->isSet()){ isObjectUpdated = true; break;}
        if(transport_secret_provider_target != nullptr && transport_secret_provider_target->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
