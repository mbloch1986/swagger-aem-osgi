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
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties() {
    init();
}

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::~OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::init() {
    name = new OAIConfigNodePropertyString();
    m_name_isSet = false;
    title = new OAIConfigNodePropertyString();
    m_title_isSet = false;
    details = new OAIConfigNodePropertyString();
    m_details_isSet = false;
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
    service_name = new OAIConfigNodePropertyString();
    m_service_name_isSet = false;
    log_level = new OAIConfigNodePropertyDropDown();
    m_log_level_isSet = false;
    allowed_roots = new OAIConfigNodePropertyArray();
    m_allowed_roots_isSet = false;
    queue_processing_enabled = new OAIConfigNodePropertyBoolean();
    m_queue_processing_enabled_isSet = false;
    package_importer_endpoints = new OAIConfigNodePropertyArray();
    m_package_importer_endpoints_isSet = false;
    passive_queues = new OAIConfigNodePropertyArray();
    m_passive_queues_isSet = false;
    priority_queues = new OAIConfigNodePropertyArray();
    m_priority_queues_isSet = false;
    retry_strategy = new OAIConfigNodePropertyDropDown();
    m_retry_strategy_isSet = false;
    retry_attempts = new OAIConfigNodePropertyInteger();
    m_retry_attempts_isSet = false;
    request_authorization_strategy_target = new OAIConfigNodePropertyString();
    m_request_authorization_strategy_target_isSet = false;
    transport_secret_provider_target = new OAIConfigNodePropertyString();
    m_transport_secret_provider_target_isSet = false;
    package_builder_target = new OAIConfigNodePropertyString();
    m_package_builder_target_isSet = false;
    triggers_target = new OAIConfigNodePropertyString();
    m_triggers_target_isSet = false;
    queue_provider = new OAIConfigNodePropertyDropDown();
    m_queue_provider_isSet = false;
    async_delivery = new OAIConfigNodePropertyBoolean();
    m_async_delivery_isSet = false;
    http_conn_timeout = new OAIConfigNodePropertyInteger();
    m_http_conn_timeout_isSet = false;
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(title != nullptr) { 
        delete title;
    }
    if(details != nullptr) { 
        delete details;
    }
    if(enabled != nullptr) { 
        delete enabled;
    }
    if(service_name != nullptr) { 
        delete service_name;
    }
    if(log_level != nullptr) { 
        delete log_level;
    }
    if(allowed_roots != nullptr) { 
        delete allowed_roots;
    }
    if(queue_processing_enabled != nullptr) { 
        delete queue_processing_enabled;
    }
    if(package_importer_endpoints != nullptr) { 
        delete package_importer_endpoints;
    }
    if(passive_queues != nullptr) { 
        delete passive_queues;
    }
    if(priority_queues != nullptr) { 
        delete priority_queues;
    }
    if(retry_strategy != nullptr) { 
        delete retry_strategy;
    }
    if(retry_attempts != nullptr) { 
        delete retry_attempts;
    }
    if(request_authorization_strategy_target != nullptr) { 
        delete request_authorization_strategy_target;
    }
    if(transport_secret_provider_target != nullptr) { 
        delete transport_secret_provider_target;
    }
    if(package_builder_target != nullptr) { 
        delete package_builder_target;
    }
    if(triggers_target != nullptr) { 
        delete triggers_target;
    }
    if(queue_provider != nullptr) { 
        delete queue_provider;
    }
    if(async_delivery != nullptr) { 
        delete async_delivery;
    }
    if(http_conn_timeout != nullptr) { 
        delete http_conn_timeout;
    }
}

OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&details, pJson["details"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&service_name, pJson["serviceName"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&log_level, pJson["log.level"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&allowed_roots, pJson["allowed.roots"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&queue_processing_enabled, pJson["queue.processing.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&package_importer_endpoints, pJson["packageImporter.endpoints"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&passive_queues, pJson["passiveQueues"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&priority_queues, pJson["priorityQueues"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&retry_strategy, pJson["retry.strategy"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&retry_attempts, pJson["retry.attempts"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&request_authorization_strategy_target, pJson["requestAuthorizationStrategy.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&transport_secret_provider_target, pJson["transportSecretProvider.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&package_builder_target, pJson["packageBuilder.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&triggers_target, pJson["triggers.target"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&queue_provider, pJson["queue.provider"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&async_delivery, pJson["async.delivery"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&http_conn_timeout, pJson["http.conn.timeout"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::asJsonObject() {
    QJsonObject obj;
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((title != nullptr) && (title->isSet())){
        toJsonValue(QString("title"), title, obj, QString("OAIConfigNodePropertyString"));
    }
    if((details != nullptr) && (details->isSet())){
        toJsonValue(QString("details"), details, obj, QString("OAIConfigNodePropertyString"));
    }
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((service_name != nullptr) && (service_name->isSet())){
        toJsonValue(QString("serviceName"), service_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((log_level != nullptr) && (log_level->isSet())){
        toJsonValue(QString("log.level"), log_level, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((allowed_roots != nullptr) && (allowed_roots->isSet())){
        toJsonValue(QString("allowed.roots"), allowed_roots, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((queue_processing_enabled != nullptr) && (queue_processing_enabled->isSet())){
        toJsonValue(QString("queue.processing.enabled"), queue_processing_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((package_importer_endpoints != nullptr) && (package_importer_endpoints->isSet())){
        toJsonValue(QString("packageImporter.endpoints"), package_importer_endpoints, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((passive_queues != nullptr) && (passive_queues->isSet())){
        toJsonValue(QString("passiveQueues"), passive_queues, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((priority_queues != nullptr) && (priority_queues->isSet())){
        toJsonValue(QString("priorityQueues"), priority_queues, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((retry_strategy != nullptr) && (retry_strategy->isSet())){
        toJsonValue(QString("retry.strategy"), retry_strategy, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((retry_attempts != nullptr) && (retry_attempts->isSet())){
        toJsonValue(QString("retry.attempts"), retry_attempts, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((request_authorization_strategy_target != nullptr) && (request_authorization_strategy_target->isSet())){
        toJsonValue(QString("requestAuthorizationStrategy.target"), request_authorization_strategy_target, obj, QString("OAIConfigNodePropertyString"));
    }
    if((transport_secret_provider_target != nullptr) && (transport_secret_provider_target->isSet())){
        toJsonValue(QString("transportSecretProvider.target"), transport_secret_provider_target, obj, QString("OAIConfigNodePropertyString"));
    }
    if((package_builder_target != nullptr) && (package_builder_target->isSet())){
        toJsonValue(QString("packageBuilder.target"), package_builder_target, obj, QString("OAIConfigNodePropertyString"));
    }
    if((triggers_target != nullptr) && (triggers_target->isSet())){
        toJsonValue(QString("triggers.target"), triggers_target, obj, QString("OAIConfigNodePropertyString"));
    }
    if((queue_provider != nullptr) && (queue_provider->isSet())){
        toJsonValue(QString("queue.provider"), queue_provider, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((async_delivery != nullptr) && (async_delivery->isSet())){
        toJsonValue(QString("async.delivery"), async_delivery, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((http_conn_timeout != nullptr) && (http_conn_timeout->isSet())){
        toJsonValue(QString("http.conn.timeout"), http_conn_timeout, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getName() {
    return name;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setName(OAIConfigNodePropertyString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTitle() {
    return title;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTitle(OAIConfigNodePropertyString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getDetails() {
    return details;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setDetails(OAIConfigNodePropertyString* details) {
    this->details = details;
    this->m_details_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getEnabled() {
    return enabled;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getServiceName() {
    return service_name;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setServiceName(OAIConfigNodePropertyString* service_name) {
    this->service_name = service_name;
    this->m_service_name_isSet = true;
}

OAIConfigNodePropertyDropDown*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getLogLevel() {
    return log_level;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setLogLevel(OAIConfigNodePropertyDropDown* log_level) {
    this->log_level = log_level;
    this->m_log_level_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAllowedRoots() {
    return allowed_roots;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAllowedRoots(OAIConfigNodePropertyArray* allowed_roots) {
    this->allowed_roots = allowed_roots;
    this->m_allowed_roots_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProcessingEnabled() {
    return queue_processing_enabled;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProcessingEnabled(OAIConfigNodePropertyBoolean* queue_processing_enabled) {
    this->queue_processing_enabled = queue_processing_enabled;
    this->m_queue_processing_enabled_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageImporterEndpoints() {
    return package_importer_endpoints;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageImporterEndpoints(OAIConfigNodePropertyArray* package_importer_endpoints) {
    this->package_importer_endpoints = package_importer_endpoints;
    this->m_package_importer_endpoints_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPassiveQueues() {
    return passive_queues;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPassiveQueues(OAIConfigNodePropertyArray* passive_queues) {
    this->passive_queues = passive_queues;
    this->m_passive_queues_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPriorityQueues() {
    return priority_queues;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPriorityQueues(OAIConfigNodePropertyArray* priority_queues) {
    this->priority_queues = priority_queues;
    this->m_priority_queues_isSet = true;
}

OAIConfigNodePropertyDropDown*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryStrategy() {
    return retry_strategy;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryStrategy(OAIConfigNodePropertyDropDown* retry_strategy) {
    this->retry_strategy = retry_strategy;
    this->m_retry_strategy_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRetryAttempts() {
    return retry_attempts;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRetryAttempts(OAIConfigNodePropertyInteger* retry_attempts) {
    this->retry_attempts = retry_attempts;
    this->m_retry_attempts_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getRequestAuthorizationStrategyTarget() {
    return request_authorization_strategy_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setRequestAuthorizationStrategyTarget(OAIConfigNodePropertyString* request_authorization_strategy_target) {
    this->request_authorization_strategy_target = request_authorization_strategy_target;
    this->m_request_authorization_strategy_target_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTransportSecretProviderTarget() {
    return transport_secret_provider_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTransportSecretProviderTarget(OAIConfigNodePropertyString* transport_secret_provider_target) {
    this->transport_secret_provider_target = transport_secret_provider_target;
    this->m_transport_secret_provider_target_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getPackageBuilderTarget() {
    return package_builder_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setPackageBuilderTarget(OAIConfigNodePropertyString* package_builder_target) {
    this->package_builder_target = package_builder_target;
    this->m_package_builder_target_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getTriggersTarget() {
    return triggers_target;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setTriggersTarget(OAIConfigNodePropertyString* triggers_target) {
    this->triggers_target = triggers_target;
    this->m_triggers_target_isSet = true;
}

OAIConfigNodePropertyDropDown*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getQueueProvider() {
    return queue_provider;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setQueueProvider(OAIConfigNodePropertyDropDown* queue_provider) {
    this->queue_provider = queue_provider;
    this->m_queue_provider_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getAsyncDelivery() {
    return async_delivery;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setAsyncDelivery(OAIConfigNodePropertyBoolean* async_delivery) {
    this->async_delivery = async_delivery;
    this->m_async_delivery_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::getHttpConnTimeout() {
    return http_conn_timeout;
}
void
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::setHttpConnTimeout(OAIConfigNodePropertyInteger* http_conn_timeout) {
    this->http_conn_timeout = http_conn_timeout;
    this->m_http_conn_timeout_isSet = true;
}


bool
OAIOrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(title != nullptr && title->isSet()){ isObjectUpdated = true; break;}
        if(details != nullptr && details->isSet()){ isObjectUpdated = true; break;}
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
        if(service_name != nullptr && service_name->isSet()){ isObjectUpdated = true; break;}
        if(log_level != nullptr && log_level->isSet()){ isObjectUpdated = true; break;}
        if(allowed_roots != nullptr && allowed_roots->isSet()){ isObjectUpdated = true; break;}
        if(queue_processing_enabled != nullptr && queue_processing_enabled->isSet()){ isObjectUpdated = true; break;}
        if(package_importer_endpoints != nullptr && package_importer_endpoints->isSet()){ isObjectUpdated = true; break;}
        if(passive_queues != nullptr && passive_queues->isSet()){ isObjectUpdated = true; break;}
        if(priority_queues != nullptr && priority_queues->isSet()){ isObjectUpdated = true; break;}
        if(retry_strategy != nullptr && retry_strategy->isSet()){ isObjectUpdated = true; break;}
        if(retry_attempts != nullptr && retry_attempts->isSet()){ isObjectUpdated = true; break;}
        if(request_authorization_strategy_target != nullptr && request_authorization_strategy_target->isSet()){ isObjectUpdated = true; break;}
        if(transport_secret_provider_target != nullptr && transport_secret_provider_target->isSet()){ isObjectUpdated = true; break;}
        if(package_builder_target != nullptr && package_builder_target->isSet()){ isObjectUpdated = true; break;}
        if(triggers_target != nullptr && triggers_target->isSet()){ isObjectUpdated = true; break;}
        if(queue_provider != nullptr && queue_provider->isSet()){ isObjectUpdated = true; break;}
        if(async_delivery != nullptr && async_delivery->isSet()){ isObjectUpdated = true; break;}
        if(http_conn_timeout != nullptr && http_conn_timeout->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
