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


#include "ComDayCqWcmScriptingImplBVPManagerInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmScriptingImplBVPManagerInfo::ComDayCqWcmScriptingImplBVPManagerInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComDayCqWcmScriptingImplBVPManagerInfo::~ComDayCqWcmScriptingImplBVPManagerInfo()
{
}

void ComDayCqWcmScriptingImplBVPManagerInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmScriptingImplBVPManagerInfo::toJson() const
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

void ComDayCqWcmScriptingImplBVPManagerInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWcmScriptingImplBVPManagerProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComDayCqWcmScriptingImplBVPManagerInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWcmScriptingImplBVPManagerInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWcmScriptingImplBVPManagerInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWcmScriptingImplBVPManagerInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWcmScriptingImplBVPManagerInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWcmScriptingImplBVPManagerInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWcmScriptingImplBVPManagerProperties ComDayCqWcmScriptingImplBVPManagerInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::setProperties(ComDayCqWcmScriptingImplBVPManagerProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWcmScriptingImplBVPManagerInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWcmScriptingImplBVPManagerInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}
