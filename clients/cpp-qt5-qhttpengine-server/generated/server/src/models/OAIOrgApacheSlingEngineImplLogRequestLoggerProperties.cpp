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


#include "OAIOrgApacheSlingEngineImplLogRequestLoggerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::OAIOrgApacheSlingEngineImplLogRequestLoggerProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::OAIOrgApacheSlingEngineImplLogRequestLoggerProperties() {
    this->init();
}

OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::~OAIOrgApacheSlingEngineImplLogRequestLoggerProperties() {
    
}

void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::init() {
    m_request_log_output_isSet = false;
    m_request_log_outputtype_isSet = false;
    m_request_log_enabled_isSet = false;
    m_access_log_output_isSet = false;
    m_access_log_outputtype_isSet = false;
    m_access_log_enabled_isSet = false;
}

void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(request_log_output, json[QString("request.log.output")]);
    
    ::OpenAPI::fromJsonValue(request_log_outputtype, json[QString("request.log.outputtype")]);
    
    ::OpenAPI::fromJsonValue(request_log_enabled, json[QString("request.log.enabled")]);
    
    ::OpenAPI::fromJsonValue(access_log_output, json[QString("access.log.output")]);
    
    ::OpenAPI::fromJsonValue(access_log_outputtype, json[QString("access.log.outputtype")]);
    
    ::OpenAPI::fromJsonValue(access_log_enabled, json[QString("access.log.enabled")]);
    
}

QString
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::asJsonObject() const {
    QJsonObject obj;
	if(request_log_output.isSet()){
        obj.insert(QString("request.log.output"), ::OpenAPI::toJsonValue(request_log_output));
    }
	if(request_log_outputtype.isSet()){
        obj.insert(QString("request.log.outputtype"), ::OpenAPI::toJsonValue(request_log_outputtype));
    }
	if(request_log_enabled.isSet()){
        obj.insert(QString("request.log.enabled"), ::OpenAPI::toJsonValue(request_log_enabled));
    }
	if(access_log_output.isSet()){
        obj.insert(QString("access.log.output"), ::OpenAPI::toJsonValue(access_log_output));
    }
	if(access_log_outputtype.isSet()){
        obj.insert(QString("access.log.outputtype"), ::OpenAPI::toJsonValue(access_log_outputtype));
    }
	if(access_log_enabled.isSet()){
        obj.insert(QString("access.log.enabled"), ::OpenAPI::toJsonValue(access_log_enabled));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogOutput() const {
    return request_log_output;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogOutput(const OAIConfigNodePropertyString &request_log_output) {
    this->request_log_output = request_log_output;
    this->m_request_log_output_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogOutputtype() const {
    return request_log_outputtype;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogOutputtype(const OAIConfigNodePropertyDropDown &request_log_outputtype) {
    this->request_log_outputtype = request_log_outputtype;
    this->m_request_log_outputtype_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getRequestLogEnabled() const {
    return request_log_enabled;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setRequestLogEnabled(const OAIConfigNodePropertyBoolean &request_log_enabled) {
    this->request_log_enabled = request_log_enabled;
    this->m_request_log_enabled_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogOutput() const {
    return access_log_output;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogOutput(const OAIConfigNodePropertyString &access_log_output) {
    this->access_log_output = access_log_output;
    this->m_access_log_output_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogOutputtype() const {
    return access_log_outputtype;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogOutputtype(const OAIConfigNodePropertyDropDown &access_log_outputtype) {
    this->access_log_outputtype = access_log_outputtype;
    this->m_access_log_outputtype_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::getAccessLogEnabled() const {
    return access_log_enabled;
}
void
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::setAccessLogEnabled(const OAIConfigNodePropertyBoolean &access_log_enabled) {
    this->access_log_enabled = access_log_enabled;
    this->m_access_log_enabled_isSet = true;
}


bool
OAIOrgApacheSlingEngineImplLogRequestLoggerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(request_log_output.isSet()){ isObjectUpdated = true; break;}
    
        if(request_log_outputtype.isSet()){ isObjectUpdated = true; break;}
    
        if(request_log_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(access_log_output.isSet()){ isObjectUpdated = true; break;}
    
        if(access_log_outputtype.isSet()){ isObjectUpdated = true; break;}
    
        if(access_log_enabled.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
