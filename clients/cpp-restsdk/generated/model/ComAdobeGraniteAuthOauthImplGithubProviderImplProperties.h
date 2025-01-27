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
 * ComAdobeGraniteAuthOauthImplGithubProviderImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthOauthImplGithubProviderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderId() const;
    bool oauthProviderIdIsSet() const;
    void unsetOauth_provider_id();
    void setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderGithubAuthorizationUrl() const;
    bool oauthProviderGithubAuthorizationUrlIsSet() const;
    void unsetOauth_provider_github_authorization_url();
    void setOauthProviderGithubAuthorizationUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderGithubTokenUrl() const;
    bool oauthProviderGithubTokenUrlIsSet() const;
    void unsetOauth_provider_github_token_url();
    void setOauthProviderGithubTokenUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderGithubProfileUrl() const;
    bool oauthProviderGithubProfileUrlIsSet() const;
    void unsetOauth_provider_github_profile_url();
    void setOauthProviderGithubProfileUrl(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_id;
    bool m_Oauth_provider_idIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_github_authorization_url;
    bool m_Oauth_provider_github_authorization_urlIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_github_token_url;
    bool m_Oauth_provider_github_token_urlIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_github_profile_url;
    bool m_Oauth_provider_github_profile_urlIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplGithubProviderImplProperties_H_ */
