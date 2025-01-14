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


#include "OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties() {
    this->init();
}

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::~OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties() {
    
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::init() {
    m_name_isSet = false;
    m_title_isSet = false;
    m_details_isSet = false;
    m_enabled_isSet = false;
    m_service_name_isSet = false;
    m_log_level_isSet = false;
    m_allowed_roots_isSet = false;
    m_queue_processing_enabled_isSet = false;
    m_package_importer_endpoints_isSet = false;
    m_passive_queues_isSet = false;
    m_priority_queues_isSet = false;
    m_retry_strategy_isSet = false;
    m_retry_attempts_isSet = false;
    m_request_authorization_strategy_target_isSet = false;
    m_transport_secret_provider_target_isSet = false;
    m_package_builder_target_isSet = false;
    m_triggers_target_isSet = false;
    m_queue_provider_isSet = false;
    m_async_delivery_isSet = false;
    m_http_conn_timeout_isSet = false;
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(details, json[QString("details")]);
    
    ::OpenAPI::fromJsonValue(enabled, json[QString("enabled")]);
    
    ::OpenAPI::fromJsonValue(service_name, json[QString("serviceName")]);
    
    ::OpenAPI::fromJsonValue(log_level, json[QString("log.level")]);
    
    ::OpenAPI::fromJsonValue(allowed_roots, json[QString("allowed.roots")]);
    
    ::OpenAPI::fromJsonValue(queue_processing_enabled, json[QString("queue.processing.enabled")]);
    
    ::OpenAPI::fromJsonValue(package_importer_endpoints, json[QString("packageImporter.endpoints")]);
    
    ::OpenAPI::fromJsonValue(passive_queues, json[QString("passiveQueues")]);
    
    ::OpenAPI::fromJsonValue(priority_queues, json[QString("priorityQueues")]);
    
    ::OpenAPI::fromJsonValue(retry_strategy, json[QString("retry.strategy")]);
    
    ::OpenAPI::fromJsonValue(retry_attempts, json[QString("retry.attempts")]);
    
    ::OpenAPI::fromJsonValue(request_authorization_strategy_target, json[QString("requestAuthorizationStrategy.target")]);
    
    ::OpenAPI::fromJsonValue(transport_secret_provider_target, json[QString("transportSecretProvider.target")]);
    
    ::OpenAPI::fromJsonValue(package_builder_target, json[QString("packageBuilder.target")]);
    
    ::OpenAPI::fromJsonValue(triggers_target, json[QString("triggers.target")]);
    
    ::OpenAPI::fromJsonValue(queue_provider, json[QString("queue.provider")]);
    
    ::OpenAPI::fromJsonValue(async_delivery, json[QString("async.delivery")]);
    
    ::OpenAPI::fromJsonValue(http_conn_timeout, json[QString("http.conn.timeout")]);
    
}

QString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::asJsonObject() const {
    QJsonObject obj;
	if(name.isSet()){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(title.isSet()){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
	if(details.isSet()){
        obj.insert(QString("details"), ::OpenAPI::toJsonValue(details));
    }
	if(enabled.isSet()){
        obj.insert(QString("enabled"), ::OpenAPI::toJsonValue(enabled));
    }
	if(service_name.isSet()){
        obj.insert(QString("serviceName"), ::OpenAPI::toJsonValue(service_name));
    }
	if(log_level.isSet()){
        obj.insert(QString("log.level"), ::OpenAPI::toJsonValue(log_level));
    }
	if(allowed_roots.isSet()){
        obj.insert(QString("allowed.roots"), ::OpenAPI::toJsonValue(allowed_roots));
    }
	if(queue_processing_enabled.isSet()){
        obj.insert(QString("queue.processing.enabled"), ::OpenAPI::toJsonValue(queue_processing_enabled));
    }
	if(package_importer_endpoints.isSet()){
        obj.insert(QString("packageImporter.endpoints"), ::OpenAPI::toJsonValue(package_importer_endpoints));
    }
	if(passive_queues.isSet()){
        obj.insert(QString("passiveQueues"), ::OpenAPI::toJsonValue(passive_queues));
    }
	if(priority_queues.isSet()){
        obj.insert(QString("priorityQueues"), ::OpenAPI::toJsonValue(priority_queues));
    }
	if(retry_strategy.isSet()){
        obj.insert(QString("retry.strategy"), ::OpenAPI::toJsonValue(retry_strategy));
    }
	if(retry_attempts.isSet()){
        obj.insert(QString("retry.attempts"), ::OpenAPI::toJsonValue(retry_attempts));
    }
	if(request_authorization_strategy_target.isSet()){
        obj.insert(QString("requestAuthorizationStrategy.target"), ::OpenAPI::toJsonValue(request_authorization_strategy_target));
    }
	if(transport_secret_provider_target.isSet()){
        obj.insert(QString("transportSecretProvider.target"), ::OpenAPI::toJsonValue(transport_secret_provider_target));
    }
	if(package_builder_target.isSet()){
        obj.insert(QString("packageBuilder.target"), ::OpenAPI::toJsonValue(package_builder_target));
    }
	if(triggers_target.isSet()){
        obj.insert(QString("triggers.target"), ::OpenAPI::toJsonValue(triggers_target));
    }
	if(queue_provider.isSet()){
        obj.insert(QString("queue.provider"), ::OpenAPI::toJsonValue(queue_provider));
    }
	if(async_delivery.isSet()){
        obj.insert(QString("async.delivery"), ::OpenAPI::toJsonValue(async_delivery));
    }
	if(http_conn_timeout.isSet()){
        obj.insert(QString("http.conn.timeout"), ::OpenAPI::toJsonValue(http_conn_timeout));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getName() const {
    return name;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setName(const OAIConfigNodePropertyString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTitle() const {
    return title;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTitle(const OAIConfigNodePropertyString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getDetails() const {
    return details;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setDetails(const OAIConfigNodePropertyString &details) {
    this->details = details;
    this->m_details_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getEnabled() const {
    return enabled;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setEnabled(const OAIConfigNodePropertyBoolean &enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getServiceName() const {
    return service_name;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setServiceName(const OAIConfigNodePropertyString &service_name) {
    this->service_name = service_name;
    this->m_service_name_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getLogLevel() const {
    return log_level;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setLogLevel(const OAIConfigNodePropertyDropDown &log_level) {
    this->log_level = log_level;
    this->m_log_level_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAllowedRoots() const {
    return allowed_roots;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAllowedRoots(const OAIConfigNodePropertyArray &allowed_roots) {
    this->allowed_roots = allowed_roots;
    this->m_allowed_roots_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProcessingEnabled() const {
    return queue_processing_enabled;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProcessingEnabled(const OAIConfigNodePropertyBoolean &queue_processing_enabled) {
    this->queue_processing_enabled = queue_processing_enabled;
    this->m_queue_processing_enabled_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageImporterEndpoints() const {
    return package_importer_endpoints;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageImporterEndpoints(const OAIConfigNodePropertyArray &package_importer_endpoints) {
    this->package_importer_endpoints = package_importer_endpoints;
    this->m_package_importer_endpoints_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPassiveQueues() const {
    return passive_queues;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPassiveQueues(const OAIConfigNodePropertyArray &passive_queues) {
    this->passive_queues = passive_queues;
    this->m_passive_queues_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPriorityQueues() const {
    return priority_queues;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPriorityQueues(const OAIConfigNodePropertyArray &priority_queues) {
    this->priority_queues = priority_queues;
    this->m_priority_queues_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryStrategy() const {
    return retry_strategy;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryStrategy(const OAIConfigNodePropertyDropDown &retry_strategy) {
    this->retry_strategy = retry_strategy;
    this->m_retry_strategy_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryAttempts() const {
    return retry_attempts;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryAttempts(const OAIConfigNodePropertyInteger &retry_attempts) {
    this->retry_attempts = retry_attempts;
    this->m_retry_attempts_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRequestAuthorizationStrategyTarget() const {
    return request_authorization_strategy_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRequestAuthorizationStrategyTarget(const OAIConfigNodePropertyString &request_authorization_strategy_target) {
    this->request_authorization_strategy_target = request_authorization_strategy_target;
    this->m_request_authorization_strategy_target_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTransportSecretProviderTarget() const {
    return transport_secret_provider_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTransportSecretProviderTarget(const OAIConfigNodePropertyString &transport_secret_provider_target) {
    this->transport_secret_provider_target = transport_secret_provider_target;
    this->m_transport_secret_provider_target_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageBuilderTarget() const {
    return package_builder_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageBuilderTarget(const OAIConfigNodePropertyString &package_builder_target) {
    this->package_builder_target = package_builder_target;
    this->m_package_builder_target_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTriggersTarget() const {
    return triggers_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTriggersTarget(const OAIConfigNodePropertyString &triggers_target) {
    this->triggers_target = triggers_target;
    this->m_triggers_target_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProvider() const {
    return queue_provider;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProvider(const OAIConfigNodePropertyDropDown &queue_provider) {
    this->queue_provider = queue_provider;
    this->m_queue_provider_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAsyncDelivery() const {
    return async_delivery;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAsyncDelivery(const OAIConfigNodePropertyBoolean &async_delivery) {
    this->async_delivery = async_delivery;
    this->m_async_delivery_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getHttpConnTimeout() const {
    return http_conn_timeout;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setHttpConnTimeout(const OAIConfigNodePropertyInteger &http_conn_timeout) {
    this->http_conn_timeout = http_conn_timeout;
    this->m_http_conn_timeout_isSet = true;
}


bool
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(name.isSet()){ isObjectUpdated = true; break;}
    
        if(title.isSet()){ isObjectUpdated = true; break;}
    
        if(details.isSet()){ isObjectUpdated = true; break;}
    
        if(enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(service_name.isSet()){ isObjectUpdated = true; break;}
    
        if(log_level.isSet()){ isObjectUpdated = true; break;}
    
        if(allowed_roots.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_processing_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(package_importer_endpoints.isSet()){ isObjectUpdated = true; break;}
    
        if(passive_queues.isSet()){ isObjectUpdated = true; break;}
    
        if(priority_queues.isSet()){ isObjectUpdated = true; break;}
    
        if(retry_strategy.isSet()){ isObjectUpdated = true; break;}
    
        if(retry_attempts.isSet()){ isObjectUpdated = true; break;}
    
        if(request_authorization_strategy_target.isSet()){ isObjectUpdated = true; break;}
    
        if(transport_secret_provider_target.isSet()){ isObjectUpdated = true; break;}
    
        if(package_builder_target.isSet()){ isObjectUpdated = true; break;}
    
        if(triggers_target.isSet()){ isObjectUpdated = true; break;}
    
        if(queue_provider.isSet()){ isObjectUpdated = true; break;}
    
        if(async_delivery.isSet()){ isObjectUpdated = true; break;}
    
        if(http_conn_timeout.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

