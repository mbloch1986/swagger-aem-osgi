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


#include "OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties() {
    this->init();
}

OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::~OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties() {
    
}

void
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::init() {
    m_enabled_isSet = false;
}

void
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(enabled, json[QString("enabled")]);
    
}

QString
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::asJsonObject() const {
    QJsonObject obj;
	if(enabled.isSet()){
        obj.insert(QString("enabled"), ::OpenAPI::toJsonValue(enabled));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::getEnabled() const {
    return enabled;
}
void
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::setEnabled(const OAIConfigNodePropertyBoolean &enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}


bool
OAIOrgApacheSlingCaconfigImplConfigurationBindingsValueProviderProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
