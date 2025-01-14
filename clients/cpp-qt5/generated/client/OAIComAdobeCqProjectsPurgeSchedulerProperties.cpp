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


#include "OAIComAdobeCqProjectsPurgeSchedulerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqProjectsPurgeSchedulerProperties::OAIComAdobeCqProjectsPurgeSchedulerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqProjectsPurgeSchedulerProperties::OAIComAdobeCqProjectsPurgeSchedulerProperties() {
    init();
}

OAIComAdobeCqProjectsPurgeSchedulerProperties::~OAIComAdobeCqProjectsPurgeSchedulerProperties() {
    this->cleanup();
}

void
OAIComAdobeCqProjectsPurgeSchedulerProperties::init() {
    scheduledpurge_name = new OAIConfigNodePropertyString();
    m_scheduledpurge_name_isSet = false;
    scheduledpurge_purge_active = new OAIConfigNodePropertyBoolean();
    m_scheduledpurge_purge_active_isSet = false;
    scheduledpurge_templates = new OAIConfigNodePropertyArray();
    m_scheduledpurge_templates_isSet = false;
    scheduledpurge_purge_groups = new OAIConfigNodePropertyBoolean();
    m_scheduledpurge_purge_groups_isSet = false;
    scheduledpurge_purge_assets = new OAIConfigNodePropertyBoolean();
    m_scheduledpurge_purge_assets_isSet = false;
    scheduledpurge_terminate_running_workflows = new OAIConfigNodePropertyBoolean();
    m_scheduledpurge_terminate_running_workflows_isSet = false;
    scheduledpurge_daysold = new OAIConfigNodePropertyInteger();
    m_scheduledpurge_daysold_isSet = false;
    scheduledpurge_save_threshold = new OAIConfigNodePropertyInteger();
    m_scheduledpurge_save_threshold_isSet = false;
}

void
OAIComAdobeCqProjectsPurgeSchedulerProperties::cleanup() {
    if(scheduledpurge_name != nullptr) { 
        delete scheduledpurge_name;
    }
    if(scheduledpurge_purge_active != nullptr) { 
        delete scheduledpurge_purge_active;
    }
    if(scheduledpurge_templates != nullptr) { 
        delete scheduledpurge_templates;
    }
    if(scheduledpurge_purge_groups != nullptr) { 
        delete scheduledpurge_purge_groups;
    }
    if(scheduledpurge_purge_assets != nullptr) { 
        delete scheduledpurge_purge_assets;
    }
    if(scheduledpurge_terminate_running_workflows != nullptr) { 
        delete scheduledpurge_terminate_running_workflows;
    }
    if(scheduledpurge_daysold != nullptr) { 
        delete scheduledpurge_daysold;
    }
    if(scheduledpurge_save_threshold != nullptr) { 
        delete scheduledpurge_save_threshold;
    }
}

