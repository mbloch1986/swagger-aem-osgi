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
 * ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_
#define ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDtmImplServletsDTMDeployHookServletProperties
{
public:
    ComAdobeCqDtmImplServletsDTMDeployHookServletProperties();
    virtual ~ComAdobeCqDtmImplServletsDTMDeployHookServletProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqDtmImplServletsDTMDeployHookServletProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDtmStagingIpWhitelist() const;
    void setDtmStagingIpWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDtmProductionIpWhitelist() const;
    void setDtmProductionIpWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Dtm_staging_ip_whitelist;
    std::shared_ptr<ConfigNodePropertyArray> m_Dtm_production_ip_whitelist;
};

}
}
}
}

#endif /* ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_ */