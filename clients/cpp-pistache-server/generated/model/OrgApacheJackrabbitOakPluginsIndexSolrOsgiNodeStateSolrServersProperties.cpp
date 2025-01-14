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


#include "OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties()
{
    m_EnabledIsSet = false;
    
}

OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::~OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties()
{
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_EnabledIsSet)
    {
        val["enabled"] = ModelBase::toJson(m_Enabled);
    }
    

    return val;
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::fromJson(nlohmann::json& val)
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


ConfigNodePropertyBoolean OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::getEnabled() const
{
    return m_Enabled;
}
void OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::setEnabled(ConfigNodePropertyBoolean const& value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}
void OrgApacheJackrabbitOakPluginsIndexSolrOsgiNodeStateSolrServersProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

}
}
}
}

