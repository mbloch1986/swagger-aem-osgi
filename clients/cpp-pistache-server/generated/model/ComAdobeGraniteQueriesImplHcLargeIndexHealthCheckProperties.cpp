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


#include "ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties()
{
    m_Large_index_critical_thresholdIsSet = false;
    m_Large_index_warn_thresholdIsSet = false;
    m_Hc_tagsIsSet = false;
    
}

ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::~ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties()
{
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Large_index_critical_thresholdIsSet)
    {
        val["large.index.critical.threshold"] = ModelBase::toJson(m_Large_index_critical_threshold);
    }
    if(m_Large_index_warn_thresholdIsSet)
    {
        val["large.index.warn.threshold"] = ModelBase::toJson(m_Large_index_warn_threshold);
    }
    if(m_Hc_tagsIsSet)
    {
        val["hc.tags"] = ModelBase::toJson(m_Hc_tags);
    }
    

    return val;
}

void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::fromJson(nlohmann::json& val)
{
    if(val.find("large.index.critical.threshold") != val.end())
    {
        if(!val["large.index.critical.threshold"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["large.index.critical.threshold"]);
            setLargeIndexCriticalThreshold( newItem );
        }
        
    }
    if(val.find("large.index.warn.threshold") != val.end())
    {
        if(!val["large.index.warn.threshold"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["large.index.warn.threshold"]);
            setLargeIndexWarnThreshold( newItem );
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


ConfigNodePropertyInteger ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getLargeIndexCriticalThreshold() const
{
    return m_Large_index_critical_threshold;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setLargeIndexCriticalThreshold(ConfigNodePropertyInteger const& value)
{
    m_Large_index_critical_threshold = value;
    m_Large_index_critical_thresholdIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::largeIndexCriticalThresholdIsSet() const
{
    return m_Large_index_critical_thresholdIsSet;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetLarge_index_critical_threshold()
{
    m_Large_index_critical_thresholdIsSet = false;
}
ConfigNodePropertyInteger ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getLargeIndexWarnThreshold() const
{
    return m_Large_index_warn_threshold;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setLargeIndexWarnThreshold(ConfigNodePropertyInteger const& value)
{
    m_Large_index_warn_threshold = value;
    m_Large_index_warn_thresholdIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::largeIndexWarnThresholdIsSet() const
{
    return m_Large_index_warn_thresholdIsSet;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetLarge_index_warn_threshold()
{
    m_Large_index_warn_thresholdIsSet = false;
}
ConfigNodePropertyArray ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::getHcTags() const
{
    return m_Hc_tags;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::setHcTags(ConfigNodePropertyArray const& value)
{
    m_Hc_tags = value;
    m_Hc_tagsIsSet = true;
}
bool ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::hcTagsIsSet() const
{
    return m_Hc_tagsIsSet;
}
void ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties::unsetHc_tags()
{
    m_Hc_tagsIsSet = false;
}

}
}
}
}

