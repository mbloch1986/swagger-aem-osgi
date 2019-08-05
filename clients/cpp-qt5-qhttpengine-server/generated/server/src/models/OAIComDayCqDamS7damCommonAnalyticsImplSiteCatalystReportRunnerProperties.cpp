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


#include "OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties() {
    this->init();
}

OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::~OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties() {
    
}

void
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::init() {
    m_scheduler_expression_isSet = false;
    m_scheduler_concurrent_isSet = false;
}

void
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_expression, json[QString("scheduler.expression")]);
    
    ::OpenAPI::fromJsonValue(scheduler_concurrent, json[QString("scheduler.concurrent")]);
    
}

QString
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_expression.isSet()){
        obj.insert(QString("scheduler.expression"), ::OpenAPI::toJsonValue(scheduler_expression));
    }
	if(scheduler_concurrent.isSet()){
        obj.insert(QString("scheduler.concurrent"), ::OpenAPI::toJsonValue(scheduler_concurrent));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::getSchedulerExpression() const {
    return scheduler_expression;
}
void
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::setSchedulerExpression(const OAIConfigNodePropertyString &scheduler_expression) {
    this->scheduler_expression = scheduler_expression;
    this->m_scheduler_expression_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::getSchedulerConcurrent() const {
    return scheduler_concurrent;
}
void
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::setSchedulerConcurrent(const OAIConfigNodePropertyBoolean &scheduler_concurrent) {
    this->scheduler_concurrent = scheduler_concurrent;
    this->m_scheduler_concurrent_isSet = true;
}


bool
OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_expression.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduler_concurrent.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
