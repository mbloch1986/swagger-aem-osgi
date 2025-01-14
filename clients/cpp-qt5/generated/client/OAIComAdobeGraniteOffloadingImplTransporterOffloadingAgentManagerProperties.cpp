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


#include "OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties() {
    init();
}

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::~OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::init() {
    offloading_agentmanager_enabled = new OAIConfigNodePropertyBoolean();
    m_offloading_agentmanager_enabled_isSet = false;
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::cleanup() {
    if(offloading_agentmanager_enabled != nullptr) { 
        delete offloading_agentmanager_enabled;
    }
}

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties*
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&offloading_agentmanager_enabled, pJson["offloading.agentmanager.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::asJsonObject() {
    QJsonObject obj;
    if((offloading_agentmanager_enabled != nullptr) && (offloading_agentmanager_enabled->isSet())){
        toJsonValue(QString("offloading.agentmanager.enabled"), offloading_agentmanager_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::getOffloadingAgentmanagerEnabled() {
    return offloading_agentmanager_enabled;
}
void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::setOffloadingAgentmanagerEnabled(OAIConfigNodePropertyBoolean* offloading_agentmanager_enabled) {
    this->offloading_agentmanager_enabled = offloading_agentmanager_enabled;
    this->m_offloading_agentmanager_enabled_isSet = true;
}


bool
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(offloading_agentmanager_enabled != nullptr && offloading_agentmanager_enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

