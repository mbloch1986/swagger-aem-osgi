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

/*
 * OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties_H
#define OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties: public OAIObject {
public:
    OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties();
    OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties(QString json);
    ~OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getReportFetchDelay() const;
    void setReportFetchDelay(const OAIConfigNodePropertyInteger &report_fetch_delay);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger report_fetch_delay;
    bool m_report_fetch_delay_isSet;

};

}

#endif // OAIComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties_H
