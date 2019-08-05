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


#include "ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties()
{
    m_Number_of_retries_allowedIsSet = false;
    m_Hc_tagsIsSet = false;
    
}

ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::~ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties()
{
}

void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Number_of_retries_allowedIsSet)
    {
        val["number.of.retries.allowed"] = ModelBase::toJson(m_Number_of_retries_allowed);
    }
    if(m_Hc_tagsIsSet)
    {
        val["hc.tags"] = ModelBase::toJson(m_Hc_tags);
    }
    

    return val;
}

void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::fromJson(nlohmann::json& val)
{
    if(val.find("number.of.retries.allowed") != val.end())
    {
        if(!val["number.of.retries.allowed"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["number.of.retries.allowed"]);
            setNumberOfRetriesAllowed( newItem );
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
    
}


ConfigNodePropertyInteger ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::getNumberOfRetriesAllowed() const
{
    return m_Number_of_retries_allowed;
}
void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::setNumberOfRetriesAllowed(ConfigNodePropertyInteger const& value)
{
    m_Number_of_retries_allowed = value;
    m_Number_of_retries_allowedIsSet = true;
}
bool ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::numberOfRetriesAllowedIsSet() const
{
    return m_Number_of_retries_allowedIsSet;
}
void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::unsetNumber_of_retries_allowed()
{
    m_Number_of_retries_allowedIsSet = false;
}
ConfigNodePropertyArray ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::setHcTags(ConfigNodePropertyArray const& value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}
void ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}

}
}
}
}
