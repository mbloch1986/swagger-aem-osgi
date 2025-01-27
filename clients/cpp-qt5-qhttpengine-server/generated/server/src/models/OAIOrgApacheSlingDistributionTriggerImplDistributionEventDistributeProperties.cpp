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


#include "OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties() {
    this->init();
}

OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::~OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties() {
    
}

void
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::init() {
    m_name_isSet = false;
    m_path_isSet = false;
}

void
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(path, json[QString("path")]);
    
}

QString
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::asJsonObject() const {
    QJsonObject obj;
	if(name.isSet()){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(path.isSet()){
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(path));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::getName() const {
    return name;
}
void
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::setName(const OAIConfigNodePropertyString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::getPath() const {
    return path;
}
void
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::setPath(const OAIConfigNodePropertyString &path) {
    this->path = path;
    this->m_path_isSet = true;
}


bool
OAIOrgApacheSlingDistributionTriggerImplDistributionEventDistributeProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(name.isSet()){ isObjectUpdated = true; break;}
    
        if(path.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

