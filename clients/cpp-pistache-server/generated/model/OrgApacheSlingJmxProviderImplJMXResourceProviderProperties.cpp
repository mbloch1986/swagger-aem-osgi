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


#include "OrgApacheSlingJmxProviderImplJMXResourceProviderProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::OrgApacheSlingJmxProviderImplJMXResourceProviderProperties()
{
    m_Provider_rootsIsSet = false;
    
}

OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::~OrgApacheSlingJmxProviderImplJMXResourceProviderProperties()
{
}

void OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Provider_rootsIsSet)
    {
        val["provider.roots"] = ModelBase::toJson(m_Provider_roots);
    }
    

    return val;
}

void OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::fromJson(nlohmann::json& val)
{
    if(val.find("provider.roots") != val.end())
    {
        if(!val["provider.roots"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["provider.roots"]);
            setProviderRoots( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::getProviderRoots() const
{
    return m_Provider_roots;
}
void OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::setProviderRoots(ConfigNodePropertyString const& value)
{
    m_Provider_roots = value;
    m_Provider_rootsIsSet = true;
}
bool OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::providerRootsIsSet() const
{
    return m_Provider_rootsIsSet;
}
void OrgApacheSlingJmxProviderImplJMXResourceProviderProperties::unsetProvider_roots()
{
    m_Provider_rootsIsSet = false;
}

}
}
}
}

