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


#include "OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties() {
    init();
}

OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::~OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::init() {
    mime_types = new OAIConfigNodePropertyArray();
    m_mime_types_isSet = false;
    max_extract = new OAIConfigNodePropertyInteger();
    m_max_extract_isSet = false;
}

void
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::cleanup() {
    if(mime_types != nullptr) { 
        delete mime_types;
    }
    if(max_extract != nullptr) { 
        delete max_extract;
    }
}

OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties*
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&mime_types, pJson["mimeTypes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&max_extract, pJson["maxExtract"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::asJsonObject() {
    QJsonObject obj;
    if((mime_types != nullptr) && (mime_types->isSet())){
        toJsonValue(QString("mimeTypes"), mime_types, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((max_extract != nullptr) && (max_extract->isSet())){
        toJsonValue(QString("maxExtract"), max_extract, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::getMimeTypes() {
    return mime_types;
}
void
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::setMimeTypes(OAIConfigNodePropertyArray* mime_types) {
    this->mime_types = mime_types;
    this->m_mime_types_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::getMaxExtract() {
    return max_extract;
}
void
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::setMaxExtract(OAIConfigNodePropertyInteger* max_extract) {
    this->max_extract = max_extract;
    this->m_max_extract_isSet = true;
}


bool
OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(mime_types != nullptr && mime_types->isSet()){ isObjectUpdated = true; break;}
        if(max_extract != nullptr && max_extract->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
