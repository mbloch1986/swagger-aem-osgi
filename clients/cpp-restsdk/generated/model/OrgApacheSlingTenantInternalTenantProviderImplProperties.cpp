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



#include "OrgApacheSlingTenantInternalTenantProviderImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingTenantInternalTenantProviderImplProperties::OrgApacheSlingTenantInternalTenantProviderImplProperties()
{
    m_Tenant_rootIsSet = false;
    m_Tenant_path_matcherIsSet = false;
}

OrgApacheSlingTenantInternalTenantProviderImplProperties::~OrgApacheSlingTenantInternalTenantProviderImplProperties()
{
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingTenantInternalTenantProviderImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Tenant_rootIsSet)
    {
        val[utility::conversions::to_string_t("tenant.root")] = ModelBase::toJson(m_Tenant_root);
    }
    if(m_Tenant_path_matcherIsSet)
    {
        val[utility::conversions::to_string_t("tenant.path.matcher")] = ModelBase::toJson(m_Tenant_path_matcher);
    }

    return val;
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("tenant.root")))
    {
        if(!val[utility::conversions::to_string_t("tenant.root")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("tenant.root")]);
            setTenantRoot( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant.path.matcher")))
    {
        if(!val[utility::conversions::to_string_t("tenant.path.matcher")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("tenant.path.matcher")]);
            setTenantPathMatcher( newItem );
        }
    }
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Tenant_rootIsSet)
    {
        if (m_Tenant_root.get())
        {
            m_Tenant_root->toMultipart(multipart, utility::conversions::to_string_t("tenant.root."));
        }
    }
    if(m_Tenant_path_matcherIsSet)
    {
        if (m_Tenant_path_matcher.get())
        {
            m_Tenant_path_matcher->toMultipart(multipart, utility::conversions::to_string_t("tenant.path.matcher."));
        }
    }
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("tenant.root")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("tenant.root")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("tenant.root."));
            setTenantRoot( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tenant.path.matcher")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("tenant.path.matcher")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("tenant.path.matcher."));
            setTenantPathMatcher( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingTenantInternalTenantProviderImplProperties::getTenantRoot() const
{
    return m_Tenant_root;
}


void OrgApacheSlingTenantInternalTenantProviderImplProperties::setTenantRoot(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Tenant_root = value;
    m_Tenant_rootIsSet = true;
}
bool OrgApacheSlingTenantInternalTenantProviderImplProperties::tenantRootIsSet() const
{
    return m_Tenant_rootIsSet;
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::unsetTenant_root()
{
    m_Tenant_rootIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingTenantInternalTenantProviderImplProperties::getTenantPathMatcher() const
{
    return m_Tenant_path_matcher;
}


void OrgApacheSlingTenantInternalTenantProviderImplProperties::setTenantPathMatcher(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Tenant_path_matcher = value;
    m_Tenant_path_matcherIsSet = true;
}
bool OrgApacheSlingTenantInternalTenantProviderImplProperties::tenantPathMatcherIsSet() const
{
    return m_Tenant_path_matcherIsSet;
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::unsetTenant_path_matcher()
{
    m_Tenant_path_matcherIsSet = false;
}

}
}
}
}

