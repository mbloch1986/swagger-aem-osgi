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


#include "ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::~ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo()
{
}

void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::toJson() const
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

void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::fromJson(nlohmann::json& val)
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
            ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::setProperties(ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComAdobeCqDamMacSyncHelperImplMACSyncClientImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

