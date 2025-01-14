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


#include "OAIComAdobeGraniteCsrfImplCSRFFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteCsrfImplCSRFFilterProperties::OAIComAdobeGraniteCsrfImplCSRFFilterProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteCsrfImplCSRFFilterProperties::OAIComAdobeGraniteCsrfImplCSRFFilterProperties() {
    this->init();
}

OAIComAdobeGraniteCsrfImplCSRFFilterProperties::~OAIComAdobeGraniteCsrfImplCSRFFilterProperties() {
    
}

void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::init() {
    m_filter_methods_isSet = false;
    m_filter_enable_safe_user_agents_isSet = false;
    m_filter_safe_user_agents_isSet = false;
    m_filter_excluded_paths_isSet = false;
}

void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(filter_methods, json[QString("filter.methods")]);
    
    ::OpenAPI::fromJsonValue(filter_enable_safe_user_agents, json[QString("filter.enable.safe.user.agents")]);
    
    ::OpenAPI::fromJsonValue(filter_safe_user_agents, json[QString("filter.safe.user.agents")]);
    
    ::OpenAPI::fromJsonValue(filter_excluded_paths, json[QString("filter.excluded.paths")]);
    
}

QString
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::asJsonObject() const {
    QJsonObject obj;
	if(filter_methods.isSet()){
        obj.insert(QString("filter.methods"), ::OpenAPI::toJsonValue(filter_methods));
    }
	if(filter_enable_safe_user_agents.isSet()){
        obj.insert(QString("filter.enable.safe.user.agents"), ::OpenAPI::toJsonValue(filter_enable_safe_user_agents));
    }
	if(filter_safe_user_agents.isSet()){
        obj.insert(QString("filter.safe.user.agents"), ::OpenAPI::toJsonValue(filter_safe_user_agents));
    }
	if(filter_excluded_paths.isSet()){
        obj.insert(QString("filter.excluded.paths"), ::OpenAPI::toJsonValue(filter_excluded_paths));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::getFilterMethods() const {
    return filter_methods;
}
void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::setFilterMethods(const OAIConfigNodePropertyArray &filter_methods) {
    this->filter_methods = filter_methods;
    this->m_filter_methods_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::getFilterEnableSafeUserAgents() const {
    return filter_enable_safe_user_agents;
}
void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::setFilterEnableSafeUserAgents(const OAIConfigNodePropertyBoolean &filter_enable_safe_user_agents) {
    this->filter_enable_safe_user_agents = filter_enable_safe_user_agents;
    this->m_filter_enable_safe_user_agents_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::getFilterSafeUserAgents() const {
    return filter_safe_user_agents;
}
void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::setFilterSafeUserAgents(const OAIConfigNodePropertyArray &filter_safe_user_agents) {
    this->filter_safe_user_agents = filter_safe_user_agents;
    this->m_filter_safe_user_agents_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::getFilterExcludedPaths() const {
    return filter_excluded_paths;
}
void
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::setFilterExcludedPaths(const OAIConfigNodePropertyArray &filter_excluded_paths) {
    this->filter_excluded_paths = filter_excluded_paths;
    this->m_filter_excluded_paths_isSet = true;
}


bool
OAIComAdobeGraniteCsrfImplCSRFFilterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(filter_methods.isSet()){ isObjectUpdated = true; break;}
    
        if(filter_enable_safe_user_agents.isSet()){ isObjectUpdated = true; break;}
    
        if(filter_safe_user_agents.isSet()){ isObjectUpdated = true; break;}
    
        if(filter_excluded_paths.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

