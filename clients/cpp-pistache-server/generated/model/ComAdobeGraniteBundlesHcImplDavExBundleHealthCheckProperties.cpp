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


#include "ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties()
{
    m_Hc_tagsIsSet = false;
    
}

ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::~ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties()
{
}

void ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Hc_tagsIsSet)
    {
        val["hc.tags"] = ModelBase::toJson(m_Hc_tags);
    }
    

    return val;
}

void ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::fromJson(nlohmann::json& val)
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


ConfigNodePropertyArray ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::setHcTags(ConfigNodePropertyArray const& value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}
void ComAdobeGraniteBundlesHcImplDavExBundleHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}

}
}
}
}

