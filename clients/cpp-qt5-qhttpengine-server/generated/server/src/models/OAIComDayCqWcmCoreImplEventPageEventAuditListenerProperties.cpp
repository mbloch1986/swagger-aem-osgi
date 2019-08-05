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


#include "OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties() {
    this->init();
}

OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::~OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties() {
    
}

void
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::init() {
    m_configured_isSet = false;
}

void
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(configured, json[QString("configured")]);
    
}

QString
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::asJsonObject() const {
    QJsonObject obj;
	if(configured.isSet()){
        obj.insert(QString("configured"), ::OpenAPI::toJsonValue(configured));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::getConfigured() const {
    return configured;
}
void
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::setConfigured(const OAIConfigNodePropertyString &configured) {
    this->configured = configured;
    this->m_configured_isSet = true;
}


bool
OAIComDayCqWcmCoreImplEventPageEventAuditListenerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(configured.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
