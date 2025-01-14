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


#include "OAIComAdobeGraniteCorsImplCORSPolicyImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::OAIComAdobeGraniteCorsImplCORSPolicyImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::OAIComAdobeGraniteCorsImplCORSPolicyImplProperties() {
    this->init();
}

OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::~OAIComAdobeGraniteCorsImplCORSPolicyImplProperties() {
    
}

void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::init() {
    m_alloworigin_isSet = false;
    m_alloworiginregexp_isSet = false;
    m_allowedpaths_isSet = false;
    m_exposedheaders_isSet = false;
    m_maxage_isSet = false;
    m_supportedheaders_isSet = false;
    m_supportedmethods_isSet = false;
    m_supportscredentials_isSet = false;
}

void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(alloworigin, json[QString("alloworigin")]);
    
    ::OpenAPI::fromJsonValue(alloworiginregexp, json[QString("alloworiginregexp")]);
    
    ::OpenAPI::fromJsonValue(allowedpaths, json[QString("allowedpaths")]);
    
    ::OpenAPI::fromJsonValue(exposedheaders, json[QString("exposedheaders")]);
    
    ::OpenAPI::fromJsonValue(maxage, json[QString("maxage")]);
    
    ::OpenAPI::fromJsonValue(supportedheaders, json[QString("supportedheaders")]);
    
    ::OpenAPI::fromJsonValue(supportedmethods, json[QString("supportedmethods")]);
    
    ::OpenAPI::fromJsonValue(supportscredentials, json[QString("supportscredentials")]);
    
}

QString
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(alloworigin.isSet()){
        obj.insert(QString("alloworigin"), ::OpenAPI::toJsonValue(alloworigin));
    }
	if(alloworiginregexp.isSet()){
        obj.insert(QString("alloworiginregexp"), ::OpenAPI::toJsonValue(alloworiginregexp));
    }
	if(allowedpaths.isSet()){
        obj.insert(QString("allowedpaths"), ::OpenAPI::toJsonValue(allowedpaths));
    }
	if(exposedheaders.isSet()){
        obj.insert(QString("exposedheaders"), ::OpenAPI::toJsonValue(exposedheaders));
    }
	if(maxage.isSet()){
        obj.insert(QString("maxage"), ::OpenAPI::toJsonValue(maxage));
    }
	if(supportedheaders.isSet()){
        obj.insert(QString("supportedheaders"), ::OpenAPI::toJsonValue(supportedheaders));
    }
	if(supportedmethods.isSet()){
        obj.insert(QString("supportedmethods"), ::OpenAPI::toJsonValue(supportedmethods));
    }
	if(supportscredentials.isSet()){
        obj.insert(QString("supportscredentials"), ::OpenAPI::toJsonValue(supportscredentials));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getAlloworigin() const {
    return alloworigin;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setAlloworigin(const OAIConfigNodePropertyArray &alloworigin) {
    this->alloworigin = alloworigin;
    this->m_alloworigin_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getAlloworiginregexp() const {
    return alloworiginregexp;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setAlloworiginregexp(const OAIConfigNodePropertyArray &alloworiginregexp) {
    this->alloworiginregexp = alloworiginregexp;
    this->m_alloworiginregexp_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getAllowedpaths() const {
    return allowedpaths;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setAllowedpaths(const OAIConfigNodePropertyArray &allowedpaths) {
    this->allowedpaths = allowedpaths;
    this->m_allowedpaths_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getExposedheaders() const {
    return exposedheaders;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setExposedheaders(const OAIConfigNodePropertyArray &exposedheaders) {
    this->exposedheaders = exposedheaders;
    this->m_exposedheaders_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getMaxage() const {
    return maxage;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setMaxage(const OAIConfigNodePropertyInteger &maxage) {
    this->maxage = maxage;
    this->m_maxage_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getSupportedheaders() const {
    return supportedheaders;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setSupportedheaders(const OAIConfigNodePropertyArray &supportedheaders) {
    this->supportedheaders = supportedheaders;
    this->m_supportedheaders_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getSupportedmethods() const {
    return supportedmethods;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setSupportedmethods(const OAIConfigNodePropertyArray &supportedmethods) {
    this->supportedmethods = supportedmethods;
    this->m_supportedmethods_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::getSupportscredentials() const {
    return supportscredentials;
}
void
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::setSupportscredentials(const OAIConfigNodePropertyBoolean &supportscredentials) {
    this->supportscredentials = supportscredentials;
    this->m_supportscredentials_isSet = true;
}


bool
OAIComAdobeGraniteCorsImplCORSPolicyImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(alloworigin.isSet()){ isObjectUpdated = true; break;}
    
        if(alloworiginregexp.isSet()){ isObjectUpdated = true; break;}
    
        if(allowedpaths.isSet()){ isObjectUpdated = true; break;}
    
        if(exposedheaders.isSet()){ isObjectUpdated = true; break;}
    
        if(maxage.isSet()){ isObjectUpdated = true; break;}
    
        if(supportedheaders.isSet()){ isObjectUpdated = true; break;}
    
        if(supportedmethods.isSet()){ isObjectUpdated = true; break;}
    
        if(supportscredentials.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

