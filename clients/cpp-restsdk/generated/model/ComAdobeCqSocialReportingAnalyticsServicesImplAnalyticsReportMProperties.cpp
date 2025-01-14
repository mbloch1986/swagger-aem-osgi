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



#include "ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties()
{
    m_Report_fetch_delayIsSet = false;
}

ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::~ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties()
{
}

void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Report_fetch_delayIsSet)
    {
        val[utility::conversions::to_string_t("report.fetch.delay")] = ModelBase::toJson(m_Report_fetch_delay);
    }

    return val;
}

void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("report.fetch.delay")))
    {
        if(!val[utility::conversions::to_string_t("report.fetch.delay")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("report.fetch.delay")]);
            setReportFetchDelay( newItem );
        }
    }
}

void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Report_fetch_delayIsSet)
    {
        if (m_Report_fetch_delay.get())
        {
            m_Report_fetch_delay->toMultipart(multipart, utility::conversions::to_string_t("report.fetch.delay."));
        }
    }
}

void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("report.fetch.delay")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("report.fetch.delay")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("report.fetch.delay."));
            setReportFetchDelay( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::getReportFetchDelay() const
{
    return m_Report_fetch_delay;
}


void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::setReportFetchDelay(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Report_fetch_delay = value;
    m_Report_fetch_delayIsSet = true;
}
bool ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::reportFetchDelayIsSet() const
{
    return m_Report_fetch_delayIsSet;
}

void ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportMProperties::unsetReport_fetch_delay()
{
    m_Report_fetch_delayIsSet = false;
}

}
}
}
}

