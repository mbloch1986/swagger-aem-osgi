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



#include "ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties()
{
    m_Job_topicsIsSet = false;
}

ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::~ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties()
{
}

void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Job_topicsIsSet)
    {
        val[utility::conversions::to_string_t("job.topics")] = ModelBase::toJson(m_Job_topics);
    }

    return val;
}

void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::fromJson(web::json::value& val)
{
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

void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Job_topicsIsSet)
    {
        if (m_Job_topics.get())
        {
            m_Job_topics->toMultipart(multipart, utility::conversions::to_string_t("job.topics."));
        }
    }
}

void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::getJobTopics() const
{
    return m_Job_topics;
}


void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::setJobTopics(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Job_topics = value;
    m_Job_topicsIsSet = true;
}
bool ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::jobTopicsIsSet() const
{
    return m_Job_topicsIsSet;
}

void ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties::unsetJob_topics()
{
    m_Job_topicsIsSet = false;
}

}
}
}
}

