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


#include "ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties()
{
    m_EnableScheduledPostsSearchIsSet = false;
    m_NumberOfMinutesIsSet = false;
    m_MaxSearchLimitIsSet = false;
    
}

ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::~ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties()
{
}

void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_EnableScheduledPostsSearchIsSet)
    {
        val["enableScheduledPostsSearch"] = ModelBase::toJson(m_EnableScheduledPostsSearch);
    }
    if(m_NumberOfMinutesIsSet)
    {
        val["numberOfMinutes"] = ModelBase::toJson(m_NumberOfMinutes);
    }
    if(m_MaxSearchLimitIsSet)
    {
        val["maxSearchLimit"] = ModelBase::toJson(m_MaxSearchLimit);
    }
    

    return val;
}

void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::fromJson(nlohmann::json& val)
{
    if(val.find("enableScheduledPostsSearch") != val.end())
    {
        if(!val["enableScheduledPostsSearch"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["enableScheduledPostsSearch"]);
            setEnableScheduledPostsSearch( newItem );
        }
        
    }
    if(val.find("numberOfMinutes") != val.end())
    {
        if(!val["numberOfMinutes"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["numberOfMinutes"]);
            setNumberOfMinutes( newItem );
        }
        
    }
    if(val.find("maxSearchLimit") != val.end())
    {
        if(!val["maxSearchLimit"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxSearchLimit"]);
            setMaxSearchLimit( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::getEnableScheduledPostsSearch() const
{
    return m_EnableScheduledPostsSearch;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::setEnableScheduledPostsSearch(ConfigNodePropertyBoolean const& value)
{
    m_EnableScheduledPostsSearch = value;
    m_EnableScheduledPostsSearchIsSet = true;
}
bool ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::enableScheduledPostsSearchIsSet() const
{
    return m_EnableScheduledPostsSearchIsSet;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::unsetEnableScheduledPostsSearch()
{
    m_EnableScheduledPostsSearchIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::getNumberOfMinutes() const
{
    return m_NumberOfMinutes;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::setNumberOfMinutes(ConfigNodePropertyInteger const& value)
{
    m_NumberOfMinutes = value;
    m_NumberOfMinutesIsSet = true;
}
bool ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::numberOfMinutesIsSet() const
{
    return m_NumberOfMinutesIsSet;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::unsetNumberOfMinutes()
{
    m_NumberOfMinutesIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::getMaxSearchLimit() const
{
    return m_MaxSearchLimit;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::setMaxSearchLimit(ConfigNodePropertyInteger const& value)
{
    m_MaxSearchLimit = value;
    m_MaxSearchLimitIsSet = true;
}
bool ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::maxSearchLimitIsSet() const
{
    return m_MaxSearchLimitIsSet;
}
void ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties::unsetMaxSearchLimit()
{
    m_MaxSearchLimitIsSet = false;
}

}
}
}
}
