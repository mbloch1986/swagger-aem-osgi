/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties
    : public ModelBase
{
public:
    ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties();
    virtual ~ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSchedulerExpression() const;
    bool schedulerExpressionIsSet() const;
    void unsetScheduler_expression();
    void setSchedulerExpression(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerConcurrent() const;
    bool schedulerConcurrentIsSet() const;
    void unsetScheduler_concurrent();
    void setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Scheduler_expression;
    bool m_Scheduler_expressionIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_concurrent;
    bool m_Scheduler_concurrentIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties_H_ */
