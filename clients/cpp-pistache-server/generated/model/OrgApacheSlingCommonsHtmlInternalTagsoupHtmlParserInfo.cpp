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


#include "OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::~OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo()
{
}

void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::toJson() const
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

void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::fromJson(nlohmann::json& val)
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
            OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::getPid() const
{
    return m_Pid;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::getTitle() const
{
    return m_Title;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::getDescription() const
{
    return m_Description;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::getProperties() const
{
    return m_Properties;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::setProperties(OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void OrgApacheSlingCommonsHtmlInternalTagsoupHtmlParserInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

