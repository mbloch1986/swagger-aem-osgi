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


#include "OAIOrgApacheSlingAuthCoreImplLogoutServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::OAIOrgApacheSlingAuthCoreImplLogoutServletProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::OAIOrgApacheSlingAuthCoreImplLogoutServletProperties() {
    this->init();
}

OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::~OAIOrgApacheSlingAuthCoreImplLogoutServletProperties() {
    
}

void
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::init() {
    m_sling_servlet_methods_isSet = false;
    m_sling_servlet_paths_isSet = false;
}

void
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_servlet_methods, json[QString("sling.servlet.methods")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_paths, json[QString("sling.servlet.paths")]);
    
}

QString
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_servlet_methods.isSet()){
        obj.insert(QString("sling.servlet.methods"), ::OpenAPI::toJsonValue(sling_servlet_methods));
    }
	if(sling_servlet_paths.isSet()){
        obj.insert(QString("sling.servlet.paths"), ::OpenAPI::toJsonValue(sling_servlet_paths));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::getSlingServletMethods() const {
    return sling_servlet_methods;
}
void
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::setSlingServletMethods(const OAIConfigNodePropertyArray &sling_servlet_methods) {
    this->sling_servlet_methods = sling_servlet_methods;
    this->m_sling_servlet_methods_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::getSlingServletPaths() const {
    return sling_servlet_paths;
}
void
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::setSlingServletPaths(const OAIConfigNodePropertyString &sling_servlet_paths) {
    this->sling_servlet_paths = sling_servlet_paths;
    this->m_sling_servlet_paths_isSet = true;
}


bool
OAIOrgApacheSlingAuthCoreImplLogoutServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_servlet_methods.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_paths.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
