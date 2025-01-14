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
 * ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties.h
 *
 * 
 */

#ifndef ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties_H_
#define ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties
{
public:
    ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties();
    virtual ~ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqAnalyticsTestandtargetApiUrl() const;
    void setCqAnalyticsTestandtargetApiUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqAnalyticsTestandtargetTimeout() const;
    void setCqAnalyticsTestandtargetTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqAnalyticsTestandtargetSockettimeout() const;
    void setCqAnalyticsTestandtargetSockettimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqAnalyticsTestandtargetRecommendationsUrlReplace() const;
    void setCqAnalyticsTestandtargetRecommendationsUrlReplace(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqAnalyticsTestandtargetRecommendationsUrlReplacewith() const;
    void setCqAnalyticsTestandtargetRecommendationsUrlReplacewith(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Cq_analytics_testandtarget_api_url;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_analytics_testandtarget_timeout;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_analytics_testandtarget_sockettimeout;
    std::shared_ptr<ConfigNodePropertyString> m_Cq_analytics_testandtarget_recommendations_url_replace;
    std::shared_ptr<ConfigNodePropertyString> m_Cq_analytics_testandtarget_recommendations_url_replacewith;
};

}
}
}
}

#endif /* ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties_H_ */
