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


#include "OAIComDayCqReplicationImplTransportHttpProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReplicationImplTransportHttpProperties::OAIComDayCqReplicationImplTransportHttpProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqReplicationImplTransportHttpProperties::OAIComDayCqReplicationImplTransportHttpProperties() {
    this->init();
}

OAIComDayCqReplicationImplTransportHttpProperties::~OAIComDayCqReplicationImplTransportHttpProperties() {
    
}

void
OAIComDayCqReplicationImplTransportHttpProperties::init() {
    m_disabled_cipher_suites_isSet = false;
    m_enabled_cipher_suites_isSet = false;
}

void
OAIComDayCqReplicationImplTransportHttpProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqReplicationImplTransportHttpProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(disabled_cipher_suites, json[QString("disabled.cipher.suites")]);
    
    ::OpenAPI::fromJsonValue(enabled_cipher_suites, json[QString("enabled.cipher.suites")]);
    
}

QString
OAIComDayCqReplicationImplTransportHttpProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReplicationImplTransportHttpProperties::asJsonObject() const {
    QJsonObject obj;
	if(disabled_cipher_suites.isSet()){
        obj.insert(QString("disabled.cipher.suites"), ::OpenAPI::toJsonValue(disabled_cipher_suites));
    }
	if(enabled_cipher_suites.isSet()){
        obj.insert(QString("enabled.cipher.suites"), ::OpenAPI::toJsonValue(enabled_cipher_suites));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqReplicationImplTransportHttpProperties::getDisabledCipherSuites() const {
    return disabled_cipher_suites;
}
void
OAIComDayCqReplicationImplTransportHttpProperties::setDisabledCipherSuites(const OAIConfigNodePropertyArray &disabled_cipher_suites) {
    this->disabled_cipher_suites = disabled_cipher_suites;
    this->m_disabled_cipher_suites_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqReplicationImplTransportHttpProperties::getEnabledCipherSuites() const {
    return enabled_cipher_suites;
}
void
OAIComDayCqReplicationImplTransportHttpProperties::setEnabledCipherSuites(const OAIConfigNodePropertyArray &enabled_cipher_suites) {
    this->enabled_cipher_suites = enabled_cipher_suites;
    this->m_enabled_cipher_suites_isSet = true;
}


bool
OAIComDayCqReplicationImplTransportHttpProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(disabled_cipher_suites.isSet()){ isObjectUpdated = true; break;}
    
        if(enabled_cipher_suites.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

