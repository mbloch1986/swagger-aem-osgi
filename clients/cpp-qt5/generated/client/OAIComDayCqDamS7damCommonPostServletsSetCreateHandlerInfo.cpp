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


#include "OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo() {
    init();
}

OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::~OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo() {
    this->cleanup();
}

void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::init() {
    pid = new QString("");
    m_pid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    properties = new OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties();
    m_properties_isSet = false;
}

void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::cleanup() {
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

OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo*
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties", "OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties");
    
}

QString
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::asJsonObject() {
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
        toJsonValue(QString("properties"), properties, obj, QString("OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties"));
    }

    return obj;
}

QString*
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::getPid() {
    return pid;
}
void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::getTitle() {
    return title;
}
void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::getDescription() {
    return description;
}
void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties*
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::getProperties() {
    return properties;
}
void
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::setProperties(OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComDayCqDamS7damCommonPostServletsSetCreateHandlerInfo::isSet(){
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

