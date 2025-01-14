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


#include "OAIOrgApacheFelixScrScrServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixScrScrServiceProperties::OAIOrgApacheFelixScrScrServiceProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheFelixScrScrServiceProperties::OAIOrgApacheFelixScrScrServiceProperties() {
    init();
}

OAIOrgApacheFelixScrScrServiceProperties::~OAIOrgApacheFelixScrScrServiceProperties() {
    this->cleanup();
}

void
OAIOrgApacheFelixScrScrServiceProperties::init() {
    ds_loglevel = new OAIConfigNodePropertyDropDown();
    m_ds_loglevel_isSet = false;
    ds_factory_enabled = new OAIConfigNodePropertyBoolean();
    m_ds_factory_enabled_isSet = false;
    ds_delayed_keep_instances = new OAIConfigNodePropertyBoolean();
    m_ds_delayed_keep_instances_isSet = false;
    ds_lock_timeout_milliseconds = new OAIConfigNodePropertyInteger();
    m_ds_lock_timeout_milliseconds_isSet = false;
    ds_stop_timeout_milliseconds = new OAIConfigNodePropertyInteger();
    m_ds_stop_timeout_milliseconds_isSet = false;
    ds_global_extender = new OAIConfigNodePropertyBoolean();
    m_ds_global_extender_isSet = false;
}

void
OAIOrgApacheFelixScrScrServiceProperties::cleanup() {
    if(ds_loglevel != nullptr) { 
        delete ds_loglevel;
    }
    if(ds_factory_enabled != nullptr) { 
        delete ds_factory_enabled;
    }
    if(ds_delayed_keep_instances != nullptr) { 
        delete ds_delayed_keep_instances;
    }
    if(ds_lock_timeout_milliseconds != nullptr) { 
        delete ds_lock_timeout_milliseconds;
    }
    if(ds_stop_timeout_milliseconds != nullptr) { 
        delete ds_stop_timeout_milliseconds;
    }
    if(ds_global_extender != nullptr) { 
        delete ds_global_extender;
    }
}

OAIOrgApacheFelixScrScrServiceProperties*
OAIOrgApacheFelixScrScrServiceProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheFelixScrScrServiceProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&ds_loglevel, pJson["ds.loglevel"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&ds_factory_enabled, pJson["ds.factory.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&ds_delayed_keep_instances, pJson["ds.delayed.keepInstances"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&ds_lock_timeout_milliseconds, pJson["ds.lock.timeout.milliseconds"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&ds_stop_timeout_milliseconds, pJson["ds.stop.timeout.milliseconds"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&ds_global_extender, pJson["ds.global.extender"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheFelixScrScrServiceProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixScrScrServiceProperties::asJsonObject() {
    QJsonObject obj;
    if((ds_loglevel != nullptr) && (ds_loglevel->isSet())){
        toJsonValue(QString("ds.loglevel"), ds_loglevel, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((ds_factory_enabled != nullptr) && (ds_factory_enabled->isSet())){
        toJsonValue(QString("ds.factory.enabled"), ds_factory_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((ds_delayed_keep_instances != nullptr) && (ds_delayed_keep_instances->isSet())){
        toJsonValue(QString("ds.delayed.keepInstances"), ds_delayed_keep_instances, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((ds_lock_timeout_milliseconds != nullptr) && (ds_lock_timeout_milliseconds->isSet())){
        toJsonValue(QString("ds.lock.timeout.milliseconds"), ds_lock_timeout_milliseconds, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((ds_stop_timeout_milliseconds != nullptr) && (ds_stop_timeout_milliseconds->isSet())){
        toJsonValue(QString("ds.stop.timeout.milliseconds"), ds_stop_timeout_milliseconds, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((ds_global_extender != nullptr) && (ds_global_extender->isSet())){
        toJsonValue(QString("ds.global.extender"), ds_global_extender, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyDropDown*
OAIOrgApacheFelixScrScrServiceProperties::getDsLoglevel() {
    return ds_loglevel;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsLoglevel(OAIConfigNodePropertyDropDown* ds_loglevel) {
    this->ds_loglevel = ds_loglevel;
    this->m_ds_loglevel_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheFelixScrScrServiceProperties::getDsFactoryEnabled() {
    return ds_factory_enabled;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsFactoryEnabled(OAIConfigNodePropertyBoolean* ds_factory_enabled) {
    this->ds_factory_enabled = ds_factory_enabled;
    this->m_ds_factory_enabled_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheFelixScrScrServiceProperties::getDsDelayedKeepInstances() {
    return ds_delayed_keep_instances;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsDelayedKeepInstances(OAIConfigNodePropertyBoolean* ds_delayed_keep_instances) {
    this->ds_delayed_keep_instances = ds_delayed_keep_instances;
    this->m_ds_delayed_keep_instances_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheFelixScrScrServiceProperties::getDsLockTimeoutMilliseconds() {
    return ds_lock_timeout_milliseconds;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsLockTimeoutMilliseconds(OAIConfigNodePropertyInteger* ds_lock_timeout_milliseconds) {
    this->ds_lock_timeout_milliseconds = ds_lock_timeout_milliseconds;
    this->m_ds_lock_timeout_milliseconds_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheFelixScrScrServiceProperties::getDsStopTimeoutMilliseconds() {
    return ds_stop_timeout_milliseconds;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsStopTimeoutMilliseconds(OAIConfigNodePropertyInteger* ds_stop_timeout_milliseconds) {
    this->ds_stop_timeout_milliseconds = ds_stop_timeout_milliseconds;
    this->m_ds_stop_timeout_milliseconds_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheFelixScrScrServiceProperties::getDsGlobalExtender() {
    return ds_global_extender;
}
void
OAIOrgApacheFelixScrScrServiceProperties::setDsGlobalExtender(OAIConfigNodePropertyBoolean* ds_global_extender) {
    this->ds_global_extender = ds_global_extender;
    this->m_ds_global_extender_isSet = true;
}


bool
OAIOrgApacheFelixScrScrServiceProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(ds_loglevel != nullptr && ds_loglevel->isSet()){ isObjectUpdated = true; break;}
        if(ds_factory_enabled != nullptr && ds_factory_enabled->isSet()){ isObjectUpdated = true; break;}
        if(ds_delayed_keep_instances != nullptr && ds_delayed_keep_instances->isSet()){ isObjectUpdated = true; break;}
        if(ds_lock_timeout_milliseconds != nullptr && ds_lock_timeout_milliseconds->isSet()){ isObjectUpdated = true; break;}
        if(ds_stop_timeout_milliseconds != nullptr && ds_stop_timeout_milliseconds->isSet()){ isObjectUpdated = true; break;}
        if(ds_global_extender != nullptr && ds_global_extender->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

