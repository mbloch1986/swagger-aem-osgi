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


#include "OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo() {
    this->init();
}

OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::~OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo() {
    
}

void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
}

void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::asJsonObject() const {
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
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::getPid() const {
    return pid;
}
void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::getTitle() const {
    return title;
}
void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::getDescription() const {
    return description;
}
void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::getProperties() const {
    return properties;
}
void
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::setProperties(const OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


bool
OAIComAdobeCqSocialSiteEndpointsImplSiteOperationServiceInfo::isSet() const {
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

