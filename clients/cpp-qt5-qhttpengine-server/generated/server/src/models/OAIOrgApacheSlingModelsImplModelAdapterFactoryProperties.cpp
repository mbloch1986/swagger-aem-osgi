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


#include "OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties() {
    this->init();
}

OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::~OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties() {
    
}

void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::init() {
    m_osgi_http_whiteboard_listener_isSet = false;
    m_osgi_http_whiteboard_context_select_isSet = false;
    m_max_recursion_depth_isSet = false;
    m_cleanup_job_period_isSet = false;
}

void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(osgi_http_whiteboard_listener, json[QString("osgi.http.whiteboard.listener")]);
    
    ::OpenAPI::fromJsonValue(osgi_http_whiteboard_context_select, json[QString("osgi.http.whiteboard.context.select")]);
    
    ::OpenAPI::fromJsonValue(max_recursion_depth, json[QString("max.recursion.depth")]);
    
    ::OpenAPI::fromJsonValue(cleanup_job_period, json[QString("cleanup.job.period")]);
    
}

QString
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(osgi_http_whiteboard_listener.isSet()){
        obj.insert(QString("osgi.http.whiteboard.listener"), ::OpenAPI::toJsonValue(osgi_http_whiteboard_listener));
    }
	if(osgi_http_whiteboard_context_select.isSet()){
        obj.insert(QString("osgi.http.whiteboard.context.select"), ::OpenAPI::toJsonValue(osgi_http_whiteboard_context_select));
    }
	if(max_recursion_depth.isSet()){
        obj.insert(QString("max.recursion.depth"), ::OpenAPI::toJsonValue(max_recursion_depth));
    }
	if(cleanup_job_period.isSet()){
        obj.insert(QString("cleanup.job.period"), ::OpenAPI::toJsonValue(cleanup_job_period));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::getOsgiHttpWhiteboardListener() const {
    return osgi_http_whiteboard_listener;
}
void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::setOsgiHttpWhiteboardListener(const OAIConfigNodePropertyString &osgi_http_whiteboard_listener) {
    this->osgi_http_whiteboard_listener = osgi_http_whiteboard_listener;
    this->m_osgi_http_whiteboard_listener_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::getOsgiHttpWhiteboardContextSelect() const {
    return osgi_http_whiteboard_context_select;
}
void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::setOsgiHttpWhiteboardContextSelect(const OAIConfigNodePropertyString &osgi_http_whiteboard_context_select) {
    this->osgi_http_whiteboard_context_select = osgi_http_whiteboard_context_select;
    this->m_osgi_http_whiteboard_context_select_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::getMaxRecursionDepth() const {
    return max_recursion_depth;
}
void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::setMaxRecursionDepth(const OAIConfigNodePropertyInteger &max_recursion_depth) {
    this->max_recursion_depth = max_recursion_depth;
    this->m_max_recursion_depth_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::getCleanupJobPeriod() const {
    return cleanup_job_period;
}
void
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::setCleanupJobPeriod(const OAIConfigNodePropertyInteger &cleanup_job_period) {
    this->cleanup_job_period = cleanup_job_period;
    this->m_cleanup_job_period_isSet = true;
}


bool
OAIOrgApacheSlingModelsImplModelAdapterFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(osgi_http_whiteboard_listener.isSet()){ isObjectUpdated = true; break;}
    
        if(osgi_http_whiteboard_context_select.isSet()){ isObjectUpdated = true; break;}
    
        if(max_recursion_depth.isSet()){ isObjectUpdated = true; break;}
    
        if(cleanup_job_period.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

