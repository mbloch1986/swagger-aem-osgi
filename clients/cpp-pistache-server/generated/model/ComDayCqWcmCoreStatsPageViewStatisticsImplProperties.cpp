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


#include "ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::ComDayCqWcmCoreStatsPageViewStatisticsImplProperties()
{
    m_Pageviewstatistics_trackingurlIsSet = false;
    m_Pageviewstatistics_trackingscript_enabledIsSet = false;
    
}

ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::~ComDayCqWcmCoreStatsPageViewStatisticsImplProperties()
{
}

void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Pageviewstatistics_trackingurlIsSet)
    {
        val["pageviewstatistics.trackingurl"] = ModelBase::toJson(m_Pageviewstatistics_trackingurl);
    }
    if(m_Pageviewstatistics_trackingscript_enabledIsSet)
    {
        val["pageviewstatistics.trackingscript.enabled"] = ModelBase::toJson(m_Pageviewstatistics_trackingscript_enabled);
    }
    

    return val;
}

void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("pageviewstatistics.trackingurl") != val.end())
    {
        if(!val["pageviewstatistics.trackingurl"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["pageviewstatistics.trackingurl"]);
            setPageviewstatisticsTrackingurl( newItem );
        }
        
    }
    if(val.find("pageviewstatistics.trackingscript.enabled") != val.end())
    {
        if(!val["pageviewstatistics.trackingscript.enabled"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["pageviewstatistics.trackingscript.enabled"]);
            setPageviewstatisticsTrackingscriptEnabled( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::getPageviewstatisticsTrackingurl() const
{
    return m_Pageviewstatistics_trackingurl;
}
void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::setPageviewstatisticsTrackingurl(ConfigNodePropertyString const& value)
{
    m_Pageviewstatistics_trackingurl = value;
    m_Pageviewstatistics_trackingurlIsSet = true;
}
bool ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::pageviewstatisticsTrackingurlIsSet() const
{
    return m_Pageviewstatistics_trackingurlIsSet;
}
void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::unsetPageviewstatistics_trackingurl()
{
    m_Pageviewstatistics_trackingurlIsSet = false;
}
ConfigNodePropertyString ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::getPageviewstatisticsTrackingscriptEnabled() const
{
    return m_Pageviewstatistics_trackingscript_enabled;
}
void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::setPageviewstatisticsTrackingscriptEnabled(ConfigNodePropertyString const& value)
{
    m_Pageviewstatistics_trackingscript_enabled = value;
    m_Pageviewstatistics_trackingscript_enabledIsSet = true;
}
bool ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::pageviewstatisticsTrackingscriptEnabledIsSet() const
{
    return m_Pageviewstatistics_trackingscript_enabledIsSet;
}
void ComDayCqWcmCoreStatsPageViewStatisticsImplProperties::unsetPageviewstatistics_trackingscript_enabled()
{
    m_Pageviewstatistics_trackingscript_enabledIsSet = false;
}

}
}
}
}
