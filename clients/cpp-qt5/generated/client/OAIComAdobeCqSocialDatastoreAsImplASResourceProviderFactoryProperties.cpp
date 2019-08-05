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
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties() {
    init();
}

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::~OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::init() {
    version_id = new OAIConfigNodePropertyString();
    m_version_id_isSet = false;
    cache_on = new OAIConfigNodePropertyBoolean();
    m_cache_on_isSet = false;
    concurrency_level = new OAIConfigNodePropertyInteger();
    m_concurrency_level_isSet = false;
    cache_start_size = new OAIConfigNodePropertyInteger();
    m_cache_start_size_isSet = false;
    cache_ttl = new OAIConfigNodePropertyInteger();
    m_cache_ttl_isSet = false;
    cache_size = new OAIConfigNodePropertyInteger();
    m_cache_size_isSet = false;
    time_limit = new OAIConfigNodePropertyInteger();
    m_time_limit_isSet = false;
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::cleanup() {
    if(version_id != nullptr) { 
        delete version_id;
    }
    if(cache_on != nullptr) { 
        delete cache_on;
    }
    if(concurrency_level != nullptr) { 
        delete concurrency_level;
    }
    if(cache_start_size != nullptr) { 
        delete cache_start_size;
    }
    if(cache_ttl != nullptr) { 
        delete cache_ttl;
    }
    if(cache_size != nullptr) { 
        delete cache_size;
    }
    if(time_limit != nullptr) { 
        delete time_limit;
    }
}

OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&version_id, pJson["version.id"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cache_on, pJson["cache.on"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&concurrency_level, pJson["concurrency.level"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cache_start_size, pJson["cache.start.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cache_ttl, pJson["cache.ttl"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cache_size, pJson["cache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&time_limit, pJson["time.limit"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((version_id != nullptr) && (version_id->isSet())){
        toJsonValue(QString("version.id"), version_id, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cache_on != nullptr) && (cache_on->isSet())){
        toJsonValue(QString("cache.on"), cache_on, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((concurrency_level != nullptr) && (concurrency_level->isSet())){
        toJsonValue(QString("concurrency.level"), concurrency_level, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cache_start_size != nullptr) && (cache_start_size->isSet())){
        toJsonValue(QString("cache.start.size"), cache_start_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cache_ttl != nullptr) && (cache_ttl->isSet())){
        toJsonValue(QString("cache.ttl"), cache_ttl, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cache_size != nullptr) && (cache_size->isSet())){
        toJsonValue(QString("cache.size"), cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((time_limit != nullptr) && (time_limit->isSet())){
        toJsonValue(QString("time.limit"), time_limit, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getVersionId() {
    return version_id;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setVersionId(OAIConfigNodePropertyString* version_id) {
    this->version_id = version_id;
    this->m_version_id_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheOn() {
    return cache_on;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheOn(OAIConfigNodePropertyBoolean* cache_on) {
    this->cache_on = cache_on;
    this->m_cache_on_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getConcurrencyLevel() {
    return concurrency_level;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setConcurrencyLevel(OAIConfigNodePropertyInteger* concurrency_level) {
    this->concurrency_level = concurrency_level;
    this->m_concurrency_level_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheStartSize() {
    return cache_start_size;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheStartSize(OAIConfigNodePropertyInteger* cache_start_size) {
    this->cache_start_size = cache_start_size;
    this->m_cache_start_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheTtl() {
    return cache_ttl;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheTtl(OAIConfigNodePropertyInteger* cache_ttl) {
    this->cache_ttl = cache_ttl;
    this->m_cache_ttl_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getCacheSize() {
    return cache_size;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setCacheSize(OAIConfigNodePropertyInteger* cache_size) {
    this->cache_size = cache_size;
    this->m_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::getTimeLimit() {
    return time_limit;
}
void
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::setTimeLimit(OAIConfigNodePropertyInteger* time_limit) {
    this->time_limit = time_limit;
    this->m_time_limit_isSet = true;
}


bool
OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(version_id != nullptr && version_id->isSet()){ isObjectUpdated = true; break;}
        if(cache_on != nullptr && cache_on->isSet()){ isObjectUpdated = true; break;}
        if(concurrency_level != nullptr && concurrency_level->isSet()){ isObjectUpdated = true; break;}
        if(cache_start_size != nullptr && cache_start_size->isSet()){ isObjectUpdated = true; break;}
        if(cache_ttl != nullptr && cache_ttl->isSet()){ isObjectUpdated = true; break;}
        if(cache_size != nullptr && cache_size->isSet()){ isObjectUpdated = true; break;}
        if(time_limit != nullptr && time_limit->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
