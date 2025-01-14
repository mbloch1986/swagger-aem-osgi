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


#include "ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties()
{
    m_Scheduler_expressionIsSet = false;
    m_Scheduler_concurrentIsSet = false;
    
}

ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::~ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties()
{
}

void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Scheduler_expressionIsSet)
    {
        val["scheduler.expression"] = ModelBase::toJson(m_Scheduler_expression);
    }
    if(m_Scheduler_concurrentIsSet)
    {
        val["scheduler.concurrent"] = ModelBase::toJson(m_Scheduler_concurrent);
    }
    

    return val;
}

void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("scheduler.expression") != val.end())
    {
        if(!val["scheduler.expression"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scheduler.expression"]);
            setSchedulerExpression( newItem );
        }
        
    }
    if(val.find("scheduler.concurrent") != val.end())
    {
        if(!val["scheduler.concurrent"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["scheduler.concurrent"]);
            setSchedulerConcurrent( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::getSchedulerExpression() const
{
    return m_Scheduler_expression;
}
void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::setSchedulerExpression(ConfigNodePropertyString const& value)
{
    m_Scheduler_expression = value;
    m_Scheduler_expressionIsSet = true;
}
bool ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::schedulerExpressionIsSet() const
{
    return m_Scheduler_expressionIsSet;
}
void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::unsetScheduler_expression()
{
    m_Scheduler_expressionIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::getSchedulerConcurrent() const
{
    return m_Scheduler_concurrent;
}
void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::setSchedulerConcurrent(ConfigNodePropertyBoolean const& value)
{
    m_Scheduler_concurrent = value;
    m_Scheduler_concurrentIsSet = true;
}
bool ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::schedulerConcurrentIsSet() const
{
    return m_Scheduler_concurrentIsSet;
}
void ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties::unsetScheduler_concurrent()
{
    m_Scheduler_concurrentIsSet = false;
}

}
}
}
}

