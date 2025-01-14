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


#include "OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo() {
    this->init();
}

OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::~OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo() {
    
}

void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::asJsonObject() const {
    QJsonObject obj;
	if(m_pid_isSet){
        obj.insert(QString("pid"), ::OpenAPI::toJsonValue(pid));
    }
	if(m_title_isSet){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
	if(m_description_isSet){
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
	if(properties.isSet()){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    return obj;
}

QString
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::getPid() const {
    return pid;
}
void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::getTitle() const {
    return title;
}
void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::getDescription() const {
    return description;
}
void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderProperties
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::getProperties() const {
    return properties;
}
void
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::setProperties(const OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIOrgApacheSlingModelsJacksonexporterImplResourceModuleProviderInfo::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_pid_isSet){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    
        if(m_description_isSet){ isObjectUpdated = true; break;}
    
        if(properties.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

