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


#include "OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties() {
    this->init();
}

OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::~OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties() {
    
}

void
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::init() {
    m_connection_timeout_isSet = false;
    m_socket_timeout_isSet = false;
}

void
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(connection_timeout, json[QString("connection.timeout")]);
    
    ::OpenAPI::fromJsonValue(socket_timeout, json[QString("socket.timeout")]);
    
}

QString
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(connection_timeout.isSet()){
        obj.insert(QString("connection.timeout"), ::OpenAPI::toJsonValue(connection_timeout));
    }
	if(socket_timeout.isSet()){
        obj.insert(QString("socket.timeout"), ::OpenAPI::toJsonValue(socket_timeout));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::getConnectionTimeout() const {
    return connection_timeout;
}
void
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::setConnectionTimeout(const OAIConfigNodePropertyInteger &connection_timeout) {
    this->connection_timeout = connection_timeout;
    this->m_connection_timeout_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::getSocketTimeout() const {
    return socket_timeout;
}
void
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::setSocketTimeout(const OAIConfigNodePropertyInteger &socket_timeout) {
    this->socket_timeout = socket_timeout;
    this->m_socket_timeout_isSet = true;
}


bool
OAIComAdobeCqDtmImplServiceDTMWebServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(connection_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(socket_timeout.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
