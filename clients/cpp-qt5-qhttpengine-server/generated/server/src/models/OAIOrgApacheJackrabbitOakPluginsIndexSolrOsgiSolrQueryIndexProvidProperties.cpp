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
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::~OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties() {
    
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::init() {
    m_query_aggregation_isSet = false;
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(query_aggregation, json[QString("query.aggregation")]);
    
}

QString
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::asJsonObject() const {
    QJsonObject obj;
	if(query_aggregation.isSet()){
        obj.insert(QString("query.aggregation"), ::OpenAPI::toJsonValue(query_aggregation));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::getQueryAggregation() const {
    return query_aggregation;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::setQueryAggregation(const OAIConfigNodePropertyBoolean &query_aggregation) {
    this->query_aggregation = query_aggregation;
    this->m_query_aggregation_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(query_aggregation.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

