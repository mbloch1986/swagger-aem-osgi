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



#include "ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties()
{
    m_Oauth_client_revocation_activeIsSet = false;
}

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::~ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties()
{
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Oauth_client_revocation_activeIsSet)
    {
        val[utility::conversions::to_string_t("oauth.client.revocation.active")] = ModelBase::toJson(m_Oauth_client_revocation_active);
    }

    return val;
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("oauth.client.revocation.active")))
    {
        if(!val[utility::conversions::to_string_t("oauth.client.revocation.active")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.client.revocation.active")]);
            setOauthClientRevocationActive( newItem );
        }
    }
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Oauth_client_revocation_activeIsSet)
    {
        if (m_Oauth_client_revocation_active.get())
        {
            m_Oauth_client_revocation_active->toMultipart(multipart, utility::conversions::to_string_t("oauth.client.revocation.active."));
        }
    }
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("oauth.client.revocation.active")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.client.revocation.active")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.client.revocation.active."));
            setOauthClientRevocationActive( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::getOauthClientRevocationActive() const
{
    return m_Oauth_client_revocation_active;
}


void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::setOauthClientRevocationActive(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Oauth_client_revocation_active = value;
    m_Oauth_client_revocation_activeIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::oauthClientRevocationActiveIsSet() const
{
    return m_Oauth_client_revocation_activeIsSet;
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::unsetOauth_client_revocation_active()
{
    m_Oauth_client_revocation_activeIsSet = false;
}

}
}
}
}

