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


#include "OAIOrgApacheSlingEngineImplSlingMainServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingEngineImplSlingMainServletProperties::OAIOrgApacheSlingEngineImplSlingMainServletProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingEngineImplSlingMainServletProperties::OAIOrgApacheSlingEngineImplSlingMainServletProperties() {
    this->init();
}

OAIOrgApacheSlingEngineImplSlingMainServletProperties::~OAIOrgApacheSlingEngineImplSlingMainServletProperties() {
    
}

void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::init() {
    m_sling_max_calls_isSet = false;
    m_sling_max_inclusions_isSet = false;
    m_sling_trace_allow_isSet = false;
    m_sling_max_record_requests_isSet = false;
    m_sling_store_pattern_requests_isSet = false;
    m_sling_serverinfo_isSet = false;
    m_sling_additional_response_headers_isSet = false;
}

void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_max_calls, json[QString("sling.max.calls")]);
    
    ::OpenAPI::fromJsonValue(sling_max_inclusions, json[QString("sling.max.inclusions")]);
    
    ::OpenAPI::fromJsonValue(sling_trace_allow, json[QString("sling.trace.allow")]);
    
    ::OpenAPI::fromJsonValue(sling_max_record_requests, json[QString("sling.max.record.requests")]);
    
    ::OpenAPI::fromJsonValue(sling_store_pattern_requests, json[QString("sling.store.pattern.requests")]);
    
    ::OpenAPI::fromJsonValue(sling_serverinfo, json[QString("sling.serverinfo")]);
    
    ::OpenAPI::fromJsonValue(sling_additional_response_headers, json[QString("sling.additional.response.headers")]);
    
}

QString
OAIOrgApacheSlingEngineImplSlingMainServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingEngineImplSlingMainServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_max_calls.isSet()){
        obj.insert(QString("sling.max.calls"), ::OpenAPI::toJsonValue(sling_max_calls));
    }
	if(sling_max_inclusions.isSet()){
        obj.insert(QString("sling.max.inclusions"), ::OpenAPI::toJsonValue(sling_max_inclusions));
    }
	if(sling_trace_allow.isSet()){
        obj.insert(QString("sling.trace.allow"), ::OpenAPI::toJsonValue(sling_trace_allow));
    }
	if(sling_max_record_requests.isSet()){
        obj.insert(QString("sling.max.record.requests"), ::OpenAPI::toJsonValue(sling_max_record_requests));
    }
	if(sling_store_pattern_requests.isSet()){
        obj.insert(QString("sling.store.pattern.requests"), ::OpenAPI::toJsonValue(sling_store_pattern_requests));
    }
	if(sling_serverinfo.isSet()){
        obj.insert(QString("sling.serverinfo"), ::OpenAPI::toJsonValue(sling_serverinfo));
    }
	if(sling_additional_response_headers.isSet()){
        obj.insert(QString("sling.additional.response.headers"), ::OpenAPI::toJsonValue(sling_additional_response_headers));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingMaxCalls() const {
    return sling_max_calls;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingMaxCalls(const OAIConfigNodePropertyInteger &sling_max_calls) {
    this->sling_max_calls = sling_max_calls;
    this->m_sling_max_calls_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingMaxInclusions() const {
    return sling_max_inclusions;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingMaxInclusions(const OAIConfigNodePropertyInteger &sling_max_inclusions) {
    this->sling_max_inclusions = sling_max_inclusions;
    this->m_sling_max_inclusions_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingTraceAllow() const {
    return sling_trace_allow;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingTraceAllow(const OAIConfigNodePropertyBoolean &sling_trace_allow) {
    this->sling_trace_allow = sling_trace_allow;
    this->m_sling_trace_allow_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingMaxRecordRequests() const {
    return sling_max_record_requests;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingMaxRecordRequests(const OAIConfigNodePropertyInteger &sling_max_record_requests) {
    this->sling_max_record_requests = sling_max_record_requests;
    this->m_sling_max_record_requests_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingStorePatternRequests() const {
    return sling_store_pattern_requests;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingStorePatternRequests(const OAIConfigNodePropertyArray &sling_store_pattern_requests) {
    this->sling_store_pattern_requests = sling_store_pattern_requests;
    this->m_sling_store_pattern_requests_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingServerinfo() const {
    return sling_serverinfo;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingServerinfo(const OAIConfigNodePropertyString &sling_serverinfo) {
    this->sling_serverinfo = sling_serverinfo;
    this->m_sling_serverinfo_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingEngineImplSlingMainServletProperties::getSlingAdditionalResponseHeaders() const {
    return sling_additional_response_headers;
}
void
OAIOrgApacheSlingEngineImplSlingMainServletProperties::setSlingAdditionalResponseHeaders(const OAIConfigNodePropertyArray &sling_additional_response_headers) {
    this->sling_additional_response_headers = sling_additional_response_headers;
    this->m_sling_additional_response_headers_isSet = true;
}


bool
OAIOrgApacheSlingEngineImplSlingMainServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_max_calls.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_max_inclusions.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_trace_allow.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_max_record_requests.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_store_pattern_requests.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_serverinfo.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_additional_response_headers.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

