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


#include "OAIOrgApacheSlingEventJobsQueueConfigurationProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingEventJobsQueueConfigurationProperties::OAIOrgApacheSlingEventJobsQueueConfigurationProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingEventJobsQueueConfigurationProperties::OAIOrgApacheSlingEventJobsQueueConfigurationProperties() {
    this->init();
}

OAIOrgApacheSlingEventJobsQueueConfigurationProperties::~OAIOrgApacheSlingEventJobsQueueConfigurationProperties() {
    
}

void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::init() {
    m_queue_name_isSet = false;
    m_queue_topics_isSet = false;
    m_queue_type_isSet = false;
    m_queue_priority_isSet = false;
    m_queue_retries_isSet = false;
    m_queue_retrydelay_isSet = false;
    m_queue_maxparallel_isSet = false;
    m_queue_keep_jobs_isSet = false;
    m_queue_prefer_run_on_creation_instance_isSet = false;
    m_queue_thread_pool_size_isSet = false;
    m_service_ranking_isSet = false;
}

void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(queue_name, json[QString("queue.name")]);
    
    ::OpenAPI::fromJsonValue(queue_topics, json[QString("queue.topics")]);
    
    ::OpenAPI::fromJsonValue(queue_type, json[QString("queue.type")]);
    
    ::OpenAPI::fromJsonValue(queue_priority, json[QString("queue.priority")]);
    
    ::OpenAPI::fromJsonValue(queue_retries, json[QString("queue.retries")]);
    
    ::OpenAPI::fromJsonValue(queue_retrydelay, json[QString("queue.retrydelay")]);
    
    ::OpenAPI::fromJsonValue(queue_maxparallel, json[QString("queue.maxparallel")]);
    
    ::OpenAPI::fromJsonValue(queue_keep_jobs, json[QString("queue.keepJobs")]);
    
    ::OpenAPI::fromJsonValue(queue_prefer_run_on_creation_instance, json[QString("queue.preferRunOnCreationInstance")]);
    
    ::OpenAPI::fromJsonValue(queue_thread_pool_size, json[QString("queue.threadPoolSize")]);
    
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
}

QString
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::asJsonObject() const {
    QJsonObject obj;
	if(queue_name.isSet()){
        obj.insert(QString("queue.name"), ::OpenAPI::toJsonValue(queue_name));
    }
	if(queue_topics.isSet()){
        obj.insert(QString("queue.topics"), ::OpenAPI::toJsonValue(queue_topics));
    }
	if(queue_type.isSet()){
        obj.insert(QString("queue.type"), ::OpenAPI::toJsonValue(queue_type));
    }
	if(queue_priority.isSet()){
        obj.insert(QString("queue.priority"), ::OpenAPI::toJsonValue(queue_priority));
    }
	if(queue_retries.isSet()){
        obj.insert(QString("queue.retries"), ::OpenAPI::toJsonValue(queue_retries));
    }
	if(queue_retrydelay.isSet()){
        obj.insert(QString("queue.retrydelay"), ::OpenAPI::toJsonValue(queue_retrydelay));
    }
	if(queue_maxparallel.isSet()){
        obj.insert(QString("queue.maxparallel"), ::OpenAPI::toJsonValue(queue_maxparallel));
    }
	if(queue_keep_jobs.isSet()){
        obj.insert(QString("queue.keepJobs"), ::OpenAPI::toJsonValue(queue_keep_jobs));
    }
	if(queue_prefer_run_on_creation_instance.isSet()){
        obj.insert(QString("queue.preferRunOnCreationInstance"), ::OpenAPI::toJsonValue(queue_prefer_run_on_creation_instance));
    }
	if(queue_thread_pool_size.isSet()){
        obj.insert(QString("queue.threadPoolSize"), ::OpenAPI::toJsonValue(queue_thread_pool_size));
    }
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueName() const {
    return queue_name;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueName(const OAIConfigNodePropertyString &queue_name) {
    this->queue_name = queue_name;
    this->m_queue_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueTopics() const {
    return queue_topics;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueTopics(const OAIConfigNodePropertyArray &queue_topics) {
    this->queue_topics = queue_topics;
    this->m_queue_topics_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueType() const {
    return queue_type;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueType(const OAIConfigNodePropertyDropDown &queue_type) {
    this->queue_type = queue_type;
    this->m_queue_type_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueuePriority() const {
    return queue_priority;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueuePriority(const OAIConfigNodePropertyDropDown &queue_priority) {
    this->queue_priority = queue_priority;
    this->m_queue_priority_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueRetries() const {
    return queue_retries;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueRetries(const OAIConfigNodePropertyInteger &queue_retries) {
    this->queue_retries = queue_retries;
    this->m_queue_retries_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueRetrydelay() const {
    return queue_retrydelay;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueRetrydelay(const OAIConfigNodePropertyInteger &queue_retrydelay) {
    this->queue_retrydelay = queue_retrydelay;
    this->m_queue_retrydelay_isSet = true;
}

OAIConfigNodePropertyFloat
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueMaxparallel() const {
    return queue_maxparallel;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueMaxparallel(const OAIConfigNodePropertyFloat &queue_maxparallel) {
    this->queue_maxparallel = queue_maxparallel;
    this->m_queue_maxparallel_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueKeepJobs() const {
    return queue_keep_jobs;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueKeepJobs(const OAIConfigNodePropertyBoolean &queue_keep_jobs) {
    this->queue_keep_jobs = queue_keep_jobs;
    this->m_queue_keep_jobs_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueuePreferRunOnCreationInstance() const {
    return queue_prefer_run_on_creation_instance;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueuePreferRunOnCreationInstance(const OAIConfigNodePropertyBoolean &queue_prefer_run_on_creation_instance) {
    this->queue_prefer_run_on_creation_instance = queue_prefer_run_on_creation_instance;
    this->m_queue_prefer_run_on_creation_instance_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getQueueThreadPoolSize() const {
    return queue_thread_pool_size;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setQueueThreadPoolSize(const OAIConfigNodePropertyInteger &queue_thread_pool_size) {
    this->queue_thread_pool_size = queue_thread_pool_size;
    this->m_queue_thread_pool_size_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}


bool
OAIOrgApacheSlingEventJobsQueueConfigurationProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(queue_name.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_topics.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_type.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_priority.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_retries.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_retrydelay.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_maxparallel.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_keep_jobs.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_prefer_run_on_creation_instance.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_thread_pool_size.isSet()){ isObjectUpdated = true; break;}
    
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

