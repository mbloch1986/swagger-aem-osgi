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


#include "OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties() {
    this->init();
}

OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::~OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties() {
    
}

void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::init() {
    m_scheduler_period_isSet = false;
    m_scheduler_run_on_isSet = false;
    m_granite_threaddump_enabled_isSet = false;
    m_granite_threaddump_dumps_per_file_isSet = false;
    m_granite_threaddump_enable_gzip_compression_isSet = false;
    m_granite_threaddump_enable_directories_compression_isSet = false;
    m_granite_threaddump_enable_j_stack_isSet = false;
    m_granite_threaddump_max_backup_days_isSet = false;
    m_granite_threaddump_backup_clean_trigger_isSet = false;
}

void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_period, json[QString("scheduler.period")]);
    
    ::OpenAPI::fromJsonValue(scheduler_run_on, json[QString("scheduler.runOn")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_enabled, json[QString("granite.threaddump.enabled")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_dumps_per_file, json[QString("granite.threaddump.dumpsPerFile")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_enable_gzip_compression, json[QString("granite.threaddump.enableGzipCompression")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_enable_directories_compression, json[QString("granite.threaddump.enableDirectoriesCompression")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_enable_j_stack, json[QString("granite.threaddump.enableJStack")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_max_backup_days, json[QString("granite.threaddump.maxBackupDays")]);
    
    ::OpenAPI::fromJsonValue(granite_threaddump_backup_clean_trigger, json[QString("granite.threaddump.backupCleanTrigger")]);
    
}

QString
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_period.isSet()){
        obj.insert(QString("scheduler.period"), ::OpenAPI::toJsonValue(scheduler_period));
    }
	if(scheduler_run_on.isSet()){
        obj.insert(QString("scheduler.runOn"), ::OpenAPI::toJsonValue(scheduler_run_on));
    }
	if(granite_threaddump_enabled.isSet()){
        obj.insert(QString("granite.threaddump.enabled"), ::OpenAPI::toJsonValue(granite_threaddump_enabled));
    }
	if(granite_threaddump_dumps_per_file.isSet()){
        obj.insert(QString("granite.threaddump.dumpsPerFile"), ::OpenAPI::toJsonValue(granite_threaddump_dumps_per_file));
    }
	if(granite_threaddump_enable_gzip_compression.isSet()){
        obj.insert(QString("granite.threaddump.enableGzipCompression"), ::OpenAPI::toJsonValue(granite_threaddump_enable_gzip_compression));
    }
	if(granite_threaddump_enable_directories_compression.isSet()){
        obj.insert(QString("granite.threaddump.enableDirectoriesCompression"), ::OpenAPI::toJsonValue(granite_threaddump_enable_directories_compression));
    }
	if(granite_threaddump_enable_j_stack.isSet()){
        obj.insert(QString("granite.threaddump.enableJStack"), ::OpenAPI::toJsonValue(granite_threaddump_enable_j_stack));
    }
	if(granite_threaddump_max_backup_days.isSet()){
        obj.insert(QString("granite.threaddump.maxBackupDays"), ::OpenAPI::toJsonValue(granite_threaddump_max_backup_days));
    }
	if(granite_threaddump_backup_clean_trigger.isSet()){
        obj.insert(QString("granite.threaddump.backupCleanTrigger"), ::OpenAPI::toJsonValue(granite_threaddump_backup_clean_trigger));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getSchedulerPeriod() const {
    return scheduler_period;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setSchedulerPeriod(const OAIConfigNodePropertyInteger &scheduler_period) {
    this->scheduler_period = scheduler_period;
    this->m_scheduler_period_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getSchedulerRunOn() const {
    return scheduler_run_on;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setSchedulerRunOn(const OAIConfigNodePropertyDropDown &scheduler_run_on) {
    this->scheduler_run_on = scheduler_run_on;
    this->m_scheduler_run_on_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpEnabled() const {
    return granite_threaddump_enabled;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpEnabled(const OAIConfigNodePropertyBoolean &granite_threaddump_enabled) {
    this->granite_threaddump_enabled = granite_threaddump_enabled;
    this->m_granite_threaddump_enabled_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpDumpsPerFile() const {
    return granite_threaddump_dumps_per_file;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpDumpsPerFile(const OAIConfigNodePropertyInteger &granite_threaddump_dumps_per_file) {
    this->granite_threaddump_dumps_per_file = granite_threaddump_dumps_per_file;
    this->m_granite_threaddump_dumps_per_file_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpEnableGzipCompression() const {
    return granite_threaddump_enable_gzip_compression;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpEnableGzipCompression(const OAIConfigNodePropertyBoolean &granite_threaddump_enable_gzip_compression) {
    this->granite_threaddump_enable_gzip_compression = granite_threaddump_enable_gzip_compression;
    this->m_granite_threaddump_enable_gzip_compression_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpEnableDirectoriesCompression() const {
    return granite_threaddump_enable_directories_compression;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpEnableDirectoriesCompression(const OAIConfigNodePropertyBoolean &granite_threaddump_enable_directories_compression) {
    this->granite_threaddump_enable_directories_compression = granite_threaddump_enable_directories_compression;
    this->m_granite_threaddump_enable_directories_compression_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpEnableJStack() const {
    return granite_threaddump_enable_j_stack;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpEnableJStack(const OAIConfigNodePropertyBoolean &granite_threaddump_enable_j_stack) {
    this->granite_threaddump_enable_j_stack = granite_threaddump_enable_j_stack;
    this->m_granite_threaddump_enable_j_stack_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpMaxBackupDays() const {
    return granite_threaddump_max_backup_days;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpMaxBackupDays(const OAIConfigNodePropertyInteger &granite_threaddump_max_backup_days) {
    this->granite_threaddump_max_backup_days = granite_threaddump_max_backup_days;
    this->m_granite_threaddump_max_backup_days_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::getGraniteThreaddumpBackupCleanTrigger() const {
    return granite_threaddump_backup_clean_trigger;
}
void
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::setGraniteThreaddumpBackupCleanTrigger(const OAIConfigNodePropertyString &granite_threaddump_backup_clean_trigger) {
    this->granite_threaddump_backup_clean_trigger = granite_threaddump_backup_clean_trigger;
    this->m_granite_threaddump_backup_clean_trigger_isSet = true;
}


bool
OAIComAdobeGraniteThreaddumpThreadDumpCollectorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_period.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduler_run_on.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_dumps_per_file.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_enable_gzip_compression.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_enable_directories_compression.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_enable_j_stack.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_max_backup_days.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_threaddump_backup_clean_trigger.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

