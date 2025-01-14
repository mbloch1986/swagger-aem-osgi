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


#include "ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties()
{
    m_Cq_searchpromote_configuration_server_uriIsSet = false;
    m_Cq_searchpromote_configuration_environmentIsSet = false;
    m_Connection_timeoutIsSet = false;
    m_Socket_timeoutIsSet = false;
    
}

ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::~ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties()
{
}

void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_searchpromote_configuration_server_uriIsSet)
    {
        val["cq.searchpromote.configuration.server.uri"] = ModelBase::toJson(m_Cq_searchpromote_configuration_server_uri);
    }
    if(m_Cq_searchpromote_configuration_environmentIsSet)
    {
        val["cq.searchpromote.configuration.environment"] = ModelBase::toJson(m_Cq_searchpromote_configuration_environment);
    }
    if(m_Connection_timeoutIsSet)
    {
        val["connection.timeout"] = ModelBase::toJson(m_Connection_timeout);
    }
    if(m_Socket_timeoutIsSet)
    {
        val["socket.timeout"] = ModelBase::toJson(m_Socket_timeout);
    }
    

    return val;
}

void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.searchpromote.configuration.server.uri") != val.end())
    {
        if(!val["cq.searchpromote.configuration.server.uri"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.searchpromote.configuration.server.uri"]);
            setCqSearchpromoteConfigurationServerUri( newItem );
        }
        
    }
    if(val.find("cq.searchpromote.configuration.environment") != val.end())
    {
        if(!val["cq.searchpromote.configuration.environment"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.searchpromote.configuration.environment"]);
            setCqSearchpromoteConfigurationEnvironment( newItem );
        }
        
    }
    if(val.find("connection.timeout") != val.end())
    {
        if(!val["connection.timeout"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["connection.timeout"]);
            setConnectionTimeout( newItem );
        }
        
    }
    if(val.find("socket.timeout") != val.end())
    {
        if(!val["socket.timeout"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["socket.timeout"]);
            setSocketTimeout( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::getCqSearchpromoteConfigurationServerUri() const
{
    return m_Cq_searchpromote_configuration_server_uri;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::setCqSearchpromoteConfigurationServerUri(ConfigNodePropertyString const& value)
{
    m_Cq_searchpromote_configuration_server_uri = value;
    m_Cq_searchpromote_configuration_server_uriIsSet = true;
}
bool ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::cqSearchpromoteConfigurationServerUriIsSet() const
{
    return m_Cq_searchpromote_configuration_server_uriIsSet;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::unsetCq_searchpromote_configuration_server_uri()
{
    m_Cq_searchpromote_configuration_server_uriIsSet = false;
}
ConfigNodePropertyString ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::getCqSearchpromoteConfigurationEnvironment() const
{
    return m_Cq_searchpromote_configuration_environment;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::setCqSearchpromoteConfigurationEnvironment(ConfigNodePropertyString const& value)
{
    m_Cq_searchpromote_configuration_environment = value;
    m_Cq_searchpromote_configuration_environmentIsSet = true;
}
bool ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::cqSearchpromoteConfigurationEnvironmentIsSet() const
{
    return m_Cq_searchpromote_configuration_environmentIsSet;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::unsetCq_searchpromote_configuration_environment()
{
    m_Cq_searchpromote_configuration_environmentIsSet = false;
}
ConfigNodePropertyInteger ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::getConnectionTimeout() const
{
    return m_Connection_timeout;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::setConnectionTimeout(ConfigNodePropertyInteger const& value)
{
    m_Connection_timeout = value;
    m_Connection_timeoutIsSet = true;
}
bool ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::connectionTimeoutIsSet() const
{
    return m_Connection_timeoutIsSet;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::unsetConnection_timeout()
{
    m_Connection_timeoutIsSet = false;
}
ConfigNodePropertyInteger ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::getSocketTimeout() const
{
    return m_Socket_timeout;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::setSocketTimeout(ConfigNodePropertyInteger const& value)
{
    m_Socket_timeout = value;
    m_Socket_timeoutIsSet = true;
}
bool ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::socketTimeoutIsSet() const
{
    return m_Socket_timeoutIsSet;
}
void ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties::unsetSocket_timeout()
{
    m_Socket_timeoutIsSet = false;
}

}
}
}
}

