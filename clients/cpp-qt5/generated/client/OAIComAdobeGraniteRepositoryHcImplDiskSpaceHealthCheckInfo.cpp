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


#include "OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo() {
    init();
}

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::~OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo() {
    this->cleanup();
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::init() {
    pid = new QString("");
    m_pid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    properties = new OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties();
    m_properties_isSet = false;
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::cleanup() {
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

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo*
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties", "OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties");
    
}

QString
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::asJsonObject() {
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
        toJsonValue(QString("properties"), properties, obj, QString("OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties"));
    }

    return obj;
}

QString*
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::getPid() {
    return pid;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::getTitle() {
    return title;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::getDescription() {
    return description;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties*
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::getProperties() {
    return properties;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::setProperties(OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckInfo::isSet(){
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
