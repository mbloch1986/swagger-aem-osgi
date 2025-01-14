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


#include "ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties()
{
    m_NuiEnabledIsSet = false;
    m_NuiServiceUrlIsSet = false;
    m_NuiApiKeyIsSet = false;
    
}

ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::~ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties()
{
}

void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NuiEnabledIsSet)
    {
        val["nuiEnabled"] = ModelBase::toJson(m_NuiEnabled);
    }
    if(m_NuiServiceUrlIsSet)
    {
        val["nuiServiceUrl"] = ModelBase::toJson(m_NuiServiceUrl);
    }
    if(m_NuiApiKeyIsSet)
    {
        val["nuiApiKey"] = ModelBase::toJson(m_NuiApiKey);
    }
    

    return val;
}

void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::fromJson(nlohmann::json& val)
{
    if(val.find("nuiEnabled") != val.end())
    {
        if(!val["nuiEnabled"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["nuiEnabled"]);
            setNuiEnabled( newItem );
        }
        
    }
    if(val.find("nuiServiceUrl") != val.end())
    {
        if(!val["nuiServiceUrl"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["nuiServiceUrl"]);
            setNuiServiceUrl( newItem );
        }
        
    }
    if(val.find("nuiApiKey") != val.end())
    {
        if(!val["nuiApiKey"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["nuiApiKey"]);
            setNuiApiKey( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiEnabled() const
{
    return m_NuiEnabled;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiEnabled(ConfigNodePropertyBoolean const& value)
{
    m_NuiEnabled = value;
    m_NuiEnabledIsSet = true;
}
bool ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::nuiEnabledIsSet() const
{
    return m_NuiEnabledIsSet;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::unsetNuiEnabled()
{
    m_NuiEnabledIsSet = false;
}
ConfigNodePropertyString ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiServiceUrl() const
{
    return m_NuiServiceUrl;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiServiceUrl(ConfigNodePropertyString const& value)
{
    m_NuiServiceUrl = value;
    m_NuiServiceUrlIsSet = true;
}
bool ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::nuiServiceUrlIsSet() const
{
    return m_NuiServiceUrlIsSet;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::unsetNuiServiceUrl()
{
    m_NuiServiceUrlIsSet = false;
}
ConfigNodePropertyString ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::getNuiApiKey() const
{
    return m_NuiApiKey;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::setNuiApiKey(ConfigNodePropertyString const& value)
{
    m_NuiApiKey = value;
    m_NuiApiKeyIsSet = true;
}
bool ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::nuiApiKeyIsSet() const
{
    return m_NuiApiKeyIsSet;
}
void ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties::unsetNuiApiKey()
{
    m_NuiApiKeyIsSet = false;
}

}
}
}
}

