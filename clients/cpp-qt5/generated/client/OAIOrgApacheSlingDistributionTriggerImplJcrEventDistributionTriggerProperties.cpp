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


#include "OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties() {
    init();
}

OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::~OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::init() {
    name = new OAIConfigNodePropertyString();
    m_name_isSet = false;
    path = new OAIConfigNodePropertyString();
    m_path_isSet = false;
    ignored_paths_patterns = new OAIConfigNodePropertyArray();
    m_ignored_paths_patterns_isSet = false;
    service_name = new OAIConfigNodePropertyString();
    m_service_name_isSet = false;
    deep = new OAIConfigNodePropertyBoolean();
    m_deep_isSet = false;
}

void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(path != nullptr) { 
        delete path;
    }
    if(ignored_paths_patterns != nullptr) { 
        delete ignored_paths_patterns;
    }
    if(service_name != nullptr) { 
        delete service_name;
    }
    if(deep != nullptr) { 
        delete deep;
    }
}

OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&path, pJson["path"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&ignored_paths_patterns, pJson["ignoredPathsPatterns"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&service_name, pJson["serviceName"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&deep, pJson["deep"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::asJsonObject() {
    QJsonObject obj;
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((path != nullptr) && (path->isSet())){
        toJsonValue(QString("path"), path, obj, QString("OAIConfigNodePropertyString"));
    }
    if((ignored_paths_patterns != nullptr) && (ignored_paths_patterns->isSet())){
        toJsonValue(QString("ignoredPathsPatterns"), ignored_paths_patterns, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((service_name != nullptr) && (service_name->isSet())){
        toJsonValue(QString("serviceName"), service_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((deep != nullptr) && (deep->isSet())){
        toJsonValue(QString("deep"), deep, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::getName() {
    return name;
}
void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::setName(OAIConfigNodePropertyString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::getPath() {
    return path;
}
void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::setPath(OAIConfigNodePropertyString* path) {
    this->path = path;
    this->m_path_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::getIgnoredPathsPatterns() {
    return ignored_paths_patterns;
}
void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::setIgnoredPathsPatterns(OAIConfigNodePropertyArray* ignored_paths_patterns) {
    this->ignored_paths_patterns = ignored_paths_patterns;
    this->m_ignored_paths_patterns_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::getServiceName() {
    return service_name;
}
void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::setServiceName(OAIConfigNodePropertyString* service_name) {
    this->service_name = service_name;
    this->m_service_name_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::getDeep() {
    return deep;
}
void
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::setDeep(OAIConfigNodePropertyBoolean* deep) {
    this->deep = deep;
    this->m_deep_isSet = true;
}


bool
OAIOrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(path != nullptr && path->isSet()){ isObjectUpdated = true; break;}
        if(ignored_paths_patterns != nullptr && ignored_paths_patterns->isSet()){ isObjectUpdated = true; break;}
        if(service_name != nullptr && service_name->isSet()){ isObjectUpdated = true; break;}
        if(deep != nullptr && deep->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

