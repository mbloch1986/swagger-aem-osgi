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


#include "OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties() {
    this->init();
}

OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::~OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties() {
    
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::init() {
    m_cq_dam_scene7_assetmimetypeservice_mapping_isSet = false;
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_dam_scene7_assetmimetypeservice_mapping, json[QString("cq.dam.scene7.assetmimetypeservice.mapping")]);
    
}

QString
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_dam_scene7_assetmimetypeservice_mapping.isSet()){
        obj.insert(QString("cq.dam.scene7.assetmimetypeservice.mapping"), ::OpenAPI::toJsonValue(cq_dam_scene7_assetmimetypeservice_mapping));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::getCqDamScene7AssetmimetypeserviceMapping() const {
    return cq_dam_scene7_assetmimetypeservice_mapping;
}
void
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::setCqDamScene7AssetmimetypeserviceMapping(const OAIConfigNodePropertyArray &cq_dam_scene7_assetmimetypeservice_mapping) {
    this->cq_dam_scene7_assetmimetypeservice_mapping = cq_dam_scene7_assetmimetypeservice_mapping;
    this->m_cq_dam_scene7_assetmimetypeservice_mapping_isSet = true;
}


bool
OAIComDayCqDamScene7ImplScene7AssetMimeTypeServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_dam_scene7_assetmimetypeservice_mapping.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
