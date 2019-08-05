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


#include "OAIComDayCqDamCoreImplServletAssetDownloadServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::OAIComDayCqDamCoreImplServletAssetDownloadServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::OAIComDayCqDamCoreImplServletAssetDownloadServletProperties() {
    init();
}

OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::~OAIComDayCqDamCoreImplServletAssetDownloadServletProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::init() {
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
}

void
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::cleanup() {
    if(enabled != nullptr) { 
        delete enabled;
    }
}

OAIComDayCqDamCoreImplServletAssetDownloadServletProperties*
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::asJsonObject() {
    QJsonObject obj;
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::getEnabled() {
    return enabled;
}
void
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}


bool
OAIComDayCqDamCoreImplServletAssetDownloadServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
