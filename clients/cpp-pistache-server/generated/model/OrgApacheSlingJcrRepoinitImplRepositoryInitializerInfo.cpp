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


#include "OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo()
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

OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::~OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo()
{
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::toJson() const
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

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::fromJson(nlohmann::json& val)
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
            OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties newItem;
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


std::string OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getPid() const
{
    return m_Pid;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getTitle() const
{
    return m_Title;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getDescription() const
{
    return m_Description;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getProperties() const
{
    return m_Properties;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setProperties(OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::string OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setBundleLocation(std::string const& value)
{
    m_Bundle_location = value;
    m_Bundle_locationIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::bundleLocationIsSet() const
{
    return m_Bundle_locationIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetBundle_location()
{
    m_Bundle_locationIsSet = false;
}
std::string OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::getServiceLocation() const
{
    return m_Service_location;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::setServiceLocation(std::string const& value)
{
    m_Service_location = value;
    m_Service_locationIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::serviceLocationIsSet() const
{
    return m_Service_locationIsSet;
}
void OrgApacheSlingJcrRepoinitImplRepositoryInitializerInfo::unsetService_location()
{
    m_Service_locationIsSet = false;
}

}
}
}
}

