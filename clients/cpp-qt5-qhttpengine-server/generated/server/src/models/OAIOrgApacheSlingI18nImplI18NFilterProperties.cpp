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


#include "OAIOrgApacheSlingI18nImplI18NFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingI18nImplI18NFilterProperties::OAIOrgApacheSlingI18nImplI18NFilterProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingI18nImplI18NFilterProperties::OAIOrgApacheSlingI18nImplI18NFilterProperties() {
    this->init();
}

OAIOrgApacheSlingI18nImplI18NFilterProperties::~OAIOrgApacheSlingI18nImplI18NFilterProperties() {
    
}

void
OAIOrgApacheSlingI18nImplI18NFilterProperties::init() {
    m_service_ranking_isSet = false;
    m_sling_filter_scope_isSet = false;
}

void
OAIOrgApacheSlingI18nImplI18NFilterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingI18nImplI18NFilterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(sling_filter_scope, json[QString("sling.filter.scope")]);
    
}

QString
OAIOrgApacheSlingI18nImplI18NFilterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingI18nImplI18NFilterProperties::asJsonObject() const {
    QJsonObject obj;
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(sling_filter_scope.isSet()){
        obj.insert(QString("sling.filter.scope"), ::OpenAPI::toJsonValue(sling_filter_scope));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingI18nImplI18NFilterProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIOrgApacheSlingI18nImplI18NFilterProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingI18nImplI18NFilterProperties::getSlingFilterScope() const {
    return sling_filter_scope;
}
void
OAIOrgApacheSlingI18nImplI18NFilterProperties::setSlingFilterScope(const OAIConfigNodePropertyArray &sling_filter_scope) {
    this->sling_filter_scope = sling_filter_scope;
    this->m_sling_filter_scope_isSet = true;
}


bool
OAIOrgApacheSlingI18nImplI18NFilterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_filter_scope.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

