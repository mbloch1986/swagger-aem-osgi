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
 * ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties_H_
#define ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties_H_



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
class  ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties
{
public:
    ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties();
    virtual ~ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqSocialConsoleAnalyticsSitesMapping() const;
    void setCqSocialConsoleAnalyticsSitesMapping(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPriority() const;
    void setPriority(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_social_console_analytics_sites_mapping;
    std::shared_ptr<ConfigNodePropertyInteger> m_Priority;
};

}
}
}
}

#endif /* ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties_H_ */