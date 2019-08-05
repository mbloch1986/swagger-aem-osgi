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


#include "OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties() {
    init();
}

OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::~OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::init() {
    job_topics = new OAIConfigNodePropertyArray();
    m_job_topics_isSet = false;
    allow_self_process_termination = new OAIConfigNodePropertyBoolean();
    m_allow_self_process_termination_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::cleanup() {
    if(job_topics != nullptr) { 
        delete job_topics;
    }
    if(allow_self_process_termination != nullptr) { 
        delete allow_self_process_termination;
    }
}

OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties*
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&job_topics, pJson["job.topics"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&allow_self_process_termination, pJson["allow.self.process.termination"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((job_topics != nullptr) && (job_topics->isSet())){
        toJsonValue(QString("job.topics"), job_topics, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((allow_self_process_termination != nullptr) && (allow_self_process_termination->isSet())){
        toJsonValue(QString("allow.self.process.termination"), allow_self_process_termination, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::getJobTopics() {
    return job_topics;
}
void
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::setJobTopics(OAIConfigNodePropertyArray* job_topics) {
    this->job_topics = job_topics;
    this->m_job_topics_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::getAllowSelfProcessTermination() {
    return allow_self_process_termination;
}
void
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::setAllowSelfProcessTermination(OAIConfigNodePropertyBoolean* allow_self_process_termination) {
    this->allow_self_process_termination = allow_self_process_termination;
    this->m_allow_self_process_termination_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCoreJobJobHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(job_topics != nullptr && job_topics->isSet()){ isObjectUpdated = true; break;}
        if(allow_self_process_termination != nullptr && allow_self_process_termination->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
