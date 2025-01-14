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


#include "OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties() {
    init();
}

OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::~OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties() {
    this->cleanup();
}

void
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::init() {
    authoring_ui_mode_service_default = new OAIConfigNodePropertyString();
    m_authoring_ui_mode_service_default_isSet = false;
}

void
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::cleanup() {
    if(authoring_ui_mode_service_default != nullptr) { 
        delete authoring_ui_mode_service_default;
    }
}

OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties*
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&authoring_ui_mode_service_default, pJson["authoringUIModeService.default"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((authoring_ui_mode_service_default != nullptr) && (authoring_ui_mode_service_default->isSet())){
        toJsonValue(QString("authoringUIModeService.default"), authoring_ui_mode_service_default, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::getAuthoringUiModeServiceDefault() {
    return authoring_ui_mode_service_default;
}
void
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::setAuthoringUiModeServiceDefault(OAIConfigNodePropertyString* authoring_ui_mode_service_default) {
    this->authoring_ui_mode_service_default = authoring_ui_mode_service_default;
    this->m_authoring_ui_mode_service_default_isSet = true;
}


bool
OAIComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(authoring_ui_mode_service_default != nullptr && authoring_ui_mode_service_default->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

