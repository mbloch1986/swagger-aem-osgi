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


#include "OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties() {
    this->init();
}

OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::~OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties() {
    
}

void
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::init() {
    m_report_fetch_attempts_isSet = false;
    m_report_fetch_delay_isSet = false;
}

void
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(report_fetch_attempts, json[QString("report.fetch.attempts")]);
    
    ::OpenAPI::fromJsonValue(report_fetch_delay, json[QString("report.fetch.delay")]);
    
}

QString
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::asJsonObject() const {
    QJsonObject obj;
	if(report_fetch_attempts.isSet()){
        obj.insert(QString("report.fetch.attempts"), ::OpenAPI::toJsonValue(report_fetch_attempts));
    }
	if(report_fetch_delay.isSet()){
        obj.insert(QString("report.fetch.delay"), ::OpenAPI::toJsonValue(report_fetch_delay));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::getReportFetchAttempts() const {
    return report_fetch_attempts;
}
void
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::setReportFetchAttempts(const OAIConfigNodePropertyInteger &report_fetch_attempts) {
    this->report_fetch_attempts = report_fetch_attempts;
    this->m_report_fetch_attempts_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::getReportFetchDelay() const {
    return report_fetch_delay;
}
void
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::setReportFetchDelay(const OAIConfigNodePropertyInteger &report_fetch_delay) {
    this->report_fetch_delay = report_fetch_delay;
    this->m_report_fetch_delay_isSet = true;
}


bool
OAIComDayCqAnalyticsSitecatalystImplImporterReportImporterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(report_fetch_attempts.isSet()){ isObjectUpdated = true; break;}
    
        if(report_fetch_delay.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

