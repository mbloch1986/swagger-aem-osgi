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


#include "OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties() {
    this->init();
}

OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::~OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties() {
    
}

void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::init() {
    m_cq_analytics_testandtarget_api_url_isSet = false;
    m_cq_analytics_testandtarget_timeout_isSet = false;
    m_cq_analytics_testandtarget_sockettimeout_isSet = false;
    m_cq_analytics_testandtarget_recommendations_url_replace_isSet = false;
    m_cq_analytics_testandtarget_recommendations_url_replacewith_isSet = false;
}

void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_analytics_testandtarget_api_url, json[QString("cq.analytics.testandtarget.api.url")]);
    
    ::OpenAPI::fromJsonValue(cq_analytics_testandtarget_timeout, json[QString("cq.analytics.testandtarget.timeout")]);
    
    ::OpenAPI::fromJsonValue(cq_analytics_testandtarget_sockettimeout, json[QString("cq.analytics.testandtarget.sockettimeout")]);
    
    ::OpenAPI::fromJsonValue(cq_analytics_testandtarget_recommendations_url_replace, json[QString("cq.analytics.testandtarget.recommendations.url.replace")]);
    
    ::OpenAPI::fromJsonValue(cq_analytics_testandtarget_recommendations_url_replacewith, json[QString("cq.analytics.testandtarget.recommendations.url.replacewith")]);
    
}

QString
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_analytics_testandtarget_api_url.isSet()){
        obj.insert(QString("cq.analytics.testandtarget.api.url"), ::OpenAPI::toJsonValue(cq_analytics_testandtarget_api_url));
    }
	if(cq_analytics_testandtarget_timeout.isSet()){
        obj.insert(QString("cq.analytics.testandtarget.timeout"), ::OpenAPI::toJsonValue(cq_analytics_testandtarget_timeout));
    }
	if(cq_analytics_testandtarget_sockettimeout.isSet()){
        obj.insert(QString("cq.analytics.testandtarget.sockettimeout"), ::OpenAPI::toJsonValue(cq_analytics_testandtarget_sockettimeout));
    }
	if(cq_analytics_testandtarget_recommendations_url_replace.isSet()){
        obj.insert(QString("cq.analytics.testandtarget.recommendations.url.replace"), ::OpenAPI::toJsonValue(cq_analytics_testandtarget_recommendations_url_replace));
    }
	if(cq_analytics_testandtarget_recommendations_url_replacewith.isSet()){
        obj.insert(QString("cq.analytics.testandtarget.recommendations.url.replacewith"), ::OpenAPI::toJsonValue(cq_analytics_testandtarget_recommendations_url_replacewith));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetApiUrl() const {
    return cq_analytics_testandtarget_api_url;
}
void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetApiUrl(const OAIConfigNodePropertyString &cq_analytics_testandtarget_api_url) {
    this->cq_analytics_testandtarget_api_url = cq_analytics_testandtarget_api_url;
    this->m_cq_analytics_testandtarget_api_url_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetTimeout() const {
    return cq_analytics_testandtarget_timeout;
}
void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetTimeout(const OAIConfigNodePropertyInteger &cq_analytics_testandtarget_timeout) {
    this->cq_analytics_testandtarget_timeout = cq_analytics_testandtarget_timeout;
    this->m_cq_analytics_testandtarget_timeout_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetSockettimeout() const {
    return cq_analytics_testandtarget_sockettimeout;
}
void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetSockettimeout(const OAIConfigNodePropertyInteger &cq_analytics_testandtarget_sockettimeout) {
    this->cq_analytics_testandtarget_sockettimeout = cq_analytics_testandtarget_sockettimeout;
    this->m_cq_analytics_testandtarget_sockettimeout_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetRecommendationsUrlReplace() const {
    return cq_analytics_testandtarget_recommendations_url_replace;
}
void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetRecommendationsUrlReplace(const OAIConfigNodePropertyString &cq_analytics_testandtarget_recommendations_url_replace) {
    this->cq_analytics_testandtarget_recommendations_url_replace = cq_analytics_testandtarget_recommendations_url_replace;
    this->m_cq_analytics_testandtarget_recommendations_url_replace_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::getCqAnalyticsTestandtargetRecommendationsUrlReplacewith() const {
    return cq_analytics_testandtarget_recommendations_url_replacewith;
}
void
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::setCqAnalyticsTestandtargetRecommendationsUrlReplacewith(const OAIConfigNodePropertyString &cq_analytics_testandtarget_recommendations_url_replacewith) {
    this->cq_analytics_testandtarget_recommendations_url_replacewith = cq_analytics_testandtarget_recommendations_url_replacewith;
    this->m_cq_analytics_testandtarget_recommendations_url_replacewith_isSet = true;
}


bool
OAIComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_analytics_testandtarget_api_url.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_analytics_testandtarget_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_analytics_testandtarget_sockettimeout.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_analytics_testandtarget_recommendations_url_replace.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_analytics_testandtarget_recommendations_url_replacewith.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

