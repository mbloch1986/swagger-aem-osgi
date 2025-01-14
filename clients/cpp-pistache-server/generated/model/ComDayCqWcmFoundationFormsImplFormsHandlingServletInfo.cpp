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


#include "ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::~ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo()
{
}

void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::toJson() const
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

void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::setProperties(ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWcmFoundationFormsImplFormsHandlingServletInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

