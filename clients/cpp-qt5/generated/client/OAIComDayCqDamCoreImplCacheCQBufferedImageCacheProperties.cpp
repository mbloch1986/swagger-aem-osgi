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


#include "OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties() {
    init();
}

OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::~OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::init() {
    cq_dam_image_cache_max_memory = new OAIConfigNodePropertyInteger();
    m_cq_dam_image_cache_max_memory_isSet = false;
    cq_dam_image_cache_max_age = new OAIConfigNodePropertyInteger();
    m_cq_dam_image_cache_max_age_isSet = false;
    cq_dam_image_cache_max_dimension = new OAIConfigNodePropertyString();
    m_cq_dam_image_cache_max_dimension_isSet = false;
}

void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::cleanup() {
    if(cq_dam_image_cache_max_memory != nullptr) { 
        delete cq_dam_image_cache_max_memory;
    }
    if(cq_dam_image_cache_max_age != nullptr) { 
        delete cq_dam_image_cache_max_age;
    }
    if(cq_dam_image_cache_max_dimension != nullptr) { 
        delete cq_dam_image_cache_max_dimension;
    }
}

OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties*
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_dam_image_cache_max_memory, pJson["cq.dam.image.cache.max.memory"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_image_cache_max_age, pJson["cq.dam.image.cache.max.age"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_image_cache_max_dimension, pJson["cq.dam.image.cache.max.dimension"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_dam_image_cache_max_memory != nullptr) && (cq_dam_image_cache_max_memory->isSet())){
        toJsonValue(QString("cq.dam.image.cache.max.memory"), cq_dam_image_cache_max_memory, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_image_cache_max_age != nullptr) && (cq_dam_image_cache_max_age->isSet())){
        toJsonValue(QString("cq.dam.image.cache.max.age"), cq_dam_image_cache_max_age, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_image_cache_max_dimension != nullptr) && (cq_dam_image_cache_max_dimension->isSet())){
        toJsonValue(QString("cq.dam.image.cache.max.dimension"), cq_dam_image_cache_max_dimension, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::getCqDamImageCacheMaxMemory() {
    return cq_dam_image_cache_max_memory;
}
void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::setCqDamImageCacheMaxMemory(OAIConfigNodePropertyInteger* cq_dam_image_cache_max_memory) {
    this->cq_dam_image_cache_max_memory = cq_dam_image_cache_max_memory;
    this->m_cq_dam_image_cache_max_memory_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::getCqDamImageCacheMaxAge() {
    return cq_dam_image_cache_max_age;
}
void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::setCqDamImageCacheMaxAge(OAIConfigNodePropertyInteger* cq_dam_image_cache_max_age) {
    this->cq_dam_image_cache_max_age = cq_dam_image_cache_max_age;
    this->m_cq_dam_image_cache_max_age_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::getCqDamImageCacheMaxDimension() {
    return cq_dam_image_cache_max_dimension;
}
void
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::setCqDamImageCacheMaxDimension(OAIConfigNodePropertyString* cq_dam_image_cache_max_dimension) {
    this->cq_dam_image_cache_max_dimension = cq_dam_image_cache_max_dimension;
    this->m_cq_dam_image_cache_max_dimension_isSet = true;
}


bool
OAIComDayCqDamCoreImplCacheCQBufferedImageCacheProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_dam_image_cache_max_memory != nullptr && cq_dam_image_cache_max_memory->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_image_cache_max_age != nullptr && cq_dam_image_cache_max_age->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_image_cache_max_dimension != nullptr && cq_dam_image_cache_max_dimension->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

