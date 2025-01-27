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


#include "OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties()
{
    m_Hc_nameIsSet = false;
    m_Hc_tagsIsSet = false;
    m_Hc_mbean_nameIsSet = false;
    
}

OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::~OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties()
{
}

void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Hc_nameIsSet)
    {
        val["hc.name"] = ModelBase::toJson(m_Hc_name);
    }
    if(m_Hc_tagsIsSet)
    {
        val["hc.tags"] = ModelBase::toJson(m_Hc_tags);
    }
    if(m_Hc_mbean_nameIsSet)
    {
        val["hc.mbean.name"] = ModelBase::toJson(m_Hc_mbean_name);
    }
    

    return val;
}

void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::fromJson(nlohmann::json& val)
{
    if(val.find("hc.name") != val.end())
    {
        if(!val["hc.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["hc.name"]);
            setHcName( newItem );
        }
        
    }
    if(val.find("hc.tags") != val.end())
    {
        if(!val["hc.tags"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["hc.tags"]);
            setHcTags( newItem );
        }
        
    }
    if(val.find("hc.mbean.name") != val.end())
    {
        if(!val["hc.mbean.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["hc.mbean.name"]);
            setHcMbeanName( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::getHcName() const
{
    return m_Hc_name;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::setHcName(ConfigNodePropertyString const& value)
{
    m_Hc_name = value;
    m_Hc_nameIsSet = true;
}
bool OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::hcNameIsSet() const
{
    return m_Hc_nameIsSet;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::unsetHc_name()
{
    m_Hc_nameIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::setHcTags(ConfigNodePropertyArray const& value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::getHcMbeanName() const
{
    return m_Hc_mbean_name;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::setHcMbeanName(ConfigNodePropertyString const& value)
{
    m_Hc_mbean_name = value;
    m_Hc_mbean_nameIsSet = true;
}
bool OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::hcMbeanNameIsSet() const
{
    return m_Hc_mbean_nameIsSet;
}
void OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties::unsetHc_mbean_name()
{
    m_Hc_mbean_nameIsSet = false;
}

}
}
}
}

