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


#include "OAIComDayCqDamCoreImplLightboxLightboxServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplLightboxLightboxServletProperties::OAIComDayCqDamCoreImplLightboxLightboxServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplLightboxLightboxServletProperties::OAIComDayCqDamCoreImplLightboxLightboxServletProperties() {
    this->init();
}

OAIComDayCqDamCoreImplLightboxLightboxServletProperties::~OAIComDayCqDamCoreImplLightboxLightboxServletProperties() {
    
}

void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::init() {
    m_sling_servlet_paths_isSet = false;
    m_sling_servlet_methods_isSet = false;
    m_cq_dam_enable_anonymous_isSet = false;
}

void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_servlet_paths, json[QString("sling.servlet.paths")]);
    
    ::OpenAPI::fromJsonValue(sling_servlet_methods, json[QString("sling.servlet.methods")]);
    
    ::OpenAPI::fromJsonValue(cq_dam_enable_anonymous, json[QString("cq.dam.enable.anonymous")]);
    
}

QString
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_servlet_paths.isSet()){
        obj.insert(QString("sling.servlet.paths"), ::OpenAPI::toJsonValue(sling_servlet_paths));
    }
	if(sling_servlet_methods.isSet()){
        obj.insert(QString("sling.servlet.methods"), ::OpenAPI::toJsonValue(sling_servlet_methods));
    }
	if(cq_dam_enable_anonymous.isSet()){
        obj.insert(QString("cq.dam.enable.anonymous"), ::OpenAPI::toJsonValue(cq_dam_enable_anonymous));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::getSlingServletPaths() const {
    return sling_servlet_paths;
}
void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::setSlingServletPaths(const OAIConfigNodePropertyString &sling_servlet_paths) {
    this->sling_servlet_paths = sling_servlet_paths;
    this->m_sling_servlet_paths_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::getSlingServletMethods() const {
    return sling_servlet_methods;
}
void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::setSlingServletMethods(const OAIConfigNodePropertyArray &sling_servlet_methods) {
    this->sling_servlet_methods = sling_servlet_methods;
    this->m_sling_servlet_methods_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::getCqDamEnableAnonymous() const {
    return cq_dam_enable_anonymous;
}
void
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::setCqDamEnableAnonymous(const OAIConfigNodePropertyBoolean &cq_dam_enable_anonymous) {
    this->cq_dam_enable_anonymous = cq_dam_enable_anonymous;
    this->m_cq_dam_enable_anonymous_isSet = true;
}


bool
OAIComDayCqDamCoreImplLightboxLightboxServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_servlet_paths.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_servlet_methods.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_dam_enable_anonymous.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

