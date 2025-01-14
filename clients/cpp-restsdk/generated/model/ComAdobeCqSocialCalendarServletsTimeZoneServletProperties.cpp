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



#include "ComAdobeCqSocialCalendarServletsTimeZoneServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::ComAdobeCqSocialCalendarServletsTimeZoneServletProperties()
{
    m_Timezones_expirytimeIsSet = false;
}

ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::~ComAdobeCqSocialCalendarServletsTimeZoneServletProperties()
{
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Timezones_expirytimeIsSet)
    {
        val[utility::conversions::to_string_t("timezones.expirytime")] = ModelBase::toJson(m_Timezones_expirytime);
    }

    return val;
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("timezones.expirytime")))
    {
        if(!val[utility::conversions::to_string_t("timezones.expirytime")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("timezones.expirytime")]);
            setTimezonesExpirytime( newItem );
        }
    }
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Timezones_expirytimeIsSet)
    {
        if (m_Timezones_expirytime.get())
        {
            m_Timezones_expirytime->toMultipart(multipart, utility::conversions::to_string_t("timezones.expirytime."));
        }
    }
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("timezones.expirytime")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("timezones.expirytime")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("timezones.expirytime."));
            setTimezonesExpirytime( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::getTimezonesExpirytime() const
{
    return m_Timezones_expirytime;
}


void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::setTimezonesExpirytime(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Timezones_expirytime = value;
    m_Timezones_expirytimeIsSet = true;
}
bool ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::timezonesExpirytimeIsSet() const
{
    return m_Timezones_expirytimeIsSet;
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::unsetTimezones_expirytime()
{
    m_Timezones_expirytimeIsSet = false;
}

}
}
}
}

