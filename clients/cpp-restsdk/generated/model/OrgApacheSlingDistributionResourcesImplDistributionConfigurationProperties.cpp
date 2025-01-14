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



#include "OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties()
{
    m_Provider_rootsIsSet = false;
    m_KindIsSet = false;
}

OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::~OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties()
{
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Provider_rootsIsSet)
    {
        val[utility::conversions::to_string_t("provider.roots")] = ModelBase::toJson(m_Provider_roots);
    }
    if(m_KindIsSet)
    {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    }

    return val;
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("provider.roots")))
    {
        if(!val[utility::conversions::to_string_t("provider.roots")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.roots")]);
            setProviderRoots( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind")))
    {
        if(!val[utility::conversions::to_string_t("kind")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("kind")]);
            setKind( newItem );
        }
    }
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Provider_rootsIsSet)
    {
        if (m_Provider_roots.get())
        {
            m_Provider_roots->toMultipart(multipart, utility::conversions::to_string_t("provider.roots."));
        }
    }
    if(m_KindIsSet)
    {
        if (m_Kind.get())
        {
            m_Kind->toMultipart(multipart, utility::conversions::to_string_t("kind."));
        }
    }
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("provider.roots")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.roots")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.roots."));
            setProviderRoots( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kind")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("kind")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("kind."));
            setKind( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::getProviderRoots() const
{
    return m_Provider_roots;
}


void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::setProviderRoots(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Provider_roots = value;
    m_Provider_rootsIsSet = true;
}
bool OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::providerRootsIsSet() const
{
    return m_Provider_rootsIsSet;
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::unsetProvider_roots()
{
    m_Provider_rootsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::getKind() const
{
    return m_Kind;
}


void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::setKind(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::kindIsSet() const
{
    return m_KindIsSet;
}

void OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties::unsetKind()
{
    m_KindIsSet = false;
}

}
}
}
}

