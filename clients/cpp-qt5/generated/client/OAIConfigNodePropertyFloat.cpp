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


#include "OAIConfigNodePropertyFloat.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIConfigNodePropertyFloat::OAIConfigNodePropertyFloat(QString json) {
    init();
    this->fromJson(json);
}

OAIConfigNodePropertyFloat::OAIConfigNodePropertyFloat() {
    init();
}

OAIConfigNodePropertyFloat::~OAIConfigNodePropertyFloat() {
    this->cleanup();
}

void
OAIConfigNodePropertyFloat::init() {
    name = new QString("");
    m_name_isSet = false;
    optional = false;
    m_optional_isSet = false;
    is_set = false;
    m_is_set_isSet = false;
    type = 0;
    m_type_isSet = false;
    value = 0.0;
    m_value_isSet = false;
    description = new QString("");
    m_description_isSet = false;
}

void
OAIConfigNodePropertyFloat::cleanup() {
    if(name != nullptr) { 
        delete name;
    }



    if(value != nullptr) { 
        delete value;
    }
    if(description != nullptr) { 
        delete description;
    }
}

OAIConfigNodePropertyFloat*
OAIConfigNodePropertyFloat::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIConfigNodePropertyFloat::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&optional, pJson["optional"], "bool", "");
    
    ::OpenAPI::setValue(&is_set, pJson["is_set"], "bool", "");
    
    ::OpenAPI::setValue(&type, pJson["type"], "qint32", "");
    
    ::OpenAPI::setValue(&value, pJson["value"], "OAINumber", "OAINumber");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
}

QString
OAIConfigNodePropertyFloat::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIConfigNodePropertyFloat::asJsonObject() {
    QJsonObject obj;
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_optional_isSet){
        obj.insert("optional", QJsonValue(optional));
    }
    if(m_is_set_isSet){
        obj.insert("is_set", QJsonValue(is_set));
    }
    if(m_type_isSet){
        obj.insert("type", QJsonValue(type));
    }
    if((value != nullptr) && (value->isSet())){
        toJsonValue(QString("value"), value, obj, QString("OAINumber"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIConfigNodePropertyFloat::getName() {
    return name;
}
void
OAIConfigNodePropertyFloat::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAIConfigNodePropertyFloat::isOptional() {
    return optional;
}
void
OAIConfigNodePropertyFloat::setOptional(bool optional) {
    this->optional = optional;
    this->m_optional_isSet = true;
}

bool
OAIConfigNodePropertyFloat::isIsSet() {
    return is_set;
}
void
OAIConfigNodePropertyFloat::setIsSet(bool is_set) {
    this->is_set = is_set;
    this->m_is_set_isSet = true;
}

qint32
OAIConfigNodePropertyFloat::getType() {
    return type;
}
void
OAIConfigNodePropertyFloat::setType(qint32 type) {
    this->type = type;
    this->m_type_isSet = true;
}

OAINumber*
OAIConfigNodePropertyFloat::getValue() {
    return value;
}
void
OAIConfigNodePropertyFloat::setValue(OAINumber* value) {
    this->value = value;
    this->m_value_isSet = true;
}

QString*
OAIConfigNodePropertyFloat::getDescription() {
    return description;
}
void
OAIConfigNodePropertyFloat::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}


bool
OAIConfigNodePropertyFloat::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_optional_isSet){ isObjectUpdated = true; break;}
        if(m_is_set_isSet){ isObjectUpdated = true; break;}
        if(m_type_isSet){ isObjectUpdated = true; break;}
        if(value != nullptr && value->isSet()){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
