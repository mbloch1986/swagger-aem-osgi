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
    init();
    this->fromJson(json);
}

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties() {
    init();
}

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::~OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties() {
    this->cleanup();
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::init() {
    flush_agents = new OAIConfigNodePropertyArray();
    m_flush_agents_isSet = false;
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::cleanup() {
    if(flush_agents != nullptr) { 
        delete flush_agents;
    }
}

OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties*
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&flush_agents, pJson["Flush agents"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::asJsonObject() {
    QJsonObject obj;
    if((flush_agents != nullptr) && (flush_agents->isSet())){
        toJsonValue(QString("Flush agents"), flush_agents, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::getFlushAgents() {
    return flush_agents;
}
void
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::setFlushAgents(OAIConfigNodePropertyArray* flush_agents) {
    this->flush_agents = flush_agents;
    this->m_flush_agents_isSet = true;
}


bool
OAIComDayCqWcmWebservicesupportImplReplicationEventListenerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(flush_agents != nullptr && flush_agents->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

