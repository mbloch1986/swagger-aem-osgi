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


#include "OAIConfigNodePropertyInteger.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIConfigNodePropertyInteger::OAIConfigNodePropertyInteger(QString json) {
    this->fromJson(json);
}

OAIConfigNodePropertyInteger::OAIConfigNodePropertyInteger() {
    this->init();
}

OAIConfigNodePropertyInteger::~OAIConfigNodePropertyInteger() {
    
}

void
OAIConfigNodePropertyInteger::init() {
    m_name_isSet = false;
    m_optional_isSet = false;
    m_is_set_isSet = false;
    m_type_isSet = false;
    m_value_isSet = false;
    m_description_isSet = false;
}

void
OAIConfigNodePropertyInteger::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIConfigNodePropertyInteger::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(optional, json[QString("optional")]);
    
    ::OpenAPI::fromJsonValue(is_set, json[QString("is_set")]);
    
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(value, json[QString("value")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
}

QString
OAIConfigNodePropertyInteger::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIConfigNodePropertyInteger::asJsonObject() const {
    QJsonObject obj;
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_optional_isSet){
        obj.insert(QString("optional"), ::OpenAPI::toJsonValue(optional));
    }
	if(m_is_set_isSet){
        obj.insert(QString("is_set"), ::OpenAPI::toJsonValue(is_set));
    }
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(m_value_isSet){
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(value));
    }
	if(m_description_isSet){
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    return obj;
}

QString
OAIConfigNodePropertyInteger::getName() const {
    return name;
}
void
OAIConfigNodePropertyInteger::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAIConfigNodePropertyInteger::isOptional() const {
    return optional;
}
void
OAIConfigNodePropertyInteger::setOptional(const bool &optional) {
    this->optional = optional;
    this->m_optional_isSet = true;
}

bool
OAIConfigNodePropertyInteger::isIsSet() const {
    return is_set;
}
void
OAIConfigNodePropertyInteger::setIsSet(const bool &is_set) {
    this->is_set = is_set;
    this->m_is_set_isSet = true;
}

qint32
OAIConfigNodePropertyInteger::getType() const {
    return type;
}
void
OAIConfigNodePropertyInteger::setType(const qint32 &type) {
    this->type = type;
    this->m_type_isSet = true;
}

qint32
OAIConfigNodePropertyInteger::getValue() const {
    return value;
}
void
OAIConfigNodePropertyInteger::setValue(const qint32 &value) {
    this->value = value;
    this->m_value_isSet = true;
}

QString
OAIConfigNodePropertyInteger::getDescription() const {
    return description;
}
void
OAIConfigNodePropertyInteger::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}


bool
OAIConfigNodePropertyInteger::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_optional_isSet){ isObjectUpdated = true; break;}
    
        if(m_is_set_isSet){ isObjectUpdated = true; break;}
    
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_value_isSet){ isObjectUpdated = true; break;}
    
        if(m_description_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

