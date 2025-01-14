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


#include "OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties() {
    this->init();
}

OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::~OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties() {
    
}

void
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::init() {
    m_is_transaction_recording_enabled_isSet = false;
}

void
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(is_transaction_recording_enabled, json[QString("isTransactionRecordingEnabled")]);
    
}

QString
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::asJsonObject() const {
    QJsonObject obj;
	if(is_transaction_recording_enabled.isSet()){
        obj.insert(QString("isTransactionRecordingEnabled"), ::OpenAPI::toJsonValue(is_transaction_recording_enabled));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::getIsTransactionRecordingEnabled() const {
    return is_transaction_recording_enabled;
}
void
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::setIsTransactionRecordingEnabled(const OAIConfigNodePropertyBoolean &is_transaction_recording_enabled) {
    this->is_transaction_recording_enabled = is_transaction_recording_enabled;
    this->m_is_transaction_recording_enabled_isSet = true;
}


bool
OAIComAdobeAemTransactionCoreImplTransactionRecorderProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(is_transaction_recording_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

