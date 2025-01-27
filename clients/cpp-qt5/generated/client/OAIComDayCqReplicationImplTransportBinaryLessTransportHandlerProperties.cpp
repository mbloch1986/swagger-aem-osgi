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


#include "OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties() {
    init();
}

OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::~OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::init() {
    disabled_cipher_suites = new OAIConfigNodePropertyArray();
    m_disabled_cipher_suites_isSet = false;
    enabled_cipher_suites = new OAIConfigNodePropertyArray();
    m_enabled_cipher_suites_isSet = false;
}

void
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::cleanup() {
    if(disabled_cipher_suites != nullptr) { 
        delete disabled_cipher_suites;
    }
    if(enabled_cipher_suites != nullptr) { 
        delete enabled_cipher_suites;
    }
}

OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties*
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&disabled_cipher_suites, pJson["disabled.cipher.suites"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&enabled_cipher_suites, pJson["enabled.cipher.suites"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((disabled_cipher_suites != nullptr) && (disabled_cipher_suites->isSet())){
        toJsonValue(QString("disabled.cipher.suites"), disabled_cipher_suites, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((enabled_cipher_suites != nullptr) && (enabled_cipher_suites->isSet())){
        toJsonValue(QString("enabled.cipher.suites"), enabled_cipher_suites, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::getDisabledCipherSuites() {
    return disabled_cipher_suites;
}
void
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::setDisabledCipherSuites(OAIConfigNodePropertyArray* disabled_cipher_suites) {
    this->disabled_cipher_suites = disabled_cipher_suites;
    this->m_disabled_cipher_suites_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::getEnabledCipherSuites() {
    return enabled_cipher_suites;
}
void
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::setEnabledCipherSuites(OAIConfigNodePropertyArray* enabled_cipher_suites) {
    this->enabled_cipher_suites = enabled_cipher_suites;
    this->m_enabled_cipher_suites_isSet = true;
}


bool
OAIComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(disabled_cipher_suites != nullptr && disabled_cipher_suites->isSet()){ isObjectUpdated = true; break;}
        if(enabled_cipher_suites != nullptr && enabled_cipher_suites->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

