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


#include "OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties() {
    this->init();
}

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::~OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties() {
    
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::init() {
    m_service_ranking_isSet = false;
    m_tagpattern_isSet = false;
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(tagpattern, json[QString("tagpattern")]);
    
}

QString
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::asJsonObject() const {
    QJsonObject obj;
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(tagpattern.isSet()){
        obj.insert(QString("tagpattern"), ::OpenAPI::toJsonValue(tagpattern));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::getTagpattern() const {
    return tagpattern;
}
void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::setTagpattern(const OAIConfigNodePropertyString &tagpattern) {
    this->tagpattern = tagpattern;
    this->m_tagpattern_isSet = true;
}


bool
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(tagpattern.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

