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


#include "OAIComDayCqDamCoreImplDamEventRecorderImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplDamEventRecorderImplProperties::OAIComDayCqDamCoreImplDamEventRecorderImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplDamEventRecorderImplProperties::OAIComDayCqDamCoreImplDamEventRecorderImplProperties() {
    init();
}

OAIComDayCqDamCoreImplDamEventRecorderImplProperties::~OAIComDayCqDamCoreImplDamEventRecorderImplProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::init() {
    event_filter = new OAIConfigNodePropertyString();
    m_event_filter_isSet = false;
    event_queue_length = new OAIConfigNodePropertyInteger();
    m_event_queue_length_isSet = false;
    eventrecorder_enabled = new OAIConfigNodePropertyBoolean();
    m_eventrecorder_enabled_isSet = false;
    eventrecorder_blacklist = new OAIConfigNodePropertyArray();
    m_eventrecorder_blacklist_isSet = false;
    eventrecorder_eventtypes = new OAIConfigNodePropertyDropDown();
    m_eventrecorder_eventtypes_isSet = false;
}

void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::cleanup() {
    if(event_filter != nullptr) { 
        delete event_filter;
    }
    if(event_queue_length != nullptr) { 
        delete event_queue_length;
    }
    if(eventrecorder_enabled != nullptr) { 
        delete eventrecorder_enabled;
    }
    if(eventrecorder_blacklist != nullptr) { 
        delete eventrecorder_blacklist;
    }
    if(eventrecorder_eventtypes != nullptr) { 
        delete eventrecorder_eventtypes;
    }
}

OAIComDayCqDamCoreImplDamEventRecorderImplProperties*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&event_filter, pJson["event.filter"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&event_queue_length, pJson["event.queue.length"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&eventrecorder_enabled, pJson["eventrecorder.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&eventrecorder_blacklist, pJson["eventrecorder.blacklist"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&eventrecorder_eventtypes, pJson["eventrecorder.eventtypes"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
}

QString
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::asJsonObject() {
    QJsonObject obj;
    if((event_filter != nullptr) && (event_filter->isSet())){
        toJsonValue(QString("event.filter"), event_filter, obj, QString("OAIConfigNodePropertyString"));
    }
    if((event_queue_length != nullptr) && (event_queue_length->isSet())){
        toJsonValue(QString("event.queue.length"), event_queue_length, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((eventrecorder_enabled != nullptr) && (eventrecorder_enabled->isSet())){
        toJsonValue(QString("eventrecorder.enabled"), eventrecorder_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((eventrecorder_blacklist != nullptr) && (eventrecorder_blacklist->isSet())){
        toJsonValue(QString("eventrecorder.blacklist"), eventrecorder_blacklist, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((eventrecorder_eventtypes != nullptr) && (eventrecorder_eventtypes->isSet())){
        toJsonValue(QString("eventrecorder.eventtypes"), eventrecorder_eventtypes, obj, QString("OAIConfigNodePropertyDropDown"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::getEventFilter() {
    return event_filter;
}
void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::setEventFilter(OAIConfigNodePropertyString* event_filter) {
    this->event_filter = event_filter;
    this->m_event_filter_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::getEventQueueLength() {
    return event_queue_length;
}
void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::setEventQueueLength(OAIConfigNodePropertyInteger* event_queue_length) {
    this->event_queue_length = event_queue_length;
    this->m_event_queue_length_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::getEventrecorderEnabled() {
    return eventrecorder_enabled;
}
void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::setEventrecorderEnabled(OAIConfigNodePropertyBoolean* eventrecorder_enabled) {
    this->eventrecorder_enabled = eventrecorder_enabled;
    this->m_eventrecorder_enabled_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::getEventrecorderBlacklist() {
    return eventrecorder_blacklist;
}
void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::setEventrecorderBlacklist(OAIConfigNodePropertyArray* eventrecorder_blacklist) {
    this->eventrecorder_blacklist = eventrecorder_blacklist;
    this->m_eventrecorder_blacklist_isSet = true;
}

OAIConfigNodePropertyDropDown*
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::getEventrecorderEventtypes() {
    return eventrecorder_eventtypes;
}
void
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::setEventrecorderEventtypes(OAIConfigNodePropertyDropDown* eventrecorder_eventtypes) {
    this->eventrecorder_eventtypes = eventrecorder_eventtypes;
    this->m_eventrecorder_eventtypes_isSet = true;
}


bool
OAIComDayCqDamCoreImplDamEventRecorderImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(event_filter != nullptr && event_filter->isSet()){ isObjectUpdated = true; break;}
        if(event_queue_length != nullptr && event_queue_length->isSet()){ isObjectUpdated = true; break;}
        if(eventrecorder_enabled != nullptr && eventrecorder_enabled->isSet()){ isObjectUpdated = true; break;}
        if(eventrecorder_blacklist != nullptr && eventrecorder_blacklist->isSet()){ isObjectUpdated = true; break;}
        if(eventrecorder_eventtypes != nullptr && eventrecorder_eventtypes->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