OAIComAdobeCqProjectsPurgeSchedulerProperties*
OAIComAdobeCqProjectsPurgeSchedulerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqProjectsPurgeSchedulerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&scheduledpurge_name, pJson["scheduledpurge.name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scheduledpurge_purge_active, pJson["scheduledpurge.purgeActive"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&scheduledpurge_templates, pJson["scheduledpurge.templates"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&scheduledpurge_purge_groups, pJson["scheduledpurge.purgeGroups"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&scheduledpurge_purge_assets, pJson["scheduledpurge.purgeAssets"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&scheduledpurge_terminate_running_workflows, pJson["scheduledpurge.terminateRunningWorkflows"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&scheduledpurge_daysold, pJson["scheduledpurge.daysold"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&scheduledpurge_save_threshold, pJson["scheduledpurge.saveThreshold"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqProjectsPurgeSchedulerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqProjectsPurgeSchedulerProperties::asJsonObject() {
    QJsonObject obj;
    if((scheduledpurge_name != nullptr) && (scheduledpurge_name->isSet())){
        toJsonValue(QString("scheduledpurge.name"), scheduledpurge_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scheduledpurge_purge_active != nullptr) && (scheduledpurge_purge_active->isSet())){
        toJsonValue(QString("scheduledpurge.purgeActive"), scheduledpurge_purge_active, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((scheduledpurge_templates != nullptr) && (scheduledpurge_templates->isSet())){
        toJsonValue(QString("scheduledpurge.templates"), scheduledpurge_templates, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((scheduledpurge_purge_groups != nullptr) && (scheduledpurge_purge_groups->isSet())){
        toJsonValue(QString("scheduledpurge.purgeGroups"), scheduledpurge_purge_groups, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((scheduledpurge_purge_assets != nullptr) && (scheduledpurge_purge_assets->isSet())){
        toJsonValue(QString("scheduledpurge.purgeAssets"), scheduledpurge_purge_assets, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((scheduledpurge_terminate_running_workflows != nullptr) && (scheduledpurge_terminate_running_workflows->isSet())){
        toJsonValue(QString("scheduledpurge.terminateRunningWorkflows"), scheduledpurge_terminate_running_workflows, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((scheduledpurge_daysold != nullptr) && (scheduledpurge_daysold->isSet())){
        toJsonValue(QString("scheduledpurge.daysold"), scheduledpurge_daysold, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((scheduledpurge_save_threshold != nullptr) && (scheduledpurge_save_threshold->isSet())){
        toJsonValue(QString("scheduledpurge.saveThreshold"), scheduledpurge_save_threshold, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgeName() {
    return scheduledpurge_name;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgeName(OAIConfigNodePropertyString* scheduledpurge_name) {
    this->scheduledpurge_name = scheduledpurge_name;
    this->m_scheduledpurge_name_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgePurgeActive() {
    return scheduledpurge_purge_active;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgePurgeActive(OAIConfigNodePropertyBoolean* scheduledpurge_purge_active) {
    this->scheduledpurge_purge_active = scheduledpurge_purge_active;
    this->m_scheduledpurge_purge_active_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgeTemplates() {
    return scheduledpurge_templates;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgeTemplates(OAIConfigNodePropertyArray* scheduledpurge_templates) {
    this->scheduledpurge_templates = scheduledpurge_templates;
    this->m_scheduledpurge_templates_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgePurgeGroups() {
    return scheduledpurge_purge_groups;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgePurgeGroups(OAIConfigNodePropertyBoolean* scheduledpurge_purge_groups) {
    this->scheduledpurge_purge_groups = scheduledpurge_purge_groups;
    this->m_scheduledpurge_purge_groups_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgePurgeAssets() {
    return scheduledpurge_purge_assets;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgePurgeAssets(OAIConfigNodePropertyBoolean* scheduledpurge_purge_assets) {
    this->scheduledpurge_purge_assets = scheduledpurge_purge_assets;
    this->m_scheduledpurge_purge_assets_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgeTerminateRunningWorkflows() {
    return scheduledpurge_terminate_running_workflows;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgeTerminateRunningWorkflows(OAIConfigNodePropertyBoolean* scheduledpurge_terminate_running_workflows) {
    this->scheduledpurge_terminate_running_workflows = scheduledpurge_terminate_running_workflows;
    this->m_scheduledpurge_terminate_running_workflows_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgeDaysold() {
    return scheduledpurge_daysold;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgeDaysold(OAIConfigNodePropertyInteger* scheduledpurge_daysold) {
    this->scheduledpurge_daysold = scheduledpurge_daysold;
    this->m_scheduledpurge_daysold_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqProjectsPurgeSchedulerProperties::getScheduledpurgeSaveThreshold() {
    return scheduledpurge_save_threshold;
}
void
OAIComAdobeCqProjectsPurgeSchedulerProperties::setScheduledpurgeSaveThreshold(OAIConfigNodePropertyInteger* scheduledpurge_save_threshold) {
    this->scheduledpurge_save_threshold = scheduledpurge_save_threshold;
    this->m_scheduledpurge_save_threshold_isSet = true;
}


bool
OAIComAdobeCqProjectsPurgeSchedulerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(scheduledpurge_name != nullptr && scheduledpurge_name->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_purge_active != nullptr && scheduledpurge_purge_active->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_templates != nullptr && scheduledpurge_templates->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_purge_groups != nullptr && scheduledpurge_purge_groups->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_purge_assets != nullptr && scheduledpurge_purge_assets->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_terminate_running_workflows != nullptr && scheduledpurge_terminate_running_workflows->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_daysold != nullptr && scheduledpurge_daysold->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_save_threshold != nullptr && scheduledpurge_save_threshold->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

