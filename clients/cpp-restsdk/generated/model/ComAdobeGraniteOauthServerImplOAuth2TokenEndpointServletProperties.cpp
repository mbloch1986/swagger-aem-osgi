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



#include "ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties()
{
    m_Oauth_issuerIsSet = false;
    m_Oauth_access_token_expires_inIsSet = false;
    m_Osgi_http_whiteboard_servlet_patternIsSet = false;
    m_Osgi_http_whiteboard_context_selectIsSet = false;
}

ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::~ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties()
{
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Oauth_issuerIsSet)
    {
        val[utility::conversions::to_string_t("oauth.issuer")] = ModelBase::toJson(m_Oauth_issuer);
    }
    if(m_Oauth_access_token_expires_inIsSet)
    {
        val[utility::conversions::to_string_t("oauth.access.token.expires.in")] = ModelBase::toJson(m_Oauth_access_token_expires_in);
    }
    if(m_Osgi_http_whiteboard_servlet_patternIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")] = ModelBase::toJson(m_Osgi_http_whiteboard_servlet_pattern);
    }
    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")] = ModelBase::toJson(m_Osgi_http_whiteboard_context_select);
    }

    return val;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("oauth.issuer")))
    {
        if(!val[utility::conversions::to_string_t("oauth.issuer")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.issuer")]);
            setOauthIssuer( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.access.token.expires.in")))
    {
        if(!val[utility::conversions::to_string_t("oauth.access.token.expires.in")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.access.token.expires.in")]);
            setOauthAccessTokenExpiresIn( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")]);
            setOsgiHttpWhiteboardServletPattern( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")]);
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
    }
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Oauth_issuerIsSet)
    {
        if (m_Oauth_issuer.get())
        {
            m_Oauth_issuer->toMultipart(multipart, utility::conversions::to_string_t("oauth.issuer."));
        }
    }
    if(m_Oauth_access_token_expires_inIsSet)
    {
        if (m_Oauth_access_token_expires_in.get())
        {
            m_Oauth_access_token_expires_in->toMultipart(multipart, utility::conversions::to_string_t("oauth.access.token.expires.in."));
        }
    }
    if(m_Osgi_http_whiteboard_servlet_patternIsSet)
    {
        if (m_Osgi_http_whiteboard_servlet_pattern.get())
        {
            m_Osgi_http_whiteboard_servlet_pattern->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern."));
        }
    }
    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        if (m_Osgi_http_whiteboard_context_select.get())
        {
            m_Osgi_http_whiteboard_context_select->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.context.select."));
        }
    }
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("oauth.issuer")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.issuer")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.issuer."));
            setOauthIssuer( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.access.token.expires.in")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.access.token.expires.in")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.access.token.expires.in."));
            setOauthAccessTokenExpiresIn( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern."));
            setOsgiHttpWhiteboardServletPattern( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.context.select."));
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOauthIssuer() const
{
    return m_Oauth_issuer;
}


void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOauthIssuer(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_issuer = value;
    m_Oauth_issuerIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::oauthIssuerIsSet() const
{
    return m_Oauth_issuerIsSet;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::unsetOauth_issuer()
{
    m_Oauth_issuerIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOauthAccessTokenExpiresIn() const
{
    return m_Oauth_access_token_expires_in;
}


void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOauthAccessTokenExpiresIn(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_access_token_expires_in = value;
    m_Oauth_access_token_expires_inIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::oauthAccessTokenExpiresInIsSet() const
{
    return m_Oauth_access_token_expires_inIsSet;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::unsetOauth_access_token_expires_in()
{
    m_Oauth_access_token_expires_inIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOsgiHttpWhiteboardServletPattern() const
{
    return m_Osgi_http_whiteboard_servlet_pattern;
}


void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOsgiHttpWhiteboardServletPattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_servlet_pattern = value;
    m_Osgi_http_whiteboard_servlet_patternIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::osgiHttpWhiteboardServletPatternIsSet() const
{
    return m_Osgi_http_whiteboard_servlet_patternIsSet;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::unsetOsgi_http_whiteboard_servlet_pattern()
{
    m_Osgi_http_whiteboard_servlet_patternIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::getOsgiHttpWhiteboardContextSelect() const
{
    return m_Osgi_http_whiteboard_context_select;
}


void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::setOsgiHttpWhiteboardContextSelect(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_context_select = value;
    m_Osgi_http_whiteboard_context_selectIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::osgiHttpWhiteboardContextSelectIsSet() const
{
    return m_Osgi_http_whiteboard_context_selectIsSet;
}

void ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties::unsetOsgi_http_whiteboard_context_select()
{
    m_Osgi_http_whiteboard_context_selectIsSet = false;
}

}
}
}
}

