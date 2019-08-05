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


#include "OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties() {
    this->init();
}

OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::~OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties() {
    
}

void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::init() {
    m_timeout_isSet = false;
    m_target_start_level_isSet = false;
    m_target_start_level_prop_name_isSet = false;
    m_type_isSet = false;
}

void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(timeout, json[QString("timeout")]);
    
    ::OpenAPI::fromJsonValue(target_start_level, json[QString("target.start.level")]);
    
    ::OpenAPI::fromJsonValue(target_start_level_prop_name, json[QString("target.start.level.prop.name")]);
    
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
}

QString
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::asJsonObject() const {
    QJsonObject obj;
	if(timeout.isSet()){
        obj.insert(QString("timeout"), ::OpenAPI::toJsonValue(timeout));
    }
	if(target_start_level.isSet()){
        obj.insert(QString("target.start.level"), ::OpenAPI::toJsonValue(target_start_level));
    }
	if(target_start_level_prop_name.isSet()){
        obj.insert(QString("target.start.level.prop.name"), ::OpenAPI::toJsonValue(target_start_level_prop_name));
    }
	if(type.isSet()){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTimeout() const {
    return timeout;
}
void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTimeout(const OAIConfigNodePropertyInteger &timeout) {
    this->timeout = timeout;
    this->m_timeout_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTargetStartLevel() const {
    return target_start_level;
}
void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTargetStartLevel(const OAIConfigNodePropertyInteger &target_start_level) {
    this->target_start_level = target_start_level;
    this->m_target_start_level_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getTargetStartLevelPropName() const {
    return target_start_level_prop_name;
}
void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setTargetStartLevelPropName(const OAIConfigNodePropertyString &target_start_level_prop_name) {
    this->target_start_level_prop_name = target_start_level_prop_name;
    this->m_target_start_level_prop_name_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::getType() const {
    return type;
}
void
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::setType(const OAIConfigNodePropertyDropDown &type) {
    this->type = type;
    this->m_type_isSet = true;
}


bool
OAIOrgApacheFelixSystemreadyImplFrameworkStartCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(target_start_level.isSet()){ isObjectUpdated = true; break;}
    
        if(target_start_level_prop_name.isSet()){ isObjectUpdated = true; break;}
    
        if(type.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
