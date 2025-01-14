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
 * OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_
#define OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties
{
public:
    OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties();
    virtual ~OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPoolName() const;
    void setPoolName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAllowedPoolNames() const;
    void setAllowedPoolNames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerUseleaderforsingle() const;
    void setSchedulerUseleaderforsingle(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getMetricsFilters() const;
    void setMetricsFilters(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSlowThresholdMillis() const;
    void setSlowThresholdMillis(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_PoolName;
    std::shared_ptr<ConfigNodePropertyArray> m_AllowedPoolNames;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_useleaderforsingle;
    std::shared_ptr<ConfigNodePropertyArray> m_Metrics_filters;
    std::shared_ptr<ConfigNodePropertyInteger> m_SlowThresholdMillis;
};

}
}
}
}

#endif /* OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_ */
