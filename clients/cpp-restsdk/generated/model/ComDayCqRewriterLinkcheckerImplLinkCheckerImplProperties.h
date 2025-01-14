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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties
    : public ModelBase
{
public:
    ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties();
    virtual ~ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSchedulerPeriod() const;
    bool schedulerPeriodIsSet() const;
    void unsetScheduler_period();
    void setSchedulerPeriod(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerConcurrent() const;
    bool schedulerConcurrentIsSet() const;
    void unsetScheduler_concurrent();
    void setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getServiceBadLinkToleranceInterval() const;
    bool serviceBadLinkToleranceIntervalIsSet() const;
    void unsetService_bad_link_tolerance_interval();
    void setServiceBadLinkToleranceInterval(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceCheckOverridePatterns() const;
    bool serviceCheckOverridePatternsIsSet() const;
    void unsetService_check_override_patterns();
    void setServiceCheckOverridePatterns(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getServiceCacheBrokenInternalLinks() const;
    bool serviceCacheBrokenInternalLinksIsSet() const;
    void unsetService_cache_broken_internal_links();
    void setServiceCacheBrokenInternalLinks(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceSpecialLinkPrefix() const;
    bool serviceSpecialLinkPrefixIsSet() const;
    void unsetService_special_link_prefix();
    void setServiceSpecialLinkPrefix(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getServiceSpecialLinkPatterns() const;
    bool serviceSpecialLinkPatternsIsSet() const;
    void unsetService_special_link_patterns();
    void setServiceSpecialLinkPatterns(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Scheduler_period;
    bool m_Scheduler_periodIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_concurrent;
    bool m_Scheduler_concurrentIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Service_bad_link_tolerance_interval;
    bool m_Service_bad_link_tolerance_intervalIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_check_override_patterns;
    bool m_Service_check_override_patternsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Service_cache_broken_internal_links;
    bool m_Service_cache_broken_internal_linksIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_special_link_prefix;
    bool m_Service_special_link_prefixIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Service_special_link_patterns;
    bool m_Service_special_link_patternsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties_H_ */
