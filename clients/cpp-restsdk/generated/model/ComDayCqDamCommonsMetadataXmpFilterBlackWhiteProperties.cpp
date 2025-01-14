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



#include "ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties()
{
    m_Xmp_filter_apply_whitelistIsSet = false;
    m_Xmp_filter_whitelistIsSet = false;
    m_Xmp_filter_apply_blacklistIsSet = false;
    m_Xmp_filter_blacklistIsSet = false;
}

ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::~ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties()
{
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Xmp_filter_apply_whitelistIsSet)
    {
        val[utility::conversions::to_string_t("xmp.filter.apply_whitelist")] = ModelBase::toJson(m_Xmp_filter_apply_whitelist);
    }
    if(m_Xmp_filter_whitelistIsSet)
    {
        val[utility::conversions::to_string_t("xmp.filter.whitelist")] = ModelBase::toJson(m_Xmp_filter_whitelist);
    }
    if(m_Xmp_filter_apply_blacklistIsSet)
    {
        val[utility::conversions::to_string_t("xmp.filter.apply_blacklist")] = ModelBase::toJson(m_Xmp_filter_apply_blacklist);
    }
    if(m_Xmp_filter_blacklistIsSet)
    {
        val[utility::conversions::to_string_t("xmp.filter.blacklist")] = ModelBase::toJson(m_Xmp_filter_blacklist);
    }

    return val;
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("xmp.filter.apply_whitelist")))
    {
        if(!val[utility::conversions::to_string_t("xmp.filter.apply_whitelist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("xmp.filter.apply_whitelist")]);
            setXmpFilterApplyWhitelist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xmp.filter.whitelist")))
    {
        if(!val[utility::conversions::to_string_t("xmp.filter.whitelist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("xmp.filter.whitelist")]);
            setXmpFilterWhitelist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xmp.filter.apply_blacklist")))
    {
        if(!val[utility::conversions::to_string_t("xmp.filter.apply_blacklist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("xmp.filter.apply_blacklist")]);
            setXmpFilterApplyBlacklist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xmp.filter.blacklist")))
    {
        if(!val[utility::conversions::to_string_t("xmp.filter.blacklist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("xmp.filter.blacklist")]);
            setXmpFilterBlacklist( newItem );
        }
    }
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Xmp_filter_apply_whitelistIsSet)
    {
        if (m_Xmp_filter_apply_whitelist.get())
        {
            m_Xmp_filter_apply_whitelist->toMultipart(multipart, utility::conversions::to_string_t("xmp.filter.apply_whitelist."));
        }
    }
    if(m_Xmp_filter_whitelistIsSet)
    {
        if (m_Xmp_filter_whitelist.get())
        {
            m_Xmp_filter_whitelist->toMultipart(multipart, utility::conversions::to_string_t("xmp.filter.whitelist."));
        }
    }
    if(m_Xmp_filter_apply_blacklistIsSet)
    {
        if (m_Xmp_filter_apply_blacklist.get())
        {
            m_Xmp_filter_apply_blacklist->toMultipart(multipart, utility::conversions::to_string_t("xmp.filter.apply_blacklist."));
        }
    }
    if(m_Xmp_filter_blacklistIsSet)
    {
        if (m_Xmp_filter_blacklist.get())
        {
            m_Xmp_filter_blacklist->toMultipart(multipart, utility::conversions::to_string_t("xmp.filter.blacklist."));
        }
    }
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.apply_whitelist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.apply_whitelist")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("xmp.filter.apply_whitelist."));
            setXmpFilterApplyWhitelist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.whitelist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.whitelist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("xmp.filter.whitelist."));
            setXmpFilterWhitelist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.apply_blacklist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.apply_blacklist")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("xmp.filter.apply_blacklist."));
            setXmpFilterApplyBlacklist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.blacklist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("xmp.filter.blacklist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("xmp.filter.blacklist."));
            setXmpFilterBlacklist( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::getXmpFilterApplyWhitelist() const
{
    return m_Xmp_filter_apply_whitelist;
}


void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::setXmpFilterApplyWhitelist(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Xmp_filter_apply_whitelist = value;
    m_Xmp_filter_apply_whitelistIsSet = true;
}
bool ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::xmpFilterApplyWhitelistIsSet() const
{
    return m_Xmp_filter_apply_whitelistIsSet;
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::unsetXmp_filter_apply_whitelist()
{
    m_Xmp_filter_apply_whitelistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::getXmpFilterWhitelist() const
{
    return m_Xmp_filter_whitelist;
}


void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::setXmpFilterWhitelist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Xmp_filter_whitelist = value;
    m_Xmp_filter_whitelistIsSet = true;
}
bool ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::xmpFilterWhitelistIsSet() const
{
    return m_Xmp_filter_whitelistIsSet;
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::unsetXmp_filter_whitelist()
{
    m_Xmp_filter_whitelistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::getXmpFilterApplyBlacklist() const
{
    return m_Xmp_filter_apply_blacklist;
}


void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::setXmpFilterApplyBlacklist(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Xmp_filter_apply_blacklist = value;
    m_Xmp_filter_apply_blacklistIsSet = true;
}
bool ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::xmpFilterApplyBlacklistIsSet() const
{
    return m_Xmp_filter_apply_blacklistIsSet;
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::unsetXmp_filter_apply_blacklist()
{
    m_Xmp_filter_apply_blacklistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::getXmpFilterBlacklist() const
{
    return m_Xmp_filter_blacklist;
}


void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::setXmpFilterBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Xmp_filter_blacklist = value;
    m_Xmp_filter_blacklistIsSet = true;
}
bool ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::xmpFilterBlacklistIsSet() const
{
    return m_Xmp_filter_blacklistIsSet;
}

void ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties::unsetXmp_filter_blacklist()
{
    m_Xmp_filter_blacklistIsSet = false;
}

}
}
}
}

