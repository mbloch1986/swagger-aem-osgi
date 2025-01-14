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


#include "ComAdobeGraniteContexthubImplContextHubImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteContexthubImplContextHubImplProperties::ComAdobeGraniteContexthubImplContextHubImplProperties()
{
    m_Com_adobe_granite_contexthub_silent_modeIsSet = false;
    m_Com_adobe_granite_contexthub_show_uiIsSet = false;
    
}

ComAdobeGraniteContexthubImplContextHubImplProperties::~ComAdobeGraniteContexthubImplContextHubImplProperties()
{
}

void ComAdobeGraniteContexthubImplContextHubImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteContexthubImplContextHubImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Com_adobe_granite_contexthub_silent_modeIsSet)
    {
        val["com.adobe.granite.contexthub.silent_mode"] = ModelBase::toJson(m_Com_adobe_granite_contexthub_silent_mode);
    }
    if(m_Com_adobe_granite_contexthub_show_uiIsSet)
    {
        val["com.adobe.granite.contexthub.show_ui"] = ModelBase::toJson(m_Com_adobe_granite_contexthub_show_ui);
    }
    

    return val;
}

void ComAdobeGraniteContexthubImplContextHubImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("com.adobe.granite.contexthub.silent_mode") != val.end())
    {
        if(!val["com.adobe.granite.contexthub.silent_mode"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["com.adobe.granite.contexthub.silent_mode"]);
            setComAdobeGraniteContexthubSilentMode( newItem );
        }
        
    }
    if(val.find("com.adobe.granite.contexthub.show_ui") != val.end())
    {
        if(!val["com.adobe.granite.contexthub.show_ui"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["com.adobe.granite.contexthub.show_ui"]);
            setComAdobeGraniteContexthubShowUi( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeGraniteContexthubImplContextHubImplProperties::getComAdobeGraniteContexthubSilentMode() const
{
    return m_Com_adobe_granite_contexthub_silent_mode;
}
void ComAdobeGraniteContexthubImplContextHubImplProperties::setComAdobeGraniteContexthubSilentMode(ConfigNodePropertyBoolean const& value)
{
    m_Com_adobe_granite_contexthub_silent_mode = value;
    m_Com_adobe_granite_contexthub_silent_modeIsSet = true;
}
bool ComAdobeGraniteContexthubImplContextHubImplProperties::comAdobeGraniteContexthubSilentModeIsSet() const
{
    return m_Com_adobe_granite_contexthub_silent_modeIsSet;
}
void ComAdobeGraniteContexthubImplContextHubImplProperties::unsetCom_adobe_granite_contexthub_silent_mode()
{
    m_Com_adobe_granite_contexthub_silent_modeIsSet = false;
}
ConfigNodePropertyBoolean ComAdobeGraniteContexthubImplContextHubImplProperties::getComAdobeGraniteContexthubShowUi() const
{
    return m_Com_adobe_granite_contexthub_show_ui;
}
void ComAdobeGraniteContexthubImplContextHubImplProperties::setComAdobeGraniteContexthubShowUi(ConfigNodePropertyBoolean const& value)
{
    m_Com_adobe_granite_contexthub_show_ui = value;
    m_Com_adobe_granite_contexthub_show_uiIsSet = true;
}
bool ComAdobeGraniteContexthubImplContextHubImplProperties::comAdobeGraniteContexthubShowUiIsSet() const
{
    return m_Com_adobe_granite_contexthub_show_uiIsSet;
}
void ComAdobeGraniteContexthubImplContextHubImplProperties::unsetCom_adobe_granite_contexthub_show_ui()
{
    m_Com_adobe_granite_contexthub_show_uiIsSet = false;
}

}
}
}
}

