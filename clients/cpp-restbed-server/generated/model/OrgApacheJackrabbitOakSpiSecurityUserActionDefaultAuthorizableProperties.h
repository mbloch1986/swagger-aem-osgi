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
 * OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties_H_
#define OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties_H_



#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties
{
public:
    OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties();
    virtual ~OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getEnabledActions() const;
    void setEnabledActions(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getUserPrivilegeNames() const;
    void setUserPrivilegeNames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getGroupPrivilegeNames() const;
    void setGroupPrivilegeNames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getConstraint() const;
    void setConstraint(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyDropDown> m_EnabledActions;
    std::shared_ptr<ConfigNodePropertyArray> m_UserPrivilegeNames;
    std::shared_ptr<ConfigNodePropertyArray> m_GroupPrivilegeNames;
    std::shared_ptr<ConfigNodePropertyString> m_Constraint;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties_H_ */
