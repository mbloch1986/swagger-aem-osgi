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



#include "ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties()
{
    m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet = false;
}

ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::~ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties()
{
}

void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet)
    {
        val[utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")] = ModelBase::toJson(m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled);
    }

    return val;
}

void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")))
    {
        if(!val[utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")]);
            setCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled( newItem );
        }
    }
}

void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet)
    {
        if (m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled.get())
        {
            m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled->toMultipart(multipart, utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled."));
        }
    }
}

void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.analytics.testandtarget.pushauthorcampaignpagelistener.enabled."));
            setCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::getCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled() const
{
    return m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled;
}


void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::setCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled = value;
    m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet = true;
}
bool ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::cqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabledIsSet() const
{
    return m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet;
}

void ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties::unsetCq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled()
{
    m_Cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabledIsSet = false;
}

}
}
}
}

