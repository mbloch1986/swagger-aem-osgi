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



#include "ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties()
{
    m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet = false;
}

ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::~ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties()
{
}

void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet)
    {
        val[utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")] = ModelBase::toJson(m_Cq_dam_s7dam_damchangeeventlistener_enabled);
    }

    return val;
}

void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")))
    {
        if(!val[utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")]);
            setCqDamS7damDamchangeeventlistenerEnabled( newItem );
        }
    }
}

void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet)
    {
        if (m_Cq_dam_s7dam_damchangeeventlistener_enabled.get())
        {
            m_Cq_dam_s7dam_damchangeeventlistener_enabled->toMultipart(multipart, utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled."));
        }
    }
}

void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.dam.s7dam.damchangeeventlistener.enabled."));
            setCqDamS7damDamchangeeventlistenerEnabled( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::getCqDamS7damDamchangeeventlistenerEnabled() const
{
    return m_Cq_dam_s7dam_damchangeeventlistener_enabled;
}


void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::setCqDamS7damDamchangeeventlistenerEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cq_dam_s7dam_damchangeeventlistener_enabled = value;
    m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet = true;
}
bool ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::cqDamS7damDamchangeeventlistenerEnabledIsSet() const
{
    return m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet;
}

void ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties::unsetCq_dam_s7dam_damchangeeventlistener_enabled()
{
    m_Cq_dam_s7dam_damchangeeventlistener_enabledIsSet = false;
}

}
}
}
}

