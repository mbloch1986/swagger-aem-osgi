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



#include "OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties()
{
    m_ProviderTypeIsSet = false;
}

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::~OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties()
{
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ProviderTypeIsSet)
    {
        val[utility::conversions::to_string_t("providerType")] = ModelBase::toJson(m_ProviderType);
    }

    return val;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("providerType")))
    {
        if(!val[utility::conversions::to_string_t("providerType")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("providerType")]);
            setProviderType( newItem );
        }
    }
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ProviderTypeIsSet)
    {
        if (m_ProviderType.get())
        {
            m_ProviderType->toMultipart(multipart, utility::conversions::to_string_t("providerType."));
        }
    }
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("providerType")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("providerType")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("providerType."));
            setProviderType( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::getProviderType() const
{
    return m_ProviderType;
}


void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::setProviderType(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_ProviderType = value;
    m_ProviderTypeIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::providerTypeIsSet() const
{
    return m_ProviderTypeIsSet;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::unsetProviderType()
{
    m_ProviderTypeIsSet = false;
}

}
}
}
}

