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
 * ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_
#define ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDtmImplServletsDTMDeployHookServletProperties
    : public ModelBase
{
public:
    ComAdobeCqDtmImplServletsDTMDeployHookServletProperties();
    virtual ~ComAdobeCqDtmImplServletsDTMDeployHookServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqDtmImplServletsDTMDeployHookServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getDtmStagingIpWhitelist() const;
    void setDtmStagingIpWhitelist(ConfigNodePropertyArray const& value);
    bool dtmStagingIpWhitelistIsSet() const;
    void unsetDtm_staging_ip_whitelist();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getDtmProductionIpWhitelist() const;
    void setDtmProductionIpWhitelist(ConfigNodePropertyArray const& value);
    bool dtmProductionIpWhitelistIsSet() const;
    void unsetDtm_production_ip_whitelist();

protected:
    ConfigNodePropertyArray m_Dtm_staging_ip_whitelist;
    bool m_Dtm_staging_ip_whitelistIsSet;
    ConfigNodePropertyArray m_Dtm_production_ip_whitelist;
    bool m_Dtm_production_ip_whitelistIsSet;
};

}
}
}
}

#endif /* ComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H_ */