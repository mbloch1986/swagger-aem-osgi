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


#include "ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo()
{
    m_Pid = "";
    m_PidIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
    m_AdditionalProperties = "";
    m_AdditionalPropertiesIsSet = false;
    m_Bundle_location = "";
    m_Bundle_locationIsSet = false;
    m_Service_location = "";
    m_Service_locationIsSet = false;
    
}

ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::~ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo()
{
}

void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::toJson() const
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
    if(m_AdditionalPropertiesIsSet)
    {
        val["additionalProperties"] = ModelBase::toJson(m_AdditionalProperties);
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

void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::fromJson(nlohmann::json& val)
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
            ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties newItem;
            newItem.fromJson(val["properties"]);
            setProperties( newItem );
        }
        
    }
    if(val.find("additionalProperties") != val.end())
    {
        setAdditionalProperties(val.at("additionalProperties"));
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


std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getPid() const
{
    return m_Pid;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setPid(std::string const& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetPid()
{
    m_PidIsSet = false;
}
std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getTitle() const
{
    return m_Title;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getDescription() const
{
    return m_Description;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getProperties() const
{
    return m_Properties;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setProperties(ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties const& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getAdditionalProperties() const
{
    return m_AdditionalProperties;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setAdditionalProperties(std::string const& value)
{
    m_AdditionalProperties = value;
    m_AdditionalPropertiesIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::additionalPropertiesIsSet() const
{
    return m_AdditionalPropertiesIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetAdditionalProperties()
{
    m_AdditionalPropertiesIsSet = false;
}
std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getBundleLocation() const
{
    return m_Bundle_location;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setBundleLocation(std::string const& value)
{
    m_Bundle_location = value;
    m_Bundle_locationIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::bundleLocationIsSet() const
{
    return m_Bundle_locationIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetBundle_location()
{
    m_Bundle_locationIsSet = false;
}
std::string ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::getServiceLocation() const
{
    return m_Service_location;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::setServiceLocation(std::string const& value)
{
    m_Service_location = value;
    m_Service_locationIsSet = true;
}
bool ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::serviceLocationIsSet() const
{
    return m_Service_locationIsSet;
}
void ComDayCqWcmCoreImplAuthoringUIModeServiceImplInfo::unsetService_location()
{
    m_Service_locationIsSet = false;
}

}
}
}
}

