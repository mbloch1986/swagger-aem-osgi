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


#include "ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties()
{
    m_Event_topicsIsSet = false;
    m_Event_filterIsSet = false;
    
}

ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::~ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties()
{
}

void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::toJson() const
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
    

    return val;
}

void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::fromJson(nlohmann::json& val)
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
    
}


ConfigNodePropertyString ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::getEventTopics() const
{
    return m_Event_topics;
}
void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::setEventTopics(ConfigNodePropertyString const& value)
{
    m_Event_topics = value;
    m_Event_topicsIsSet = true;
}
bool ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::eventTopicsIsSet() const
{
    return m_Event_topicsIsSet;
}
void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::unsetEvent_topics()
{
    m_Event_topicsIsSet = false;
}
ConfigNodePropertyString ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::getEventFilter() const
{
    return m_Event_filter;
}
void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::setEventFilter(ConfigNodePropertyString const& value)
{
    m_Event_filter = value;
    m_Event_filterIsSet = true;
}
bool ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::eventFilterIsSet() const
{
    return m_Event_filterIsSet;
}
void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::unsetEvent_filter()
{
    m_Event_filterIsSet = false;
}

}
}
}
}
