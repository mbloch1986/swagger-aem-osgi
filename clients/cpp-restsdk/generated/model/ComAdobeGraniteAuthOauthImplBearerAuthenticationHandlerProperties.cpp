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



#include "ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties()
{
    m_PathIsSet = false;
    m_Oauth_clientIds_allowedIsSet = false;
    m_Auth_bearer_sync_imsIsSet = false;
    m_Auth_tokenRequestParameterIsSet = false;
    m_Oauth_bearer_configidIsSet = false;
    m_Oauth_jwt_supportIsSet = false;
}

ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::~ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties()
{
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PathIsSet)
    {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(m_Path);
    }
    if(m_Oauth_clientIds_allowedIsSet)
    {
        val[utility::conversions::to_string_t("oauth.clientIds.allowed")] = ModelBase::toJson(m_Oauth_clientIds_allowed);
    }
    if(m_Auth_bearer_sync_imsIsSet)
    {
        val[utility::conversions::to_string_t("auth.bearer.sync.ims")] = ModelBase::toJson(m_Auth_bearer_sync_ims);
    }
    if(m_Auth_tokenRequestParameterIsSet)
    {
        val[utility::conversions::to_string_t("auth.tokenRequestParameter")] = ModelBase::toJson(m_Auth_tokenRequestParameter);
    }
    if(m_Oauth_bearer_configidIsSet)
    {
        val[utility::conversions::to_string_t("oauth.bearer.configid")] = ModelBase::toJson(m_Oauth_bearer_configid);
    }
    if(m_Oauth_jwt_supportIsSet)
    {
        val[utility::conversions::to_string_t("oauth.jwt.support")] = ModelBase::toJson(m_Oauth_jwt_support);
    }

    return val;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("path")))
    {
        if(!val[utility::conversions::to_string_t("path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("path")]);
            setPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.clientIds.allowed")))
    {
        if(!val[utility::conversions::to_string_t("oauth.clientIds.allowed")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.clientIds.allowed")]);
            setOauthClientIdsAllowed( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.bearer.sync.ims")))
    {
        if(!val[utility::conversions::to_string_t("auth.bearer.sync.ims")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.bearer.sync.ims")]);
            setAuthBearerSyncIms( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.tokenRequestParameter")))
    {
        if(!val[utility::conversions::to_string_t("auth.tokenRequestParameter")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.tokenRequestParameter")]);
            setAuthTokenRequestParameter( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.bearer.configid")))
    {
        if(!val[utility::conversions::to_string_t("oauth.bearer.configid")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.bearer.configid")]);
            setOauthBearerConfigid( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.jwt.support")))
    {
        if(!val[utility::conversions::to_string_t("oauth.jwt.support")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.jwt.support")]);
            setOauthJwtSupport( newItem );
        }
    }
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PathIsSet)
    {
        if (m_Path.get())
        {
            m_Path->toMultipart(multipart, utility::conversions::to_string_t("path."));
        }
    }
    if(m_Oauth_clientIds_allowedIsSet)
    {
        if (m_Oauth_clientIds_allowed.get())
        {
            m_Oauth_clientIds_allowed->toMultipart(multipart, utility::conversions::to_string_t("oauth.clientIds.allowed."));
        }
    }
    if(m_Auth_bearer_sync_imsIsSet)
    {
        if (m_Auth_bearer_sync_ims.get())
        {
            m_Auth_bearer_sync_ims->toMultipart(multipart, utility::conversions::to_string_t("auth.bearer.sync.ims."));
        }
    }
    if(m_Auth_tokenRequestParameterIsSet)
    {
        if (m_Auth_tokenRequestParameter.get())
        {
            m_Auth_tokenRequestParameter->toMultipart(multipart, utility::conversions::to_string_t("auth.tokenRequestParameter."));
        }
    }
    if(m_Oauth_bearer_configidIsSet)
    {
        if (m_Oauth_bearer_configid.get())
        {
            m_Oauth_bearer_configid->toMultipart(multipart, utility::conversions::to_string_t("oauth.bearer.configid."));
        }
    }
    if(m_Oauth_jwt_supportIsSet)
    {
        if (m_Oauth_jwt_support.get())
        {
            m_Oauth_jwt_support->toMultipart(multipart, utility::conversions::to_string_t("oauth.jwt.support."));
        }
    }
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("path."));
            setPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.clientIds.allowed")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.clientIds.allowed")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.clientIds.allowed."));
            setOauthClientIdsAllowed( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.bearer.sync.ims")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.bearer.sync.ims")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.bearer.sync.ims."));
            setAuthBearerSyncIms( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.tokenRequestParameter")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.tokenRequestParameter")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.tokenRequestParameter."));
            setAuthTokenRequestParameter( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.bearer.configid")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.bearer.configid")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.bearer.configid."));
            setOauthBearerConfigid( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.jwt.support")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.jwt.support")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.jwt.support."));
            setOauthJwtSupport( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getPath() const
{
    return m_Path;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::pathIsSet() const
{
    return m_PathIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetPath()
{
    m_PathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getOauthClientIdsAllowed() const
{
    return m_Oauth_clientIds_allowed;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setOauthClientIdsAllowed(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Oauth_clientIds_allowed = value;
    m_Oauth_clientIds_allowedIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::oauthClientIdsAllowedIsSet() const
{
    return m_Oauth_clientIds_allowedIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetOauth_clientIds_allowed()
{
    m_Oauth_clientIds_allowedIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getAuthBearerSyncIms() const
{
    return m_Auth_bearer_sync_ims;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setAuthBearerSyncIms(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Auth_bearer_sync_ims = value;
    m_Auth_bearer_sync_imsIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::authBearerSyncImsIsSet() const
{
    return m_Auth_bearer_sync_imsIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetAuth_bearer_sync_ims()
{
    m_Auth_bearer_sync_imsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getAuthTokenRequestParameter() const
{
    return m_Auth_tokenRequestParameter;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setAuthTokenRequestParameter(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_tokenRequestParameter = value;
    m_Auth_tokenRequestParameterIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::authTokenRequestParameterIsSet() const
{
    return m_Auth_tokenRequestParameterIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetAuth_tokenRequestParameter()
{
    m_Auth_tokenRequestParameterIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getOauthBearerConfigid() const
{
    return m_Oauth_bearer_configid;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setOauthBearerConfigid(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_bearer_configid = value;
    m_Oauth_bearer_configidIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::oauthBearerConfigidIsSet() const
{
    return m_Oauth_bearer_configidIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetOauth_bearer_configid()
{
    m_Oauth_bearer_configidIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::getOauthJwtSupport() const
{
    return m_Oauth_jwt_support;
}


void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::setOauthJwtSupport(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Oauth_jwt_support = value;
    m_Oauth_jwt_supportIsSet = true;
}
bool ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::oauthJwtSupportIsSet() const
{
    return m_Oauth_jwt_supportIsSet;
}

void ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties::unsetOauth_jwt_support()
{
    m_Oauth_jwt_supportIsSet = false;
}

}
}
}
}

