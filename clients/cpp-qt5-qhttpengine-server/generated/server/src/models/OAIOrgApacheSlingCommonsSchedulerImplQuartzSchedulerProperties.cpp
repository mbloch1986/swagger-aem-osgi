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


#include "OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties() {
    this->init();
}

OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::~OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties() {
    
}

void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::init() {
    m_pool_name_isSet = false;
    m_allowed_pool_names_isSet = false;
    m_scheduler_useleaderforsingle_isSet = false;
    m_metrics_filters_isSet = false;
    m_slow_threshold_millis_isSet = false;
}

void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(pool_name, json[QString("poolName")]);
    
    ::OpenAPI::fromJsonValue(allowed_pool_names, json[QString("allowedPoolNames")]);
    
    ::OpenAPI::fromJsonValue(scheduler_useleaderforsingle, json[QString("scheduler.useleaderforsingle")]);
    
    ::OpenAPI::fromJsonValue(metrics_filters, json[QString("metrics.filters")]);
    
    ::OpenAPI::fromJsonValue(slow_threshold_millis, json[QString("slowThresholdMillis")]);
    
}

QString
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::asJsonObject() const {
    QJsonObject obj;
	if(pool_name.isSet()){
        obj.insert(QString("poolName"), ::OpenAPI::toJsonValue(pool_name));
    }
	if(allowed_pool_names.isSet()){
        obj.insert(QString("allowedPoolNames"), ::OpenAPI::toJsonValue(allowed_pool_names));
    }
	if(scheduler_useleaderforsingle.isSet()){
        obj.insert(QString("scheduler.useleaderforsingle"), ::OpenAPI::toJsonValue(scheduler_useleaderforsingle));
    }
	if(metrics_filters.isSet()){
        obj.insert(QString("metrics.filters"), ::OpenAPI::toJsonValue(metrics_filters));
    }
	if(slow_threshold_millis.isSet()){
        obj.insert(QString("slowThresholdMillis"), ::OpenAPI::toJsonValue(slow_threshold_millis));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::getPoolName() const {
    return pool_name;
}
void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::setPoolName(const OAIConfigNodePropertyString &pool_name) {
    this->pool_name = pool_name;
    this->m_pool_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::getAllowedPoolNames() const {
    return allowed_pool_names;
}
void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::setAllowedPoolNames(const OAIConfigNodePropertyArray &allowed_pool_names) {
    this->allowed_pool_names = allowed_pool_names;
    this->m_allowed_pool_names_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::getSchedulerUseleaderforsingle() const {
    return scheduler_useleaderforsingle;
}
void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::setSchedulerUseleaderforsingle(const OAIConfigNodePropertyBoolean &scheduler_useleaderforsingle) {
    this->scheduler_useleaderforsingle = scheduler_useleaderforsingle;
    this->m_scheduler_useleaderforsingle_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::getMetricsFilters() const {
    return metrics_filters;
}
void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::setMetricsFilters(const OAIConfigNodePropertyArray &metrics_filters) {
    this->metrics_filters = metrics_filters;
    this->m_metrics_filters_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::getSlowThresholdMillis() const {
    return slow_threshold_millis;
}
void
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::setSlowThresholdMillis(const OAIConfigNodePropertyInteger &slow_threshold_millis) {
    this->slow_threshold_millis = slow_threshold_millis;
    this->m_slow_threshold_millis_isSet = true;
}


bool
OAIOrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(pool_name.isSet()){ isObjectUpdated = true; break;}
    
        if(allowed_pool_names.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduler_useleaderforsingle.isSet()){ isObjectUpdated = true; break;}
    
        if(metrics_filters.isSet()){ isObjectUpdated = true; break;}
    
        if(slow_threshold_millis.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

