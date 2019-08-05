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


#include "OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    m_Bundle_location = "";
    m_Bundle_locationIsSet = false;
    m_Service_location = "";
    m_Service_locationIsSet = false;
    
}

OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::~OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo()
{
}

void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::toJson() const
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
    if(m_Bundle_locationIsSet)
    {
        val["bundle_location"] = ModelBase::toJson(m_Bundle_location);
    }
    if(m_Service_locationIsSet)
    {
        val["service_location"] = ModelBase::toJson(m_Service_location);
    }
    

    return val;
}

void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::fromJson(nlohmann::json& val)
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
            OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    if(val.find("bundle_location") != val.end())
    {
        setBundleLocation(val.at("bundle_location"));
    }
    if(val.find("service_location") != val.end())
    {
        setServiceLocation(val.at("service_location"));
    }
    
}


std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getPid() const
{
    return m_Pid;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getTitle() const
{
    return m_Title;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getDescription() const
{
    return m_Description;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getProperties() const
{
    return m_Properties;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setProperties(OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setBundleLocation(std::string const& value)
{
    m_Bundle_location = value;
    m_Bundle_locationIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::bundleLocationIsSet() const
{
    return m_Bundle_locationIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetBundle_location()
{
    m_Bundle_locationIsSet = false;
}
std::string OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::getServiceLocation() const
{
    return m_Service_location;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::setServiceLocation(std::string const& value)
{
    m_Service_location = value;
    m_Service_locationIsSet = true;
}
bool OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::serviceLocationIsSet() const
{
    return m_Service_locationIsSet;
}
void OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraInfo::unsetService_location()
{
    m_Service_locationIsSet = false;
}

}
}
}
}
