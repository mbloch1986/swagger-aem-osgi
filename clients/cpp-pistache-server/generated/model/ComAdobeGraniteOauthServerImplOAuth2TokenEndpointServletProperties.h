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
 * ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties_H_
#define ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties
    : public ModelBase
{
public:
    ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties();
    virtual ~ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthIssuer() const;
    void setOauthIssuer(ConfigNodePropertyString const& value);
    bool oauthIssuerIsSet() const;
    void unsetOauth_issuer();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthAccessTokenExpiresIn() const;
    void setOauthAccessTokenExpiresIn(ConfigNodePropertyString const& value);
    bool oauthAccessTokenExpiresInIsSet() const;
    void unsetOauth_access_token_expires_in();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOsgiHttpWhiteboardServletPattern() const;
    void setOsgiHttpWhiteboardServletPattern(ConfigNodePropertyString const& value);
    bool osgiHttpWhiteboardServletPatternIsSet() const;
    void unsetOsgi_http_whiteboard_servlet_pattern();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOsgiHttpWhiteboardContextSelect() const;
    void setOsgiHttpWhiteboardContextSelect(ConfigNodePropertyString const& value);
    bool osgiHttpWhiteboardContextSelectIsSet() const;
    void unsetOsgi_http_whiteboard_context_select();

protected:
    ConfigNodePropertyString m_Oauth_issuer;
    bool m_Oauth_issuerIsSet;
    ConfigNodePropertyString m_Oauth_access_token_expires_in;
    bool m_Oauth_access_token_expires_inIsSet;
    ConfigNodePropertyString m_Osgi_http_whiteboard_servlet_pattern;
    bool m_Osgi_http_whiteboard_servlet_patternIsSet;
    ConfigNodePropertyString m_Osgi_http_whiteboard_context_select;
    bool m_Osgi_http_whiteboard_context_selectIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties_H_ */
