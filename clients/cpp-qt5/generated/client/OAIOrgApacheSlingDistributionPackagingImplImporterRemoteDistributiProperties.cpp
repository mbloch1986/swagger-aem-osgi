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


#include "OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties() {
    init();
}

OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::~OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::init() {
    name = new OAIConfigNodePropertyString();
    m_name_isSet = false;
    endpoints = new OAIConfigNodePropertyArray();
    m_endpoints_isSet = false;
    transport_secret_provider_target = new OAIConfigNodePropertyString();
    m_transport_secret_provider_target_isSet = false;
}

void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(endpoints != nullptr) { 
        delete endpoints;
    }
    if(transport_secret_provider_target != nullptr) { 
        delete transport_secret_provider_target;
    }
}

OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties*
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&endpoints, pJson["endpoints"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&transport_secret_provider_target, pJson["transportSecretProvider.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::asJsonObject() {
    QJsonObject obj;
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((endpoints != nullptr) && (endpoints->isSet())){
        toJsonValue(QString("endpoints"), endpoints, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((transport_secret_provider_target != nullptr) && (transport_secret_provider_target->isSet())){
        toJsonValue(QString("transportSecretProvider.target"), transport_secret_provider_target, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getName() {
    return name;
}
void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setName(OAIConfigNodePropertyString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getEndpoints() {
    return endpoints;
}
void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setEndpoints(OAIConfigNodePropertyArray* endpoints) {
    this->endpoints = endpoints;
    this->m_endpoints_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getTransportSecretProviderTarget() {
    return transport_secret_provider_target;
}
void
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setTransportSecretProviderTarget(OAIConfigNodePropertyString* transport_secret_provider_target) {
    this->transport_secret_provider_target = transport_secret_provider_target;
    this->m_transport_secret_provider_target_isSet = true;
}


bool
OAIOrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(endpoints != nullptr && endpoints->isSet()){ isObjectUpdated = true; break;}
        if(transport_secret_provider_target != nullptr && transport_secret_provider_target->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

