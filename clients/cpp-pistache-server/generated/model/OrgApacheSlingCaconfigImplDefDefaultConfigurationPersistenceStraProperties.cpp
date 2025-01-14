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


#include "OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties()
{
    m_EnabledIsSet = false;
    
}

OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::~OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties()
{
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_EnabledIsSet)
    {
        val["enabled"] = ModelBase::toJson(m_Enabled);
    }
    

    return val;
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::fromJson(nlohmann::json& val)
{
    if(val.find("enabled") != val.end())
    {
        if(!val["enabled"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["enabled"]);
            setEnabled( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::getEnabled() const
{
    return m_Enabled;
}
void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::setEnabled(ConfigNodePropertyBoolean const& value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}
void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

}
}
}
}

