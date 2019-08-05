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


#include "OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties() {
    init();
}

OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::~OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::init() {
    sling_post_operation = new OAIConfigNodePropertyString();
    m_sling_post_operation_isSet = false;
    sling_servlet_methods = new OAIConfigNodePropertyString();
    m_sling_servlet_methods_isSet = false;
}

void
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::cleanup() {
    if(sling_post_operation != nullptr) { 
        delete sling_post_operation;
    }
    if(sling_servlet_methods != nullptr) { 
        delete sling_servlet_methods;
    }
}

OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties*
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&sling_post_operation, pJson["sling.post.operation"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&sling_servlet_methods, pJson["sling.servlet.methods"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((sling_post_operation != nullptr) && (sling_post_operation->isSet())){
        toJsonValue(QString("sling.post.operation"), sling_post_operation, obj, QString("OAIConfigNodePropertyString"));
    }
    if((sling_servlet_methods != nullptr) && (sling_servlet_methods->isSet())){
        toJsonValue(QString("sling.servlet.methods"), sling_servlet_methods, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::getSlingPostOperation() {
    return sling_post_operation;
}
void
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::setSlingPostOperation(OAIConfigNodePropertyString* sling_post_operation) {
    this->sling_post_operation = sling_post_operation;
    this->m_sling_post_operation_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::getSlingServletMethods() {
    return sling_servlet_methods;
}
void
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::setSlingServletMethods(OAIConfigNodePropertyString* sling_servlet_methods) {
    this->sling_servlet_methods = sling_servlet_methods;
    this->m_sling_servlet_methods_isSet = true;
}


bool
OAIComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(sling_post_operation != nullptr && sling_post_operation->isSet()){ isObjectUpdated = true; break;}
        if(sling_servlet_methods != nullptr && sling_servlet_methods->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
