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


#include "OAIComDayCqWcmFoundationFormsImplMailServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmFoundationFormsImplMailServletProperties::OAIComDayCqWcmFoundationFormsImplMailServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmFoundationFormsImplMailServletProperties::OAIComDayCqWcmFoundationFormsImplMailServletProperties() {
    this->init();
}

OAIComDayCqWcmFoundationFormsImplMailServletProperties::~OAIComDayCqWcmFoundationFormsImplMailServletProperties() {
    
}

void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::init() {
    m_sling_servlet_resource_types_isSet = false;
    m_sling_servlet_selectors_isSet = false;
    m_resource_whitelist_isSet = false;
    m_resource_blacklist_isSet = false;
}

void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_servlet_resource_types, json[QString("sling.servlet.resourceTypes")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_selectors, json[QString("sling.servlet.selectors")]);
    
    ::OpenAPI::fromJsonValue(resource_whitelist, json[QString("resource.whitelist")]);
    
    ::OpenAPI::fromJsonValue(resource_blacklist, json[QString("resource.blacklist")]);
    
}

QString
OAIComDayCqWcmFoundationFormsImplMailServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmFoundationFormsImplMailServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_servlet_resource_types.isSet()){
        obj.insert(QString("sling.servlet.resourceTypes"), ::OpenAPI::toJsonValue(sling_servlet_resource_types));
    }
	if(sling_servlet_selectors.isSet()){
        obj.insert(QString("sling.servlet.selectors"), ::OpenAPI::toJsonValue(sling_servlet_selectors));
    }
	if(resource_whitelist.isSet()){
        obj.insert(QString("resource.whitelist"), ::OpenAPI::toJsonValue(resource_whitelist));
    }
	if(resource_blacklist.isSet()){
        obj.insert(QString("resource.blacklist"), ::OpenAPI::toJsonValue(resource_blacklist));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqWcmFoundationFormsImplMailServletProperties::getSlingServletResourceTypes() const {
    return sling_servlet_resource_types;
}
void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::setSlingServletResourceTypes(const OAIConfigNodePropertyString &sling_servlet_resource_types) {
    this->sling_servlet_resource_types = sling_servlet_resource_types;
    this->m_sling_servlet_resource_types_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqWcmFoundationFormsImplMailServletProperties::getSlingServletSelectors() const {
    return sling_servlet_selectors;
}
void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::setSlingServletSelectors(const OAIConfigNodePropertyString &sling_servlet_selectors) {
    this->sling_servlet_selectors = sling_servlet_selectors;
    this->m_sling_servlet_selectors_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmFoundationFormsImplMailServletProperties::getResourceWhitelist() const {
    return resource_whitelist;
}
void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::setResourceWhitelist(const OAIConfigNodePropertyArray &resource_whitelist) {
    this->resource_whitelist = resource_whitelist;
    this->m_resource_whitelist_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqWcmFoundationFormsImplMailServletProperties::getResourceBlacklist() const {
    return resource_blacklist;
}
void
OAIComDayCqWcmFoundationFormsImplMailServletProperties::setResourceBlacklist(const OAIConfigNodePropertyString &resource_blacklist) {
    this->resource_blacklist = resource_blacklist;
    this->m_resource_blacklist_isSet = true;
}


bool
OAIComDayCqWcmFoundationFormsImplMailServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_servlet_resource_types.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_selectors.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_whitelist.isSet()){ isObjectUpdated = true; break;}
    
        if(resource_blacklist.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
