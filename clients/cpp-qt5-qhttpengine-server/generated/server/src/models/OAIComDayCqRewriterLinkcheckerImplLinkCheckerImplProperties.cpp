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


#include "OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties() {
    this->init();
}

OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::~OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties() {
    
}

void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::init() {
    m_scheduler_period_isSet = false;
    m_scheduler_concurrent_isSet = false;
    m_service_bad_link_tolerance_interval_isSet = false;
    m_service_check_override_patterns_isSet = false;
    m_service_cache_broken_internal_links_isSet = false;
    m_service_special_link_prefix_isSet = false;
    m_service_special_link_patterns_isSet = false;
}

void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_period, json[QString("scheduler.period")]);
    
    ::OpenAPI::fromJsonValue(scheduler_concurrent, json[QString("scheduler.concurrent")]);
    
    ::OpenAPI::fromJsonValue(service_bad_link_tolerance_interval, json[QString("service.bad_link_tolerance_interval")]);
    
    ::OpenAPI::fromJsonValue(service_check_override_patterns, json[QString("service.check_override_patterns")]);
    
    ::OpenAPI::fromJsonValue(service_cache_broken_internal_links, json[QString("service.cache_broken_internal_links")]);
    
    ::OpenAPI::fromJsonValue(service_special_link_prefix, json[QString("service.special_link_prefix")]);
    
    ::OpenAPI::fromJsonValue(service_special_link_patterns, json[QString("service.special_link_patterns")]);
    
}

QString
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_period.isSet()){
        obj.insert(QString("scheduler.period"), ::OpenAPI::toJsonValue(scheduler_period));
    }
	if(scheduler_concurrent.isSet()){
        obj.insert(QString("scheduler.concurrent"), ::OpenAPI::toJsonValue(scheduler_concurrent));
    }
	if(service_bad_link_tolerance_interval.isSet()){
        obj.insert(QString("service.bad_link_tolerance_interval"), ::OpenAPI::toJsonValue(service_bad_link_tolerance_interval));
    }
	if(service_check_override_patterns.isSet()){
        obj.insert(QString("service.check_override_patterns"), ::OpenAPI::toJsonValue(service_check_override_patterns));
    }
	if(service_cache_broken_internal_links.isSet()){
        obj.insert(QString("service.cache_broken_internal_links"), ::OpenAPI::toJsonValue(service_cache_broken_internal_links));
    }
	if(service_special_link_prefix.isSet()){
        obj.insert(QString("service.special_link_prefix"), ::OpenAPI::toJsonValue(service_special_link_prefix));
    }
	if(service_special_link_patterns.isSet()){
        obj.insert(QString("service.special_link_patterns"), ::OpenAPI::toJsonValue(service_special_link_patterns));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getSchedulerPeriod() const {
    return scheduler_period;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setSchedulerPeriod(const OAIConfigNodePropertyInteger &scheduler_period) {
    this->scheduler_period = scheduler_period;
    this->m_scheduler_period_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getSchedulerConcurrent() const {
    return scheduler_concurrent;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setSchedulerConcurrent(const OAIConfigNodePropertyBoolean &scheduler_concurrent) {
    this->scheduler_concurrent = scheduler_concurrent;
    this->m_scheduler_concurrent_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getServiceBadLinkToleranceInterval() const {
    return service_bad_link_tolerance_interval;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setServiceBadLinkToleranceInterval(const OAIConfigNodePropertyInteger &service_bad_link_tolerance_interval) {
    this->service_bad_link_tolerance_interval = service_bad_link_tolerance_interval;
    this->m_service_bad_link_tolerance_interval_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getServiceCheckOverridePatterns() const {
    return service_check_override_patterns;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setServiceCheckOverridePatterns(const OAIConfigNodePropertyArray &service_check_override_patterns) {
    this->service_check_override_patterns = service_check_override_patterns;
    this->m_service_check_override_patterns_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getServiceCacheBrokenInternalLinks() const {
    return service_cache_broken_internal_links;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setServiceCacheBrokenInternalLinks(const OAIConfigNodePropertyBoolean &service_cache_broken_internal_links) {
    this->service_cache_broken_internal_links = service_cache_broken_internal_links;
    this->m_service_cache_broken_internal_links_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getServiceSpecialLinkPrefix() const {
    return service_special_link_prefix;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setServiceSpecialLinkPrefix(const OAIConfigNodePropertyArray &service_special_link_prefix) {
    this->service_special_link_prefix = service_special_link_prefix;
    this->m_service_special_link_prefix_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::getServiceSpecialLinkPatterns() const {
    return service_special_link_patterns;
}
void
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::setServiceSpecialLinkPatterns(const OAIConfigNodePropertyArray &service_special_link_patterns) {
    this->service_special_link_patterns = service_special_link_patterns;
    this->m_service_special_link_patterns_isSet = true;
}


bool
OAIComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_period.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduler_concurrent.isSet()){ isObjectUpdated = true; break;}
    
        if(service_bad_link_tolerance_interval.isSet()){ isObjectUpdated = true; break;}
    
        if(service_check_override_patterns.isSet()){ isObjectUpdated = true; break;}
    
        if(service_cache_broken_internal_links.isSet()){ isObjectUpdated = true; break;}
    
        if(service_special_link_prefix.isSet()){ isObjectUpdated = true; break;}
    
        if(service_special_link_patterns.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

