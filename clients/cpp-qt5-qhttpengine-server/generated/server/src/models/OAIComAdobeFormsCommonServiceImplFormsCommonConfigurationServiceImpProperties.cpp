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


#include "OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties() {
    this->init();
}

OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::~OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties() {
    
}

void
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::init() {
    m_temp_storage_config_isSet = false;
}

void
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(temp_storage_config, json[QString("tempStorageConfig")]);
    
}

QString
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::asJsonObject() const {
    QJsonObject obj;
	if(temp_storage_config.isSet()){
        obj.insert(QString("tempStorageConfig"), ::OpenAPI::toJsonValue(temp_storage_config));
    }
    return obj;
}

OAIConfigNodePropertyDropDown
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::getTempStorageConfig() const {
    return temp_storage_config;
}
void
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::setTempStorageConfig(const OAIConfigNodePropertyDropDown &temp_storage_config) {
    this->temp_storage_config = temp_storage_config;
    this->m_temp_storage_config_isSet = true;
}


bool
OAIComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(temp_storage_config.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
