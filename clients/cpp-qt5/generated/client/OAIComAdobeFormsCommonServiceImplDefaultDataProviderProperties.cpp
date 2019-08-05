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


#include "OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties() {
    init();
}

OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::~OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties() {
    this->cleanup();
}

void
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::init() {
    alloweddata_file_locations = new OAIConfigNodePropertyArray();
    m_alloweddata_file_locations_isSet = false;
}

void
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::cleanup() {
    if(alloweddata_file_locations != nullptr) { 
        delete alloweddata_file_locations;
    }
}

OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties*
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&alloweddata_file_locations, pJson["alloweddataFileLocations"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::asJsonObject() {
    QJsonObject obj;
    if((alloweddata_file_locations != nullptr) && (alloweddata_file_locations->isSet())){
        toJsonValue(QString("alloweddataFileLocations"), alloweddata_file_locations, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::getAlloweddataFileLocations() {
    return alloweddata_file_locations;
}
void
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::setAlloweddataFileLocations(OAIConfigNodePropertyArray* alloweddata_file_locations) {
    this->alloweddata_file_locations = alloweddata_file_locations;
    this->m_alloweddata_file_locations_isSet = true;
}


bool
OAIComAdobeFormsCommonServiceImplDefaultDataProviderProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(alloweddata_file_locations != nullptr && alloweddata_file_locations->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
