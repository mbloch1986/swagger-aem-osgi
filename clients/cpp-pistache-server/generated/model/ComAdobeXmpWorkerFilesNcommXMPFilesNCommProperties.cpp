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


#include "ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties()
{
    m_MaxConnectionsIsSet = false;
    m_MaxRequestsIsSet = false;
    m_RequestTimeoutIsSet = false;
    m_LogDirIsSet = false;
    
}

ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::~ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties()
{
}

void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MaxConnectionsIsSet)
    {
        val["maxConnections"] = ModelBase::toJson(m_MaxConnections);
    }
    if(m_MaxRequestsIsSet)
    {
        val["maxRequests"] = ModelBase::toJson(m_MaxRequests);
    }
    if(m_RequestTimeoutIsSet)
    {
        val["requestTimeout"] = ModelBase::toJson(m_RequestTimeout);
    }
    if(m_LogDirIsSet)
    {
        val["logDir"] = ModelBase::toJson(m_LogDir);
    }
    

    return val;
}

void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::fromJson(nlohmann::json& val)
{
    if(val.find("maxConnections") != val.end())
    {
        if(!val["maxConnections"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["maxConnections"]);
            setMaxConnections( newItem );
        }
        
    }
    if(val.find("maxRequests") != val.end())
    {
        if(!val["maxRequests"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["maxRequests"]);
            setMaxRequests( newItem );
        }
        
    }
    if(val.find("requestTimeout") != val.end())
    {
        if(!val["requestTimeout"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["requestTimeout"]);
            setRequestTimeout( newItem );
        }
        
    }
    if(val.find("logDir") != val.end())
    {
        if(!val["logDir"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["logDir"]);
            setLogDir( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getMaxConnections() const
{
    return m_MaxConnections;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setMaxConnections(ConfigNodePropertyString const& value)
{
    m_MaxConnections = value;
    m_MaxConnectionsIsSet = true;
}
bool ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::maxConnectionsIsSet() const
{
    return m_MaxConnectionsIsSet;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::unsetMaxConnections()
{
    m_MaxConnectionsIsSet = false;
}
ConfigNodePropertyString ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getMaxRequests() const
{
    return m_MaxRequests;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setMaxRequests(ConfigNodePropertyString const& value)
{
    m_MaxRequests = value;
    m_MaxRequestsIsSet = true;
}
bool ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::maxRequestsIsSet() const
{
    return m_MaxRequestsIsSet;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::unsetMaxRequests()
{
    m_MaxRequestsIsSet = false;
}
ConfigNodePropertyString ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getRequestTimeout() const
{
    return m_RequestTimeout;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setRequestTimeout(ConfigNodePropertyString const& value)
{
    m_RequestTimeout = value;
    m_RequestTimeoutIsSet = true;
}
bool ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::requestTimeoutIsSet() const
{
    return m_RequestTimeoutIsSet;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::unsetRequestTimeout()
{
    m_RequestTimeoutIsSet = false;
}
ConfigNodePropertyString ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::getLogDir() const
{
    return m_LogDir;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::setLogDir(ConfigNodePropertyString const& value)
{
    m_LogDir = value;
    m_LogDirIsSet = true;
}
bool ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::logDirIsSet() const
{
    return m_LogDirIsSet;
}
void ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties::unsetLogDir()
{
    m_LogDirIsSet = false;
}

}
}
}
}
