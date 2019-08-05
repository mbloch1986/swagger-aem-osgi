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


#include "OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties() {
    init();
}

OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::~OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::init() {
    event_topics = new OAIConfigNodePropertyString();
    m_event_topics_isSet = false;
    event_filter = new OAIConfigNodePropertyString();
    m_event_filter_isSet = false;
    translate_listener_type = new OAIConfigNodePropertyArray();
    m_translate_listener_type_isSet = false;
    translate_property_list = new OAIConfigNodePropertyArray();
    m_translate_property_list_isSet = false;
    pool_size = new OAIConfigNodePropertyInteger();
    m_pool_size_isSet = false;
    max_pool_size = new OAIConfigNodePropertyInteger();
    m_max_pool_size_isSet = false;
    queue_size = new OAIConfigNodePropertyInteger();
    m_queue_size_isSet = false;
    keep_alive_time = new OAIConfigNodePropertyInteger();
    m_keep_alive_time_isSet = false;
}

void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::cleanup() {
    if(event_topics != nullptr) { 
        delete event_topics;
    }
    if(event_filter != nullptr) { 
        delete event_filter;
    }
    if(translate_listener_type != nullptr) { 
        delete translate_listener_type;
    }
    if(translate_property_list != nullptr) { 
        delete translate_property_list;
    }
    if(pool_size != nullptr) { 
        delete pool_size;
    }
    if(max_pool_size != nullptr) { 
        delete max_pool_size;
    }
    if(queue_size != nullptr) { 
        delete queue_size;
    }
    if(keep_alive_time != nullptr) { 
        delete keep_alive_time;
    }
}

OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&event_topics, pJson["event.topics"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&event_filter, pJson["event.filter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&translate_listener_type, pJson["translate.listener.type"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&translate_property_list, pJson["translate.property.list"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&pool_size, pJson["poolSize"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&max_pool_size, pJson["maxPoolSize"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&queue_size, pJson["queueSize"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&keep_alive_time, pJson["keepAliveTime"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::asJsonObject() {
    QJsonObject obj;
    if((event_topics != nullptr) && (event_topics->isSet())){
        toJsonValue(QString("event.topics"), event_topics, obj, QString("OAIConfigNodePropertyString"));
    }
    if((event_filter != nullptr) && (event_filter->isSet())){
        toJsonValue(QString("event.filter"), event_filter, obj, QString("OAIConfigNodePropertyString"));
    }
    if((translate_listener_type != nullptr) && (translate_listener_type->isSet())){
        toJsonValue(QString("translate.listener.type"), translate_listener_type, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((translate_property_list != nullptr) && (translate_property_list->isSet())){
        toJsonValue(QString("translate.property.list"), translate_property_list, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((pool_size != nullptr) && (pool_size->isSet())){
        toJsonValue(QString("poolSize"), pool_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((max_pool_size != nullptr) && (max_pool_size->isSet())){
        toJsonValue(QString("maxPoolSize"), max_pool_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((queue_size != nullptr) && (queue_size->isSet())){
        toJsonValue(QString("queueSize"), queue_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((keep_alive_time != nullptr) && (keep_alive_time->isSet())){
        toJsonValue(QString("keepAliveTime"), keep_alive_time, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getEventTopics() {
    return event_topics;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setEventTopics(OAIConfigNodePropertyString* event_topics) {
    this->event_topics = event_topics;
    this->m_event_topics_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getEventFilter() {
    return event_filter;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setEventFilter(OAIConfigNodePropertyString* event_filter) {
    this->event_filter = event_filter;
    this->m_event_filter_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getTranslateListenerType() {
    return translate_listener_type;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setTranslateListenerType(OAIConfigNodePropertyArray* translate_listener_type) {
    this->translate_listener_type = translate_listener_type;
    this->m_translate_listener_type_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getTranslatePropertyList() {
    return translate_property_list;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setTranslatePropertyList(OAIConfigNodePropertyArray* translate_property_list) {
    this->translate_property_list = translate_property_list;
    this->m_translate_property_list_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getPoolSize() {
    return pool_size;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setPoolSize(OAIConfigNodePropertyInteger* pool_size) {
    this->pool_size = pool_size;
    this->m_pool_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getMaxPoolSize() {
    return max_pool_size;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setMaxPoolSize(OAIConfigNodePropertyInteger* max_pool_size) {
    this->max_pool_size = max_pool_size;
    this->m_max_pool_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getQueueSize() {
    return queue_size;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setQueueSize(OAIConfigNodePropertyInteger* queue_size) {
    this->queue_size = queue_size;
    this->m_queue_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::getKeepAliveTime() {
    return keep_alive_time;
}
void
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::setKeepAliveTime(OAIConfigNodePropertyInteger* keep_alive_time) {
    this->keep_alive_time = keep_alive_time;
    this->m_keep_alive_time_isSet = true;
}


bool
OAIComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(event_topics != nullptr && event_topics->isSet()){ isObjectUpdated = true; break;}
        if(event_filter != nullptr && event_filter->isSet()){ isObjectUpdated = true; break;}
        if(translate_listener_type != nullptr && translate_listener_type->isSet()){ isObjectUpdated = true; break;}
        if(translate_property_list != nullptr && translate_property_list->isSet()){ isObjectUpdated = true; break;}
        if(pool_size != nullptr && pool_size->isSet()){ isObjectUpdated = true; break;}
        if(max_pool_size != nullptr && max_pool_size->isSet()){ isObjectUpdated = true; break;}
        if(queue_size != nullptr && queue_size->isSet()){ isObjectUpdated = true; break;}
        if(keep_alive_time != nullptr && keep_alive_time->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
