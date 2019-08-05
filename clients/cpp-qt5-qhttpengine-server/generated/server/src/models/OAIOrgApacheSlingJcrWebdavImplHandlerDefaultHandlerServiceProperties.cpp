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


#include "OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties() {
    this->init();
}

OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::~OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties() {
    
}

void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::init() {
    m_service_ranking_isSet = false;
    m_type_collections_isSet = false;
    m_type_noncollections_isSet = false;
    m_type_content_isSet = false;
}

void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(type_collections, json[QString("type.collections")]);
    
    ::OpenAPI::fromJsonValue(type_noncollections, json[QString("type.noncollections")]);
    
    ::OpenAPI::fromJsonValue(type_content, json[QString("type.content")]);
    
}

QString
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(type_collections.isSet()){
        obj.insert(QString("type.collections"), ::OpenAPI::toJsonValue(type_collections));
    }
	if(type_noncollections.isSet()){
        obj.insert(QString("type.noncollections"), ::OpenAPI::toJsonValue(type_noncollections));
    }
	if(type_content.isSet()){
        obj.insert(QString("type.content"), ::OpenAPI::toJsonValue(type_content));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeCollections() const {
    return type_collections;
}
void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeCollections(const OAIConfigNodePropertyString &type_collections) {
    this->type_collections = type_collections;
    this->m_type_collections_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeNoncollections() const {
    return type_noncollections;
}
void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeNoncollections(const OAIConfigNodePropertyString &type_noncollections) {
    this->type_noncollections = type_noncollections;
    this->m_type_noncollections_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::getTypeContent() const {
    return type_content;
}
void
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::setTypeContent(const OAIConfigNodePropertyString &type_content) {
    this->type_content = type_content;
    this->m_type_content_isSet = true;
}


bool
OAIOrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(type_collections.isSet()){ isObjectUpdated = true; break;}
    
        if(type_noncollections.isSet()){ isObjectUpdated = true; break;}
    
        if(type_content.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
