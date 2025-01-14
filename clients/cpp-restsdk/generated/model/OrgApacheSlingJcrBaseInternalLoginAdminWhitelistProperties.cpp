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



#include "OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties()
{
    m_Whitelist_bypassIsSet = false;
    m_Whitelist_bundles_regexpIsSet = false;
}

OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::~OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties()
{
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Whitelist_bypassIsSet)
    {
        val[utility::conversions::to_string_t("whitelist.bypass")] = ModelBase::toJson(m_Whitelist_bypass);
    }
    if(m_Whitelist_bundles_regexpIsSet)
    {
        val[utility::conversions::to_string_t("whitelist.bundles.regexp")] = ModelBase::toJson(m_Whitelist_bundles_regexp);
    }

    return val;
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("whitelist.bypass")))
    {
        if(!val[utility::conversions::to_string_t("whitelist.bypass")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("whitelist.bypass")]);
            setWhitelistBypass( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whitelist.bundles.regexp")))
    {
        if(!val[utility::conversions::to_string_t("whitelist.bundles.regexp")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("whitelist.bundles.regexp")]);
            setWhitelistBundlesRegexp( newItem );
        }
    }
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Whitelist_bypassIsSet)
    {
        if (m_Whitelist_bypass.get())
        {
            m_Whitelist_bypass->toMultipart(multipart, utility::conversions::to_string_t("whitelist.bypass."));
        }
    }
    if(m_Whitelist_bundles_regexpIsSet)
    {
        if (m_Whitelist_bundles_regexp.get())
        {
            m_Whitelist_bundles_regexp->toMultipart(multipart, utility::conversions::to_string_t("whitelist.bundles.regexp."));
        }
    }
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("whitelist.bypass")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("whitelist.bypass")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("whitelist.bypass."));
            setWhitelistBypass( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("whitelist.bundles.regexp")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("whitelist.bundles.regexp")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("whitelist.bundles.regexp."));
            setWhitelistBundlesRegexp( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::getWhitelistBypass() const
{
    return m_Whitelist_bypass;
}


void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::setWhitelistBypass(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Whitelist_bypass = value;
    m_Whitelist_bypassIsSet = true;
}
bool OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::whitelistBypassIsSet() const
{
    return m_Whitelist_bypassIsSet;
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::unsetWhitelist_bypass()
{
    m_Whitelist_bypassIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::getWhitelistBundlesRegexp() const
{
    return m_Whitelist_bundles_regexp;
}


void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::setWhitelistBundlesRegexp(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Whitelist_bundles_regexp = value;
    m_Whitelist_bundles_regexpIsSet = true;
}
bool OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::whitelistBundlesRegexpIsSet() const
{
    return m_Whitelist_bundles_regexpIsSet;
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties::unsetWhitelist_bundles_regexp()
{
    m_Whitelist_bundles_regexpIsSet = false;
}

}
}
}
}

