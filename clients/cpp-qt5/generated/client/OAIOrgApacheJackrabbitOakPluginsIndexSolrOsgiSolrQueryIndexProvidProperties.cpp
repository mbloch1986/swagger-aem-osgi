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


#include "OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties() {
    init();
}

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::~OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties() {
    this->cleanup();
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::init() {
    query_aggregation = new OAIConfigNodePropertyBoolean();
    m_query_aggregation_isSet = false;
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::cleanup() {
    if(query_aggregation != nullptr) { 
        delete query_aggregation;
    }
}

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties*
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&query_aggregation, pJson["query.aggregation"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::asJsonObject() {
    QJsonObject obj;
    if((query_aggregation != nullptr) && (query_aggregation->isSet())){
        toJsonValue(QString("query.aggregation"), query_aggregation, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::getQueryAggregation() {
    return query_aggregation;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::setQueryAggregation(OAIConfigNodePropertyBoolean* query_aggregation) {
    this->query_aggregation = query_aggregation;
    this->m_query_aggregation_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(query_aggregation != nullptr && query_aggregation->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

