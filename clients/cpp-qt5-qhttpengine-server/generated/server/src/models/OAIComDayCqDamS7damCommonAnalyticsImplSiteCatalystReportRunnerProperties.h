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
 * OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H
#define OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties: public OAIObject {
public:
    OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties();
    OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties(QString json);
    ~OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getSchedulerExpression() const;
    void setSchedulerExpression(const OAIConfigNodePropertyString &scheduler_expression);

    OAIConfigNodePropertyBoolean getSchedulerConcurrent() const;
    void setSchedulerConcurrent(const OAIConfigNodePropertyBoolean &scheduler_concurrent);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString scheduler_expression;
    bool m_scheduler_expression_isSet;

    OAIConfigNodePropertyBoolean scheduler_concurrent;
    bool m_scheduler_concurrent_isSet;

};

}

#endif // OAIComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H
