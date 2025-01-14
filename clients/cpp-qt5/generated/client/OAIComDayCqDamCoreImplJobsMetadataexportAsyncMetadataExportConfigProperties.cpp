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


#include "OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties() {
    init();
}

OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::~OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::init() {
    operation = new OAIConfigNodePropertyString();
    m_operation_isSet = false;
    email_enabled = new OAIConfigNodePropertyBoolean();
    m_email_enabled_isSet = false;
}

void
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::cleanup() {
    if(operation != nullptr) { 
        delete operation;
    }
    if(email_enabled != nullptr) { 
        delete email_enabled;
    }
}

OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties*
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&operation, pJson["operation"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&email_enabled, pJson["emailEnabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::asJsonObject() {
    QJsonObject obj;
    if((operation != nullptr) && (operation->isSet())){
        toJsonValue(QString("operation"), operation, obj, QString("OAIConfigNodePropertyString"));
    }
    if((email_enabled != nullptr) && (email_enabled->isSet())){
        toJsonValue(QString("emailEnabled"), email_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::getOperation() {
    return operation;
}
void
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::setOperation(OAIConfigNodePropertyString* operation) {
    this->operation = operation;
    this->m_operation_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::getEmailEnabled() {
    return email_enabled;
}
void
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::setEmailEnabled(OAIConfigNodePropertyBoolean* email_enabled) {
    this->email_enabled = email_enabled;
    this->m_email_enabled_isSet = true;
}


bool
OAIComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(operation != nullptr && operation->isSet()){ isObjectUpdated = true; break;}
        if(email_enabled != nullptr && email_enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

