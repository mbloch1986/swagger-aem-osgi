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


#include "OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo() {
    this->init();
}

OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::~OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo() {
    
}

void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::init() {
    m_pid_isSet = false;
    m_title_isSet = false;
    m_description_isSet = false;
    m_properties_isSet = false;
    m_bundle_location_isSet = false;
    m_service_location_isSet = false;
}

void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pid, json[QString("pid")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    ::OpenAPI::fromJsonValue(bundle_location, json[QString("bundle_location")]);
    
    ::OpenAPI::fromJsonValue(service_location, json[QString("service_location")]);
    
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::asJsonObject() const {
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
	if(m_bundle_location_isSet){
        obj.insert(QString("bundle_location"), ::OpenAPI::toJsonValue(bundle_location));
    }
	if(m_service_location_isSet){
        obj.insert(QString("service_location"), ::OpenAPI::toJsonValue(service_location));
    }
    return obj;
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getPid() const {
    return pid;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setPid(const QString &pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getTitle() const {
    return title;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getDescription() const {
    return description;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getProperties() const {
    return properties;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setProperties(const OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getBundleLocation() const {
    return bundle_location;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setBundleLocation(const QString &bundle_location) {
    this->bundle_location = bundle_location;
    this->m_bundle_location_isSet = true;
}

QString
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::getServiceLocation() const {
    return service_location;
}
void
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::setServiceLocation(const QString &service_location) {
    this->service_location = service_location;
    this->m_service_location_isSet = true;
}


bool
OAIComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplInfo::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_pid_isSet){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    
        if(m_description_isSet){ isObjectUpdated = true; break;}
    
        if(properties.isSet()){ isObjectUpdated = true; break;}
    
        if(m_bundle_location_isSet){ isObjectUpdated = true; break;}
    
        if(m_service_location_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

