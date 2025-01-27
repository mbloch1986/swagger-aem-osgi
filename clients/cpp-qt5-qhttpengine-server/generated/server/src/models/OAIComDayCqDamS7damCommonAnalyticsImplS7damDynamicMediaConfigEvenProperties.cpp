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


#include "OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties() {
    this->init();
}

OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::~OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties() {
    
}

void
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::init() {
    m_cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled_isSet = false;
}

void
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled, json[QString("cq.dam.s7dam.dynamicmediaconfigeventlistener.enabled")]);
    
}

QString
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled.isSet()){
        obj.insert(QString("cq.dam.s7dam.dynamicmediaconfigeventlistener.enabled"), ::OpenAPI::toJsonValue(cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::getCqDamS7damDynamicmediaconfigeventlistenerEnabled() const {
    return cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled;
}
void
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::setCqDamS7damDynamicmediaconfigeventlistenerEnabled(const OAIConfigNodePropertyBoolean &cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled) {
    this->cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled = cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled;
    this->m_cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled_isSet = true;
}


bool
OAIComDayCqDamS7damCommonAnalyticsImplS7damDynamicMediaConfigEvenProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_dam_s7dam_dynamicmediaconfigeventlistener_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

