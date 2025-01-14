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


#include "OAIComDayCqDamIdsImplIDSJobProcessorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamIdsImplIDSJobProcessorProperties::OAIComDayCqDamIdsImplIDSJobProcessorProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamIdsImplIDSJobProcessorProperties::OAIComDayCqDamIdsImplIDSJobProcessorProperties() {
    this->init();
}

OAIComDayCqDamIdsImplIDSJobProcessorProperties::~OAIComDayCqDamIdsImplIDSJobProcessorProperties() {
    
}

void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::init() {
    m_enable_multisession_isSet = false;
    m_ids_cc_enable_isSet = false;
    m_enable_retry_isSet = false;
    m_enable_retry_scripterror_isSet = false;
    m_externalizer_domain_cqhost_isSet = false;
    m_externalizer_domain_http_isSet = false;
}

void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(enable_multisession, json[QString("enable.multisession")]);
    
    ::OpenAPI::fromJsonValue(ids_cc_enable, json[QString("ids.cc.enable")]);
    
    ::OpenAPI::fromJsonValue(enable_retry, json[QString("enable.retry")]);
    
    ::OpenAPI::fromJsonValue(enable_retry_scripterror, json[QString("enable.retry.scripterror")]);
    
    ::OpenAPI::fromJsonValue(externalizer_domain_cqhost, json[QString("externalizer.domain.cqhost")]);
    
    ::OpenAPI::fromJsonValue(externalizer_domain_http, json[QString("externalizer.domain.http")]);
    
}

QString
OAIComDayCqDamIdsImplIDSJobProcessorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamIdsImplIDSJobProcessorProperties::asJsonObject() const {
    QJsonObject obj;
	if(enable_multisession.isSet()){
        obj.insert(QString("enable.multisession"), ::OpenAPI::toJsonValue(enable_multisession));
    }
	if(ids_cc_enable.isSet()){
        obj.insert(QString("ids.cc.enable"), ::OpenAPI::toJsonValue(ids_cc_enable));
    }
	if(enable_retry.isSet()){
        obj.insert(QString("enable.retry"), ::OpenAPI::toJsonValue(enable_retry));
    }
	if(enable_retry_scripterror.isSet()){
        obj.insert(QString("enable.retry.scripterror"), ::OpenAPI::toJsonValue(enable_retry_scripterror));
    }
	if(externalizer_domain_cqhost.isSet()){
        obj.insert(QString("externalizer.domain.cqhost"), ::OpenAPI::toJsonValue(externalizer_domain_cqhost));
    }
	if(externalizer_domain_http.isSet()){
        obj.insert(QString("externalizer.domain.http"), ::OpenAPI::toJsonValue(externalizer_domain_http));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getEnableMultisession() const {
    return enable_multisession;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setEnableMultisession(const OAIConfigNodePropertyBoolean &enable_multisession) {
    this->enable_multisession = enable_multisession;
    this->m_enable_multisession_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getIdsCcEnable() const {
    return ids_cc_enable;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setIdsCcEnable(const OAIConfigNodePropertyBoolean &ids_cc_enable) {
    this->ids_cc_enable = ids_cc_enable;
    this->m_ids_cc_enable_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getEnableRetry() const {
    return enable_retry;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setEnableRetry(const OAIConfigNodePropertyBoolean &enable_retry) {
    this->enable_retry = enable_retry;
    this->m_enable_retry_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getEnableRetryScripterror() const {
    return enable_retry_scripterror;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setEnableRetryScripterror(const OAIConfigNodePropertyBoolean &enable_retry_scripterror) {
    this->enable_retry_scripterror = enable_retry_scripterror;
    this->m_enable_retry_scripterror_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getExternalizerDomainCqhost() const {
    return externalizer_domain_cqhost;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setExternalizerDomainCqhost(const OAIConfigNodePropertyString &externalizer_domain_cqhost) {
    this->externalizer_domain_cqhost = externalizer_domain_cqhost;
    this->m_externalizer_domain_cqhost_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqDamIdsImplIDSJobProcessorProperties::getExternalizerDomainHttp() const {
    return externalizer_domain_http;
}
void
OAIComDayCqDamIdsImplIDSJobProcessorProperties::setExternalizerDomainHttp(const OAIConfigNodePropertyString &externalizer_domain_http) {
    this->externalizer_domain_http = externalizer_domain_http;
    this->m_externalizer_domain_http_isSet = true;
}


bool
OAIComDayCqDamIdsImplIDSJobProcessorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(enable_multisession.isSet()){ isObjectUpdated = true; break;}
    
        if(ids_cc_enable.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_retry.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_retry_scripterror.isSet()){ isObjectUpdated = true; break;}
    
        if(externalizer_domain_cqhost.isSet()){ isObjectUpdated = true; break;}
    
        if(externalizer_domain_http.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

