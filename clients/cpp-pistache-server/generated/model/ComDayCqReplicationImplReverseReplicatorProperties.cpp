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


#include "ComDayCqReplicationImplReverseReplicatorProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqReplicationImplReverseReplicatorProperties::ComDayCqReplicationImplReverseReplicatorProperties()
{
    m_Scheduler_periodIsSet = false;
    
}

ComDayCqReplicationImplReverseReplicatorProperties::~ComDayCqReplicationImplReverseReplicatorProperties()
{
}

void ComDayCqReplicationImplReverseReplicatorProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqReplicationImplReverseReplicatorProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Scheduler_periodIsSet)
    {
        val["scheduler.period"] = ModelBase::toJson(m_Scheduler_period);
    }
    

    return val;
}

void ComDayCqReplicationImplReverseReplicatorProperties::fromJson(nlohmann::json& val)
{
    if(val.find("scheduler.period") != val.end())
    {
        if(!val["scheduler.period"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["scheduler.period"]);
            setSchedulerPeriod( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComDayCqReplicationImplReverseReplicatorProperties::getSchedulerPeriod() const
{
    return m_Scheduler_period;
}
void ComDayCqReplicationImplReverseReplicatorProperties::setSchedulerPeriod(ConfigNodePropertyInteger const& value)
{
    m_Scheduler_period = value;
    m_Scheduler_periodIsSet = true;
}
bool ComDayCqReplicationImplReverseReplicatorProperties::schedulerPeriodIsSet() const
{
    return m_Scheduler_periodIsSet;
}
void ComDayCqReplicationImplReverseReplicatorProperties::unsetScheduler_period()
{
    m_Scheduler_periodIsSet = false;
}

}
}
}
}
