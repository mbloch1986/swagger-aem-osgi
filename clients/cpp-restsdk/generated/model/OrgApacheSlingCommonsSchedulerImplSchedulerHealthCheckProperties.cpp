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



#include "OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties()
{
    m_Max_quartzJob_duration_acceptableIsSet = false;
}

OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::~OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties()
{
}

void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Max_quartzJob_duration_acceptableIsSet)
    {
        val[utility::conversions::to_string_t("max.quartzJob.duration.acceptable")] = ModelBase::toJson(m_Max_quartzJob_duration_acceptable);
    }

    return val;
}

void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("max.quartzJob.duration.acceptable")))
    {
        if(!val[utility::conversions::to_string_t("max.quartzJob.duration.acceptable")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("max.quartzJob.duration.acceptable")]);
            setMaxQuartzJobDurationAcceptable( newItem );
        }
    }
}

void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Max_quartzJob_duration_acceptableIsSet)
    {
        if (m_Max_quartzJob_duration_acceptable.get())
        {
            m_Max_quartzJob_duration_acceptable->toMultipart(multipart, utility::conversions::to_string_t("max.quartzJob.duration.acceptable."));
        }
    }
}

void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("max.quartzJob.duration.acceptable")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("max.quartzJob.duration.acceptable")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("max.quartzJob.duration.acceptable."));
            setMaxQuartzJobDurationAcceptable( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::getMaxQuartzJobDurationAcceptable() const
{
    return m_Max_quartzJob_duration_acceptable;
}


void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::setMaxQuartzJobDurationAcceptable(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Max_quartzJob_duration_acceptable = value;
    m_Max_quartzJob_duration_acceptableIsSet = true;
}
bool OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::maxQuartzJobDurationAcceptableIsSet() const
{
    return m_Max_quartzJob_duration_acceptableIsSet;
}

void OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties::unsetMax_quartzJob_duration_acceptable()
{
    m_Max_quartzJob_duration_acceptableIsSet = false;
}

}
}
}
}

