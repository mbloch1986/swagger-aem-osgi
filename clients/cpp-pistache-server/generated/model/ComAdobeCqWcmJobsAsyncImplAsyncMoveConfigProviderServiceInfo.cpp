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


#include "ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::~ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo()
{
}

void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_PidIsSet)
    {
        val["pid"] = ModelBase::toJson(m_Pid);
    }
    if(m_TitleIsSet)
    {
        val["title"] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_PropertiesIsSet)
    {
        val["properties"] = ModelBase::toJson(m_Properties);
    }
    

    return val;
}

void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::fromJson(nlohmann::json& val)
{
    if(val.find("pid") != val.end())
    {
        setPid(val.at("pid"));
    }
    if(val.find("title") != val.end())
    {
        setTitle(val.at("title"));
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
    }
    if(val.find("properties") != val.end())
    {
        if(!val["properties"].is_null())
        {
            ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::setProperties(ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComAdobeCqWcmJobsAsyncImplAsyncMoveConfigProviderServiceInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

