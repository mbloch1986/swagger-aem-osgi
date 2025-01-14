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


#include "OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo() {
    this->init();
}

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::~OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo() {
    
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::asJsonObject() const {
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
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::getPid() const {
    return pid;
}
void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::getTitle() const {
    return title;
}
void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::getDescription() const {
    return description;
}
void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::getProperties() const {
    return properties;
}
void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::setProperties(const OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplInfo::isSet() const {
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

