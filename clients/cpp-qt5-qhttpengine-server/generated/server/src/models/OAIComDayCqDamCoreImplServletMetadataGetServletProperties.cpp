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


#include "OAIComDayCqDamCoreImplServletMetadataGetServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplServletMetadataGetServletProperties::OAIComDayCqDamCoreImplServletMetadataGetServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplServletMetadataGetServletProperties::OAIComDayCqDamCoreImplServletMetadataGetServletProperties() {
    this->init();
}

OAIComDayCqDamCoreImplServletMetadataGetServletProperties::~OAIComDayCqDamCoreImplServletMetadataGetServletProperties() {
    
}

void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::init() {
    m_sling_servlet_resource_types_isSet = false;
    m_sling_servlet_methods_isSet = false;
    m_sling_servlet_extensions_isSet = false;
    m_sling_servlet_selectors_isSet = false;
}

void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_servlet_resource_types, json[QString("sling.servlet.resourceTypes")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_methods, json[QString("sling.servlet.methods")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_extensions, json[QString("sling.servlet.extensions")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_selectors, json[QString("sling.servlet.selectors")]);
    
}

QString
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_servlet_resource_types.isSet()){
        obj.insert(QString("sling.servlet.resourceTypes"), ::OpenAPI::toJsonValue(sling_servlet_resource_types));
    }
	if(sling_servlet_methods.isSet()){
        obj.insert(QString("sling.servlet.methods"), ::OpenAPI::toJsonValue(sling_servlet_methods));
    }
	if(sling_servlet_extensions.isSet()){
        obj.insert(QString("sling.servlet.extensions"), ::OpenAPI::toJsonValue(sling_servlet_extensions));
    }
	if(sling_servlet_selectors.isSet()){
        obj.insert(QString("sling.servlet.selectors"), ::OpenAPI::toJsonValue(sling_servlet_selectors));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletResourceTypes() const {
    return sling_servlet_resource_types;
}
void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletResourceTypes(const OAIConfigNodePropertyString &sling_servlet_resource_types) {
    this->sling_servlet_resource_types = sling_servlet_resource_types;
    this->m_sling_servlet_resource_types_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletMethods() const {
    return sling_servlet_methods;
}
void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletMethods(const OAIConfigNodePropertyString &sling_servlet_methods) {
    this->sling_servlet_methods = sling_servlet_methods;
    this->m_sling_servlet_methods_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletExtensions() const {
    return sling_servlet_extensions;
}
void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletExtensions(const OAIConfigNodePropertyString &sling_servlet_extensions) {
    this->sling_servlet_extensions = sling_servlet_extensions;
    this->m_sling_servlet_extensions_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletSelectors() const {
    return sling_servlet_selectors;
}
void
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletSelectors(const OAIConfigNodePropertyString &sling_servlet_selectors) {
    this->sling_servlet_selectors = sling_servlet_selectors;
    this->m_sling_servlet_selectors_isSet = true;
}


bool
OAIComDayCqDamCoreImplServletMetadataGetServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_servlet_resource_types.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_methods.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_extensions.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_selectors.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

