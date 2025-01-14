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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties
    : public ModelBase
{
public:
    OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties();
    virtual ~OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPoolName() const;
    bool poolNameIsSet() const;
    void unsetPoolName();
    void setPoolName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAllowedPoolNames() const;
    bool allowedPoolNamesIsSet() const;
    void unsetAllowedPoolNames();
    void setAllowedPoolNames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerUseleaderforsingle() const;
    bool schedulerUseleaderforsingleIsSet() const;
    void unsetScheduler_useleaderforsingle();
    void setSchedulerUseleaderforsingle(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getMetricsFilters() const;
    bool metricsFiltersIsSet() const;
    void unsetMetrics_filters();
    void setMetricsFilters(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSlowThresholdMillis() const;
    bool slowThresholdMillisIsSet() const;
    void unsetSlowThresholdMillis();
    void setSlowThresholdMillis(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_PoolName;
    bool m_PoolNameIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_AllowedPoolNames;
    bool m_AllowedPoolNamesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_useleaderforsingle;
    bool m_Scheduler_useleaderforsingleIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Metrics_filters;
    bool m_Metrics_filtersIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_SlowThresholdMillis;
    bool m_SlowThresholdMillisIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingCommonsSchedulerImplQuartzSchedulerProperties_H_ */
