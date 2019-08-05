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


#include "OAIComAdobeGraniteWorkflowPurgeSchedulerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::OAIComAdobeGraniteWorkflowPurgeSchedulerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::OAIComAdobeGraniteWorkflowPurgeSchedulerProperties() {
    init();
}

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::~OAIComAdobeGraniteWorkflowPurgeSchedulerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::init() {
    scheduledpurge_name = new OAIConfigNodePropertyString();
    m_scheduledpurge_name_isSet = false;
    scheduledpurge_workflow_status = new OAIConfigNodePropertyDropDown();
    m_scheduledpurge_workflow_status_isSet = false;
    scheduledpurge_model_ids = new OAIConfigNodePropertyArray();
    m_scheduledpurge_model_ids_isSet = false;
    scheduledpurge_daysold = new OAIConfigNodePropertyInteger();
    m_scheduledpurge_daysold_isSet = false;
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::cleanup() {
    if(scheduledpurge_name != nullptr) { 
        delete scheduledpurge_name;
    }
    if(scheduledpurge_workflow_status != nullptr) { 
        delete scheduledpurge_workflow_status;
    }
    if(scheduledpurge_model_ids != nullptr) { 
        delete scheduledpurge_model_ids;
    }
    if(scheduledpurge_daysold != nullptr) { 
        delete scheduledpurge_daysold;
    }
}

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties*
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&scheduledpurge_name, pJson["scheduledpurge.name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&scheduledpurge_workflow_status, pJson["scheduledpurge.workflowStatus"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&scheduledpurge_model_ids, pJson["scheduledpurge.modelIds"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&scheduledpurge_daysold, pJson["scheduledpurge.daysold"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::asJsonObject() {
    QJsonObject obj;
    if((scheduledpurge_name != nullptr) && (scheduledpurge_name->isSet())){
        toJsonValue(QString("scheduledpurge.name"), scheduledpurge_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((scheduledpurge_workflow_status != nullptr) && (scheduledpurge_workflow_status->isSet())){
        toJsonValue(QString("scheduledpurge.workflowStatus"), scheduledpurge_workflow_status, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((scheduledpurge_model_ids != nullptr) && (scheduledpurge_model_ids->isSet())){
        toJsonValue(QString("scheduledpurge.modelIds"), scheduledpurge_model_ids, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((scheduledpurge_daysold != nullptr) && (scheduledpurge_daysold->isSet())){
        toJsonValue(QString("scheduledpurge.daysold"), scheduledpurge_daysold, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeName() {
    return scheduledpurge_name;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeName(OAIConfigNodePropertyString* scheduledpurge_name) {
    this->scheduledpurge_name = scheduledpurge_name;
    this->m_scheduledpurge_name_isSet = true;
}

OAIConfigNodePropertyDropDown*
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeWorkflowStatus() {
    return scheduledpurge_workflow_status;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeWorkflowStatus(OAIConfigNodePropertyDropDown* scheduledpurge_workflow_status) {
    this->scheduledpurge_workflow_status = scheduledpurge_workflow_status;
    this->m_scheduledpurge_workflow_status_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeModelIds() {
    return scheduledpurge_model_ids;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeModelIds(OAIConfigNodePropertyArray* scheduledpurge_model_ids) {
    this->scheduledpurge_model_ids = scheduledpurge_model_ids;
    this->m_scheduledpurge_model_ids_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeDaysold() {
    return scheduledpurge_daysold;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeDaysold(OAIConfigNodePropertyInteger* scheduledpurge_daysold) {
    this->scheduledpurge_daysold = scheduledpurge_daysold;
    this->m_scheduledpurge_daysold_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(scheduledpurge_name != nullptr && scheduledpurge_name->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_workflow_status != nullptr && scheduledpurge_workflow_status->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_model_ids != nullptr && scheduledpurge_model_ids->isSet()){ isObjectUpdated = true; break;}
        if(scheduledpurge_daysold != nullptr && scheduledpurge_daysold->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
