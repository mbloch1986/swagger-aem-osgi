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


#include "OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties() {
    init();
}

OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::~OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties() {
    this->cleanup();
}

void
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::init() {
    cq_dam_s7dam_damchangeeventlistener_enabled = new OAIConfigNodePropertyBoolean();
    m_cq_dam_s7dam_damchangeeventlistener_enabled_isSet = false;
}

void
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::cleanup() {
    if(cq_dam_s7dam_damchangeeventlistener_enabled != nullptr) { 
        delete cq_dam_s7dam_damchangeeventlistener_enabled;
    }
}

OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties*
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_dam_s7dam_damchangeeventlistener_enabled, pJson["cq.dam.s7dam.damchangeeventlistener.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_dam_s7dam_damchangeeventlistener_enabled != nullptr) && (cq_dam_s7dam_damchangeeventlistener_enabled->isSet())){
        toJsonValue(QString("cq.dam.s7dam.damchangeeventlistener.enabled"), cq_dam_s7dam_damchangeeventlistener_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::getCqDamS7damDamchangeeventlistenerEnabled() {
    return cq_dam_s7dam_damchangeeventlistener_enabled;
}
void
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::setCqDamS7damDamchangeeventlistenerEnabled(OAIConfigNodePropertyBoolean* cq_dam_s7dam_damchangeeventlistener_enabled) {
    this->cq_dam_s7dam_damchangeeventlistener_enabled = cq_dam_s7dam_damchangeeventlistener_enabled;
    this->m_cq_dam_s7dam_damchangeeventlistener_enabled_isSet = true;
}


bool
OAIComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_dam_s7dam_damchangeeventlistener_enabled != nullptr && cq_dam_s7dam_damchangeeventlistener_enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
