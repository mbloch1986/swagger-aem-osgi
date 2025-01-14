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
 * OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties_H_
#define OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties();
    virtual ~OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getProtectExternalId() const;
    void setProtectExternalId(ConfigNodePropertyBoolean const& value);
    bool protectExternalIdIsSet() const;
    void unsetProtectExternalId();

protected:
    ConfigNodePropertyBoolean m_ProtectExternalId;
    bool m_ProtectExternalIdIsSet;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplPrProperties_H_ */
