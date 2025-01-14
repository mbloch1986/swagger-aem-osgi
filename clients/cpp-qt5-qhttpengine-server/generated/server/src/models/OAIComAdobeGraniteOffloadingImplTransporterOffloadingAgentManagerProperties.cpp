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
    this->fromJson(json);
}

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties() {
    this->init();
}

OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::~OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties() {
    
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::init() {
    m_offloading_agentmanager_enabled_isSet = false;
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(offloading_agentmanager_enabled, json[QString("offloading.agentmanager.enabled")]);
    
}

QString
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::asJsonObject() const {
    QJsonObject obj;
	if(offloading_agentmanager_enabled.isSet()){
        obj.insert(QString("offloading.agentmanager.enabled"), ::OpenAPI::toJsonValue(offloading_agentmanager_enabled));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::getOffloadingAgentmanagerEnabled() const {
    return offloading_agentmanager_enabled;
}
void
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::setOffloadingAgentmanagerEnabled(const OAIConfigNodePropertyBoolean &offloading_agentmanager_enabled) {
    this->offloading_agentmanager_enabled = offloading_agentmanager_enabled;
    this->m_offloading_agentmanager_enabled_isSet = true;
}


bool
OAIComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(offloading_agentmanager_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

