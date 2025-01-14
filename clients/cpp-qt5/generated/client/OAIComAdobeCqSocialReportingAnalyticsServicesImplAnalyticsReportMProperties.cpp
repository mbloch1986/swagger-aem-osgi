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


#include "OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties() {
    init();
}

OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::~OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::init() {
    report_fetch_delay = new OAIConfigNodePropertyInteger();
    m_report_fetch_delay_isSet = false;
}

void
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::cleanup() {
    if(report_fetch_delay != nullptr) { 
        delete report_fetch_delay;
    }
}

OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties*
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&report_fetch_delay, pJson["report.fetch.delay"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::asJsonObject() {
    QJsonObject obj;
    if((report_fetch_delay != nullptr) && (report_fetch_delay->isSet())){
        toJsonValue(QString("report.fetch.delay"), report_fetch_delay, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::getReportFetchDelay() {
    return report_fetch_delay;
}
void
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::setReportFetchDelay(OAIConfigNodePropertyInteger* report_fetch_delay) {
    this->report_fetch_delay = report_fetch_delay;
    this->m_report_fetch_delay_isSet = true;
}


bool
OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(report_fetch_delay != nullptr && report_fetch_delay->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

