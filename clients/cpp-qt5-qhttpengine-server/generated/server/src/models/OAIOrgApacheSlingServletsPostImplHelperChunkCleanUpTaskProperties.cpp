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


#include "OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties() {
    this->init();
}

OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::~OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties() {
    
}

void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::init() {
    m_scheduler_expression_isSet = false;
    m_scheduler_concurrent_isSet = false;
    m_chunk_cleanup_age_isSet = false;
}

void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_expression, json[QString("scheduler.expression")]);
    
    ::OpenAPI::fromJsonValue(scheduler_concurrent, json[QString("scheduler.concurrent")]);
    
    ::OpenAPI::fromJsonValue(chunk_cleanup_age, json[QString("chunk.cleanup.age")]);
    
}

QString
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_expression.isSet()){
        obj.insert(QString("scheduler.expression"), ::OpenAPI::toJsonValue(scheduler_expression));
    }
	if(scheduler_concurrent.isSet()){
        obj.insert(QString("scheduler.concurrent"), ::OpenAPI::toJsonValue(scheduler_concurrent));
    }
	if(chunk_cleanup_age.isSet()){
        obj.insert(QString("chunk.cleanup.age"), ::OpenAPI::toJsonValue(chunk_cleanup_age));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::getSchedulerExpression() const {
    return scheduler_expression;
}
void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::setSchedulerExpression(const OAIConfigNodePropertyString &scheduler_expression) {
    this->scheduler_expression = scheduler_expression;
    this->m_scheduler_expression_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::getSchedulerConcurrent() const {
    return scheduler_concurrent;
}
void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::setSchedulerConcurrent(const OAIConfigNodePropertyBoolean &scheduler_concurrent) {
    this->scheduler_concurrent = scheduler_concurrent;
    this->m_scheduler_concurrent_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::getChunkCleanupAge() const {
    return chunk_cleanup_age;
}
void
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::setChunkCleanupAge(const OAIConfigNodePropertyInteger &chunk_cleanup_age) {
    this->chunk_cleanup_age = chunk_cleanup_age;
    this->m_chunk_cleanup_age_isSet = true;
}


bool
OAIOrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_expression.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduler_concurrent.isSet()){ isObjectUpdated = true; break;}
    
        if(chunk_cleanup_age.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

