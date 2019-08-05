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


#include "ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties()
{
    m_ProviderNameIsSet = false;
    m_Forward_requestsIsSet = false;
    
}

ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::~ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties()
{
}

void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_ProviderNameIsSet)
    {
        val["providerName"] = ModelBase::toJson(m_ProviderName);
    }
    if(m_Forward_requestsIsSet)
    {
        val["forward.requests"] = ModelBase::toJson(m_Forward_requests);
    }
    

    return val;
}

void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::fromJson(nlohmann::json& val)
{
    if(val.find("providerName") != val.end())
    {
        if(!val["providerName"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["providerName"]);
            setProviderName( newItem );
        }
        
    }
    if(val.find("forward.requests") != val.end())
    {
        if(!val["forward.requests"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["forward.requests"]);
            setForwardRequests( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::getProviderName() const
{
    return m_ProviderName;
}
void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::setProviderName(ConfigNodePropertyString const& value)
{
    m_ProviderName = value;
    m_ProviderNameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::providerNameIsSet() const
{
    return m_ProviderNameIsSet;
}
void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::unsetProviderName()
{
    m_ProviderNameIsSet = false;
}
ConfigNodePropertyBoolean ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::getForwardRequests() const
{
    return m_Forward_requests;
}
void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::setForwardRequests(ConfigNodePropertyBoolean const& value)
{
    m_Forward_requests = value;
    m_Forward_requestsIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::forwardRequestsIsSet() const
{
    return m_Forward_requestsIsSet;
}
void ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties::unsetForward_requests()
{
    m_Forward_requestsIsSet = false;
}

}
}
}
}
