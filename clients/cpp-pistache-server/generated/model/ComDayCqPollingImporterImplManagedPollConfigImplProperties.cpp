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


#include "ComDayCqPollingImporterImplManagedPollConfigImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqPollingImporterImplManagedPollConfigImplProperties::ComDayCqPollingImporterImplManagedPollConfigImplProperties()
{
    m_IdIsSet = false;
    m_EnabledIsSet = false;
    m_ReferenceIsSet = false;
    m_IntervalIsSet = false;
    m_ExpressionIsSet = false;
    m_SourceIsSet = false;
    m_TargetIsSet = false;
    m_LoginIsSet = false;
    m_PasswordIsSet = false;
    
}

ComDayCqPollingImporterImplManagedPollConfigImplProperties::~ComDayCqPollingImporterImplManagedPollConfigImplProperties()
{
}

void ComDayCqPollingImporterImplManagedPollConfigImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqPollingImporterImplManagedPollConfigImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IdIsSet)
    {
        val["id"] = ModelBase::toJson(m_Id);
    }
    if(m_EnabledIsSet)
    {
        val["enabled"] = ModelBase::toJson(m_Enabled);
    }
    if(m_ReferenceIsSet)
    {
        val["reference"] = ModelBase::toJson(m_Reference);
    }
    if(m_IntervalIsSet)
    {
        val["interval"] = ModelBase::toJson(m_Interval);
    }
    if(m_ExpressionIsSet)
    {
        val["expression"] = ModelBase::toJson(m_Expression);
    }
    if(m_SourceIsSet)
    {
        val["source"] = ModelBase::toJson(m_Source);
    }
    if(m_TargetIsSet)
    {
        val["target"] = ModelBase::toJson(m_Target);
    }
    if(m_LoginIsSet)
    {
        val["login"] = ModelBase::toJson(m_Login);
    }
    if(m_PasswordIsSet)
    {
        val["password"] = ModelBase::toJson(m_Password);
    }
    

    return val;
}

void ComDayCqPollingImporterImplManagedPollConfigImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("id") != val.end())
    {
        if(!val["id"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["id"]);
            setId( newItem );
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
    if(val.find("reference") != val.end())
    {
        if(!val["reference"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["reference"]);
            setReference( newItem );
        }
        
    }
    if(val.find("interval") != val.end())
    {
        if(!val["interval"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["interval"]);
            setInterval( newItem );
        }
        
    }
    if(val.find("expression") != val.end())
    {
        if(!val["expression"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["expression"]);
            setExpression( newItem );
        }
        
    }
    if(val.find("source") != val.end())
    {
        if(!val["source"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["source"]);
            setSource( newItem );
        }
        
    }
    if(val.find("target") != val.end())
    {
        if(!val["target"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["target"]);
            setTarget( newItem );
        }
        
    }
    if(val.find("login") != val.end())
    {
        if(!val["login"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["login"]);
            setLogin( newItem );
        }
        
    }
    if(val.find("password") != val.end())
    {
        if(!val["password"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["password"]);
            setPassword( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getId() const
{
    return m_Id;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setId(ConfigNodePropertyString const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::idIsSet() const
{
    return m_IdIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetId()
{
    m_IdIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqPollingImporterImplManagedPollConfigImplProperties::getEnabled() const
{
    return m_Enabled;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setEnabled(ConfigNodePropertyBoolean const& value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqPollingImporterImplManagedPollConfigImplProperties::getReference() const
{
    return m_Reference;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setReference(ConfigNodePropertyBoolean const& value)
{
    m_Reference = value;
    m_ReferenceIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::referenceIsSet() const
{
    return m_ReferenceIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetReference()
{
    m_ReferenceIsSet = false;
}
ConfigNodePropertyInteger ComDayCqPollingImporterImplManagedPollConfigImplProperties::getInterval() const
{
    return m_Interval;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setInterval(ConfigNodePropertyInteger const& value)
{
    m_Interval = value;
    m_IntervalIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::intervalIsSet() const
{
    return m_IntervalIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetInterval()
{
    m_IntervalIsSet = false;
}
ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getExpression() const
{
    return m_Expression;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setExpression(ConfigNodePropertyString const& value)
{
    m_Expression = value;
    m_ExpressionIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::expressionIsSet() const
{
    return m_ExpressionIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetExpression()
{
    m_ExpressionIsSet = false;
}
ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getSource() const
{
    return m_Source;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setSource(ConfigNodePropertyString const& value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::sourceIsSet() const
{
    return m_SourceIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetSource()
{
    m_SourceIsSet = false;
}
ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getTarget() const
{
    return m_Target;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setTarget(ConfigNodePropertyString const& value)
{
    m_Target = value;
    m_TargetIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::targetIsSet() const
{
    return m_TargetIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetTarget()
{
    m_TargetIsSet = false;
}
ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getLogin() const
{
    return m_Login;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setLogin(ConfigNodePropertyString const& value)
{
    m_Login = value;
    m_LoginIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::loginIsSet() const
{
    return m_LoginIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetLogin()
{
    m_LoginIsSet = false;
}
ConfigNodePropertyString ComDayCqPollingImporterImplManagedPollConfigImplProperties::getPassword() const
{
    return m_Password;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::setPassword(ConfigNodePropertyString const& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool ComDayCqPollingImporterImplManagedPollConfigImplProperties::passwordIsSet() const
{
    return m_PasswordIsSet;
}
void ComDayCqPollingImporterImplManagedPollConfigImplProperties::unsetPassword()
{
    m_PasswordIsSet = false;
}

}
}
}
}

