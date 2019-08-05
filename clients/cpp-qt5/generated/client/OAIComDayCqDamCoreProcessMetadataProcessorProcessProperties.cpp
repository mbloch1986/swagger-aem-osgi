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


#include "OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties() {
    init();
}

OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::~OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::init() {
    process_label = new OAIConfigNodePropertyString();
    m_process_label_isSet = false;
    cq_dam_enable_sha1 = new OAIConfigNodePropertyBoolean();
    m_cq_dam_enable_sha1_isSet = false;
    cq_dam_metadata_xssprotected_properties = new OAIConfigNodePropertyArray();
    m_cq_dam_metadata_xssprotected_properties_isSet = false;
}

void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::cleanup() {
    if(process_label != nullptr) { 
        delete process_label;
    }
    if(cq_dam_enable_sha1 != nullptr) { 
        delete cq_dam_enable_sha1;
    }
    if(cq_dam_metadata_xssprotected_properties != nullptr) { 
        delete cq_dam_metadata_xssprotected_properties;
    }
}

OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties*
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&process_label, pJson["process.label"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_dam_enable_sha1, pJson["cq.dam.enable.sha1"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&cq_dam_metadata_xssprotected_properties, pJson["cq.dam.metadata.xssprotected.properties"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::asJsonObject() {
    QJsonObject obj;
    if((process_label != nullptr) && (process_label->isSet())){
        toJsonValue(QString("process.label"), process_label, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_dam_enable_sha1 != nullptr) && (cq_dam_enable_sha1->isSet())){
        toJsonValue(QString("cq.dam.enable.sha1"), cq_dam_enable_sha1, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((cq_dam_metadata_xssprotected_properties != nullptr) && (cq_dam_metadata_xssprotected_properties->isSet())){
        toJsonValue(QString("cq.dam.metadata.xssprotected.properties"), cq_dam_metadata_xssprotected_properties, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::getProcessLabel() {
    return process_label;
}
void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::setProcessLabel(OAIConfigNodePropertyString* process_label) {
    this->process_label = process_label;
    this->m_process_label_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::getCqDamEnableSha1() {
    return cq_dam_enable_sha1;
}
void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::setCqDamEnableSha1(OAIConfigNodePropertyBoolean* cq_dam_enable_sha1) {
    this->cq_dam_enable_sha1 = cq_dam_enable_sha1;
    this->m_cq_dam_enable_sha1_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::getCqDamMetadataXssprotectedProperties() {
    return cq_dam_metadata_xssprotected_properties;
}
void
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::setCqDamMetadataXssprotectedProperties(OAIConfigNodePropertyArray* cq_dam_metadata_xssprotected_properties) {
    this->cq_dam_metadata_xssprotected_properties = cq_dam_metadata_xssprotected_properties;
    this->m_cq_dam_metadata_xssprotected_properties_isSet = true;
}


bool
OAIComDayCqDamCoreProcessMetadataProcessorProcessProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(process_label != nullptr && process_label->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_enable_sha1 != nullptr && cq_dam_enable_sha1->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_metadata_xssprotected_properties != nullptr && cq_dam_metadata_xssprotected_properties->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
