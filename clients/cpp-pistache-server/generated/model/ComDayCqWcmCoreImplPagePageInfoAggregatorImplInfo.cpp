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


#include "ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::~ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo()
{
}

void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::toJson() const
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

void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::setProperties(ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

