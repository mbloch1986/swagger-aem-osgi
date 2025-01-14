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


#include "OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties() {
    init();
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::~OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties() {
    this->cleanup();
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::init() {
    reportingservices_url = new OAIConfigNodePropertyString();
    m_reportingservices_url_isSet = false;
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::cleanup() {
    if(reportingservices_url != nullptr) { 
        delete reportingservices_url;
    }
}

OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties*
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&reportingservices_url, pJson["reportingservices.url"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::asJsonObject() {
    QJsonObject obj;
    if((reportingservices_url != nullptr) && (reportingservices_url->isSet())){
        toJsonValue(QString("reportingservices.url"), reportingservices_url, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::getReportingservicesUrl() {
    return reportingservices_url;
}
void
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::setReportingservicesUrl(OAIConfigNodePropertyString* reportingservices_url) {
    this->reportingservices_url = reportingservices_url;
    this->m_reportingservices_url_isSet = true;
}


bool
OAIComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(reportingservices_url != nullptr && reportingservices_url->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

