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


#include "OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo() {
    this->init();
}

OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::~OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo() {
    
}

void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::asJsonObject() const {
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
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::getPid() const {
    return pid;
}
void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::getTitle() const {
    return title;
}
void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::getDescription() const {
    return description;
}
void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::getProperties() const {
    return properties;
}
void
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::setProperties(const OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoInfo::isSet() const {
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

