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


#include "OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties()
{
    m_NameIsSet = false;
    m_DescriptionIsSet = false;
    m_EnabledIsSet = false;
    
}

OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::~OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties()
{
}

void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_EnabledIsSet)
    {
        val["enabled"] = ModelBase::toJson(m_Enabled);
    }
    

    return val;
}

void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::fromJson(nlohmann::json& val)
{
    if(val.find("name") != val.end())
    {
        if(!val["name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["name"]);
            setName( newItem );
        }
        
    }
    if(val.find("description") != val.end())
    {
        if(!val["description"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["description"]);
            setDescription( newItem );
        }
        
    }
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


ConfigNodePropertyString OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::getName() const
{
    return m_Name;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::setName(ConfigNodePropertyString const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::nameIsSet() const
{
    return m_NameIsSet;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::unsetName()
{
    m_NameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::getDescription() const
{
    return m_Description;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::setDescription(ConfigNodePropertyString const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::getEnabled() const
{
    return m_Enabled;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::setEnabled(ConfigNodePropertyBoolean const& value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}
void OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

}
}
}
}

