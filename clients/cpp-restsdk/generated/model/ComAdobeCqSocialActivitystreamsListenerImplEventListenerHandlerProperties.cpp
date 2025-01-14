/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
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

web::json::value ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Event_topicsIsSet)
    {
        val[utility::conversions::to_string_t("event.topics")] = ModelBase::toJson(m_Event_topics);
    }
    if(m_Event_filterIsSet)
    {
        val[utility::conversions::to_string_t("event.filter")] = ModelBase::toJson(m_Event_filter);
    }

    return val;
}

void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("event.topics")))
    {
        if(!val[utility::conversions::to_string_t("event.topics")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("event.topics")]);
            setEventTopics( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event.filter")))
    {
        if(!val[utility::conversions::to_string_t("event.filter")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("event.filter")]);
            setEventFilter( newItem );
        }
    }
}

void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Event_topicsIsSet)
    {
        if (m_Event_topics.get())
        {
            m_Event_topics->toMultipart(multipart, utility::conversions::to_string_t("event.topics."));
        }
    }
    if(m_Event_filterIsSet)
    {
        if (m_Event_filter.get())
        {
            m_Event_filter->toMultipart(multipart, utility::conversions::to_string_t("event.filter."));
        }
    }
}

void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("event.topics")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("event.topics")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("event.topics."));
            setEventTopics( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("event.filter")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("event.filter")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("event.filter."));
            setEventFilter( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::getEventTopics() const
{
    return m_Event_topics;
}


void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::setEventTopics(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::getEventFilter() const
{
    return m_Event_filter;
}


void ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties::setEventFilter(std::shared_ptr<ConfigNodePropertyString> value)
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

