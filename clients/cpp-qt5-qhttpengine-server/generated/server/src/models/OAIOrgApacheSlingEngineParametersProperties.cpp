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


#include "OAIOrgApacheSlingEngineParametersProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingEngineParametersProperties::OAIOrgApacheSlingEngineParametersProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingEngineParametersProperties::OAIOrgApacheSlingEngineParametersProperties() {
    this->init();
}

OAIOrgApacheSlingEngineParametersProperties::~OAIOrgApacheSlingEngineParametersProperties() {
    
}

void
OAIOrgApacheSlingEngineParametersProperties::init() {
    m_sling_default_parameter_encoding_isSet = false;
    m_sling_default_max_parameters_isSet = false;
    m_file_location_isSet = false;
    m_file_threshold_isSet = false;
    m_file_max_isSet = false;
    m_request_max_isSet = false;
    m_sling_default_parameter_check_for_additional_container_parameters_isSet = false;
}

void
OAIOrgApacheSlingEngineParametersProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingEngineParametersProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sling_default_parameter_encoding, json[QString("sling.default.parameter.encoding")]);
    
    ::OpenAPI::fromJsonValue(sling_default_max_parameters, json[QString("sling.default.max.parameters")]);
    
    ::OpenAPI::fromJsonValue(file_location, json[QString("file.location")]);
    
    ::OpenAPI::fromJsonValue(file_threshold, json[QString("file.threshold")]);
    
    ::OpenAPI::fromJsonValue(file_max, json[QString("file.max")]);
    
    ::OpenAPI::fromJsonValue(request_max, json[QString("request.max")]);
    
    ::OpenAPI::fromJsonValue(sling_default_parameter_check_for_additional_container_parameters, json[QString("sling.default.parameter.checkForAdditionalContainerParameters")]);
    
}

QString
OAIOrgApacheSlingEngineParametersProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingEngineParametersProperties::asJsonObject() const {
    QJsonObject obj;
	if(sling_default_parameter_encoding.isSet()){
        obj.insert(QString("sling.default.parameter.encoding"), ::OpenAPI::toJsonValue(sling_default_parameter_encoding));
    }
	if(sling_default_max_parameters.isSet()){
        obj.insert(QString("sling.default.max.parameters"), ::OpenAPI::toJsonValue(sling_default_max_parameters));
    }
	if(file_location.isSet()){
        obj.insert(QString("file.location"), ::OpenAPI::toJsonValue(file_location));
    }
	if(file_threshold.isSet()){
        obj.insert(QString("file.threshold"), ::OpenAPI::toJsonValue(file_threshold));
    }
	if(file_max.isSet()){
        obj.insert(QString("file.max"), ::OpenAPI::toJsonValue(file_max));
    }
	if(request_max.isSet()){
        obj.insert(QString("request.max"), ::OpenAPI::toJsonValue(request_max));
    }
	if(sling_default_parameter_check_for_additional_container_parameters.isSet()){
        obj.insert(QString("sling.default.parameter.checkForAdditionalContainerParameters"), ::OpenAPI::toJsonValue(sling_default_parameter_check_for_additional_container_parameters));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEngineParametersProperties::getSlingDefaultParameterEncoding() const {
    return sling_default_parameter_encoding;
}
void
OAIOrgApacheSlingEngineParametersProperties::setSlingDefaultParameterEncoding(const OAIConfigNodePropertyString &sling_default_parameter_encoding) {
    this->sling_default_parameter_encoding = sling_default_parameter_encoding;
    this->m_sling_default_parameter_encoding_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineParametersProperties::getSlingDefaultMaxParameters() const {
    return sling_default_max_parameters;
}
void
OAIOrgApacheSlingEngineParametersProperties::setSlingDefaultMaxParameters(const OAIConfigNodePropertyInteger &sling_default_max_parameters) {
    this->sling_default_max_parameters = sling_default_max_parameters;
    this->m_sling_default_max_parameters_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingEngineParametersProperties::getFileLocation() const {
    return file_location;
}
void
OAIOrgApacheSlingEngineParametersProperties::setFileLocation(const OAIConfigNodePropertyString &file_location) {
    this->file_location = file_location;
    this->m_file_location_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineParametersProperties::getFileThreshold() const {
    return file_threshold;
}
void
OAIOrgApacheSlingEngineParametersProperties::setFileThreshold(const OAIConfigNodePropertyInteger &file_threshold) {
    this->file_threshold = file_threshold;
    this->m_file_threshold_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineParametersProperties::getFileMax() const {
    return file_max;
}
void
OAIOrgApacheSlingEngineParametersProperties::setFileMax(const OAIConfigNodePropertyInteger &file_max) {
    this->file_max = file_max;
    this->m_file_max_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingEngineParametersProperties::getRequestMax() const {
    return request_max;
}
void
OAIOrgApacheSlingEngineParametersProperties::setRequestMax(const OAIConfigNodePropertyInteger &request_max) {
    this->request_max = request_max;
    this->m_request_max_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingEngineParametersProperties::getSlingDefaultParameterCheckForAdditionalContainerParameters() const {
    return sling_default_parameter_check_for_additional_container_parameters;
}
void
OAIOrgApacheSlingEngineParametersProperties::setSlingDefaultParameterCheckForAdditionalContainerParameters(const OAIConfigNodePropertyBoolean &sling_default_parameter_check_for_additional_container_parameters) {
    this->sling_default_parameter_check_for_additional_container_parameters = sling_default_parameter_check_for_additional_container_parameters;
    this->m_sling_default_parameter_check_for_additional_container_parameters_isSet = true;
}


bool
OAIOrgApacheSlingEngineParametersProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sling_default_parameter_encoding.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_default_max_parameters.isSet()){ isObjectUpdated = true; break;}
    
        if(file_location.isSet()){ isObjectUpdated = true; break;}
    
        if(file_threshold.isSet()){ isObjectUpdated = true; break;}
    
        if(file_max.isSet()){ isObjectUpdated = true; break;}
    
        if(request_max.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_default_parameter_check_for_additional_container_parameters.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

