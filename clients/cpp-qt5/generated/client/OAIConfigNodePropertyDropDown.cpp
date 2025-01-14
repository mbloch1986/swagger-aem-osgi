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


#include "OAIConfigNodePropertyDropDown.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIConfigNodePropertyDropDown::OAIConfigNodePropertyDropDown(QString json) {
    init();
    this->fromJson(json);
}

OAIConfigNodePropertyDropDown::OAIConfigNodePropertyDropDown() {
    init();
}

OAIConfigNodePropertyDropDown::~OAIConfigNodePropertyDropDown() {
    this->cleanup();
}

void
OAIConfigNodePropertyDropDown::init() {
    name = new QString("");
    m_name_isSet = false;
    optional = false;
    m_optional_isSet = false;
    is_set = false;
    m_is_set_isSet = false;
    type = new OAIConfigNodePropertyDropDown_type();
    m_type_isSet = false;
    value = NULL;
    m_value_isSet = false;
    description = new QString("");
    m_description_isSet = false;
}

void
OAIConfigNodePropertyDropDown::cleanup() {
    if(name != nullptr) { 
        delete name;
    }


    if(type != nullptr) { 
        delete type;
    }
    if(value != nullptr) { 
        delete value;
    }
    if(description != nullptr) { 
        delete description;
    }
}

OAIConfigNodePropertyDropDown*
OAIConfigNodePropertyDropDown::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIConfigNodePropertyDropDown::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&optional, pJson["optional"], "bool", "");
    
    ::OpenAPI::setValue(&is_set, pJson["is_set"], "bool", "");
    
    ::OpenAPI::setValue(&type, pJson["type"], "OAIConfigNodePropertyDropDown_type", "OAIConfigNodePropertyDropDown_type");
    
    ::OpenAPI::setValue(&value, pJson["value"], "OAIObject", "OAIObject");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
}

QString
OAIConfigNodePropertyDropDown::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIConfigNodePropertyDropDown::asJsonObject() {
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
    if((type != nullptr) && (type->isSet())){
        toJsonValue(QString("type"), type, obj, QString("OAIConfigNodePropertyDropDown_type"));
    }
    if((value != nullptr) && (value->isSet())){
        toJsonValue(QString("value"), value, obj, QString("OAIObject"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIConfigNodePropertyDropDown::getName() {
    return name;
}
void
OAIConfigNodePropertyDropDown::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAIConfigNodePropertyDropDown::isOptional() {
    return optional;
}
void
OAIConfigNodePropertyDropDown::setOptional(bool optional) {
    this->optional = optional;
    this->m_optional_isSet = true;
}

bool
OAIConfigNodePropertyDropDown::isIsSet() {
    return is_set;
}
void
OAIConfigNodePropertyDropDown::setIsSet(bool is_set) {
    this->is_set = is_set;
    this->m_is_set_isSet = true;
}

OAIConfigNodePropertyDropDown_type*
OAIConfigNodePropertyDropDown::getType() {
    return type;
}
void
OAIConfigNodePropertyDropDown::setType(OAIConfigNodePropertyDropDown_type* type) {
    this->type = type;
    this->m_type_isSet = true;
}

OAIObject*
OAIConfigNodePropertyDropDown::getValue() {
    return value;
}
void
OAIConfigNodePropertyDropDown::setValue(OAIObject* value) {
    this->value = value;
    this->m_value_isSet = true;
}

QString*
OAIConfigNodePropertyDropDown::getDescription() {
    return description;
}
void
OAIConfigNodePropertyDropDown::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}


bool
OAIConfigNodePropertyDropDown::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_optional_isSet){ isObjectUpdated = true; break;}
        if(m_is_set_isSet){ isObjectUpdated = true; break;}
        if(type != nullptr && type->isSet()){ isObjectUpdated = true; break;}
        if(value != nullptr && value->isSet()){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

