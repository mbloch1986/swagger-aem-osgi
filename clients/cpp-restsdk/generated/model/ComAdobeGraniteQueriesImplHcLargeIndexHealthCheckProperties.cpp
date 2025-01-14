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



#include "ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties()
{
    m_Large_index_critical_thresholdIsSet = false;
    m_Large_index_warn_thresholdIsSet = false;
    m_Hc_tagsIsSet = false;
}

ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::~ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties()
{
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Large_index_critical_thresholdIsSet)
    {
        val[utility::conversions::to_string_t("large.index.critical.threshold")] = ModelBase::toJson(m_Large_index_critical_threshold);
    }
    if(m_Large_index_warn_thresholdIsSet)
    {
        val[utility::conversions::to_string_t("large.index.warn.threshold")] = ModelBase::toJson(m_Large_index_warn_threshold);
    }
    if(m_Hc_tagsIsSet)
    {
        val[utility::conversions::to_string_t("hc.tags")] = ModelBase::toJson(m_Hc_tags);
    }

    return val;
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("large.index.critical.threshold")))
    {
        if(!val[utility::conversions::to_string_t("large.index.critical.threshold")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("large.index.critical.threshold")]);
            setLargeIndexCriticalThreshold( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("large.index.warn.threshold")))
    {
        if(!val[utility::conversions::to_string_t("large.index.warn.threshold")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("large.index.warn.threshold")]);
            setLargeIndexWarnThreshold( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hc.tags")))
    {
        if(!val[utility::conversions::to_string_t("hc.tags")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("hc.tags")]);
            setHcTags( newItem );
        }
    }
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Large_index_critical_thresholdIsSet)
    {
        if (m_Large_index_critical_threshold.get())
        {
            m_Large_index_critical_threshold->toMultipart(multipart, utility::conversions::to_string_t("large.index.critical.threshold."));
        }
    }
    if(m_Large_index_warn_thresholdIsSet)
    {
        if (m_Large_index_warn_threshold.get())
        {
            m_Large_index_warn_threshold->toMultipart(multipart, utility::conversions::to_string_t("large.index.warn.threshold."));
        }
    }
    if(m_Hc_tagsIsSet)
    {
        if (m_Hc_tags.get())
        {
            m_Hc_tags->toMultipart(multipart, utility::conversions::to_string_t("hc.tags."));
        }
    }
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("large.index.critical.threshold")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("large.index.critical.threshold")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("large.index.critical.threshold."));
            setLargeIndexCriticalThreshold( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("large.index.warn.threshold")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("large.index.warn.threshold")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("large.index.warn.threshold."));
            setLargeIndexWarnThreshold( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hc.tags")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("hc.tags")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("hc.tags."));
            setHcTags( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getLargeIndexCriticalThreshold() const
{
    return m_Large_index_critical_threshold;
}


void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setLargeIndexCriticalThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Large_index_critical_threshold = value;
    m_Large_index_critical_thresholdIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::largeIndexCriticalThresholdIsSet() const
{
    return m_Large_index_critical_thresholdIsSet;
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetLarge_index_critical_threshold()
{
    m_Large_index_critical_thresholdIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getLargeIndexWarnThreshold() const
{
    return m_Large_index_warn_threshold;
}


void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setLargeIndexWarnThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Large_index_warn_threshold = value;
    m_Large_index_warn_thresholdIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::largeIndexWarnThresholdIsSet() const
{
    return m_Large_index_warn_thresholdIsSet;
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetLarge_index_warn_threshold()
{
    m_Large_index_warn_thresholdIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}


void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setHcTags(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}

}
}
}
}

