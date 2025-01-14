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


#include "OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties()
{
    m_Whitelist_nameIsSet = false;
    m_Whitelist_bundlesIsSet = false;
    
}

OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::~OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties()
{
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Whitelist_nameIsSet)
    {
        val["whitelist.name"] = ModelBase::toJson(m_Whitelist_name);
    }
    if(m_Whitelist_bundlesIsSet)
    {
        val["whitelist.bundles"] = ModelBase::toJson(m_Whitelist_bundles);
    }
    

    return val;
}

void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::fromJson(nlohmann::json& val)
{
    if(val.find("whitelist.name") != val.end())
    {
        if(!val["whitelist.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["whitelist.name"]);
            setWhitelistName( newItem );
        }
        
    }
    if(val.find("whitelist.bundles") != val.end())
    {
        if(!val["whitelist.bundles"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["whitelist.bundles"]);
            setWhitelistBundles( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::getWhitelistName() const
{
    return m_Whitelist_name;
}
void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::setWhitelistName(ConfigNodePropertyString const& value)
{
    m_Whitelist_name = value;
    m_Whitelist_nameIsSet = true;
}
bool OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::whitelistNameIsSet() const
{
    return m_Whitelist_nameIsSet;
}
void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::unsetWhitelist_name()
{
    m_Whitelist_nameIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::getWhitelistBundles() const
{
    return m_Whitelist_bundles;
}
void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::setWhitelistBundles(ConfigNodePropertyArray const& value)
{
    m_Whitelist_bundles = value;
    m_Whitelist_bundlesIsSet = true;
}
bool OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::whitelistBundlesIsSet() const
{
    return m_Whitelist_bundlesIsSet;
}
void OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties::unsetWhitelist_bundles()
{
    m_Whitelist_bundlesIsSet = false;
}

}
}
}
}

