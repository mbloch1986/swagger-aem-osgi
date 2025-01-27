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
 * ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo.h
 *
 * 
 */

#ifndef ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo_H_
#define ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo_H_



#include <string>
#include "ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo
{
public:
    ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo();
    virtual ~ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getPid() const;
    void setPid(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties> getProperties() const;
    void setProperties(std::shared_ptr<ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties> value);

protected:
    std::string m_Pid;
    std::string m_Title;
    std::string m_Description;
    std::shared_ptr<ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties> m_Properties;
};

}
}
}
}

#endif /* ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerInfo_H_ */
