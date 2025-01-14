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



#include "OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties()
{
    m_Osgi_http_whiteboard_context_selectIsSet = false;
    m_Osgi_http_whiteboard_listenerIsSet = false;
    m_Auth_sudo_cookieIsSet = false;
    m_Auth_sudo_parameterIsSet = false;
    m_Auth_annonymousIsSet = false;
    m_Sling_auth_requirementsIsSet = false;
    m_Sling_auth_anonymous_userIsSet = false;
    m_Sling_auth_anonymous_passwordIsSet = false;
    m_Auth_httpIsSet = false;
    m_Auth_http_realmIsSet = false;
    m_Auth_uri_suffixIsSet = false;
}

OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::~OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties()
{
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")] = ModelBase::toJson(m_Osgi_http_whiteboard_context_select);
    }
    if(m_Osgi_http_whiteboard_listenerIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.listener")] = ModelBase::toJson(m_Osgi_http_whiteboard_listener);
    }
    if(m_Auth_sudo_cookieIsSet)
    {
        val[utility::conversions::to_string_t("auth.sudo.cookie")] = ModelBase::toJson(m_Auth_sudo_cookie);
    }
    if(m_Auth_sudo_parameterIsSet)
    {
        val[utility::conversions::to_string_t("auth.sudo.parameter")] = ModelBase::toJson(m_Auth_sudo_parameter);
    }
    if(m_Auth_annonymousIsSet)
    {
        val[utility::conversions::to_string_t("auth.annonymous")] = ModelBase::toJson(m_Auth_annonymous);
    }
    if(m_Sling_auth_requirementsIsSet)
    {
        val[utility::conversions::to_string_t("sling.auth.requirements")] = ModelBase::toJson(m_Sling_auth_requirements);
    }
    if(m_Sling_auth_anonymous_userIsSet)
    {
        val[utility::conversions::to_string_t("sling.auth.anonymous.user")] = ModelBase::toJson(m_Sling_auth_anonymous_user);
    }
    if(m_Sling_auth_anonymous_passwordIsSet)
    {
        val[utility::conversions::to_string_t("sling.auth.anonymous.password")] = ModelBase::toJson(m_Sling_auth_anonymous_password);
    }
    if(m_Auth_httpIsSet)
    {
        val[utility::conversions::to_string_t("auth.http")] = ModelBase::toJson(m_Auth_http);
    }
    if(m_Auth_http_realmIsSet)
    {
        val[utility::conversions::to_string_t("auth.http.realm")] = ModelBase::toJson(m_Auth_http_realm);
    }
    if(m_Auth_uri_suffixIsSet)
    {
        val[utility::conversions::to_string_t("auth.uri.suffix")] = ModelBase::toJson(m_Auth_uri_suffix);
    }

    return val;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")]);
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.listener")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.listener")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.listener")]);
            setOsgiHttpWhiteboardListener( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.sudo.cookie")))
    {
        if(!val[utility::conversions::to_string_t("auth.sudo.cookie")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.sudo.cookie")]);
            setAuthSudoCookie( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.sudo.parameter")))
    {
        if(!val[utility::conversions::to_string_t("auth.sudo.parameter")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.sudo.parameter")]);
            setAuthSudoParameter( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.annonymous")))
    {
        if(!val[utility::conversions::to_string_t("auth.annonymous")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.annonymous")]);
            setAuthAnnonymous( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.auth.requirements")))
    {
        if(!val[utility::conversions::to_string_t("sling.auth.requirements")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.auth.requirements")]);
            setSlingAuthRequirements( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.auth.anonymous.user")))
    {
        if(!val[utility::conversions::to_string_t("sling.auth.anonymous.user")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.auth.anonymous.user")]);
            setSlingAuthAnonymousUser( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.auth.anonymous.password")))
    {
        if(!val[utility::conversions::to_string_t("sling.auth.anonymous.password")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.auth.anonymous.password")]);
            setSlingAuthAnonymousPassword( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.http")))
    {
        if(!val[utility::conversions::to_string_t("auth.http")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.http")]);
            setAuthHttp( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.http.realm")))
    {
        if(!val[utility::conversions::to_string_t("auth.http.realm")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.http.realm")]);
            setAuthHttpRealm( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.uri.suffix")))
    {
        if(!val[utility::conversions::to_string_t("auth.uri.suffix")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.uri.suffix")]);
            setAuthUriSuffix( newItem );
        }
    }
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        if (m_Osgi_http_whiteboard_context_select.get())
        {
            m_Osgi_http_whiteboard_context_select->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.context.select."));
        }
    }
    if(m_Osgi_http_whiteboard_listenerIsSet)
    {
        if (m_Osgi_http_whiteboard_listener.get())
        {
            m_Osgi_http_whiteboard_listener->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.listener."));
        }
    }
    if(m_Auth_sudo_cookieIsSet)
    {
        if (m_Auth_sudo_cookie.get())
        {
            m_Auth_sudo_cookie->toMultipart(multipart, utility::conversions::to_string_t("auth.sudo.cookie."));
        }
    }
    if(m_Auth_sudo_parameterIsSet)
    {
        if (m_Auth_sudo_parameter.get())
        {
            m_Auth_sudo_parameter->toMultipart(multipart, utility::conversions::to_string_t("auth.sudo.parameter."));
        }
    }
    if(m_Auth_annonymousIsSet)
    {
        if (m_Auth_annonymous.get())
        {
            m_Auth_annonymous->toMultipart(multipart, utility::conversions::to_string_t("auth.annonymous."));
        }
    }
    if(m_Sling_auth_requirementsIsSet)
    {
        if (m_Sling_auth_requirements.get())
        {
            m_Sling_auth_requirements->toMultipart(multipart, utility::conversions::to_string_t("sling.auth.requirements."));
        }
    }
    if(m_Sling_auth_anonymous_userIsSet)
    {
        if (m_Sling_auth_anonymous_user.get())
        {
            m_Sling_auth_anonymous_user->toMultipart(multipart, utility::conversions::to_string_t("sling.auth.anonymous.user."));
        }
    }
    if(m_Sling_auth_anonymous_passwordIsSet)
    {
        if (m_Sling_auth_anonymous_password.get())
        {
            m_Sling_auth_anonymous_password->toMultipart(multipart, utility::conversions::to_string_t("sling.auth.anonymous.password."));
        }
    }
    if(m_Auth_httpIsSet)
    {
        if (m_Auth_http.get())
        {
            m_Auth_http->toMultipart(multipart, utility::conversions::to_string_t("auth.http."));
        }
    }
    if(m_Auth_http_realmIsSet)
    {
        if (m_Auth_http_realm.get())
        {
            m_Auth_http_realm->toMultipart(multipart, utility::conversions::to_string_t("auth.http.realm."));
        }
    }
    if(m_Auth_uri_suffixIsSet)
    {
        if (m_Auth_uri_suffix.get())
        {
            m_Auth_uri_suffix->toMultipart(multipart, utility::conversions::to_string_t("auth.uri.suffix."));
        }
    }
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.listener")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.listener")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.listener."));
            setOsgiHttpWhiteboardListener( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.sudo.cookie")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.sudo.cookie")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.sudo.cookie."));
            setAuthSudoCookie( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.sudo.parameter")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.sudo.parameter")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.sudo.parameter."));
            setAuthSudoParameter( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.annonymous")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.annonymous")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.annonymous."));
            setAuthAnnonymous( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.requirements")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.requirements")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.auth.requirements."));
            setSlingAuthRequirements( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.anonymous.user")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.anonymous.user")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.auth.anonymous.user."));
            setSlingAuthAnonymousUser( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.anonymous.password")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.auth.anonymous.password")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.auth.anonymous.password."));
            setSlingAuthAnonymousPassword( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.http")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.http")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.http."));
            setAuthHttp( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.http.realm")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.http.realm")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.http.realm."));
            setAuthHttpRealm( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.uri.suffix")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.uri.suffix")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.uri.suffix."));
            setAuthUriSuffix( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getOsgiHttpWhiteboardContextSelect() const
{
    return m_Osgi_http_whiteboard_context_select;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setOsgiHttpWhiteboardContextSelect(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_context_select = value;
    m_Osgi_http_whiteboard_context_selectIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::osgiHttpWhiteboardContextSelectIsSet() const
{
    return m_Osgi_http_whiteboard_context_selectIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetOsgi_http_whiteboard_context_select()
{
    m_Osgi_http_whiteboard_context_selectIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getOsgiHttpWhiteboardListener() const
{
    return m_Osgi_http_whiteboard_listener;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setOsgiHttpWhiteboardListener(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_listener = value;
    m_Osgi_http_whiteboard_listenerIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::osgiHttpWhiteboardListenerIsSet() const
{
    return m_Osgi_http_whiteboard_listenerIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetOsgi_http_whiteboard_listener()
{
    m_Osgi_http_whiteboard_listenerIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthSudoCookie() const
{
    return m_Auth_sudo_cookie;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthSudoCookie(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_sudo_cookie = value;
    m_Auth_sudo_cookieIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authSudoCookieIsSet() const
{
    return m_Auth_sudo_cookieIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_sudo_cookie()
{
    m_Auth_sudo_cookieIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthSudoParameter() const
{
    return m_Auth_sudo_parameter;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthSudoParameter(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_sudo_parameter = value;
    m_Auth_sudo_parameterIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authSudoParameterIsSet() const
{
    return m_Auth_sudo_parameterIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_sudo_parameter()
{
    m_Auth_sudo_parameterIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthAnnonymous() const
{
    return m_Auth_annonymous;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthAnnonymous(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Auth_annonymous = value;
    m_Auth_annonymousIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authAnnonymousIsSet() const
{
    return m_Auth_annonymousIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_annonymous()
{
    m_Auth_annonymousIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getSlingAuthRequirements() const
{
    return m_Sling_auth_requirements;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setSlingAuthRequirements(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Sling_auth_requirements = value;
    m_Sling_auth_requirementsIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::slingAuthRequirementsIsSet() const
{
    return m_Sling_auth_requirementsIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetSling_auth_requirements()
{
    m_Sling_auth_requirementsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getSlingAuthAnonymousUser() const
{
    return m_Sling_auth_anonymous_user;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setSlingAuthAnonymousUser(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_auth_anonymous_user = value;
    m_Sling_auth_anonymous_userIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::slingAuthAnonymousUserIsSet() const
{
    return m_Sling_auth_anonymous_userIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetSling_auth_anonymous_user()
{
    m_Sling_auth_anonymous_userIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getSlingAuthAnonymousPassword() const
{
    return m_Sling_auth_anonymous_password;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setSlingAuthAnonymousPassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_auth_anonymous_password = value;
    m_Sling_auth_anonymous_passwordIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::slingAuthAnonymousPasswordIsSet() const
{
    return m_Sling_auth_anonymous_passwordIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetSling_auth_anonymous_password()
{
    m_Sling_auth_anonymous_passwordIsSet = false;
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthHttp() const
{
    return m_Auth_http;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthHttp(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Auth_http = value;
    m_Auth_httpIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authHttpIsSet() const
{
    return m_Auth_httpIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_http()
{
    m_Auth_httpIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthHttpRealm() const
{
    return m_Auth_http_realm;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthHttpRealm(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_http_realm = value;
    m_Auth_http_realmIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authHttpRealmIsSet() const
{
    return m_Auth_http_realmIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_http_realm()
{
    m_Auth_http_realmIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::getAuthUriSuffix() const
{
    return m_Auth_uri_suffix;
}


void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::setAuthUriSuffix(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Auth_uri_suffix = value;
    m_Auth_uri_suffixIsSet = true;
}
bool OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::authUriSuffixIsSet() const
{
    return m_Auth_uri_suffixIsSet;
}

void OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties::unsetAuth_uri_suffix()
{
    m_Auth_uri_suffixIsSet = false;
}

}
}
}
}

