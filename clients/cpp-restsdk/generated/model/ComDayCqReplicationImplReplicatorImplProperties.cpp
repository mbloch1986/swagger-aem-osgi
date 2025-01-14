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



#include "ComDayCqReplicationImplReplicatorImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqReplicationImplReplicatorImplProperties::ComDayCqReplicationImplReplicatorImplProperties()
{
    m_Distribute_eventsIsSet = false;
}

ComDayCqReplicationImplReplicatorImplProperties::~ComDayCqReplicationImplReplicatorImplProperties()
{
}

void ComDayCqReplicationImplReplicatorImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqReplicationImplReplicatorImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Distribute_eventsIsSet)
    {
        val[utility::conversions::to_string_t("distribute_events")] = ModelBase::toJson(m_Distribute_events);
    }

    return val;
}

void ComDayCqReplicationImplReplicatorImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("distribute_events")))
    {
        if(!val[utility::conversions::to_string_t("distribute_events")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("distribute_events")]);
            setDistributeEvents( newItem );
        }
    }
}

void ComDayCqReplicationImplReplicatorImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Distribute_eventsIsSet)
    {
        if (m_Distribute_events.get())
        {
            m_Distribute_events->toMultipart(multipart, utility::conversions::to_string_t("distribute_events."));
        }
    }
}

void ComDayCqReplicationImplReplicatorImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("distribute_events")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("distribute_events")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("distribute_events."));
            setDistributeEvents( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqReplicationImplReplicatorImplProperties::getDistributeEvents() const
{
    return m_Distribute_events;
}


void ComDayCqReplicationImplReplicatorImplProperties::setDistributeEvents(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Distribute_events = value;
    m_Distribute_eventsIsSet = true;
}
bool ComDayCqReplicationImplReplicatorImplProperties::distributeEventsIsSet() const
{
    return m_Distribute_eventsIsSet;
}

void ComDayCqReplicationImplReplicatorImplProperties::unsetDistribute_events()
{
    m_Distribute_eventsIsSet = false;
}

}
}
}
}

