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


#include "ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties()
{
    m_Hc_tagsIsSet = false;
    
}

ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::~ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties()
{
}

void ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Hc_tagsIsSet)
    {
        val["hc.tags"] = ModelBase::toJson(m_Hc_tags);
    }
    

    return val;
}

void ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::fromJson(nlohmann::json& val)
{
    if(val.find("hc.tags") != val.end())
    {
        if(!val["hc.tags"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["hc.tags"]);
            setHcTags( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::setHcTags(ConfigNodePropertyArray const& value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}
void ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}

}
}
}
}

