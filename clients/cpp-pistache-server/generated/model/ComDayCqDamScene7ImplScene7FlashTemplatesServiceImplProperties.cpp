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


#include "ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties()
{
    m_Scene7FlashTemplates_rtiIsSet = false;
    m_Scene7FlashTemplates_rsiIsSet = false;
    m_Scene7FlashTemplates_rbIsSet = false;
    m_Scene7FlashTemplates_rurlIsSet = false;
    m_Scene7FlashTemplate_urlFormatParameterIsSet = false;
    
}

ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::~ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties()
{
}

void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Scene7FlashTemplates_rtiIsSet)
    {
        val["scene7FlashTemplates.rti"] = ModelBase::toJson(m_Scene7FlashTemplates_rti);
    }
    if(m_Scene7FlashTemplates_rsiIsSet)
    {
        val["scene7FlashTemplates.rsi"] = ModelBase::toJson(m_Scene7FlashTemplates_rsi);
    }
    if(m_Scene7FlashTemplates_rbIsSet)
    {
        val["scene7FlashTemplates.rb"] = ModelBase::toJson(m_Scene7FlashTemplates_rb);
    }
    if(m_Scene7FlashTemplates_rurlIsSet)
    {
        val["scene7FlashTemplates.rurl"] = ModelBase::toJson(m_Scene7FlashTemplates_rurl);
    }
    if(m_Scene7FlashTemplate_urlFormatParameterIsSet)
    {
        val["scene7FlashTemplate.urlFormatParameter"] = ModelBase::toJson(m_Scene7FlashTemplate_urlFormatParameter);
    }
    

    return val;
}

void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("scene7FlashTemplates.rti") != val.end())
    {
        if(!val["scene7FlashTemplates.rti"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scene7FlashTemplates.rti"]);
            setScene7FlashTemplatesRti( newItem );
        }
        
    }
    if(val.find("scene7FlashTemplates.rsi") != val.end())
    {
        if(!val["scene7FlashTemplates.rsi"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scene7FlashTemplates.rsi"]);
            setScene7FlashTemplatesRsi( newItem );
        }
        
    }
    if(val.find("scene7FlashTemplates.rb") != val.end())
    {
        if(!val["scene7FlashTemplates.rb"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scene7FlashTemplates.rb"]);
            setScene7FlashTemplatesRb( newItem );
        }
        
    }
    if(val.find("scene7FlashTemplates.rurl") != val.end())
    {
        if(!val["scene7FlashTemplates.rurl"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scene7FlashTemplates.rurl"]);
            setScene7FlashTemplatesRurl( newItem );
        }
        
    }
    if(val.find("scene7FlashTemplate.urlFormatParameter") != val.end())
    {
        if(!val["scene7FlashTemplate.urlFormatParameter"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["scene7FlashTemplate.urlFormatParameter"]);
            setScene7FlashTemplateUrlFormatParameter( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRti() const
{
    return m_Scene7FlashTemplates_rti;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRti(ConfigNodePropertyString const& value)
{
    m_Scene7FlashTemplates_rti = value;
    m_Scene7FlashTemplates_rtiIsSet = true;
}
bool ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::scene7FlashTemplatesRtiIsSet() const
{
    return m_Scene7FlashTemplates_rtiIsSet;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::unsetScene7FlashTemplates_rti()
{
    m_Scene7FlashTemplates_rtiIsSet = false;
}
ConfigNodePropertyString ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRsi() const
{
    return m_Scene7FlashTemplates_rsi;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRsi(ConfigNodePropertyString const& value)
{
    m_Scene7FlashTemplates_rsi = value;
    m_Scene7FlashTemplates_rsiIsSet = true;
}
bool ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::scene7FlashTemplatesRsiIsSet() const
{
    return m_Scene7FlashTemplates_rsiIsSet;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::unsetScene7FlashTemplates_rsi()
{
    m_Scene7FlashTemplates_rsiIsSet = false;
}
ConfigNodePropertyString ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRb() const
{
    return m_Scene7FlashTemplates_rb;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRb(ConfigNodePropertyString const& value)
{
    m_Scene7FlashTemplates_rb = value;
    m_Scene7FlashTemplates_rbIsSet = true;
}
bool ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::scene7FlashTemplatesRbIsSet() const
{
    return m_Scene7FlashTemplates_rbIsSet;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::unsetScene7FlashTemplates_rb()
{
    m_Scene7FlashTemplates_rbIsSet = false;
}
ConfigNodePropertyString ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplatesRurl() const
{
    return m_Scene7FlashTemplates_rurl;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplatesRurl(ConfigNodePropertyString const& value)
{
    m_Scene7FlashTemplates_rurl = value;
    m_Scene7FlashTemplates_rurlIsSet = true;
}
bool ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::scene7FlashTemplatesRurlIsSet() const
{
    return m_Scene7FlashTemplates_rurlIsSet;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::unsetScene7FlashTemplates_rurl()
{
    m_Scene7FlashTemplates_rurlIsSet = false;
}
ConfigNodePropertyString ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::getScene7FlashTemplateUrlFormatParameter() const
{
    return m_Scene7FlashTemplate_urlFormatParameter;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::setScene7FlashTemplateUrlFormatParameter(ConfigNodePropertyString const& value)
{
    m_Scene7FlashTemplate_urlFormatParameter = value;
    m_Scene7FlashTemplate_urlFormatParameterIsSet = true;
}
bool ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::scene7FlashTemplateUrlFormatParameterIsSet() const
{
    return m_Scene7FlashTemplate_urlFormatParameterIsSet;
}
void ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties::unsetScene7FlashTemplate_urlFormatParameter()
{
    m_Scene7FlashTemplate_urlFormatParameterIsSet = false;
}

}
}
}
}

