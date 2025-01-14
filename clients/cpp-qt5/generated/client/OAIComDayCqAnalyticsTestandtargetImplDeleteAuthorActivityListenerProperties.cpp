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


#include "OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties() {
    init();
}

OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::~OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties() {
    this->cleanup();
}

void
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::init() {
    cq_analytics_testandtarget_deleteauthoractivitylistener_enabled = new OAIConfigNodePropertyBoolean();
    m_cq_analytics_testandtarget_deleteauthoractivitylistener_enabled_isSet = false;
}

void
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::cleanup() {
    if(cq_analytics_testandtarget_deleteauthoractivitylistener_enabled != nullptr) { 
        delete cq_analytics_testandtarget_deleteauthoractivitylistener_enabled;
    }
}

OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties*
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_analytics_testandtarget_deleteauthoractivitylistener_enabled, pJson["cq.analytics.testandtarget.deleteauthoractivitylistener.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_analytics_testandtarget_deleteauthoractivitylistener_enabled != nullptr) && (cq_analytics_testandtarget_deleteauthoractivitylistener_enabled->isSet())){
        toJsonValue(QString("cq.analytics.testandtarget.deleteauthoractivitylistener.enabled"), cq_analytics_testandtarget_deleteauthoractivitylistener_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::getCqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled() {
    return cq_analytics_testandtarget_deleteauthoractivitylistener_enabled;
}
void
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::setCqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled(OAIConfigNodePropertyBoolean* cq_analytics_testandtarget_deleteauthoractivitylistener_enabled) {
    this->cq_analytics_testandtarget_deleteauthoractivitylistener_enabled = cq_analytics_testandtarget_deleteauthoractivitylistener_enabled;
    this->m_cq_analytics_testandtarget_deleteauthoractivitylistener_enabled_isSet = true;
}


bool
OAIComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_analytics_testandtarget_deleteauthoractivitylistener_enabled != nullptr && cq_analytics_testandtarget_deleteauthoractivitylistener_enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

