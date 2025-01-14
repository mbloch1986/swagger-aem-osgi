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
 * OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_
#define OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_



#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties
{
public:
    OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties();
    virtual ~OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getRequiredServicePids() const;
    void setRequiredServicePids(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getAuthorizationCompositionType() const;
    void setAuthorizationCompositionType(std::shared_ptr<ConfigNodePropertyDropDown> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_RequiredServicePids;
    std::shared_ptr<ConfigNodePropertyDropDown> m_AuthorizationCompositionType;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties_H_ */
