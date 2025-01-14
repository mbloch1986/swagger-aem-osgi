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
 * ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties.h
 *
 * 
 */

#ifndef ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_
#define ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties
{
public:
    ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties();
    virtual ~ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSchedulerPeriod() const;
    void setSchedulerPeriod(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerConcurrent() const;
    void setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getServiceBadLinkToleranceInterval() const;
    void setServiceBadLinkToleranceInterval(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceCheckOverridePatterns() const;
    void setServiceCheckOverridePatterns(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getServiceCacheBrokenInternalLinks() const;
    void setServiceCacheBrokenInternalLinks(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceSpecialLinkPrefix() const;
    void setServiceSpecialLinkPrefix(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceSpecialLinkPatterns() const;
    void setServiceSpecialLinkPatterns(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Scheduler_period;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_concurrent;
    std::shared_ptr<ConfigNodePropertyInteger> m_Service_bad_link_tolerance_interval;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_check_override_patterns;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Service_cache_broken_internal_links;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_special_link_prefix;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_special_link_patterns;
};

}
}
}
}

#endif /* ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_ */
