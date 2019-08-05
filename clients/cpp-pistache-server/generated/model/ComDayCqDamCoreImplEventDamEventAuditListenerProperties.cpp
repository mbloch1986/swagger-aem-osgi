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


#include "ComDayCqDamCoreImplEventDamEventAuditListenerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplEventDamEventAuditListenerProperties::ComDayCqDamCoreImplEventDamEventAuditListenerProperties()
{
    m_Event_filterIsSet = false;
    m_EnabledIsSet = false;
    
}

ComDayCqDamCoreImplEventDamEventAuditListenerProperties::~ComDayCqDamCoreImplEventDamEventAuditListenerProperties()
{
}

void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplEventDamEventAuditListenerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Event_filterIsSet)
    {
        val["event.filter"] = ModelBase::toJson(m_Event_filter);
    }
    if(m_EnabledIsSet)
    {
        val["enabled"] = ModelBase::toJson(m_Enabled);
    }
    

    return val;
}

void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("event.filter") != val.end())
    {
        if(!val["event.filter"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["event.filter"]);
            setEventFilter( newItem );
        }
        
    }
    if(val.find("enabled") != val.end())
    {
        if(!val["enabled"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["enabled"]);
            setEnabled( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqDamCoreImplEventDamEventAuditListenerProperties::getEventFilter() const
{
    return m_Event_filter;
}
void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::setEventFilter(ConfigNodePropertyString const& value)
{
    m_Event_filter = value;
    m_Event_filterIsSet = true;
}
bool ComDayCqDamCoreImplEventDamEventAuditListenerProperties::eventFilterIsSet() const
{
    return m_Event_filterIsSet;
}
void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::unsetEvent_filter()
{
    m_Event_filterIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqDamCoreImplEventDamEventAuditListenerProperties::getEnabled() const
{
    return m_Enabled;
}
void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::setEnabled(ConfigNodePropertyBoolean const& value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool ComDayCqDamCoreImplEventDamEventAuditListenerProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}
void ComDayCqDamCoreImplEventDamEventAuditListenerProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

}
}
}
}
