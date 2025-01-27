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



#include "OrgApacheSlingEventImplJobsDefaultJobManagerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingEventImplJobsDefaultJobManagerProperties::OrgApacheSlingEventImplJobsDefaultJobManagerProperties()
{
    m_Queue_priorityIsSet = false;
    m_Queue_retriesIsSet = false;
    m_Queue_retrydelayIsSet = false;
    m_Queue_maxparallelIsSet = false;
}

OrgApacheSlingEventImplJobsDefaultJobManagerProperties::~OrgApacheSlingEventImplJobsDefaultJobManagerProperties()
{
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingEventImplJobsDefaultJobManagerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Queue_priorityIsSet)
    {
        val[utility::conversions::to_string_t("queue.priority")] = ModelBase::toJson(m_Queue_priority);
    }
    if(m_Queue_retriesIsSet)
    {
        val[utility::conversions::to_string_t("queue.retries")] = ModelBase::toJson(m_Queue_retries);
    }
    if(m_Queue_retrydelayIsSet)
    {
        val[utility::conversions::to_string_t("queue.retrydelay")] = ModelBase::toJson(m_Queue_retrydelay);
    }
    if(m_Queue_maxparallelIsSet)
    {
        val[utility::conversions::to_string_t("queue.maxparallel")] = ModelBase::toJson(m_Queue_maxparallel);
    }

    return val;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("queue.priority")))
    {
        if(!val[utility::conversions::to_string_t("queue.priority")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("queue.priority")]);
            setQueuePriority( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue.retries")))
    {
        if(!val[utility::conversions::to_string_t("queue.retries")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("queue.retries")]);
            setQueueRetries( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue.retrydelay")))
    {
        if(!val[utility::conversions::to_string_t("queue.retrydelay")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("queue.retrydelay")]);
            setQueueRetrydelay( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue.maxparallel")))
    {
        if(!val[utility::conversions::to_string_t("queue.maxparallel")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("queue.maxparallel")]);
            setQueueMaxparallel( newItem );
        }
    }
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Queue_priorityIsSet)
    {
        if (m_Queue_priority.get())
        {
            m_Queue_priority->toMultipart(multipart, utility::conversions::to_string_t("queue.priority."));
        }
    }
    if(m_Queue_retriesIsSet)
    {
        if (m_Queue_retries.get())
        {
            m_Queue_retries->toMultipart(multipart, utility::conversions::to_string_t("queue.retries."));
        }
    }
    if(m_Queue_retrydelayIsSet)
    {
        if (m_Queue_retrydelay.get())
        {
            m_Queue_retrydelay->toMultipart(multipart, utility::conversions::to_string_t("queue.retrydelay."));
        }
    }
    if(m_Queue_maxparallelIsSet)
    {
        if (m_Queue_maxparallel.get())
        {
            m_Queue_maxparallel->toMultipart(multipart, utility::conversions::to_string_t("queue.maxparallel."));
        }
    }
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("queue.priority")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("queue.priority")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("queue.priority."));
            setQueuePriority( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queue.retries")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("queue.retries")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("queue.retries."));
            setQueueRetries( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queue.retrydelay")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("queue.retrydelay")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("queue.retrydelay."));
            setQueueRetrydelay( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queue.maxparallel")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("queue.maxparallel")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("queue.maxparallel."));
            setQueueMaxparallel( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueuePriority() const
{
    return m_Queue_priority;
}


void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueuePriority(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Queue_priority = value;
    m_Queue_priorityIsSet = true;
}
bool OrgApacheSlingEventImplJobsDefaultJobManagerProperties::queuePriorityIsSet() const
{
    return m_Queue_priorityIsSet;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::unsetQueue_priority()
{
    m_Queue_priorityIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueRetries() const
{
    return m_Queue_retries;
}


void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueRetries(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Queue_retries = value;
    m_Queue_retriesIsSet = true;
}
bool OrgApacheSlingEventImplJobsDefaultJobManagerProperties::queueRetriesIsSet() const
{
    return m_Queue_retriesIsSet;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::unsetQueue_retries()
{
    m_Queue_retriesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueRetrydelay() const
{
    return m_Queue_retrydelay;
}


void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueRetrydelay(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Queue_retrydelay = value;
    m_Queue_retrydelayIsSet = true;
}
bool OrgApacheSlingEventImplJobsDefaultJobManagerProperties::queueRetrydelayIsSet() const
{
    return m_Queue_retrydelayIsSet;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::unsetQueue_retrydelay()
{
    m_Queue_retrydelayIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueMaxparallel() const
{
    return m_Queue_maxparallel;
}


void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueMaxparallel(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Queue_maxparallel = value;
    m_Queue_maxparallelIsSet = true;
}
bool OrgApacheSlingEventImplJobsDefaultJobManagerProperties::queueMaxparallelIsSet() const
{
    return m_Queue_maxparallelIsSet;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::unsetQueue_maxparallel()
{
    m_Queue_maxparallelIsSet = false;
}

}
}
}
}

