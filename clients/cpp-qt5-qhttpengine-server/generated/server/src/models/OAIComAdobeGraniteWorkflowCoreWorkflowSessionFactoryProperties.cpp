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


#include "OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties() {
    this->init();
}

OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::~OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties() {
    
}

void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::init() {
    m_granite_workflowinbox_sort_property_name_isSet = false;
    m_granite_workflowinbox_sort_order_isSet = false;
    m_cq_workflow_job_retry_isSet = false;
    m_cq_workflow_superuser_isSet = false;
    m_granite_workflow_inbox_query_size_isSet = false;
    m_granite_workflow_admin_user_group_filter_isSet = false;
    m_granite_workflow_enforce_workitem_assignee_permissions_isSet = false;
    m_granite_workflow_enforce_workflow_initiator_permissions_isSet = false;
    m_granite_workflow_inject_tenant_id_in_job_topics_isSet = false;
    m_granite_workflow_max_purge_save_threshold_isSet = false;
    m_granite_workflow_max_purge_query_count_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(granite_workflowinbox_sort_property_name, json[QString("granite.workflowinbox.sort.propertyName")]);
    
    ::OpenAPI::fromJsonValue(granite_workflowinbox_sort_order, json[QString("granite.workflowinbox.sort.order")]);
    
    ::OpenAPI::fromJsonValue(cq_workflow_job_retry, json[QString("cq.workflow.job.retry")]);
    
    ::OpenAPI::fromJsonValue(cq_workflow_superuser, json[QString("cq.workflow.superuser")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_inbox_query_size, json[QString("granite.workflow.inboxQuerySize")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_admin_user_group_filter, json[QString("granite.workflow.adminUserGroupFilter")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_enforce_workitem_assignee_permissions, json[QString("granite.workflow.enforceWorkitemAssigneePermissions")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_enforce_workflow_initiator_permissions, json[QString("granite.workflow.enforceWorkflowInitiatorPermissions")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_inject_tenant_id_in_job_topics, json[QString("granite.workflow.injectTenantIdInJobTopics")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_max_purge_save_threshold, json[QString("granite.workflow.maxPurgeSaveThreshold")]);
    
    ::OpenAPI::fromJsonValue(granite_workflow_max_purge_query_count, json[QString("granite.workflow.maxPurgeQueryCount")]);
    
}

QString
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(granite_workflowinbox_sort_property_name.isSet()){
        obj.insert(QString("granite.workflowinbox.sort.propertyName"), ::OpenAPI::toJsonValue(granite_workflowinbox_sort_property_name));
    }
	if(granite_workflowinbox_sort_order.isSet()){
        obj.insert(QString("granite.workflowinbox.sort.order"), ::OpenAPI::toJsonValue(granite_workflowinbox_sort_order));
    }
	if(cq_workflow_job_retry.isSet()){
        obj.insert(QString("cq.workflow.job.retry"), ::OpenAPI::toJsonValue(cq_workflow_job_retry));
    }
	if(cq_workflow_superuser.isSet()){
        obj.insert(QString("cq.workflow.superuser"), ::OpenAPI::toJsonValue(cq_workflow_superuser));
    }
	if(granite_workflow_inbox_query_size.isSet()){
        obj.insert(QString("granite.workflow.inboxQuerySize"), ::OpenAPI::toJsonValue(granite_workflow_inbox_query_size));
    }
	if(granite_workflow_admin_user_group_filter.isSet()){
        obj.insert(QString("granite.workflow.adminUserGroupFilter"), ::OpenAPI::toJsonValue(granite_workflow_admin_user_group_filter));
    }
	if(granite_workflow_enforce_workitem_assignee_permissions.isSet()){
        obj.insert(QString("granite.workflow.enforceWorkitemAssigneePermissions"), ::OpenAPI::toJsonValue(granite_workflow_enforce_workitem_assignee_permissions));
    }
	if(granite_workflow_enforce_workflow_initiator_permissions.isSet()){
        obj.insert(QString("granite.workflow.enforceWorkflowInitiatorPermissions"), ::OpenAPI::toJsonValue(granite_workflow_enforce_workflow_initiator_permissions));
    }
	if(granite_workflow_inject_tenant_id_in_job_topics.isSet()){
        obj.insert(QString("granite.workflow.injectTenantIdInJobTopics"), ::OpenAPI::toJsonValue(granite_workflow_inject_tenant_id_in_job_topics));
    }
	if(granite_workflow_max_purge_save_threshold.isSet()){
        obj.insert(QString("granite.workflow.maxPurgeSaveThreshold"), ::OpenAPI::toJsonValue(granite_workflow_max_purge_save_threshold));
    }
	if(granite_workflow_max_purge_query_count.isSet()){
        obj.insert(QString("granite.workflow.maxPurgeQueryCount"), ::OpenAPI::toJsonValue(granite_workflow_max_purge_query_count));
    }
    return obj;
}

OAIConfigNodePropertyDropDown
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowinboxSortPropertyName() const {
    return granite_workflowinbox_sort_property_name;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowinboxSortPropertyName(const OAIConfigNodePropertyDropDown &granite_workflowinbox_sort_property_name) {
    this->granite_workflowinbox_sort_property_name = granite_workflowinbox_sort_property_name;
    this->m_granite_workflowinbox_sort_property_name_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowinboxSortOrder() const {
    return granite_workflowinbox_sort_order;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowinboxSortOrder(const OAIConfigNodePropertyString &granite_workflowinbox_sort_order) {
    this->granite_workflowinbox_sort_order = granite_workflowinbox_sort_order;
    this->m_granite_workflowinbox_sort_order_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getCqWorkflowJobRetry() const {
    return cq_workflow_job_retry;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setCqWorkflowJobRetry(const OAIConfigNodePropertyInteger &cq_workflow_job_retry) {
    this->cq_workflow_job_retry = cq_workflow_job_retry;
    this->m_cq_workflow_job_retry_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getCqWorkflowSuperuser() const {
    return cq_workflow_superuser;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setCqWorkflowSuperuser(const OAIConfigNodePropertyArray &cq_workflow_superuser) {
    this->cq_workflow_superuser = cq_workflow_superuser;
    this->m_cq_workflow_superuser_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowInboxQuerySize() const {
    return granite_workflow_inbox_query_size;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowInboxQuerySize(const OAIConfigNodePropertyInteger &granite_workflow_inbox_query_size) {
    this->granite_workflow_inbox_query_size = granite_workflow_inbox_query_size;
    this->m_granite_workflow_inbox_query_size_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowAdminUserGroupFilter() const {
    return granite_workflow_admin_user_group_filter;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowAdminUserGroupFilter(const OAIConfigNodePropertyBoolean &granite_workflow_admin_user_group_filter) {
    this->granite_workflow_admin_user_group_filter = granite_workflow_admin_user_group_filter;
    this->m_granite_workflow_admin_user_group_filter_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowEnforceWorkitemAssigneePermissions() const {
    return granite_workflow_enforce_workitem_assignee_permissions;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowEnforceWorkitemAssigneePermissions(const OAIConfigNodePropertyBoolean &granite_workflow_enforce_workitem_assignee_permissions) {
    this->granite_workflow_enforce_workitem_assignee_permissions = granite_workflow_enforce_workitem_assignee_permissions;
    this->m_granite_workflow_enforce_workitem_assignee_permissions_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowEnforceWorkflowInitiatorPermissions() const {
    return granite_workflow_enforce_workflow_initiator_permissions;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowEnforceWorkflowInitiatorPermissions(const OAIConfigNodePropertyBoolean &granite_workflow_enforce_workflow_initiator_permissions) {
    this->granite_workflow_enforce_workflow_initiator_permissions = granite_workflow_enforce_workflow_initiator_permissions;
    this->m_granite_workflow_enforce_workflow_initiator_permissions_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowInjectTenantIdInJobTopics() const {
    return granite_workflow_inject_tenant_id_in_job_topics;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowInjectTenantIdInJobTopics(const OAIConfigNodePropertyBoolean &granite_workflow_inject_tenant_id_in_job_topics) {
    this->granite_workflow_inject_tenant_id_in_job_topics = granite_workflow_inject_tenant_id_in_job_topics;
    this->m_granite_workflow_inject_tenant_id_in_job_topics_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowMaxPurgeSaveThreshold() const {
    return granite_workflow_max_purge_save_threshold;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowMaxPurgeSaveThreshold(const OAIConfigNodePropertyInteger &granite_workflow_max_purge_save_threshold) {
    this->granite_workflow_max_purge_save_threshold = granite_workflow_max_purge_save_threshold;
    this->m_granite_workflow_max_purge_save_threshold_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::getGraniteWorkflowMaxPurgeQueryCount() const {
    return granite_workflow_max_purge_query_count;
}
void
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::setGraniteWorkflowMaxPurgeQueryCount(const OAIConfigNodePropertyInteger &granite_workflow_max_purge_query_count) {
    this->granite_workflow_max_purge_query_count = granite_workflow_max_purge_query_count;
    this->m_granite_workflow_max_purge_query_count_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(granite_workflowinbox_sort_property_name.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflowinbox_sort_order.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_workflow_job_retry.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_workflow_superuser.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_inbox_query_size.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_admin_user_group_filter.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_enforce_workitem_assignee_permissions.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_enforce_workflow_initiator_permissions.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_inject_tenant_id_in_job_topics.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_max_purge_save_threshold.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_workflow_max_purge_query_count.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
