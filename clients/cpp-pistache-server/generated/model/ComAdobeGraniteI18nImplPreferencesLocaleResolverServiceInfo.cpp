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


#include "ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    
}

ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::~ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo()
{
}

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::toJson() const
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

void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::fromJson(nlohmann::json& val)
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
            ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    
}


std::string ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::getPid() const
{
    return m_Pid;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::getTitle() const
{
    return m_Title;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::getDescription() const
{
    return m_Description;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::getProperties() const
{
    return m_Properties;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::setProperties(ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComAdobeGraniteI18nImplPreferencesLocaleResolverServiceInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}
