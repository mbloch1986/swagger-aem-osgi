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


#include "OAIComDayCqReportingImplCacheCacheImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReportingImplCacheCacheImplProperties::OAIComDayCqReportingImplCacheCacheImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqReportingImplCacheCacheImplProperties::OAIComDayCqReportingImplCacheCacheImplProperties() {
    this->init();
}

OAIComDayCqReportingImplCacheCacheImplProperties::~OAIComDayCqReportingImplCacheCacheImplProperties() {
    
}

void
OAIComDayCqReportingImplCacheCacheImplProperties::init() {
    m_repcache_enable_isSet = false;
    m_repcache_ttl_isSet = false;
    m_repcache_max_isSet = false;
}

void
OAIComDayCqReportingImplCacheCacheImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqReportingImplCacheCacheImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(repcache_enable, json[QString("repcache.enable")]);
    
    ::OpenAPI::fromJsonValue(repcache_ttl, json[QString("repcache.ttl")]);
    
    ::OpenAPI::fromJsonValue(repcache_max, json[QString("repcache.max")]);
    
}

QString
OAIComDayCqReportingImplCacheCacheImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReportingImplCacheCacheImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(repcache_enable.isSet()){
        obj.insert(QString("repcache.enable"), ::OpenAPI::toJsonValue(repcache_enable));
    }
	if(repcache_ttl.isSet()){
        obj.insert(QString("repcache.ttl"), ::OpenAPI::toJsonValue(repcache_ttl));
    }
	if(repcache_max.isSet()){
        obj.insert(QString("repcache.max"), ::OpenAPI::toJsonValue(repcache_max));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReportingImplCacheCacheImplProperties::getRepcacheEnable() const {
    return repcache_enable;
}
void
OAIComDayCqReportingImplCacheCacheImplProperties::setRepcacheEnable(const OAIConfigNodePropertyBoolean &repcache_enable) {
    this->repcache_enable = repcache_enable;
    this->m_repcache_enable_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqReportingImplCacheCacheImplProperties::getRepcacheTtl() const {
    return repcache_ttl;
}
void
OAIComDayCqReportingImplCacheCacheImplProperties::setRepcacheTtl(const OAIConfigNodePropertyInteger &repcache_ttl) {
    this->repcache_ttl = repcache_ttl;
    this->m_repcache_ttl_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqReportingImplCacheCacheImplProperties::getRepcacheMax() const {
    return repcache_max;
}
void
OAIComDayCqReportingImplCacheCacheImplProperties::setRepcacheMax(const OAIConfigNodePropertyInteger &repcache_max) {
    this->repcache_max = repcache_max;
    this->m_repcache_max_isSet = true;
}


bool
OAIComDayCqReportingImplCacheCacheImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(repcache_enable.isSet()){ isObjectUpdated = true; break;}
    
        if(repcache_ttl.isSet()){ isObjectUpdated = true; break;}
    
        if(repcache_max.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

