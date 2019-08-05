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


#include "OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties()
{
    m_ProviderTypeIsSet = false;
    
}

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::~OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties()
{
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_ProviderTypeIsSet)
    {
        val["providerType"] = ModelBase::toJson(m_ProviderType);
    }
    

    return val;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("providerType") != val.end())
    {
        if(!val["providerType"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["providerType"]);
            setProviderType( newItem );
        }
        
    }
    
}


ConfigNodePropertyDropDown OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::getProviderType() const
{
    return m_ProviderType;
}
void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::setProviderType(ConfigNodePropertyDropDown const& value)
{
    m_ProviderType = value;
    m_ProviderTypeIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::providerTypeIsSet() const
{
    return m_ProviderTypeIsSet;
}
void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties::unsetProviderType()
{
    m_ProviderTypeIsSet = false;
}

}
}
}
}
