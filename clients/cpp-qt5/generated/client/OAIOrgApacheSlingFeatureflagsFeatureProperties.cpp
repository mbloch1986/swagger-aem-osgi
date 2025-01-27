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


#include "OAIOrgApacheSlingFeatureflagsFeatureProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingFeatureflagsFeatureProperties::OAIOrgApacheSlingFeatureflagsFeatureProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingFeatureflagsFeatureProperties::OAIOrgApacheSlingFeatureflagsFeatureProperties() {
    init();
}

OAIOrgApacheSlingFeatureflagsFeatureProperties::~OAIOrgApacheSlingFeatureflagsFeatureProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingFeatureflagsFeatureProperties::init() {
    name = new OAIConfigNodePropertyString();
    m_name_isSet = false;
    description = new OAIConfigNodePropertyString();
    m_description_isSet = false;
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
}

void
OAIOrgApacheSlingFeatureflagsFeatureProperties::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(enabled != nullptr) { 
        delete enabled;
    }
}

OAIOrgApacheSlingFeatureflagsFeatureProperties*
OAIOrgApacheSlingFeatureflagsFeatureProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingFeatureflagsFeatureProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&name, pJson["name"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheSlingFeatureflagsFeatureProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingFeatureflagsFeatureProperties::asJsonObject() {
    QJsonObject obj;
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((description != nullptr) && (description->isSet())){
        toJsonValue(QString("description"), description, obj, QString("OAIConfigNodePropertyString"));
    }
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingFeatureflagsFeatureProperties::getName() {
    return name;
}
void
OAIOrgApacheSlingFeatureflagsFeatureProperties::setName(OAIConfigNodePropertyString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingFeatureflagsFeatureProperties::getDescription() {
    return description;
}
void
OAIOrgApacheSlingFeatureflagsFeatureProperties::setDescription(OAIConfigNodePropertyString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingFeatureflagsFeatureProperties::getEnabled() {
    return enabled;
}
void
OAIOrgApacheSlingFeatureflagsFeatureProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}


bool
OAIOrgApacheSlingFeatureflagsFeatureProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(description != nullptr && description->isSet()){ isObjectUpdated = true; break;}
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

