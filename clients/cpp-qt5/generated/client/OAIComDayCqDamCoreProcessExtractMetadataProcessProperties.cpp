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


#include "OAIComDayCqDamCoreProcessExtractMetadataProcessProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::OAIComDayCqDamCoreProcessExtractMetadataProcessProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::OAIComDayCqDamCoreProcessExtractMetadataProcessProperties() {
    init();
}

OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::~OAIComDayCqDamCoreProcessExtractMetadataProcessProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::init() {
    process_label = new OAIConfigNodePropertyString();
    m_process_label_isSet = false;
    cq_dam_enable_sha1 = new OAIConfigNodePropertyBoolean();
    m_cq_dam_enable_sha1_isSet = false;
}

void
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::cleanup() {
    if(process_label != nullptr) { 
        delete process_label;
    }
    if(cq_dam_enable_sha1 != nullptr) { 
        delete cq_dam_enable_sha1;
    }
}

OAIComDayCqDamCoreProcessExtractMetadataProcessProperties*
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&process_label, pJson["process.label"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_enable_sha1, pJson["cq.dam.enable.sha1"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::asJsonObject() {
    QJsonObject obj;
    if((process_label != nullptr) && (process_label->isSet())){
        toJsonValue(QString("process.label"), process_label, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_enable_sha1 != nullptr) && (cq_dam_enable_sha1->isSet())){
        toJsonValue(QString("cq.dam.enable.sha1"), cq_dam_enable_sha1, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::getProcessLabel() {
    return process_label;
}
void
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::setProcessLabel(OAIConfigNodePropertyString* process_label) {
    this->process_label = process_label;
    this->m_process_label_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::getCqDamEnableSha1() {
    return cq_dam_enable_sha1;
}
void
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::setCqDamEnableSha1(OAIConfigNodePropertyBoolean* cq_dam_enable_sha1) {
    this->cq_dam_enable_sha1 = cq_dam_enable_sha1;
    this->m_cq_dam_enable_sha1_isSet = true;
}


bool
OAIComDayCqDamCoreProcessExtractMetadataProcessProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(process_label != nullptr && process_label->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_enable_sha1 != nullptr && cq_dam_enable_sha1->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

