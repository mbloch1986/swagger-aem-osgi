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



#include "ComDayCqWcmFoundationImplHTTPAuthHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::ComDayCqWcmFoundationImplHTTPAuthHandlerProperties()
{
    m_PathIsSet = false;
    m_Auth_http_nologinIsSet = false;
    m_Auth_http_realmIsSet = false;
    m_Auth_default_loginpageIsSet = false;
    m_Auth_cred_formIsSet = false;
    m_Auth_cred_utf8IsSet = false;
}

ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::~ComDayCqWcmFoundationImplHTTPAuthHandlerProperties()
{
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PathIsSet)
    {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(m_Path);
    }
    if(m_Auth_http_nologinIsSet)
    {
        val[utility::conversions::to_string_t("auth.http.nologin")] = ModelBase::toJson(m_Auth_http_nologin);
    }
    if(m_Auth_http_realmIsSet)
    {
        val[utility::conversions::to_string_t("auth.http.realm")] = ModelBase::toJson(m_Auth_http_realm);
    }
    if(m_Auth_default_loginpageIsSet)
    {
        val[utility::conversions::to_string_t("auth.default.loginpage")] = ModelBase::toJson(m_Auth_default_loginpage);
    }
    if(m_Auth_cred_formIsSet)
    {
        val[utility::conversions::to_string_t("auth.cred.form")] = ModelBase::toJson(m_Auth_cred_form);
    }
    if(m_Auth_cred_utf8IsSet)
    {
        val[utility::conversions::to_string_t("auth.cred.utf8")] = ModelBase::toJson(m_Auth_cred_utf8);
    }

    return val;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("auth.http.nologin")))
    {
        if(!val[utility::conversions::to_string_t("auth.http.nologin")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.http.nologin")]);
            setAuthHttpNologin( newItem );
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
    if(val.has_field(utility::conversions::to_string_t("auth.default.loginpage")))
    {
        if(!val[utility::conversions::to_string_t("auth.default.loginpage")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.default.loginpage")]);
            setAuthDefaultLoginpage( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.cred.form")))
    {
        if(!val[utility::conversions::to_string_t("auth.cred.form")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.cred.form")]);
            setAuthCredForm( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth.cred.utf8")))
    {
        if(!val[utility::conversions::to_string_t("auth.cred.utf8")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("auth.cred.utf8")]);
            setAuthCredUtf8( newItem );
        }
    }
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Auth_http_nologinIsSet)
    {
        if (m_Auth_http_nologin.get())
        {
            m_Auth_http_nologin->toMultipart(multipart, utility::conversions::to_string_t("auth.http.nologin."));
        }
    }
    if(m_Auth_http_realmIsSet)
    {
        if (m_Auth_http_realm.get())
        {
            m_Auth_http_realm->toMultipart(multipart, utility::conversions::to_string_t("auth.http.realm."));
        }
    }
    if(m_Auth_default_loginpageIsSet)
    {
        if (m_Auth_default_loginpage.get())
        {
            m_Auth_default_loginpage->toMultipart(multipart, utility::conversions::to_string_t("auth.default.loginpage."));
        }
    }
    if(m_Auth_cred_formIsSet)
    {
        if (m_Auth_cred_form.get())
        {
            m_Auth_cred_form->toMultipart(multipart, utility::conversions::to_string_t("auth.cred.form."));
        }
    }
    if(m_Auth_cred_utf8IsSet)
    {
        if (m_Auth_cred_utf8.get())
        {
            m_Auth_cred_utf8->toMultipart(multipart, utility::conversions::to_string_t("auth.cred.utf8."));
        }
    }
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("auth.http.nologin")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.http.nologin")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.http.nologin."));
            setAuthHttpNologin( newItem );
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
    if(multipart->hasContent(utility::conversions::to_string_t("auth.default.loginpage")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.default.loginpage")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.default.loginpage."));
            setAuthDefaultLoginpage( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.cred.form")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.cred.form")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.cred.form."));
            setAuthCredForm( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auth.cred.utf8")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auth.cred.utf8")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auth.cred.utf8."));
            setAuthCredUtf8( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getPath() const
{
    return m_Path;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::pathIsSet() const
{
    return m_PathIsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetPath()
{
    m_PathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getAuthHttpNologin() const
{
    return m_Auth_http_nologin;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setAuthHttpNologin(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Auth_http_nologin = value;
    m_Auth_http_nologinIsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::authHttpNologinIsSet() const
{
    return m_Auth_http_nologinIsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetAuth_http_nologin()
{
    m_Auth_http_nologinIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getAuthHttpRealm() const
{
    return m_Auth_http_realm;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setAuthHttpRealm(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_http_realm = value;
    m_Auth_http_realmIsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::authHttpRealmIsSet() const
{
    return m_Auth_http_realmIsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetAuth_http_realm()
{
    m_Auth_http_realmIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getAuthDefaultLoginpage() const
{
    return m_Auth_default_loginpage;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setAuthDefaultLoginpage(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auth_default_loginpage = value;
    m_Auth_default_loginpageIsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::authDefaultLoginpageIsSet() const
{
    return m_Auth_default_loginpageIsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetAuth_default_loginpage()
{
    m_Auth_default_loginpageIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getAuthCredForm() const
{
    return m_Auth_cred_form;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setAuthCredForm(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Auth_cred_form = value;
    m_Auth_cred_formIsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::authCredFormIsSet() const
{
    return m_Auth_cred_formIsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetAuth_cred_form()
{
    m_Auth_cred_formIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::getAuthCredUtf8() const
{
    return m_Auth_cred_utf8;
}


void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::setAuthCredUtf8(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Auth_cred_utf8 = value;
    m_Auth_cred_utf8IsSet = true;
}
bool ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::authCredUtf8IsSet() const
{
    return m_Auth_cred_utf8IsSet;
}

void ComDayCqWcmFoundationImplHTTPAuthHandlerProperties::unsetAuth_cred_utf8()
{
    m_Auth_cred_utf8IsSet = false;
}

}
}
}
}

