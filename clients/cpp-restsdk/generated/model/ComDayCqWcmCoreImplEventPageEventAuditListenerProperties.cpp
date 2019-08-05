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



#include "ComDayCqWcmCoreImplEventPageEventAuditListenerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::ComDayCqWcmCoreImplEventPageEventAuditListenerProperties()
{
    m_ConfiguredIsSet = false;
}

ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::~ComDayCqWcmCoreImplEventPageEventAuditListenerProperties()
{
}

void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ConfiguredIsSet)
    {
        val[utility::conversions::to_string_t("configured")] = ModelBase::toJson(m_Configured);
    }

    return val;
}

void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("configured")))
    {
        if(!val[utility::conversions::to_string_t("configured")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("configured")]);
            setConfigured( newItem );
        }
    }
}

void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ConfiguredIsSet)
    {
        if (m_Configured.get())
        {
            m_Configured->toMultipart(multipart, utility::conversions::to_string_t("configured."));
        }
    }
}

void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("configured")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("configured")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("configured."));
            setConfigured( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::getConfigured() const
{
    return m_Configured;
}


void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::setConfigured(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Configured = value;
    m_ConfiguredIsSet = true;
}
bool ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::configuredIsSet() const
{
    return m_ConfiguredIsSet;
}

void ComDayCqWcmCoreImplEventPageEventAuditListenerProperties::unsetConfigured()
{
    m_ConfiguredIsSet = false;
}

}
}
}
}
