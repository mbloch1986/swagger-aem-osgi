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


#include "OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties() {
    this->init();
}

OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::~OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties() {
    
}

void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::init() {
    m_max_connections_isSet = false;
    m_max_requests_isSet = false;
    m_request_timeout_isSet = false;
    m_log_dir_isSet = false;
}

void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(max_connections, json[QString("maxConnections")]);
    
    ::OpenAPI::fromJsonValue(max_requests, json[QString("maxRequests")]);
    
    ::OpenAPI::fromJsonValue(request_timeout, json[QString("requestTimeout")]);
    
    ::OpenAPI::fromJsonValue(log_dir, json[QString("logDir")]);
    
}

QString
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::asJsonObject() const {
    QJsonObject obj;
	if(max_connections.isSet()){
        obj.insert(QString("maxConnections"), ::OpenAPI::toJsonValue(max_connections));
    }
	if(max_requests.isSet()){
        obj.insert(QString("maxRequests"), ::OpenAPI::toJsonValue(max_requests));
    }
	if(request_timeout.isSet()){
        obj.insert(QString("requestTimeout"), ::OpenAPI::toJsonValue(request_timeout));
    }
	if(log_dir.isSet()){
        obj.insert(QString("logDir"), ::OpenAPI::toJsonValue(log_dir));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getMaxConnections() const {
    return max_connections;
}
void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setMaxConnections(const OAIConfigNodePropertyString &max_connections) {
    this->max_connections = max_connections;
    this->m_max_connections_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getMaxRequests() const {
    return max_requests;
}
void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setMaxRequests(const OAIConfigNodePropertyString &max_requests) {
    this->max_requests = max_requests;
    this->m_max_requests_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getRequestTimeout() const {
    return request_timeout;
}
void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setRequestTimeout(const OAIConfigNodePropertyString &request_timeout) {
    this->request_timeout = request_timeout;
    this->m_request_timeout_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getLogDir() const {
    return log_dir;
}
void
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setLogDir(const OAIConfigNodePropertyString &log_dir) {
    this->log_dir = log_dir;
    this->m_log_dir_isSet = true;
}


bool
OAIComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(max_connections.isSet()){ isObjectUpdated = true; break;}
    
        if(max_requests.isSet()){ isObjectUpdated = true; break;}
    
        if(request_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(log_dir.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

