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


#include "OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo() {
    init();
}

OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::~OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo() {
    this->cleanup();
}

void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::init() {
    pid = new QString("");
    m_pid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    properties = new OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties();
    m_properties_isSet = false;
}

void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::cleanup() {
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

OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo*
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties", "OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties");
    
}

QString
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::asJsonObject() {
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
        toJsonValue(QString("properties"), properties, obj, QString("OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties"));
    }

    return obj;
}

QString*
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::getPid() {
    return pid;
}
void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::getTitle() {
    return title;
}
void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::getDescription() {
    return description;
}
void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties*
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::getProperties() {
    return properties;
}
void
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::setProperties(OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCInfo::isSet(){
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
