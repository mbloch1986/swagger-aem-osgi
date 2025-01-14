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
 * ComAdobeGraniteAuthImsImplIMSProviderImplProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthImsImplIMSProviderImplProperties_H_
#define ComAdobeGraniteAuthImsImplIMSProviderImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
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
class  ComAdobeGraniteAuthImsImplIMSProviderImplProperties
{
public:
    ComAdobeGraniteAuthImsImplIMSProviderImplProperties();
    virtual ~ComAdobeGraniteAuthImsImplIMSProviderImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthImsImplIMSProviderImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderId() const;
    void setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsAuthorizationUrl() const;
    void setOauthProviderImsAuthorizationUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsTokenUrl() const;
    void setOauthProviderImsTokenUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsProfileUrl() const;
    void setOauthProviderImsProfileUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOauthProviderImsExtendedDetailsUrls() const;
    void setOauthProviderImsExtendedDetailsUrls(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsValidateTokenUrl() const;
    void setOauthProviderImsValidateTokenUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsSessionProperty() const;
    void setOauthProviderImsSessionProperty(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsServiceTokenClientId() const;
    void setOauthProviderImsServiceTokenClientId(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsServiceTokenClientSecret() const;
    void setOauthProviderImsServiceTokenClientSecret(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderImsServiceToken() const;
    void setOauthProviderImsServiceToken(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getImsOrgRef() const;
    void setImsOrgRef(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getImsGroupMapping() const;
    void setImsGroupMapping(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOauthProviderImsOnlyLicenseGroup() const;
    void setOauthProviderImsOnlyLicenseGroup(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_id;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_authorization_url;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_token_url;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_profile_url;
    std::shared_ptr<ConfigNodePropertyArray> m_Oauth_provider_ims_extended_details_urls;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_validate_token_url;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_session_property;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_service_token_client_id;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_service_token_client_secret;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_ims_service_token;
    std::shared_ptr<ConfigNodePropertyString> m_Ims_org_ref;
    std::shared_ptr<ConfigNodePropertyArray> m_Ims_group_mapping;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Oauth_provider_ims_only_license_group;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthImsImplIMSProviderImplProperties_H_ */
