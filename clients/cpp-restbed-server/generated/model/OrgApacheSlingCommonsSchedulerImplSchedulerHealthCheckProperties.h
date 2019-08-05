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
 * OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties_H_
#define OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties
{
public:
    OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties();
    virtual ~OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxQuartzJobDurationAcceptable() const;
    void setMaxQuartzJobDurationAcceptable(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Max_quartzJob_duration_acceptable;
};

}
}
}
}

#endif /* OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties_H_ */