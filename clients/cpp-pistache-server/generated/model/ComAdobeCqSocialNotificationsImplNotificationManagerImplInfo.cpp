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


#include "ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::~ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo()
{
}

void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::toJson() const
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

void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::fromJson(nlohmann::json& val)
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
            ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::setProperties(ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}
