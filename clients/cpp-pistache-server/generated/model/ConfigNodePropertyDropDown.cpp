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


#include "ConfigNodePropertyDropDown.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ConfigNodePropertyDropDown::ConfigNodePropertyDropDown()
{
    m_Name = "";
    m_NameIsSet = false;
    m_Optional = false;
    m_OptionalIsSet = false;
    m_Is_set = false;
    m_Is_setIsSet = false;
    m_TypeIsSet = false;
    m_ValueIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    
}

ConfigNodePropertyDropDown::~ConfigNodePropertyDropDown()
{
}

void ConfigNodePropertyDropDown::validate()
{
    // TODO: implement validation
}

nlohmann::json ConfigNodePropertyDropDown::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_OptionalIsSet)
    {
        val["optional"] = m_Optional;
    }
    if(m_Is_setIsSet)
    {
        val["is_set"] = m_Is_set;
    }
    if(m_TypeIsSet)
    {
        val["type"] = ModelBase::toJson(m_Type);
    }
    if(m_ValueIsSet)
    {
        val["value"] = ModelBase::toJson(m_Value);
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    

    return val;
}

void ConfigNodePropertyDropDown::fromJson(nlohmann::json& val)
{
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
    }
    if(val.find("optional") != val.end())
    {
        setOptional(val.at("optional"));
    }
    if(val.find("is_set") != val.end())
    {
        setIsSet(val.at("is_set"));
    }
    if(val.find("type") != val.end())
    {
        if(!val["type"].is_null())
        {
            ConfigNodePropertyDropDown_type newItem;
            newItem.fromJson(val["type"]);
            setType( newItem );
        }
        
    }
    if(val.find("value") != val.end())
    {
        if(!val["value"].is_null())
        {
            Object newItem;
            newItem.fromJson(val["value"]);
            setValue( newItem );
        }
        
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
    }
    
}


std::string ConfigNodePropertyDropDown::getName() const
{
    return m_Name;
}
void ConfigNodePropertyDropDown::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool ConfigNodePropertyDropDown::nameIsSet() const
{
    return m_NameIsSet;
}
void ConfigNodePropertyDropDown::unsetName()
{
    m_NameIsSet = false;
}
bool ConfigNodePropertyDropDown::isOptional() const
{
    return m_Optional;
}
void ConfigNodePropertyDropDown::setOptional(bool const value)
{
    m_Optional = value;
    m_OptionalIsSet = true;
}
bool ConfigNodePropertyDropDown::optionalIsSet() const
{
    return m_OptionalIsSet;
}
void ConfigNodePropertyDropDown::unsetOptional()
{
    m_OptionalIsSet = false;
}
bool ConfigNodePropertyDropDown::isIsSet() const
{
    return m_Is_set;
}
void ConfigNodePropertyDropDown::setIsSet(bool const value)
{
    m_Is_set = value;
    m_Is_setIsSet = true;
}
bool ConfigNodePropertyDropDown::isSetIsSet() const
{
    return m_Is_setIsSet;
}
void ConfigNodePropertyDropDown::unsetIs_set()
{
    m_Is_setIsSet = false;
}
ConfigNodePropertyDropDown_type ConfigNodePropertyDropDown::getType() const
{
    return m_Type;
}
void ConfigNodePropertyDropDown::setType(ConfigNodePropertyDropDown_type const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ConfigNodePropertyDropDown::typeIsSet() const
{
    return m_TypeIsSet;
}
void ConfigNodePropertyDropDown::unsetType()
{
    m_TypeIsSet = false;
}
Object ConfigNodePropertyDropDown::getValue() const
{
    return m_Value;
}
void ConfigNodePropertyDropDown::setValue(Object const& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool ConfigNodePropertyDropDown::valueIsSet() const
{
    return m_ValueIsSet;
}
void ConfigNodePropertyDropDown::unsetValue()
{
    m_ValueIsSet = false;
}
std::string ConfigNodePropertyDropDown::getDescription() const
{
    return m_Description;
}
void ConfigNodePropertyDropDown::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ConfigNodePropertyDropDown::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ConfigNodePropertyDropDown::unsetDescription()
{
    m_DescriptionIsSet = false;
}

}
}
}
}
