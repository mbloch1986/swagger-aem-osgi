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
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties() {
    init();
}

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::~OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::init() {
    default_timeout = new OAIConfigNodePropertyInteger();
    m_default_timeout_isSet = false;
    max_timeout = new OAIConfigNodePropertyInteger();
    m_max_timeout_isSet = false;
    default_period = new OAIConfigNodePropertyInteger();
    m_default_period_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::cleanup() {
    if(default_timeout != nullptr) { 
        delete default_timeout;
    }
    if(max_timeout != nullptr) { 
        delete max_timeout;
    }
    if(default_period != nullptr) { 
        delete default_period;
    }
}

OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties*
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&default_timeout, pJson["default.timeout"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&max_timeout, pJson["max.timeout"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&default_period, pJson["default.period"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((default_timeout != nullptr) && (default_timeout->isSet())){
        toJsonValue(QString("default.timeout"), default_timeout, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((max_timeout != nullptr) && (max_timeout->isSet())){
        toJsonValue(QString("max.timeout"), max_timeout, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((default_period != nullptr) && (default_period->isSet())){
        toJsonValue(QString("default.period"), default_period, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getDefaultTimeout() {
    return default_timeout;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setDefaultTimeout(OAIConfigNodePropertyInteger* default_timeout) {
    this->default_timeout = default_timeout;
    this->m_default_timeout_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getMaxTimeout() {
    return max_timeout;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setMaxTimeout(OAIConfigNodePropertyInteger* max_timeout) {
    this->max_timeout = max_timeout;
    this->m_max_timeout_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::getDefaultPeriod() {
    return default_period;
}
void
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::setDefaultPeriod(OAIConfigNodePropertyInteger* default_period) {
    this->default_period = default_period;
    this->m_default_period_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(default_timeout != nullptr && default_timeout->isSet()){ isObjectUpdated = true; break;}
        if(max_timeout != nullptr && max_timeout->isSet()){ isObjectUpdated = true; break;}
        if(default_period != nullptr && default_period->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
