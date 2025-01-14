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


#include "OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties()
{
    m_QueryLimitInMemoryIsSet = false;
    m_QueryLimitReadsIsSet = false;
    m_QueryFailTraversalIsSet = false;
    m_FastQuerySizeIsSet = false;
    
}

OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::~OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties()
{
}

void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_QueryLimitInMemoryIsSet)
    {
        val["queryLimitInMemory"] = ModelBase::toJson(m_QueryLimitInMemory);
    }
    if(m_QueryLimitReadsIsSet)
    {
        val["queryLimitReads"] = ModelBase::toJson(m_QueryLimitReads);
    }
    if(m_QueryFailTraversalIsSet)
    {
        val["queryFailTraversal"] = ModelBase::toJson(m_QueryFailTraversal);
    }
    if(m_FastQuerySizeIsSet)
    {
        val["fastQuerySize"] = ModelBase::toJson(m_FastQuerySize);
    }
    

    return val;
}

void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::fromJson(nlohmann::json& val)
{
    if(val.find("queryLimitInMemory") != val.end())
    {
        if(!val["queryLimitInMemory"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["queryLimitInMemory"]);
            setQueryLimitInMemory( newItem );
        }
        
    }
    if(val.find("queryLimitReads") != val.end())
    {
        if(!val["queryLimitReads"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["queryLimitReads"]);
            setQueryLimitReads( newItem );
        }
        
    }
    if(val.find("queryFailTraversal") != val.end())
    {
        if(!val["queryFailTraversal"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["queryFailTraversal"]);
            setQueryFailTraversal( newItem );
        }
        
    }
    if(val.find("fastQuerySize") != val.end())
    {
        if(!val["fastQuerySize"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["fastQuerySize"]);
            setFastQuerySize( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::getQueryLimitInMemory() const
{
    return m_QueryLimitInMemory;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::setQueryLimitInMemory(ConfigNodePropertyInteger const& value)
{
    m_QueryLimitInMemory = value;
    m_QueryLimitInMemoryIsSet = true;
}
bool OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::queryLimitInMemoryIsSet() const
{
    return m_QueryLimitInMemoryIsSet;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::unsetQueryLimitInMemory()
{
    m_QueryLimitInMemoryIsSet = false;
}
ConfigNodePropertyInteger OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::getQueryLimitReads() const
{
    return m_QueryLimitReads;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::setQueryLimitReads(ConfigNodePropertyInteger const& value)
{
    m_QueryLimitReads = value;
    m_QueryLimitReadsIsSet = true;
}
bool OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::queryLimitReadsIsSet() const
{
    return m_QueryLimitReadsIsSet;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::unsetQueryLimitReads()
{
    m_QueryLimitReadsIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::getQueryFailTraversal() const
{
    return m_QueryFailTraversal;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::setQueryFailTraversal(ConfigNodePropertyBoolean const& value)
{
    m_QueryFailTraversal = value;
    m_QueryFailTraversalIsSet = true;
}
bool OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::queryFailTraversalIsSet() const
{
    return m_QueryFailTraversalIsSet;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::unsetQueryFailTraversal()
{
    m_QueryFailTraversalIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::getFastQuerySize() const
{
    return m_FastQuerySize;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::setFastQuerySize(ConfigNodePropertyBoolean const& value)
{
    m_FastQuerySize = value;
    m_FastQuerySizeIsSet = true;
}
bool OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::fastQuerySizeIsSet() const
{
    return m_FastQuerySizeIsSet;
}
void OrgApacheJackrabbitOakQueryQueryEngineSettingsServiceProperties::unsetFastQuerySize()
{
    m_FastQuerySizeIsSet = false;
}

}
}
}
}

