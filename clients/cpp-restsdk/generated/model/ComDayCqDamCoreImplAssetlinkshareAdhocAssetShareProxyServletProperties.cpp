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



#include "ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties()
{
    m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet = false;
}

ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::~ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties()
{
}

void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet)
    {
        val[utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")] = ModelBase::toJson(m_Cq_dam_adhoc_asset_share_prezip_maxcontentsize);
    }

    return val;
}

void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")))
    {
        if(!val[utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")]);
            setCqDamAdhocAssetSharePrezipMaxcontentsize( newItem );
        }
    }
}

void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet)
    {
        if (m_Cq_dam_adhoc_asset_share_prezip_maxcontentsize.get())
        {
            m_Cq_dam_adhoc_asset_share_prezip_maxcontentsize->toMultipart(multipart, utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize."));
        }
    }
}

void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.dam.adhoc.asset.share.prezip.maxcontentsize."));
            setCqDamAdhocAssetSharePrezipMaxcontentsize( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::getCqDamAdhocAssetSharePrezipMaxcontentsize() const
{
    return m_Cq_dam_adhoc_asset_share_prezip_maxcontentsize;
}


void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::setCqDamAdhocAssetSharePrezipMaxcontentsize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Cq_dam_adhoc_asset_share_prezip_maxcontentsize = value;
    m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet = true;
}
bool ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::cqDamAdhocAssetSharePrezipMaxcontentsizeIsSet() const
{
    return m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet;
}

void ComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties::unsetCq_dam_adhoc_asset_share_prezip_maxcontentsize()
{
    m_Cq_dam_adhoc_asset_share_prezip_maxcontentsizeIsSet = false;
}

}
}
}
}

