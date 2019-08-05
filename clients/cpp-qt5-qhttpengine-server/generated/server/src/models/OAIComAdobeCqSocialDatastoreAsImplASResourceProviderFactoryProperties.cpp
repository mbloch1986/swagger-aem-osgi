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


#include "OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties() {
    this->init();
}

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::~OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties() {
    
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::init() {
    m_version_id_isSet = false;
    m_cache_on_isSet = false;
    m_concurrency_level_isSet = false;
    m_cache_start_size_isSet = false;
    m_cache_ttl_isSet = false;
    m_cache_size_isSet = false;
    m_time_limit_isSet = false;
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(version_id, json[QString("version.id")]);
    
    ::OpenAPI::fromJsonValue(cache_on, json[QString("cache.on")]);
    
    ::OpenAPI::fromJsonValue(concurrency_level, json[QString("concurrency.level")]);
    
    ::OpenAPI::fromJsonValue(cache_start_size, json[QString("cache.start.size")]);
    
    ::OpenAPI::fromJsonValue(cache_ttl, json[QString("cache.ttl")]);
    
    ::OpenAPI::fromJsonValue(cache_size, json[QString("cache.size")]);
    
    ::OpenAPI::fromJsonValue(time_limit, json[QString("time.limit")]);
    
}

QString
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(version_id.isSet()){
        obj.insert(QString("version.id"), ::OpenAPI::toJsonValue(version_id));
    }
	if(cache_on.isSet()){
        obj.insert(QString("cache.on"), ::OpenAPI::toJsonValue(cache_on));
    }
	if(concurrency_level.isSet()){
        obj.insert(QString("concurrency.level"), ::OpenAPI::toJsonValue(concurrency_level));
    }
	if(cache_start_size.isSet()){
        obj.insert(QString("cache.start.size"), ::OpenAPI::toJsonValue(cache_start_size));
    }
	if(cache_ttl.isSet()){
        obj.insert(QString("cache.ttl"), ::OpenAPI::toJsonValue(cache_ttl));
    }
	if(cache_size.isSet()){
        obj.insert(QString("cache.size"), ::OpenAPI::toJsonValue(cache_size));
    }
	if(time_limit.isSet()){
        obj.insert(QString("time.limit"), ::OpenAPI::toJsonValue(time_limit));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getVersionId() const {
    return version_id;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setVersionId(const OAIConfigNodePropertyString &version_id) {
    this->version_id = version_id;
    this->m_version_id_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheOn() const {
    return cache_on;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheOn(const OAIConfigNodePropertyBoolean &cache_on) {
    this->cache_on = cache_on;
    this->m_cache_on_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getConcurrencyLevel() const {
    return concurrency_level;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setConcurrencyLevel(const OAIConfigNodePropertyInteger &concurrency_level) {
    this->concurrency_level = concurrency_level;
    this->m_concurrency_level_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheStartSize() const {
    return cache_start_size;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheStartSize(const OAIConfigNodePropertyInteger &cache_start_size) {
    this->cache_start_size = cache_start_size;
    this->m_cache_start_size_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheTtl() const {
    return cache_ttl;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheTtl(const OAIConfigNodePropertyInteger &cache_ttl) {
    this->cache_ttl = cache_ttl;
    this->m_cache_ttl_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheSize() const {
    return cache_size;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheSize(const OAIConfigNodePropertyInteger &cache_size) {
    this->cache_size = cache_size;
    this->m_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getTimeLimit() const {
    return time_limit;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setTimeLimit(const OAIConfigNodePropertyInteger &time_limit) {
    this->time_limit = time_limit;
    this->m_time_limit_isSet = true;
}


bool
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(version_id.isSet()){ isObjectUpdated = true; break;}
    
        if(cache_on.isSet()){ isObjectUpdated = true; break;}
    
        if(concurrency_level.isSet()){ isObjectUpdated = true; break;}
    
        if(cache_start_size.isSet()){ isObjectUpdated = true; break;}
    
        if(cache_ttl.isSet()){ isObjectUpdated = true; break;}
    
        if(cache_size.isSet()){ isObjectUpdated = true; break;}
    
        if(time_limit.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
