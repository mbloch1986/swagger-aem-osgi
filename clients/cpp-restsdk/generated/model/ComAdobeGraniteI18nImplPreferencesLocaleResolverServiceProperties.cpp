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



#include "ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties()
{
    m_Security_preferences_nameIsSet = false;
}

ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::~ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties()
{
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Security_preferences_nameIsSet)
    {
        val[utility::conversions::to_string_t("security.preferences.name")] = ModelBase::toJson(m_Security_preferences_name);
    }

    return val;
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("security.preferences.name")))
    {
        if(!val[utility::conversions::to_string_t("security.preferences.name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("security.preferences.name")]);
            setSecurityPreferencesName( newItem );
        }
    }
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Security_preferences_nameIsSet)
    {
        if (m_Security_preferences_name.get())
        {
            m_Security_preferences_name->toMultipart(multipart, utility::conversions::to_string_t("security.preferences.name."));
        }
    }
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("security.preferences.name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("security.preferences.name")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("security.preferences.name."));
            setSecurityPreferencesName( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::getSecurityPreferencesName() const
{
    return m_Security_preferences_name;
}


void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::setSecurityPreferencesName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Security_preferences_name = value;
    m_Security_preferences_nameIsSet = true;
}
bool ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::securityPreferencesNameIsSet() const
{
    return m_Security_preferences_nameIsSet;
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties::unsetSecurity_preferences_name()
{
    m_Security_preferences_nameIsSet = false;
}

}
}
}
}

