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


#include "ComDayCqContentsyncImplContentSyncManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqContentsyncImplContentSyncManagerImplProperties::ComDayCqContentsyncImplContentSyncManagerImplProperties()
{
    m_Contentsync_fallback_authorizableIsSet = false;
    m_Contentsync_fallback_updateuserIsSet = false;
    
}

ComDayCqContentsyncImplContentSyncManagerImplProperties::~ComDayCqContentsyncImplContentSyncManagerImplProperties()
{
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqContentsyncImplContentSyncManagerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Contentsync_fallback_authorizableIsSet)
    {
        val["contentsync.fallback.authorizable"] = ModelBase::toJson(m_Contentsync_fallback_authorizable);
    }
    if(m_Contentsync_fallback_updateuserIsSet)
    {
        val["contentsync.fallback.updateuser"] = ModelBase::toJson(m_Contentsync_fallback_updateuser);
    }
    

    return val;
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("contentsync.fallback.authorizable") != val.end())
    {
        if(!val["contentsync.fallback.authorizable"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["contentsync.fallback.authorizable"]);
            setContentsyncFallbackAuthorizable( newItem );
        }
        
    }
    if(val.find("contentsync.fallback.updateuser") != val.end())
    {
        if(!val["contentsync.fallback.updateuser"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["contentsync.fallback.updateuser"]);
            setContentsyncFallbackUpdateuser( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComDayCqContentsyncImplContentSyncManagerImplProperties::getContentsyncFallbackAuthorizable() const
{
    return m_Contentsync_fallback_authorizable;
}
void ComDayCqContentsyncImplContentSyncManagerImplProperties::setContentsyncFallbackAuthorizable(ConfigNodePropertyString const& value)
{
    m_Contentsync_fallback_authorizable = value;
    m_Contentsync_fallback_authorizableIsSet = true;
}
bool ComDayCqContentsyncImplContentSyncManagerImplProperties::contentsyncFallbackAuthorizableIsSet() const
{
    return m_Contentsync_fallback_authorizableIsSet;
}
void ComDayCqContentsyncImplContentSyncManagerImplProperties::unsetContentsync_fallback_authorizable()
{
    m_Contentsync_fallback_authorizableIsSet = false;
}
ConfigNodePropertyString ComDayCqContentsyncImplContentSyncManagerImplProperties::getContentsyncFallbackUpdateuser() const
{
    return m_Contentsync_fallback_updateuser;
}
void ComDayCqContentsyncImplContentSyncManagerImplProperties::setContentsyncFallbackUpdateuser(ConfigNodePropertyString const& value)
{
    m_Contentsync_fallback_updateuser = value;
    m_Contentsync_fallback_updateuserIsSet = true;
}
bool ComDayCqContentsyncImplContentSyncManagerImplProperties::contentsyncFallbackUpdateuserIsSet() const
{
    return m_Contentsync_fallback_updateuserIsSet;
}
void ComDayCqContentsyncImplContentSyncManagerImplProperties::unsetContentsync_fallback_updateuser()
{
    m_Contentsync_fallback_updateuserIsSet = false;
}

}
}
}
}

