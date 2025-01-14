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



#include "ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties()
{
    m_Granite_maintenance_mandatoryIsSet = false;
    m_Job_topicsIsSet = false;
}

ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::~ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties()
{
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Granite_maintenance_mandatoryIsSet)
    {
        val[utility::conversions::to_string_t("granite.maintenance.mandatory")] = ModelBase::toJson(m_Granite_maintenance_mandatory);
    }
    if(m_Job_topicsIsSet)
    {
        val[utility::conversions::to_string_t("job.topics")] = ModelBase::toJson(m_Job_topics);
    }

    return val;
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("granite.maintenance.mandatory")))
    {
        if(!val[utility::conversions::to_string_t("granite.maintenance.mandatory")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("granite.maintenance.mandatory")]);
            setGraniteMaintenanceMandatory( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job.topics")))
    {
        if(!val[utility::conversions::to_string_t("job.topics")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("job.topics")]);
            setJobTopics( newItem );
        }
    }
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Granite_maintenance_mandatoryIsSet)
    {
        if (m_Granite_maintenance_mandatory.get())
        {
            m_Granite_maintenance_mandatory->toMultipart(multipart, utility::conversions::to_string_t("granite.maintenance.mandatory."));
        }
    }
    if(m_Job_topicsIsSet)
    {
        if (m_Job_topics.get())
        {
            m_Job_topics->toMultipart(multipart, utility::conversions::to_string_t("job.topics."));
        }
    }
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("granite.maintenance.mandatory")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("granite.maintenance.mandatory")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("granite.maintenance.mandatory."));
            setGraniteMaintenanceMandatory( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("job.topics")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("job.topics")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("job.topics."));
            setJobTopics( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::getGraniteMaintenanceMandatory() const
{
    return m_Granite_maintenance_mandatory;
}


void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::setGraniteMaintenanceMandatory(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Granite_maintenance_mandatory = value;
    m_Granite_maintenance_mandatoryIsSet = true;
}
bool ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::graniteMaintenanceMandatoryIsSet() const
{
    return m_Granite_maintenance_mandatoryIsSet;
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::unsetGranite_maintenance_mandatory()
{
    m_Granite_maintenance_mandatoryIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::getJobTopics() const
{
    return m_Job_topics;
}


void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::setJobTopics(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Job_topics = value;
    m_Job_topicsIsSet = true;
}
bool ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::jobTopicsIsSet() const
{
    return m_Job_topicsIsSet;
}

void ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties::unsetJob_topics()
{
    m_Job_topicsIsSet = false;
}

}
}
}
}

