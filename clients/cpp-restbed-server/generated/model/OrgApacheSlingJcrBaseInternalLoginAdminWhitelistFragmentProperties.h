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
 * OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_
#define OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_



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
class  OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties
{
public:
    OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties();
    virtual ~OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getWhitelistName() const;
    void setWhitelistName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getWhitelistBundles() const;
    void setWhitelistBundles(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Whitelist_name;
    std::shared_ptr<ConfigNodePropertyArray> m_Whitelist_bundles;
};

}
}
}
}

#endif /* OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_ */
