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


#include "OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties() {
    this->init();
}

OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::~OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties() {
    
}

void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::init() {
    m_hc_name_isSet = false;
    m_hc_tags_isSet = false;
    m_hc_mbean_name_isSet = false;
    m_mbean_name_isSet = false;
    m_attribute_name_isSet = false;
    m_attribute_value_constraint_isSet = false;
}

void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(hc_name, json[QString("hc.name")]);
    
    ::OpenAPI::fromJsonValue(hc_tags, json[QString("hc.tags")]);
    
    ::OpenAPI::fromJsonValue(hc_mbean_name, json[QString("hc.mbean.name")]);
    
    ::OpenAPI::fromJsonValue(mbean_name, json[QString("mbean.name")]);
    
    ::OpenAPI::fromJsonValue(attribute_name, json[QString("attribute.name")]);
    
    ::OpenAPI::fromJsonValue(attribute_value_constraint, json[QString("attribute.value.constraint")]);
    
}

QString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::asJsonObject() const {
    QJsonObject obj;
	if(hc_name.isSet()){
        obj.insert(QString("hc.name"), ::OpenAPI::toJsonValue(hc_name));
    }
	if(hc_tags.isSet()){
        obj.insert(QString("hc.tags"), ::OpenAPI::toJsonValue(hc_tags));
    }
	if(hc_mbean_name.isSet()){
        obj.insert(QString("hc.mbean.name"), ::OpenAPI::toJsonValue(hc_mbean_name));
    }
	if(mbean_name.isSet()){
        obj.insert(QString("mbean.name"), ::OpenAPI::toJsonValue(mbean_name));
    }
	if(attribute_name.isSet()){
        obj.insert(QString("attribute.name"), ::OpenAPI::toJsonValue(attribute_name));
    }
	if(attribute_value_constraint.isSet()){
        obj.insert(QString("attribute.value.constraint"), ::OpenAPI::toJsonValue(attribute_value_constraint));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getHcName() const {
    return hc_name;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setHcName(const OAIConfigNodePropertyString &hc_name) {
    this->hc_name = hc_name;
    this->m_hc_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getHcTags() const {
    return hc_tags;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setHcTags(const OAIConfigNodePropertyArray &hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getHcMbeanName() const {
    return hc_mbean_name;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setHcMbeanName(const OAIConfigNodePropertyString &hc_mbean_name) {
    this->hc_mbean_name = hc_mbean_name;
    this->m_hc_mbean_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getMbeanName() const {
    return mbean_name;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setMbeanName(const OAIConfigNodePropertyString &mbean_name) {
    this->mbean_name = mbean_name;
    this->m_mbean_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getAttributeName() const {
    return attribute_name;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setAttributeName(const OAIConfigNodePropertyString &attribute_name) {
    this->attribute_name = attribute_name;
    this->m_attribute_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::getAttributeValueConstraint() const {
    return attribute_value_constraint;
}
void
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::setAttributeValueConstraint(const OAIConfigNodePropertyString &attribute_value_constraint) {
    this->attribute_value_constraint = attribute_value_constraint;
    this->m_attribute_value_constraint_isSet = true;
}


bool
OAIOrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(hc_name.isSet()){ isObjectUpdated = true; break;}
    
        if(hc_tags.isSet()){ isObjectUpdated = true; break;}
    
        if(hc_mbean_name.isSet()){ isObjectUpdated = true; break;}
    
        if(mbean_name.isSet()){ isObjectUpdated = true; break;}
    
        if(attribute_name.isSet()){ isObjectUpdated = true; break;}
    
        if(attribute_value_constraint.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

