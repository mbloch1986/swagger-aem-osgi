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


#include "OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties() {
    this->init();
}

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::~OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties() {
    
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::init() {
    m_default_timeout_isSet = false;
    m_max_timeout_isSet = false;
    m_default_period_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(default_timeout, json[QString("default.timeout")]);
    
    ::OpenAPI::fromJsonValue(max_timeout, json[QString("max.timeout")]);
    
    ::OpenAPI::fromJsonValue(default_period, json[QString("default.period")]);
    
}

QString
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::asJsonObject() const {
    QJsonObject obj;
	if(default_timeout.isSet()){
        obj.insert(QString("default.timeout"), ::OpenAPI::toJsonValue(default_timeout));
    }
	if(max_timeout.isSet()){
        obj.insert(QString("max.timeout"), ::OpenAPI::toJsonValue(max_timeout));
    }
	if(default_period.isSet()){
        obj.insert(QString("default.period"), ::OpenAPI::toJsonValue(default_period));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getDefaultTimeout() const {
    return default_timeout;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setDefaultTimeout(const OAIConfigNodePropertyInteger &default_timeout) {
    this->default_timeout = default_timeout;
    this->m_default_timeout_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getMaxTimeout() const {
    return max_timeout;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setMaxTimeout(const OAIConfigNodePropertyInteger &max_timeout) {
    this->max_timeout = max_timeout;
    this->m_max_timeout_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getDefaultPeriod() const {
    return default_period;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setDefaultPeriod(const OAIConfigNodePropertyInteger &default_period) {
    this->default_period = default_period;
    this->m_default_period_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(default_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(max_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(default_period.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
