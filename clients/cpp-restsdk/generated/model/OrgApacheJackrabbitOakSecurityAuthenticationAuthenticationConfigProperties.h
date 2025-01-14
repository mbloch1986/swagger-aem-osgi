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
 * OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties();
    virtual ~OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheJackrabbitOakAuthenticationAppName() const;
    bool orgApacheJackrabbitOakAuthenticationAppNameIsSet() const;
    void unsetOrg_apache_jackrabbit_oak_authentication_appName();
    void setOrgApacheJackrabbitOakAuthenticationAppName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheJackrabbitOakAuthenticationConfigSpiName() const;
    bool orgApacheJackrabbitOakAuthenticationConfigSpiNameIsSet() const;
    void unsetOrg_apache_jackrabbit_oak_authentication_configSpiName();
    void setOrgApacheJackrabbitOakAuthenticationConfigSpiName(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_jackrabbit_oak_authentication_appName;
    bool m_Org_apache_jackrabbit_oak_authentication_appNameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_jackrabbit_oak_authentication_configSpiName;
    bool m_Org_apache_jackrabbit_oak_authentication_configSpiNameIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties_H_ */
