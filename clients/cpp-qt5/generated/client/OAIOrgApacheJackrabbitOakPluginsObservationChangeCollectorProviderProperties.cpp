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


#include "OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties() {
    init();
}

OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::~OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties() {
    this->cleanup();
}

void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::init() {
    max_items = new OAIConfigNodePropertyInteger();
    m_max_items_isSet = false;
    max_path_depth = new OAIConfigNodePropertyInteger();
    m_max_path_depth_isSet = false;
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
}

void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::cleanup() {
    if(max_items != nullptr) { 
        delete max_items;
    }
    if(max_path_depth != nullptr) { 
        delete max_path_depth;
    }
    if(enabled != nullptr) { 
        delete enabled;
    }
}

OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties*
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&max_items, pJson["maxItems"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&max_path_depth, pJson["maxPathDepth"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::asJsonObject() {
    QJsonObject obj;
    if((max_items != nullptr) && (max_items->isSet())){
        toJsonValue(QString("maxItems"), max_items, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((max_path_depth != nullptr) && (max_path_depth->isSet())){
        toJsonValue(QString("maxPathDepth"), max_path_depth, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::getMaxItems() {
    return max_items;
}
void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::setMaxItems(OAIConfigNodePropertyInteger* max_items) {
    this->max_items = max_items;
    this->m_max_items_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::getMaxPathDepth() {
    return max_path_depth;
}
void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::setMaxPathDepth(OAIConfigNodePropertyInteger* max_path_depth) {
    this->max_path_depth = max_path_depth;
    this->m_max_path_depth_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::getEnabled() {
    return enabled;
}
void
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(max_items != nullptr && max_items->isSet()){ isObjectUpdated = true; break;}
        if(max_path_depth != nullptr && max_path_depth->isSet()){ isObjectUpdated = true; break;}
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

