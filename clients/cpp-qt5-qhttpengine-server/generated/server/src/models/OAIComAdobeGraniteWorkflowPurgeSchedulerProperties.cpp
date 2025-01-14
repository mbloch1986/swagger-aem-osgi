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
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::OAIComAdobeGraniteWorkflowPurgeSchedulerProperties() {
    this->init();
}

OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::~OAIComAdobeGraniteWorkflowPurgeSchedulerProperties() {
    
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::init() {
    m_scheduledpurge_name_isSet = false;
    m_scheduledpurge_workflow_status_isSet = false;
    m_scheduledpurge_model_ids_isSet = false;
    m_scheduledpurge_daysold_isSet = false;
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduledpurge_name, json[QString("scheduledpurge.name")]);
    
    ::OpenAPI::fromJsonValue(scheduledpurge_workflow_status, json[QString("scheduledpurge.workflowStatus")]);
    
    ::OpenAPI::fromJsonValue(scheduledpurge_model_ids, json[QString("scheduledpurge.modelIds")]);
    
    ::OpenAPI::fromJsonValue(scheduledpurge_daysold, json[QString("scheduledpurge.daysold")]);
    
}

QString
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduledpurge_name.isSet()){
        obj.insert(QString("scheduledpurge.name"), ::OpenAPI::toJsonValue(scheduledpurge_name));
    }
	if(scheduledpurge_workflow_status.isSet()){
        obj.insert(QString("scheduledpurge.workflowStatus"), ::OpenAPI::toJsonValue(scheduledpurge_workflow_status));
    }
	if(scheduledpurge_model_ids.isSet()){
        obj.insert(QString("scheduledpurge.modelIds"), ::OpenAPI::toJsonValue(scheduledpurge_model_ids));
    }
	if(scheduledpurge_daysold.isSet()){
        obj.insert(QString("scheduledpurge.daysold"), ::OpenAPI::toJsonValue(scheduledpurge_daysold));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeName() const {
    return scheduledpurge_name;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeName(const OAIConfigNodePropertyString &scheduledpurge_name) {
    this->scheduledpurge_name = scheduledpurge_name;
    this->m_scheduledpurge_name_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeWorkflowStatus() const {
    return scheduledpurge_workflow_status;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeWorkflowStatus(const OAIConfigNodePropertyDropDown &scheduledpurge_workflow_status) {
    this->scheduledpurge_workflow_status = scheduledpurge_workflow_status;
    this->m_scheduledpurge_workflow_status_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeModelIds() const {
    return scheduledpurge_model_ids;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeModelIds(const OAIConfigNodePropertyArray &scheduledpurge_model_ids) {
    this->scheduledpurge_model_ids = scheduledpurge_model_ids;
    this->m_scheduledpurge_model_ids_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::getScheduledpurgeDaysold() const {
    return scheduledpurge_daysold;
}
void
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::setScheduledpurgeDaysold(const OAIConfigNodePropertyInteger &scheduledpurge_daysold) {
    this->scheduledpurge_daysold = scheduledpurge_daysold;
    this->m_scheduledpurge_daysold_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowPurgeSchedulerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduledpurge_name.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduledpurge_workflow_status.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduledpurge_model_ids.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduledpurge_daysold.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

