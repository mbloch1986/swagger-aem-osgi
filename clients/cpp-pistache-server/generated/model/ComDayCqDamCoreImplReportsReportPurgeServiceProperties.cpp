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


#include "ComDayCqDamCoreImplReportsReportPurgeServiceProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplReportsReportPurgeServiceProperties::ComDayCqDamCoreImplReportsReportPurgeServiceProperties()
{
    m_Scheduler_expressionIsSet = false;
    m_MaxSavedReportsIsSet = false;
    m_TimeDurationIsSet = false;
    m_EnableReportPurgeIsSet = false;
    
}

ComDayCqDamCoreImplReportsReportPurgeServiceProperties::~ComDayCqDamCoreImplReportsReportPurgeServiceProperties()
{
}

void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplReportsReportPurgeServiceProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Scheduler_expressionIsSet)
    {
        val["scheduler.expression"] = ModelBase::toJson(m_Scheduler_expression);
    }
    if(m_MaxSavedReportsIsSet)
    {
        val["maxSavedReports"] = ModelBase::toJson(m_MaxSavedReports);
    }
    if(m_TimeDurationIsSet)
    {
        val["timeDuration"] = ModelBase::toJson(m_TimeDuration);
    }
    if(m_EnableReportPurgeIsSet)
    {
        val["enableReportPurge"] = ModelBase::toJson(m_EnableReportPurge);
    }
    

    return val;
}

void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::fromJson(nlohmann::json& val)
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
    if(val.find("maxSavedReports") != val.end())
    {
        if(!val["maxSavedReports"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxSavedReports"]);
            setMaxSavedReports( newItem );
        }
        
    }
    if(val.find("timeDuration") != val.end())
    {
        if(!val["timeDuration"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["timeDuration"]);
            setTimeDuration( newItem );
        }
        
    }
    if(val.find("enableReportPurge") != val.end())
    {
        if(!val["enableReportPurge"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["enableReportPurge"]);
            setEnableReportPurge( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqDamCoreImplReportsReportPurgeServiceProperties::getSchedulerExpression() const
{
    return m_Scheduler_expression;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::setSchedulerExpression(ConfigNodePropertyString const& value)
{
    m_Scheduler_expression = value;
    m_Scheduler_expressionIsSet = true;
}
bool ComDayCqDamCoreImplReportsReportPurgeServiceProperties::schedulerExpressionIsSet() const
{
    return m_Scheduler_expressionIsSet;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::unsetScheduler_expression()
{
    m_Scheduler_expressionIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamCoreImplReportsReportPurgeServiceProperties::getMaxSavedReports() const
{
    return m_MaxSavedReports;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::setMaxSavedReports(ConfigNodePropertyInteger const& value)
{
    m_MaxSavedReports = value;
    m_MaxSavedReportsIsSet = true;
}
bool ComDayCqDamCoreImplReportsReportPurgeServiceProperties::maxSavedReportsIsSet() const
{
    return m_MaxSavedReportsIsSet;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::unsetMaxSavedReports()
{
    m_MaxSavedReportsIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamCoreImplReportsReportPurgeServiceProperties::getTimeDuration() const
{
    return m_TimeDuration;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::setTimeDuration(ConfigNodePropertyInteger const& value)
{
    m_TimeDuration = value;
    m_TimeDurationIsSet = true;
}
bool ComDayCqDamCoreImplReportsReportPurgeServiceProperties::timeDurationIsSet() const
{
    return m_TimeDurationIsSet;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::unsetTimeDuration()
{
    m_TimeDurationIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqDamCoreImplReportsReportPurgeServiceProperties::getEnableReportPurge() const
{
    return m_EnableReportPurge;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::setEnableReportPurge(ConfigNodePropertyBoolean const& value)
{
    m_EnableReportPurge = value;
    m_EnableReportPurgeIsSet = true;
}
bool ComDayCqDamCoreImplReportsReportPurgeServiceProperties::enableReportPurgeIsSet() const
{
    return m_EnableReportPurgeIsSet;
}
void ComDayCqDamCoreImplReportsReportPurgeServiceProperties::unsetEnableReportPurge()
{
    m_EnableReportPurgeIsSet = false;
}

}
}
}
}

