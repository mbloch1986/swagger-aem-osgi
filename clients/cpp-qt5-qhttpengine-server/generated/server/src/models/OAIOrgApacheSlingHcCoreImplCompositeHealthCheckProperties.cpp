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


#include "OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties() {
    this->init();
}

OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::~OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties() {
    
}

void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::init() {
    m_hc_name_isSet = false;
    m_hc_tags_isSet = false;
    m_hc_mbean_name_isSet = false;
    m_filter_tags_isSet = false;
    m_filter_combine_tags_with_or_isSet = false;
}

void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(hc_name, json[QString("hc.name")]);
    
    ::OpenAPI::fromJsonValue(hc_tags, json[QString("hc.tags")]);
    
    ::OpenAPI::fromJsonValue(hc_mbean_name, json[QString("hc.mbean.name")]);
    
    ::OpenAPI::fromJsonValue(filter_tags, json[QString("filter.tags")]);
    
    ::OpenAPI::fromJsonValue(filter_combine_tags_with_or, json[QString("filter.combineTagsWithOr")]);
    
}

QString
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::asJsonObject() const {
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
	if(filter_tags.isSet()){
        obj.insert(QString("filter.tags"), ::OpenAPI::toJsonValue(filter_tags));
    }
	if(filter_combine_tags_with_or.isSet()){
        obj.insert(QString("filter.combineTagsWithOr"), ::OpenAPI::toJsonValue(filter_combine_tags_with_or));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::getHcName() const {
    return hc_name;
}
void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::setHcName(const OAIConfigNodePropertyString &hc_name) {
    this->hc_name = hc_name;
    this->m_hc_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::getHcTags() const {
    return hc_tags;
}
void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::setHcTags(const OAIConfigNodePropertyArray &hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::getHcMbeanName() const {
    return hc_mbean_name;
}
void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::setHcMbeanName(const OAIConfigNodePropertyString &hc_mbean_name) {
    this->hc_mbean_name = hc_mbean_name;
    this->m_hc_mbean_name_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::getFilterTags() const {
    return filter_tags;
}
void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::setFilterTags(const OAIConfigNodePropertyArray &filter_tags) {
    this->filter_tags = filter_tags;
    this->m_filter_tags_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::getFilterCombineTagsWithOr() const {
    return filter_combine_tags_with_or;
}
void
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::setFilterCombineTagsWithOr(const OAIConfigNodePropertyBoolean &filter_combine_tags_with_or) {
    this->filter_combine_tags_with_or = filter_combine_tags_with_or;
    this->m_filter_combine_tags_with_or_isSet = true;
}


bool
OAIOrgApacheSlingHcCoreImplCompositeHealthCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(hc_name.isSet()){ isObjectUpdated = true; break;}
    
        if(hc_tags.isSet()){ isObjectUpdated = true; break;}
    
        if(hc_mbean_name.isSet()){ isObjectUpdated = true; break;}
    
        if(filter_tags.isSet()){ isObjectUpdated = true; break;}
    
        if(filter_combine_tags_with_or.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

