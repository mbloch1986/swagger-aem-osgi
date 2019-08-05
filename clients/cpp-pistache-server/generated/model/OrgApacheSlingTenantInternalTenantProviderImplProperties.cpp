/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OrgApacheSlingTenantInternalTenantProviderImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
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

nlohmann::json OrgApacheSlingTenantInternalTenantProviderImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Tenant_rootIsSet)
    {
        val["tenant.root"] = ModelBase::toJson(m_Tenant_root);
    }
    if(m_Tenant_path_matcherIsSet)
    {
        val["tenant.path.matcher"] = ModelBase::toJson(m_Tenant_path_matcher);
    }
    

    return val;
}

void OrgApacheSlingTenantInternalTenantProviderImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("tenant.root") != val.end())
    {
        if(!val["tenant.root"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["tenant.root"]);
            setTenantRoot( newItem );
        }
        
    }
    if(val.find("tenant.path.matcher") != val.end())
    {
        if(!val["tenant.path.matcher"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["tenant.path.matcher"]);
            setTenantPathMatcher( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingTenantInternalTenantProviderImplProperties::getTenantRoot() const
{
    return m_Tenant_root;
}
void OrgApacheSlingTenantInternalTenantProviderImplProperties::setTenantRoot(ConfigNodePropertyString const& value)
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
ConfigNodePropertyArray OrgApacheSlingTenantInternalTenantProviderImplProperties::getTenantPathMatcher() const
{
    return m_Tenant_path_matcher;
}
void OrgApacheSlingTenantInternalTenantProviderImplProperties::setTenantPathMatcher(ConfigNodePropertyArray const& value)
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
