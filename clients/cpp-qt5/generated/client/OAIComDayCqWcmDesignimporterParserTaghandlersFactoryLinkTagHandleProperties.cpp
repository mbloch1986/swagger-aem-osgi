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


#include "OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties() {
    init();
}

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::~OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties() {
    this->cleanup();
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::init() {
    service_ranking = new OAIConfigNodePropertyInteger();
    m_service_ranking_isSet = false;
    tagpattern = new OAIConfigNodePropertyString();
    m_tagpattern_isSet = false;
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::cleanup() {
    if(service_ranking != nullptr) { 
        delete service_ranking;
    }
    if(tagpattern != nullptr) { 
        delete tagpattern;
    }
}

OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties*
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&service_ranking, pJson["service.ranking"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&tagpattern, pJson["tagpattern"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::asJsonObject() {
    QJsonObject obj;
    if((service_ranking != nullptr) && (service_ranking->isSet())){
        toJsonValue(QString("service.ranking"), service_ranking, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((tagpattern != nullptr) && (tagpattern->isSet())){
        toJsonValue(QString("tagpattern"), tagpattern, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::getServiceRanking() {
    return service_ranking;
}
void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::setServiceRanking(OAIConfigNodePropertyInteger* service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyString*
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::getTagpattern() {
    return tagpattern;
}
void
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::setTagpattern(OAIConfigNodePropertyString* tagpattern) {
    this->tagpattern = tagpattern;
    this->m_tagpattern_isSet = true;
}


bool
OAIComDayCqWcmDesignimporterParserTaghandlersFactoryLinkTagHandleProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(service_ranking != nullptr && service_ranking->isSet()){ isObjectUpdated = true; break;}
        if(tagpattern != nullptr && tagpattern->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

