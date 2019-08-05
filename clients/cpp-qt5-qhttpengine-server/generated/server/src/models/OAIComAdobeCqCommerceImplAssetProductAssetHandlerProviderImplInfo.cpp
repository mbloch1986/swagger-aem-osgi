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


#include "OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo() {
    this->init();
}

OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::~OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo() {
    
}

void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::asJsonObject() const {
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
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::getPid() const {
    return pid;
}
void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::getTitle() const {
    return title;
}
void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::getDescription() const {
    return description;
}
void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::getProperties() const {
    return properties;
}
void
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::setProperties(const OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo::isSet() const {
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
