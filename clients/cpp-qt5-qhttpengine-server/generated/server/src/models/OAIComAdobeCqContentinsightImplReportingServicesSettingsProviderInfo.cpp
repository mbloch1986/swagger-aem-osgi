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


#include "OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo() {
    this->init();
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::~OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo() {
    
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::asJsonObject() const {
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
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::getPid() const {
    return pid;
}
void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::getTitle() const {
    return title;
}
void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::getDescription() const {
    return description;
}
void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::getProperties() const {
    return properties;
}
void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::setProperties(const OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderInfo::isSet() const {
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

