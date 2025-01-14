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


#include "ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties()
{
    m_Cache_enableIsSet = false;
    m_Cache_rootPathsIsSet = false;
    m_Cache_maxSizeIsSet = false;
    m_Cache_maxEntriesIsSet = false;
    
}

ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::~ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties()
{
}

void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cache_enableIsSet)
    {
        val["cache.enable"] = ModelBase::toJson(m_Cache_enable);
    }
    if(m_Cache_rootPathsIsSet)
    {
        val["cache.rootPaths"] = ModelBase::toJson(m_Cache_rootPaths);
    }
    if(m_Cache_maxSizeIsSet)
    {
        val["cache.maxSize"] = ModelBase::toJson(m_Cache_maxSize);
    }
    if(m_Cache_maxEntriesIsSet)
    {
        val["cache.maxEntries"] = ModelBase::toJson(m_Cache_maxEntries);
    }
    

    return val;
}

void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cache.enable") != val.end())
    {
        if(!val["cache.enable"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["cache.enable"]);
            setCacheEnable( newItem );
        }
        
    }
    if(val.find("cache.rootPaths") != val.end())
    {
        if(!val["cache.rootPaths"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cache.rootPaths"]);
            setCacheRootPaths( newItem );
        }
        
    }
    if(val.find("cache.maxSize") != val.end())
    {
        if(!val["cache.maxSize"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cache.maxSize"]);
            setCacheMaxSize( newItem );
        }
        
    }
    if(val.find("cache.maxEntries") != val.end())
    {
        if(!val["cache.maxEntries"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cache.maxEntries"]);
            setCacheMaxEntries( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheEnable() const
{
    return m_Cache_enable;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheEnable(ConfigNodePropertyBoolean const& value)
{
    m_Cache_enable = value;
    m_Cache_enableIsSet = true;
}
bool ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::cacheEnableIsSet() const
{
    return m_Cache_enableIsSet;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::unsetCache_enable()
{
    m_Cache_enableIsSet = false;
}
ConfigNodePropertyArray ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheRootPaths() const
{
    return m_Cache_rootPaths;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheRootPaths(ConfigNodePropertyArray const& value)
{
    m_Cache_rootPaths = value;
    m_Cache_rootPathsIsSet = true;
}
bool ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::cacheRootPathsIsSet() const
{
    return m_Cache_rootPathsIsSet;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::unsetCache_rootPaths()
{
    m_Cache_rootPathsIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheMaxSize() const
{
    return m_Cache_maxSize;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheMaxSize(ConfigNodePropertyInteger const& value)
{
    m_Cache_maxSize = value;
    m_Cache_maxSizeIsSet = true;
}
bool ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::cacheMaxSizeIsSet() const
{
    return m_Cache_maxSizeIsSet;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::unsetCache_maxSize()
{
    m_Cache_maxSizeIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::getCacheMaxEntries() const
{
    return m_Cache_maxEntries;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::setCacheMaxEntries(ConfigNodePropertyInteger const& value)
{
    m_Cache_maxEntries = value;
    m_Cache_maxEntriesIsSet = true;
}
bool ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::cacheMaxEntriesIsSet() const
{
    return m_Cache_maxEntriesIsSet;
}
void ComAdobeCqDamS7imagingImplPsPlatformServerServletProperties::unsetCache_maxEntries()
{
    m_Cache_maxEntriesIsSet = false;
}

}
}
}
}

