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


#include "ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties()
{
    m_DiffPathIsSet = false;
    m_ServiceNameIsSet = false;
    m_ServiceUser_targetIsSet = false;
    
}

ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::~ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties()
{
}

void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_DiffPathIsSet)
    {
        val["diffPath"] = ModelBase::toJson(m_DiffPath);
    }
    if(m_ServiceNameIsSet)
    {
        val["serviceName"] = ModelBase::toJson(m_ServiceName);
    }
    if(m_ServiceUser_targetIsSet)
    {
        val["serviceUser.target"] = ModelBase::toJson(m_ServiceUser_target);
    }
    

    return val;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("diffPath") != val.end())
    {
        if(!val["diffPath"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["diffPath"]);
            setDiffPath( newItem );
        }
        
    }
    if(val.find("serviceName") != val.end())
    {
        if(!val["serviceName"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["serviceName"]);
            setServiceName( newItem );
        }
        
    }
    if(val.find("serviceUser.target") != val.end())
    {
        if(!val["serviceUser.target"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["serviceUser.target"]);
            setServiceUserTarget( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::getDiffPath() const
{
    return m_DiffPath;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::setDiffPath(ConfigNodePropertyString const& value)
{
    m_DiffPath = value;
    m_DiffPathIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::diffPathIsSet() const
{
    return m_DiffPathIsSet;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::unsetDiffPath()
{
    m_DiffPathIsSet = false;
}
ConfigNodePropertyString ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::getServiceName() const
{
    return m_ServiceName;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::setServiceName(ConfigNodePropertyString const& value)
{
    m_ServiceName = value;
    m_ServiceNameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::serviceNameIsSet() const
{
    return m_ServiceNameIsSet;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::unsetServiceName()
{
    m_ServiceNameIsSet = false;
}
ConfigNodePropertyString ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::getServiceUserTarget() const
{
    return m_ServiceUser_target;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::setServiceUserTarget(ConfigNodePropertyString const& value)
{
    m_ServiceUser_target = value;
    m_ServiceUser_targetIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::serviceUserTargetIsSet() const
{
    return m_ServiceUser_targetIsSet;
}
void ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties::unsetServiceUser_target()
{
    m_ServiceUser_targetIsSet = false;
}

}
}
}
}

