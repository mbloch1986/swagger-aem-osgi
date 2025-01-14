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
 * OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties_H_
#define OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties
    : public ModelBase
{
public:
    OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties();
    virtual ~OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJobConsumermanagerDisableDistribution() const;
    void setJobConsumermanagerDisableDistribution(ConfigNodePropertyBoolean const& value);
    bool jobConsumermanagerDisableDistributionIsSet() const;
    void unsetJob_consumermanager_disableDistribution();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getStartupDelay() const;
    void setStartupDelay(ConfigNodePropertyInteger const& value);
    bool startupDelayIsSet() const;
    void unsetStartup_delay();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getCleanupPeriod() const;
    void setCleanupPeriod(ConfigNodePropertyInteger const& value);
    bool cleanupPeriodIsSet() const;
    void unsetCleanup_period();

protected:
    ConfigNodePropertyBoolean m_Job_consumermanager_disableDistribution;
    bool m_Job_consumermanager_disableDistributionIsSet;
    ConfigNodePropertyInteger m_Startup_delay;
    bool m_Startup_delayIsSet;
    ConfigNodePropertyInteger m_Cleanup_period;
    bool m_Cleanup_periodIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties_H_ */
