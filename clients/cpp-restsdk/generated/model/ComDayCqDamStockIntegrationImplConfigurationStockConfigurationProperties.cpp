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



#include "ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties()
{
    m_NameIsSet = false;
    m_LocaleIsSet = false;
    m_ImsConfigIsSet = false;
}

ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::~ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties()
{
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_LocaleIsSet)
    {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_Locale);
    }
    if(m_ImsConfigIsSet)
    {
        val[utility::conversions::to_string_t("imsConfig")] = ModelBase::toJson(m_ImsConfig);
    }

    return val;
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        if(!val[utility::conversions::to_string_t("name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("name")]);
            setName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locale")))
    {
        if(!val[utility::conversions::to_string_t("locale")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("locale")]);
            setLocale( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imsConfig")))
    {
        if(!val[utility::conversions::to_string_t("imsConfig")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("imsConfig")]);
            setImsConfig( newItem );
        }
    }
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        if (m_Name.get())
        {
            m_Name->toMultipart(multipart, utility::conversions::to_string_t("name."));
        }
    }
    if(m_LocaleIsSet)
    {
        if (m_Locale.get())
        {
            m_Locale->toMultipart(multipart, utility::conversions::to_string_t("locale."));
        }
    }
    if(m_ImsConfigIsSet)
    {
        if (m_ImsConfig.get())
        {
            m_ImsConfig->toMultipart(multipart, utility::conversions::to_string_t("imsConfig."));
        }
    }
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("name")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("name."));
            setName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("locale")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("locale")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("locale."));
            setLocale( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("imsConfig")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("imsConfig")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("imsConfig."));
            setImsConfig( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::getName() const
{
    return m_Name;
}


void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::nameIsSet() const
{
    return m_NameIsSet;
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::getLocale() const
{
    return m_Locale;
}


void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::setLocale(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Locale = value;
    m_LocaleIsSet = true;
}
bool ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::localeIsSet() const
{
    return m_LocaleIsSet;
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::unsetLocale()
{
    m_LocaleIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::getImsConfig() const
{
    return m_ImsConfig;
}


void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::setImsConfig(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ImsConfig = value;
    m_ImsConfigIsSet = true;
}
bool ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::imsConfigIsSet() const
{
    return m_ImsConfigIsSet;
}

void ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties::unsetImsConfig()
{
    m_ImsConfigIsSet = false;
}

}
}
}
}

