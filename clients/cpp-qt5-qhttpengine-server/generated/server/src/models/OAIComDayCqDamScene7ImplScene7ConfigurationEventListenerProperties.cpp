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


#include "OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties() {
    this->init();
}

OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::~OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties() {
    
}

void
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::init() {
    m_cq_dam_scene7_configurationeventlistener_enabled_isSet = false;
}

void
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_dam_scene7_configurationeventlistener_enabled, json[QString("cq.dam.scene7.configurationeventlistener.enabled")]);
    
}

QString
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_dam_scene7_configurationeventlistener_enabled.isSet()){
        obj.insert(QString("cq.dam.scene7.configurationeventlistener.enabled"), ::OpenAPI::toJsonValue(cq_dam_scene7_configurationeventlistener_enabled));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::getCqDamScene7ConfigurationeventlistenerEnabled() const {
    return cq_dam_scene7_configurationeventlistener_enabled;
}
void
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::setCqDamScene7ConfigurationeventlistenerEnabled(const OAIConfigNodePropertyBoolean &cq_dam_scene7_configurationeventlistener_enabled) {
    this->cq_dam_scene7_configurationeventlistener_enabled = cq_dam_scene7_configurationeventlistener_enabled;
    this->m_cq_dam_scene7_configurationeventlistener_enabled_isSet = true;
}


bool
OAIComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_dam_scene7_configurationeventlistener_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

