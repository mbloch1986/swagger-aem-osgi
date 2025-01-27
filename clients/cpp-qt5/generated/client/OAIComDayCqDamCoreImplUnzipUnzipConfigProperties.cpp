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


#include "OAIComDayCqDamCoreImplUnzipUnzipConfigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::OAIComDayCqDamCoreImplUnzipUnzipConfigProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::OAIComDayCqDamCoreImplUnzipUnzipConfigProperties() {
    init();
}

OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::~OAIComDayCqDamCoreImplUnzipUnzipConfigProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::init() {
    cq_dam_config_unzip_maxuncompressedsize = new OAIConfigNodePropertyInteger();
    m_cq_dam_config_unzip_maxuncompressedsize_isSet = false;
    cq_dam_config_unzip_encoding = new OAIConfigNodePropertyString();
    m_cq_dam_config_unzip_encoding_isSet = false;
}

void
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::cleanup() {
    if(cq_dam_config_unzip_maxuncompressedsize != nullptr) { 
        delete cq_dam_config_unzip_maxuncompressedsize;
    }
    if(cq_dam_config_unzip_encoding != nullptr) { 
        delete cq_dam_config_unzip_encoding;
    }
}

OAIComDayCqDamCoreImplUnzipUnzipConfigProperties*
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_dam_config_unzip_maxuncompressedsize, pJson["cq.dam.config.unzip.maxuncompressedsize"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_config_unzip_encoding, pJson["cq.dam.config.unzip.encoding"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_dam_config_unzip_maxuncompressedsize != nullptr) && (cq_dam_config_unzip_maxuncompressedsize->isSet())){
        toJsonValue(QString("cq.dam.config.unzip.maxuncompressedsize"), cq_dam_config_unzip_maxuncompressedsize, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_config_unzip_encoding != nullptr) && (cq_dam_config_unzip_encoding->isSet())){
        toJsonValue(QString("cq.dam.config.unzip.encoding"), cq_dam_config_unzip_encoding, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::getCqDamConfigUnzipMaxuncompressedsize() {
    return cq_dam_config_unzip_maxuncompressedsize;
}
void
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::setCqDamConfigUnzipMaxuncompressedsize(OAIConfigNodePropertyInteger* cq_dam_config_unzip_maxuncompressedsize) {
    this->cq_dam_config_unzip_maxuncompressedsize = cq_dam_config_unzip_maxuncompressedsize;
    this->m_cq_dam_config_unzip_maxuncompressedsize_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::getCqDamConfigUnzipEncoding() {
    return cq_dam_config_unzip_encoding;
}
void
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::setCqDamConfigUnzipEncoding(OAIConfigNodePropertyString* cq_dam_config_unzip_encoding) {
    this->cq_dam_config_unzip_encoding = cq_dam_config_unzip_encoding;
    this->m_cq_dam_config_unzip_encoding_isSet = true;
}


bool
OAIComDayCqDamCoreImplUnzipUnzipConfigProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_dam_config_unzip_maxuncompressedsize != nullptr && cq_dam_config_unzip_maxuncompressedsize->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_config_unzip_encoding != nullptr && cq_dam_config_unzip_encoding->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

