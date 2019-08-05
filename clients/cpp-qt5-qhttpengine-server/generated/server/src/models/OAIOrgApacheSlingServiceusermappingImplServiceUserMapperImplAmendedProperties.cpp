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
    this->fromJson(json);
}

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties() {
    this->init();
}

OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::~OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties() {
    
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::init() {
    m_service_ranking_isSet = false;
    m_user_mapping_isSet = false;
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(user_mapping, json[QString("user.mapping")]);
    
}

QString
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::asJsonObject() const {
    QJsonObject obj;
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(user_mapping.isSet()){
        obj.insert(QString("user.mapping"), ::OpenAPI::toJsonValue(user_mapping));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::getUserMapping() const {
    return user_mapping;
}
void
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::setUserMapping(const OAIConfigNodePropertyArray &user_mapping) {
    this->user_mapping = user_mapping;
    this->m_user_mapping_isSet = true;
}


bool
OAIOrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(user_mapping.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
