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


#include "ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::~ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo()
{
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::toJson() const
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

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::setProperties(ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

