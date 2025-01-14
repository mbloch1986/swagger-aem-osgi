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


#include "ComAdobeCqSocialCalendarServletsTimeZoneServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
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

nlohmann::json ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Timezones_expirytimeIsSet)
    {
        val["timezones.expirytime"] = ModelBase::toJson(m_Timezones_expirytime);
    }
    

    return val;
}

void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("timezones.expirytime") != val.end())
    {
        if(!val["timezones.expirytime"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["timezones.expirytime"]);
            setTimezonesExpirytime( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::getTimezonesExpirytime() const
{
    return m_Timezones_expirytime;
}
void ComAdobeCqSocialCalendarServletsTimeZoneServletProperties::setTimezonesExpirytime(ConfigNodePropertyInteger const& value)
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

