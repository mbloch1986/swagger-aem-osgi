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


#include "OAIComDayCqWcmCoreImplEventPagePostProcessorInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::OAIComDayCqWcmCoreImplEventPagePostProcessorInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::OAIComDayCqWcmCoreImplEventPagePostProcessorInfo() {
    init();
}

OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::~OAIComDayCqWcmCoreImplEventPagePostProcessorInfo() {
    this->cleanup();
}

void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::init() {
    pid = new QString("");
    m_pid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    properties = new OAIComDayCqWcmCoreImplEventPagePostProcessorProperties();
    m_properties_isSet = false;
}

void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::cleanup() {
    if(pid != nullptr) { 
        delete pid;
    }
    if(title != nullptr) { 
        delete title;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(properties != nullptr) { 
        delete properties;
    }
}

OAIComDayCqWcmCoreImplEventPagePostProcessorInfo*
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "OAIComDayCqWcmCoreImplEventPagePostProcessorProperties", "OAIComDayCqWcmCoreImplEventPagePostProcessorProperties");
    
}

QString
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::asJsonObject() {
    QJsonObject obj;
    if(pid != nullptr && *pid != QString("")){
        toJsonValue(QString("pid"), pid, obj, QString("QString"));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if((properties != nullptr) && (properties->isSet())){
        toJsonValue(QString("properties"), properties, obj, QString("OAIComDayCqWcmCoreImplEventPagePostProcessorProperties"));
    }

    return obj;
}

QString*
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::getPid() {
    return pid;
}
void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::getTitle() {
    return title;
}
void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::getDescription() {
    return description;
}
void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComDayCqWcmCoreImplEventPagePostProcessorProperties*
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::getProperties() {
    return properties;
}
void
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::setProperties(OAIComDayCqWcmCoreImplEventPagePostProcessorProperties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComDayCqWcmCoreImplEventPagePostProcessorInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(pid != nullptr && *pid != QString("")){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(properties != nullptr && properties->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
