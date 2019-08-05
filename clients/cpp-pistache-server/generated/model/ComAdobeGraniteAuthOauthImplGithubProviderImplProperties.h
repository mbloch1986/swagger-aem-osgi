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
 * ComAdobeGraniteAuthOauthImplGithubProviderImplProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_
#define ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAuthOauthImplGithubProviderImplProperties
    : public ModelBase
{
public:
    ComAdobeGraniteAuthOauthImplGithubProviderImplProperties();
    virtual ~ComAdobeGraniteAuthOauthImplGithubProviderImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthOauthImplGithubProviderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthProviderId() const;
    void setOauthProviderId(ConfigNodePropertyString const& value);
    bool oauthProviderIdIsSet() const;
    void unsetOauth_provider_id();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthProviderGithubAuthorizationUrl() const;
    void setOauthProviderGithubAuthorizationUrl(ConfigNodePropertyString const& value);
    bool oauthProviderGithubAuthorizationUrlIsSet() const;
    void unsetOauth_provider_github_authorization_url();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthProviderGithubTokenUrl() const;
    void setOauthProviderGithubTokenUrl(ConfigNodePropertyString const& value);
    bool oauthProviderGithubTokenUrlIsSet() const;
    void unsetOauth_provider_github_token_url();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthProviderGithubProfileUrl() const;
    void setOauthProviderGithubProfileUrl(ConfigNodePropertyString const& value);
    bool oauthProviderGithubProfileUrlIsSet() const;
    void unsetOauth_provider_github_profile_url();

protected:
    ConfigNodePropertyString m_Oauth_provider_id;
    bool m_Oauth_provider_idIsSet;
    ConfigNodePropertyString m_Oauth_provider_github_authorization_url;
    bool m_Oauth_provider_github_authorization_urlIsSet;
    ConfigNodePropertyString m_Oauth_provider_github_token_url;
    bool m_Oauth_provider_github_token_urlIsSet;
    ConfigNodePropertyString m_Oauth_provider_github_profile_url;
    bool m_Oauth_provider_github_profile_urlIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_ */