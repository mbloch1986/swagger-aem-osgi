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


#include "ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::~ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo()
{
}

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::toJson() const
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

void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::fromJson(nlohmann::json& val)
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
            ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::setProperties(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

