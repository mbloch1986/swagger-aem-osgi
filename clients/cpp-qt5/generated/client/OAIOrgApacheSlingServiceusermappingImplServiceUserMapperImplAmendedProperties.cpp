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


#include "OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties() {
    init();
}

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::~OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::init() {
    service_ranking = new OAIConfigNodePropertyInteger();
    m_service_ranking_isSet = false;
    user_mapping = new OAIConfigNodePropertyArray();
    m_user_mapping_isSet = false;
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::cleanup() {
    if(service_ranking != nullptr) { 
        delete service_ranking;
    }
    if(user_mapping != nullptr) { 
        delete user_mapping;
    }
}

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties*
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&service_ranking, pJson["service.ranking"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&user_mapping, pJson["user.mapping"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::asJsonObject() {
    QJsonObject obj;
    if((service_ranking != nullptr) && (service_ranking->isSet())){
        toJsonValue(QString("service.ranking"), service_ranking, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((user_mapping != nullptr) && (user_mapping->isSet())){
        toJsonValue(QString("user.mapping"), user_mapping, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::getServiceRanking() {
    return service_ranking;
}
void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::setServiceRanking(OAIConfigNodePropertyInteger* service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::getUserMapping() {
    return user_mapping;
}
void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::setUserMapping(OAIConfigNodePropertyArray* user_mapping) {
    this->user_mapping = user_mapping;
    this->m_user_mapping_isSet = true;
}


bool
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(service_ranking != nullptr && service_ranking->isSet()){ isObjectUpdated = true; break;}
        if(user_mapping != nullptr && user_mapping->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
