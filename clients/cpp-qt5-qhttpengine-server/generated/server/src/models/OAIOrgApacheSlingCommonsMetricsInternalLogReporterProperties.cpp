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


#include "OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties() {
    this->init();
}

OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::~OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties() {
    
}

void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::init() {
    m_period_isSet = false;
    m_time_unit_isSet = false;
    m_level_isSet = false;
    m_logger_name_isSet = false;
    m_prefix_isSet = false;
    m_pattern_isSet = false;
    m_registry_name_isSet = false;
}

void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(period, json[QString("period")]);
    
    ::OpenAPI::fromJsonValue(time_unit, json[QString("timeUnit")]);
    
    ::OpenAPI::fromJsonValue(level, json[QString("level")]);
    
    ::OpenAPI::fromJsonValue(logger_name, json[QString("loggerName")]);
    
    ::OpenAPI::fromJsonValue(prefix, json[QString("prefix")]);
    
    ::OpenAPI::fromJsonValue(pattern, json[QString("pattern")]);
    
    ::OpenAPI::fromJsonValue(registry_name, json[QString("registryName")]);
    
}

QString
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::asJsonObject() const {
    QJsonObject obj;
	if(period.isSet()){
        obj.insert(QString("period"), ::OpenAPI::toJsonValue(period));
    }
	if(time_unit.isSet()){
        obj.insert(QString("timeUnit"), ::OpenAPI::toJsonValue(time_unit));
    }
	if(level.isSet()){
        obj.insert(QString("level"), ::OpenAPI::toJsonValue(level));
    }
	if(logger_name.isSet()){
        obj.insert(QString("loggerName"), ::OpenAPI::toJsonValue(logger_name));
    }
	if(prefix.isSet()){
        obj.insert(QString("prefix"), ::OpenAPI::toJsonValue(prefix));
    }
	if(pattern.isSet()){
        obj.insert(QString("pattern"), ::OpenAPI::toJsonValue(pattern));
    }
	if(registry_name.isSet()){
        obj.insert(QString("registryName"), ::OpenAPI::toJsonValue(registry_name));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPeriod() const {
    return period;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPeriod(const OAIConfigNodePropertyInteger &period) {
    this->period = period;
    this->m_period_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getTimeUnit() const {
    return time_unit;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setTimeUnit(const OAIConfigNodePropertyDropDown &time_unit) {
    this->time_unit = time_unit;
    this->m_time_unit_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getLevel() const {
    return level;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setLevel(const OAIConfigNodePropertyDropDown &level) {
    this->level = level;
    this->m_level_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getLoggerName() const {
    return logger_name;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setLoggerName(const OAIConfigNodePropertyString &logger_name) {
    this->logger_name = logger_name;
    this->m_logger_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPrefix() const {
    return prefix;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPrefix(const OAIConfigNodePropertyString &prefix) {
    this->prefix = prefix;
    this->m_prefix_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getPattern() const {
    return pattern;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setPattern(const OAIConfigNodePropertyString &pattern) {
    this->pattern = pattern;
    this->m_pattern_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::getRegistryName() const {
    return registry_name;
}
void
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::setRegistryName(const OAIConfigNodePropertyString &registry_name) {
    this->registry_name = registry_name;
    this->m_registry_name_isSet = true;
}


bool
OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(period.isSet()){ isObjectUpdated = true; break;}
    
        if(time_unit.isSet()){ isObjectUpdated = true; break;}
    
        if(level.isSet()){ isObjectUpdated = true; break;}
    
        if(logger_name.isSet()){ isObjectUpdated = true; break;}
    
        if(prefix.isSet()){ isObjectUpdated = true; break;}
    
        if(pattern.isSet()){ isObjectUpdated = true; break;}
    
        if(registry_name.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
