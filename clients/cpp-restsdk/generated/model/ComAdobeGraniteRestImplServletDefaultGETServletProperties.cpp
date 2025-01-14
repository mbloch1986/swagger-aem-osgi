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



#include "ComAdobeGraniteRestImplServletDefaultGETServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteRestImplServletDefaultGETServletProperties::ComAdobeGraniteRestImplServletDefaultGETServletProperties()
{
    m_Default_limitIsSet = false;
    m_Use_absolute_uriIsSet = false;
}

ComAdobeGraniteRestImplServletDefaultGETServletProperties::~ComAdobeGraniteRestImplServletDefaultGETServletProperties()
{
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteRestImplServletDefaultGETServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Default_limitIsSet)
    {
        val[utility::conversions::to_string_t("default.limit")] = ModelBase::toJson(m_Default_limit);
    }
    if(m_Use_absolute_uriIsSet)
    {
        val[utility::conversions::to_string_t("use.absolute.uri")] = ModelBase::toJson(m_Use_absolute_uri);
    }

    return val;
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("default.limit")))
    {
        if(!val[utility::conversions::to_string_t("default.limit")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("default.limit")]);
            setDefaultLimit( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use.absolute.uri")))
    {
        if(!val[utility::conversions::to_string_t("use.absolute.uri")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("use.absolute.uri")]);
            setUseAbsoluteUri( newItem );
        }
    }
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Default_limitIsSet)
    {
        if (m_Default_limit.get())
        {
            m_Default_limit->toMultipart(multipart, utility::conversions::to_string_t("default.limit."));
        }
    }
    if(m_Use_absolute_uriIsSet)
    {
        if (m_Use_absolute_uri.get())
        {
            m_Use_absolute_uri->toMultipart(multipart, utility::conversions::to_string_t("use.absolute.uri."));
        }
    }
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("default.limit")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("default.limit")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("default.limit."));
            setDefaultLimit( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("use.absolute.uri")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("use.absolute.uri")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("use.absolute.uri."));
            setUseAbsoluteUri( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteRestImplServletDefaultGETServletProperties::getDefaultLimit() const
{
    return m_Default_limit;
}


void ComAdobeGraniteRestImplServletDefaultGETServletProperties::setDefaultLimit(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Default_limit = value;
    m_Default_limitIsSet = true;
}
bool ComAdobeGraniteRestImplServletDefaultGETServletProperties::defaultLimitIsSet() const
{
    return m_Default_limitIsSet;
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::unsetDefault_limit()
{
    m_Default_limitIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteRestImplServletDefaultGETServletProperties::getUseAbsoluteUri() const
{
    return m_Use_absolute_uri;
}


void ComAdobeGraniteRestImplServletDefaultGETServletProperties::setUseAbsoluteUri(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Use_absolute_uri = value;
    m_Use_absolute_uriIsSet = true;
}
bool ComAdobeGraniteRestImplServletDefaultGETServletProperties::useAbsoluteUriIsSet() const
{
    return m_Use_absolute_uriIsSet;
}

void ComAdobeGraniteRestImplServletDefaultGETServletProperties::unsetUse_absolute_uri()
{
    m_Use_absolute_uriIsSet = false;
}

}
}
}
}

