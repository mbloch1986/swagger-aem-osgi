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


#include "ComAdobeCqDtmImplServiceDTMWebServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::ComAdobeCqDtmImplServiceDTMWebServiceImplProperties()
{
    m_Connection_timeoutIsSet = false;
    m_Socket_timeoutIsSet = false;
    
}

ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::~ComAdobeCqDtmImplServiceDTMWebServiceImplProperties()
{
}

void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

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

void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::fromJson(nlohmann::json& val)
{
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


ConfigNodePropertyInteger ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::getConnectionTimeout() const
{
    return m_Connection_timeout;
}
void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::setConnectionTimeout(ConfigNodePropertyInteger const& value)
{
    m_Connection_timeout = value;
    m_Connection_timeoutIsSet = true;
}
bool ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::connectionTimeoutIsSet() const
{
    return m_Connection_timeoutIsSet;
}
void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::unsetConnection_timeout()
{
    m_Connection_timeoutIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::getSocketTimeout() const
{
    return m_Socket_timeout;
}
void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::setSocketTimeout(ConfigNodePropertyInteger const& value)
{
    m_Socket_timeout = value;
    m_Socket_timeoutIsSet = true;
}
bool ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::socketTimeoutIsSet() const
{
    return m_Socket_timeoutIsSet;
}
void ComAdobeCqDtmImplServiceDTMWebServiceImplProperties::unsetSocket_timeout()
{
    m_Socket_timeoutIsSet = false;
}

}
}
}
}

