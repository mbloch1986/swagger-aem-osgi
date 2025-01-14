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


#include "OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties() {
    this->init();
}

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::~OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties() {
    
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::init() {
    m_flush_agents_isSet = false;
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(flush_agents, json[QString("Flush agents")]);
    
}

QString
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::asJsonObject() const {
    QJsonObject obj;
	if(flush_agents.isSet()){
        obj.insert(QString("Flush agents"), ::OpenAPI::toJsonValue(flush_agents));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::getFlushAgents() const {
    return flush_agents;
}
void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::setFlushAgents(const OAIConfigNodePropertyArray &flush_agents) {
    this->flush_agents = flush_agents;
    this->m_flush_agents_isSet = true;
}


bool
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(flush_agents.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

