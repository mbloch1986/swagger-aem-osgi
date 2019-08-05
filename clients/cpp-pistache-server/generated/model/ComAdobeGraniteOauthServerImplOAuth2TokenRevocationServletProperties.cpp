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


#include "ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties()
{
    m_Oauth_token_revocation_activeIsSet = false;
    
}

ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::~ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties()
{
}

void ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Oauth_token_revocation_activeIsSet)
    {
        val["oauth.token.revocation.active"] = ModelBase::toJson(m_Oauth_token_revocation_active);
    }
    

    return val;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("oauth.token.revocation.active") != val.end())
    {
        if(!val["oauth.token.revocation.active"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["oauth.token.revocation.active"]);
            setOauthTokenRevocationActive( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::getOauthTokenRevocationActive() const
{
    return m_Oauth_token_revocation_active;
}
void ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::setOauthTokenRevocationActive(ConfigNodePropertyBoolean const& value)
{
    m_Oauth_token_revocation_active = value;
    m_Oauth_token_revocation_activeIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::oauthTokenRevocationActiveIsSet() const
{
    return m_Oauth_token_revocation_activeIsSet;
}
void ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties::unsetOauth_token_revocation_active()
{
    m_Oauth_token_revocation_activeIsSet = false;
}

}
}
}
}
