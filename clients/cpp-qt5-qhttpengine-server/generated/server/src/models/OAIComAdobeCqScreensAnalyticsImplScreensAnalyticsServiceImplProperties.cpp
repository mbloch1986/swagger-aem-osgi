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


#include "OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties() {
    this->init();
}

OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::~OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties() {
    
}

void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::init() {
    m_com_adobe_cq_screens_analytics_impl_url_isSet = false;
    m_com_adobe_cq_screens_analytics_impl_apikey_isSet = false;
    m_com_adobe_cq_screens_analytics_impl_project_isSet = false;
    m_com_adobe_cq_screens_analytics_impl_environment_isSet = false;
    m_com_adobe_cq_screens_analytics_impl_send_frequency_isSet = false;
}

void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_analytics_impl_url, json[QString("com.adobe.cq.screens.analytics.impl.url")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_analytics_impl_apikey, json[QString("com.adobe.cq.screens.analytics.impl.apikey")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_analytics_impl_project, json[QString("com.adobe.cq.screens.analytics.impl.project")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_analytics_impl_environment, json[QString("com.adobe.cq.screens.analytics.impl.environment")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_analytics_impl_send_frequency, json[QString("com.adobe.cq.screens.analytics.impl.sendFrequency")]);
    
}

QString
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(com_adobe_cq_screens_analytics_impl_url.isSet()){
        obj.insert(QString("com.adobe.cq.screens.analytics.impl.url"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_analytics_impl_url));
    }
	if(com_adobe_cq_screens_analytics_impl_apikey.isSet()){
        obj.insert(QString("com.adobe.cq.screens.analytics.impl.apikey"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_analytics_impl_apikey));
    }
	if(com_adobe_cq_screens_analytics_impl_project.isSet()){
        obj.insert(QString("com.adobe.cq.screens.analytics.impl.project"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_analytics_impl_project));
    }
	if(com_adobe_cq_screens_analytics_impl_environment.isSet()){
        obj.insert(QString("com.adobe.cq.screens.analytics.impl.environment"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_analytics_impl_environment));
    }
	if(com_adobe_cq_screens_analytics_impl_send_frequency.isSet()){
        obj.insert(QString("com.adobe.cq.screens.analytics.impl.sendFrequency"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_analytics_impl_send_frequency));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplUrl() const {
    return com_adobe_cq_screens_analytics_impl_url;
}
void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplUrl(const OAIConfigNodePropertyString &com_adobe_cq_screens_analytics_impl_url) {
    this->com_adobe_cq_screens_analytics_impl_url = com_adobe_cq_screens_analytics_impl_url;
    this->m_com_adobe_cq_screens_analytics_impl_url_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplApikey() const {
    return com_adobe_cq_screens_analytics_impl_apikey;
}
void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplApikey(const OAIConfigNodePropertyString &com_adobe_cq_screens_analytics_impl_apikey) {
    this->com_adobe_cq_screens_analytics_impl_apikey = com_adobe_cq_screens_analytics_impl_apikey;
    this->m_com_adobe_cq_screens_analytics_impl_apikey_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplProject() const {
    return com_adobe_cq_screens_analytics_impl_project;
}
void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplProject(const OAIConfigNodePropertyString &com_adobe_cq_screens_analytics_impl_project) {
    this->com_adobe_cq_screens_analytics_impl_project = com_adobe_cq_screens_analytics_impl_project;
    this->m_com_adobe_cq_screens_analytics_impl_project_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplEnvironment() const {
    return com_adobe_cq_screens_analytics_impl_environment;
}
void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplEnvironment(const OAIConfigNodePropertyDropDown &com_adobe_cq_screens_analytics_impl_environment) {
    this->com_adobe_cq_screens_analytics_impl_environment = com_adobe_cq_screens_analytics_impl_environment;
    this->m_com_adobe_cq_screens_analytics_impl_environment_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::getComAdobeCqScreensAnalyticsImplSendFrequency() const {
    return com_adobe_cq_screens_analytics_impl_send_frequency;
}
void
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::setComAdobeCqScreensAnalyticsImplSendFrequency(const OAIConfigNodePropertyInteger &com_adobe_cq_screens_analytics_impl_send_frequency) {
    this->com_adobe_cq_screens_analytics_impl_send_frequency = com_adobe_cq_screens_analytics_impl_send_frequency;
    this->m_com_adobe_cq_screens_analytics_impl_send_frequency_isSet = true;
}


bool
OAIComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(com_adobe_cq_screens_analytics_impl_url.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_analytics_impl_apikey.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_analytics_impl_project.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_analytics_impl_environment.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_analytics_impl_send_frequency.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

