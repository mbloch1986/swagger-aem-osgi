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


#include "OAIComDayCqDamCoreImplServletResourceCollectionServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::OAIComDayCqDamCoreImplServletResourceCollectionServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::OAIComDayCqDamCoreImplServletResourceCollectionServletProperties() {
    this->init();
}

OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::~OAIComDayCqDamCoreImplServletResourceCollectionServletProperties() {
    
}

void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::init() {
    m_sling_servlet_resource_types_isSet = false;
    m_sling_servlet_methods_isSet = false;
    m_sling_servlet_selectors_isSet = false;
    m_download_config_isSet = false;
    m_view_selector_isSet = false;
    m_send_email_isSet = false;
}

void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_servlet_resource_types, json[QString("sling.servlet.resourceTypes")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_methods, json[QString("sling.servlet.methods")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_selectors, json[QString("sling.servlet.selectors")]);
    
    ::OpenAPI::fromJsonValue(download_config, json[QString("download.config")]);
    
    ::OpenAPI::fromJsonValue(view_selector, json[QString("view.selector")]);
    
    ::OpenAPI::fromJsonValue(send_email, json[QString("send_email")]);
    
}

QString
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_servlet_resource_types.isSet()){
        obj.insert(QString("sling.servlet.resourceTypes"), ::OpenAPI::toJsonValue(sling_servlet_resource_types));
    }
	if(sling_servlet_methods.isSet()){
        obj.insert(QString("sling.servlet.methods"), ::OpenAPI::toJsonValue(sling_servlet_methods));
    }
	if(sling_servlet_selectors.isSet()){
        obj.insert(QString("sling.servlet.selectors"), ::OpenAPI::toJsonValue(sling_servlet_selectors));
    }
	if(download_config.isSet()){
        obj.insert(QString("download.config"), ::OpenAPI::toJsonValue(download_config));
    }
	if(view_selector.isSet()){
        obj.insert(QString("view.selector"), ::OpenAPI::toJsonValue(view_selector));
    }
	if(send_email.isSet()){
        obj.insert(QString("send_email"), ::OpenAPI::toJsonValue(send_email));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletResourceTypes() const {
    return sling_servlet_resource_types;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletResourceTypes(const OAIConfigNodePropertyArray &sling_servlet_resource_types) {
    this->sling_servlet_resource_types = sling_servlet_resource_types;
    this->m_sling_servlet_resource_types_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletMethods() const {
    return sling_servlet_methods;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletMethods(const OAIConfigNodePropertyString &sling_servlet_methods) {
    this->sling_servlet_methods = sling_servlet_methods;
    this->m_sling_servlet_methods_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletSelectors() const {
    return sling_servlet_selectors;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletSelectors(const OAIConfigNodePropertyString &sling_servlet_selectors) {
    this->sling_servlet_selectors = sling_servlet_selectors;
    this->m_sling_servlet_selectors_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getDownloadConfig() const {
    return download_config;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setDownloadConfig(const OAIConfigNodePropertyString &download_config) {
    this->download_config = download_config;
    this->m_download_config_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getViewSelector() const {
    return view_selector;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setViewSelector(const OAIConfigNodePropertyString &view_selector) {
    this->view_selector = view_selector;
    this->m_view_selector_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::getSendEmail() const {
    return send_email;
}
void
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::setSendEmail(const OAIConfigNodePropertyBoolean &send_email) {
    this->send_email = send_email;
    this->m_send_email_isSet = true;
}


bool
OAIComDayCqDamCoreImplServletResourceCollectionServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_servlet_resource_types.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_methods.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_selectors.isSet()){ isObjectUpdated = true; break;}
    
        if(download_config.isSet()){ isObjectUpdated = true; break;}
    
        if(view_selector.isSet()){ isObjectUpdated = true; break;}
    
        if(send_email.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

