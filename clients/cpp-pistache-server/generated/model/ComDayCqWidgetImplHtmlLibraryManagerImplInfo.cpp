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


#include "ComDayCqWidgetImplHtmlLibraryManagerImplInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWidgetImplHtmlLibraryManagerImplInfo::ComDayCqWidgetImplHtmlLibraryManagerImplInfo()
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

ComDayCqWidgetImplHtmlLibraryManagerImplInfo::~ComDayCqWidgetImplHtmlLibraryManagerImplInfo()
{
}

void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWidgetImplHtmlLibraryManagerImplInfo::toJson() const
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

void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWidgetImplHtmlLibraryManagerImplProperties newItem;
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


std::string ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWidgetImplHtmlLibraryManagerImplProperties ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setProperties(ComDayCqWidgetImplHtmlLibraryManagerImplProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::string ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setBundleLocation(std::string const& value)
{
    m_Bundle_location = value;
    m_Bundle_locationIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::bundleLocationIsSet() const
{
    return m_Bundle_locationIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetBundle_location()
{
    m_Bundle_locationIsSet = false;
}
std::string ComDayCqWidgetImplHtmlLibraryManagerImplInfo::getServiceLocation() const
{
    return m_Service_location;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::setServiceLocation(std::string const& value)
{
    m_Service_location = value;
    m_Service_locationIsSet = true;
}
bool ComDayCqWidgetImplHtmlLibraryManagerImplInfo::serviceLocationIsSet() const
{
    return m_Service_locationIsSet;
}
void ComDayCqWidgetImplHtmlLibraryManagerImplInfo::unsetService_location()
{
    m_Service_locationIsSet = false;
}

}
}
}
}

