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


#include "OAIComDayCqDamCoreImplServletCollectionsServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplServletCollectionsServletProperties::OAIComDayCqDamCoreImplServletCollectionsServletProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplServletCollectionsServletProperties::OAIComDayCqDamCoreImplServletCollectionsServletProperties() {
    this->init();
}

OAIComDayCqDamCoreImplServletCollectionsServletProperties::~OAIComDayCqDamCoreImplServletCollectionsServletProperties() {
    
}

void
OAIComDayCqDamCoreImplServletCollectionsServletProperties::init() {
    m_cq_dam_batch_collections_properties_isSet = false;
    m_cq_dam_batch_collections_limit_isSet = false;
}

void
OAIComDayCqDamCoreImplServletCollectionsServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplServletCollectionsServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_dam_batch_collections_properties, json[QString("cq.dam.batch.collections.properties")]);
    
    ::OpenAPI::fromJsonValue(cq_dam_batch_collections_limit, json[QString("cq.dam.batch.collections.limit")]);
    
}

QString
OAIComDayCqDamCoreImplServletCollectionsServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplServletCollectionsServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_dam_batch_collections_properties.isSet()){
        obj.insert(QString("cq.dam.batch.collections.properties"), ::OpenAPI::toJsonValue(cq_dam_batch_collections_properties));
    }
	if(cq_dam_batch_collections_limit.isSet()){
        obj.insert(QString("cq.dam.batch.collections.limit"), ::OpenAPI::toJsonValue(cq_dam_batch_collections_limit));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsProperties() const {
    return cq_dam_batch_collections_properties;
}
void
OAIComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsProperties(const OAIConfigNodePropertyArray &cq_dam_batch_collections_properties) {
    this->cq_dam_batch_collections_properties = cq_dam_batch_collections_properties;
    this->m_cq_dam_batch_collections_properties_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsLimit() const {
    return cq_dam_batch_collections_limit;
}
void
OAIComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsLimit(const OAIConfigNodePropertyInteger &cq_dam_batch_collections_limit) {
    this->cq_dam_batch_collections_limit = cq_dam_batch_collections_limit;
    this->m_cq_dam_batch_collections_limit_isSet = true;
}


bool
OAIComDayCqDamCoreImplServletCollectionsServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_dam_batch_collections_properties.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_dam_batch_collections_limit.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

