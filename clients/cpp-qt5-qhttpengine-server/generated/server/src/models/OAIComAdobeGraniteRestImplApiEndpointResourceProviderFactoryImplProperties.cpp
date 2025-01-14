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


#include "OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties() {
    this->init();
}

OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::~OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties() {
    
}

void
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::init() {
    m_provider_roots_isSet = false;
}

void
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(provider_roots, json[QString("provider.roots")]);
    
}

QString
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(provider_roots.isSet()){
        obj.insert(QString("provider.roots"), ::OpenAPI::toJsonValue(provider_roots));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::getProviderRoots() const {
    return provider_roots;
}
void
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::setProviderRoots(const OAIConfigNodePropertyString &provider_roots) {
    this->provider_roots = provider_roots;
    this->m_provider_roots_isSet = true;
}


bool
OAIComAdobeGraniteRestImplApiEndpointResourceProviderFactoryImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(provider_roots.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

