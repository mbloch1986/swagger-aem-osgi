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


#include "OAIComDayCqReplicationImplAgentManagerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReplicationImplAgentManagerImplProperties::OAIComDayCqReplicationImplAgentManagerImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqReplicationImplAgentManagerImplProperties::OAIComDayCqReplicationImplAgentManagerImplProperties() {
    this->init();
}

OAIComDayCqReplicationImplAgentManagerImplProperties::~OAIComDayCqReplicationImplAgentManagerImplProperties() {
    
}

void
OAIComDayCqReplicationImplAgentManagerImplProperties::init() {
    m_job_topics_isSet = false;
    m_service_user_target_isSet = false;
    m_agent_provider_target_isSet = false;
}

void
OAIComDayCqReplicationImplAgentManagerImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqReplicationImplAgentManagerImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(job_topics, json[QString("job.topics")]);
    
    ::OpenAPI::fromJsonValue(service_user_target, json[QString("serviceUser.target")]);
    
    ::OpenAPI::fromJsonValue(agent_provider_target, json[QString("agentProvider.target")]);
    
}

QString
OAIComDayCqReplicationImplAgentManagerImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReplicationImplAgentManagerImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(job_topics.isSet()){
        obj.insert(QString("job.topics"), ::OpenAPI::toJsonValue(job_topics));
    }
	if(service_user_target.isSet()){
        obj.insert(QString("serviceUser.target"), ::OpenAPI::toJsonValue(service_user_target));
    }
	if(agent_provider_target.isSet()){
        obj.insert(QString("agentProvider.target"), ::OpenAPI::toJsonValue(agent_provider_target));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqReplicationImplAgentManagerImplProperties::getJobTopics() const {
    return job_topics;
}
void
OAIComDayCqReplicationImplAgentManagerImplProperties::setJobTopics(const OAIConfigNodePropertyString &job_topics) {
    this->job_topics = job_topics;
    this->m_job_topics_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqReplicationImplAgentManagerImplProperties::getServiceUserTarget() const {
    return service_user_target;
}
void
OAIComDayCqReplicationImplAgentManagerImplProperties::setServiceUserTarget(const OAIConfigNodePropertyString &service_user_target) {
    this->service_user_target = service_user_target;
    this->m_service_user_target_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqReplicationImplAgentManagerImplProperties::getAgentProviderTarget() const {
    return agent_provider_target;
}
void
OAIComDayCqReplicationImplAgentManagerImplProperties::setAgentProviderTarget(const OAIConfigNodePropertyString &agent_provider_target) {
    this->agent_provider_target = agent_provider_target;
    this->m_agent_provider_target_isSet = true;
}


bool
OAIComDayCqReplicationImplAgentManagerImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(job_topics.isSet()){ isObjectUpdated = true; break;}
    
        if(service_user_target.isSet()){ isObjectUpdated = true; break;}
    
        if(agent_provider_target.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

