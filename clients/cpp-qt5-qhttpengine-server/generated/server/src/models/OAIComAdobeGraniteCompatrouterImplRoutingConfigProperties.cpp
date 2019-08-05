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


#include "OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties() {
    this->init();
}

OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::~OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties() {
    
}

void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::init() {
    m_id_isSet = false;
    m_compat_path_isSet = false;
    m_new_path_isSet = false;
}

void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(compat_path, json[QString("compatPath")]);
    
    ::OpenAPI::fromJsonValue(new_path, json[QString("newPath")]);
    
}

QString
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::asJsonObject() const {
    QJsonObject obj;
	if(id.isSet()){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(compat_path.isSet()){
        obj.insert(QString("compatPath"), ::OpenAPI::toJsonValue(compat_path));
    }
	if(new_path.isSet()){
        obj.insert(QString("newPath"), ::OpenAPI::toJsonValue(new_path));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::getId() const {
    return id;
}
void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::setId(const OAIConfigNodePropertyString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::getCompatPath() const {
    return compat_path;
}
void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::setCompatPath(const OAIConfigNodePropertyString &compat_path) {
    this->compat_path = compat_path;
    this->m_compat_path_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::getNewPath() const {
    return new_path;
}
void
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::setNewPath(const OAIConfigNodePropertyString &new_path) {
    this->new_path = new_path;
    this->m_new_path_isSet = true;
}


bool
OAIComAdobeGraniteCompatrouterImplRoutingConfigProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(id.isSet()){ isObjectUpdated = true; break;}
    
        if(compat_path.isSet()){ isObjectUpdated = true; break;}
    
        if(new_path.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
