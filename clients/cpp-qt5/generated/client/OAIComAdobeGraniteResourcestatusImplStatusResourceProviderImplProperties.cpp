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


#include "OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties() {
    init();
}

OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::~OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::init() {
    provider_root = new OAIConfigNodePropertyString();
    m_provider_root_isSet = false;
}

void
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::cleanup() {
    if(provider_root != nullptr) { 
        delete provider_root;
    }
}

OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties*
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&provider_root, pJson["provider.root"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::asJsonObject() {
    QJsonObject obj;
    if((provider_root != nullptr) && (provider_root->isSet())){
        toJsonValue(QString("provider.root"), provider_root, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::getProviderRoot() {
    return provider_root;
}
void
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::setProviderRoot(OAIConfigNodePropertyString* provider_root) {
    this->provider_root = provider_root;
    this->m_provider_root_isSet = true;
}


bool
OAIComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(provider_root != nullptr && provider_root->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

