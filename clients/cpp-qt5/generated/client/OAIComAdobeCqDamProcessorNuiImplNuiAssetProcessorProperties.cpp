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


#include "OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties() {
    init();
}

OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::~OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties() {
    this->cleanup();
}

void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::init() {
    nui_enabled = new OAIConfigNodePropertyBoolean();
    m_nui_enabled_isSet = false;
    nui_service_url = new OAIConfigNodePropertyString();
    m_nui_service_url_isSet = false;
    nui_api_key = new OAIConfigNodePropertyString();
    m_nui_api_key_isSet = false;
}

void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::cleanup() {
    if(nui_enabled != nullptr) { 
        delete nui_enabled;
    }
    if(nui_service_url != nullptr) { 
        delete nui_service_url;
    }
    if(nui_api_key != nullptr) { 
        delete nui_api_key;
    }
}

OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties*
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&nui_enabled, pJson["nuiEnabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&nui_service_url, pJson["nuiServiceUrl"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&nui_api_key, pJson["nuiApiKey"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::asJsonObject() {
    QJsonObject obj;
    if((nui_enabled != nullptr) && (nui_enabled->isSet())){
        toJsonValue(QString("nuiEnabled"), nui_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((nui_service_url != nullptr) && (nui_service_url->isSet())){
        toJsonValue(QString("nuiServiceUrl"), nui_service_url, obj, QString("OAIConfigNodePropertyString"));
    }
    if((nui_api_key != nullptr) && (nui_api_key->isSet())){
        toJsonValue(QString("nuiApiKey"), nui_api_key, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiEnabled() {
    return nui_enabled;
}
void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiEnabled(OAIConfigNodePropertyBoolean* nui_enabled) {
    this->nui_enabled = nui_enabled;
    this->m_nui_enabled_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiServiceUrl() {
    return nui_service_url;
}
void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiServiceUrl(OAIConfigNodePropertyString* nui_service_url) {
    this->nui_service_url = nui_service_url;
    this->m_nui_service_url_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiApiKey() {
    return nui_api_key;
}
void
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiApiKey(OAIConfigNodePropertyString* nui_api_key) {
    this->nui_api_key = nui_api_key;
    this->m_nui_api_key_isSet = true;
}


bool
OAIComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(nui_enabled != nullptr && nui_enabled->isSet()){ isObjectUpdated = true; break;}
        if(nui_service_url != nullptr && nui_service_url->isSet()){ isObjectUpdated = true; break;}
        if(nui_api_key != nullptr && nui_api_key->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

