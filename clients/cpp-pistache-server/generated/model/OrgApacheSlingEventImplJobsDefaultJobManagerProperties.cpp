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


#include "OrgApacheSlingEventImplJobsDefaultJobManagerProperties.h"

namespace org {
namespace openapitools {
namespace server {
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

nlohmann::json OrgApacheSlingEventImplJobsDefaultJobManagerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Queue_priorityIsSet)
    {
        val["queue.priority"] = ModelBase::toJson(m_Queue_priority);
    }
    if(m_Queue_retriesIsSet)
    {
        val["queue.retries"] = ModelBase::toJson(m_Queue_retries);
    }
    if(m_Queue_retrydelayIsSet)
    {
        val["queue.retrydelay"] = ModelBase::toJson(m_Queue_retrydelay);
    }
    if(m_Queue_maxparallelIsSet)
    {
        val["queue.maxparallel"] = ModelBase::toJson(m_Queue_maxparallel);
    }
    

    return val;
}

void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("queue.priority") != val.end())
    {
        if(!val["queue.priority"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["queue.priority"]);
            setQueuePriority( newItem );
        }
        
    }
    if(val.find("queue.retries") != val.end())
    {
        if(!val["queue.retries"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["queue.retries"]);
            setQueueRetries( newItem );
        }
        
    }
    if(val.find("queue.retrydelay") != val.end())
    {
        if(!val["queue.retrydelay"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["queue.retrydelay"]);
            setQueueRetrydelay( newItem );
        }
        
    }
    if(val.find("queue.maxparallel") != val.end())
    {
        if(!val["queue.maxparallel"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["queue.maxparallel"]);
            setQueueMaxparallel( newItem );
        }
        
    }
    
}


ConfigNodePropertyDropDown OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueuePriority() const
{
    return m_Queue_priority;
}
void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueuePriority(ConfigNodePropertyDropDown const& value)
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
ConfigNodePropertyInteger OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueRetries() const
{
    return m_Queue_retries;
}
void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueRetries(ConfigNodePropertyInteger const& value)
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
ConfigNodePropertyInteger OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueRetrydelay() const
{
    return m_Queue_retrydelay;
}
void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueRetrydelay(ConfigNodePropertyInteger const& value)
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
ConfigNodePropertyInteger OrgApacheSlingEventImplJobsDefaultJobManagerProperties::getQueueMaxparallel() const
{
    return m_Queue_maxparallel;
}
void OrgApacheSlingEventImplJobsDefaultJobManagerProperties::setQueueMaxparallel(ConfigNodePropertyInteger const& value)
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
