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


#include "OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties() {
    init();
}

OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::~OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::init() {
    granitedata = new OAIConfigNodePropertyArray();
    m_granitedata_isSet = false;
}

void
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::cleanup() {
    if(granitedata != nullptr) { 
        delete granitedata;
    }
}

OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties*
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&granitedata, pJson["granite:data"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((granitedata != nullptr) && (granitedata->isSet())){
        toJsonValue(QString("granite:data"), granitedata, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::getGranitedata() {
    return granitedata;
}
void
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::setGranitedata(OAIConfigNodePropertyArray* granitedata) {
    this->granitedata = granitedata;
    this->m_granitedata_isSet = true;
}


bool
OAIComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(granitedata != nullptr && granitedata->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

