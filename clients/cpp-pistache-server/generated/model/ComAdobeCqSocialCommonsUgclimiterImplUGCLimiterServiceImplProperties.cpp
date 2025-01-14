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


#include "ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties()
{
    m_Event_topicsIsSet = false;
    m_Event_filterIsSet = false;
    m_VerbsIsSet = false;
    
}

ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::~ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties()
{
}

void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Event_topicsIsSet)
    {
        val["event.topics"] = ModelBase::toJson(m_Event_topics);
    }
    if(m_Event_filterIsSet)
    {
        val["event.filter"] = ModelBase::toJson(m_Event_filter);
    }
    if(m_VerbsIsSet)
    {
        val["verbs"] = ModelBase::toJson(m_Verbs);
    }
    

    return val;
}

void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("event.topics") != val.end())
    {
        if(!val["event.topics"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["event.topics"]);
            setEventTopics( newItem );
        }
        
    }
    if(val.find("event.filter") != val.end())
    {
        if(!val["event.filter"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["event.filter"]);
            setEventFilter( newItem );
        }
        
    }
    if(val.find("verbs") != val.end())
    {
        if(!val["verbs"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["verbs"]);
            setVerbs( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::getEventTopics() const
{
    return m_Event_topics;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::setEventTopics(ConfigNodePropertyString const& value)
{
    m_Event_topics = value;
    m_Event_topicsIsSet = true;
}
bool ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::eventTopicsIsSet() const
{
    return m_Event_topicsIsSet;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::unsetEvent_topics()
{
    m_Event_topicsIsSet = false;
}
ConfigNodePropertyString ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::getEventFilter() const
{
    return m_Event_filter;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::setEventFilter(ConfigNodePropertyString const& value)
{
    m_Event_filter = value;
    m_Event_filterIsSet = true;
}
bool ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::eventFilterIsSet() const
{
    return m_Event_filterIsSet;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::unsetEvent_filter()
{
    m_Event_filterIsSet = false;
}
ConfigNodePropertyArray ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::getVerbs() const
{
    return m_Verbs;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::setVerbs(ConfigNodePropertyArray const& value)
{
    m_Verbs = value;
    m_VerbsIsSet = true;
}
bool ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::verbsIsSet() const
{
    return m_VerbsIsSet;
}
void ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties::unsetVerbs()
{
    m_VerbsIsSet = false;
}

}
}
}
}

