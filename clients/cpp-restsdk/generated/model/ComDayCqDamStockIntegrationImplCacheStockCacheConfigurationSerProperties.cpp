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



#include "ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties()
{
    m_GetCacheExpirationUnitIsSet = false;
    m_GetCacheExpirationValueIsSet = false;
}

ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::~ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties()
{
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_GetCacheExpirationUnitIsSet)
    {
        val[utility::conversions::to_string_t("getCacheExpirationUnit")] = ModelBase::toJson(m_GetCacheExpirationUnit);
    }
    if(m_GetCacheExpirationValueIsSet)
    {
        val[utility::conversions::to_string_t("getCacheExpirationValue")] = ModelBase::toJson(m_GetCacheExpirationValue);
    }

    return val;
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("getCacheExpirationUnit")))
    {
        if(!val[utility::conversions::to_string_t("getCacheExpirationUnit")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("getCacheExpirationUnit")]);
            setGetCacheExpirationUnit( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("getCacheExpirationValue")))
    {
        if(!val[utility::conversions::to_string_t("getCacheExpirationValue")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("getCacheExpirationValue")]);
            setGetCacheExpirationValue( newItem );
        }
    }
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_GetCacheExpirationUnitIsSet)
    {
        if (m_GetCacheExpirationUnit.get())
        {
            m_GetCacheExpirationUnit->toMultipart(multipart, utility::conversions::to_string_t("getCacheExpirationUnit."));
        }
    }
    if(m_GetCacheExpirationValueIsSet)
    {
        if (m_GetCacheExpirationValue.get())
        {
            m_GetCacheExpirationValue->toMultipart(multipart, utility::conversions::to_string_t("getCacheExpirationValue."));
        }
    }
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("getCacheExpirationUnit")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("getCacheExpirationUnit")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("getCacheExpirationUnit."));
            setGetCacheExpirationUnit( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("getCacheExpirationValue")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("getCacheExpirationValue")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("getCacheExpirationValue."));
            setGetCacheExpirationValue( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getGetCacheExpirationUnit() const
{
    return m_GetCacheExpirationUnit;
}


void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::setGetCacheExpirationUnit(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_GetCacheExpirationUnit = value;
    m_GetCacheExpirationUnitIsSet = true;
}
bool ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getCacheExpirationUnitIsSet() const
{
    return m_GetCacheExpirationUnitIsSet;
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::unsetGetCacheExpirationUnit()
{
    m_GetCacheExpirationUnitIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getGetCacheExpirationValue() const
{
    return m_GetCacheExpirationValue;
}


void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::setGetCacheExpirationValue(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_GetCacheExpirationValue = value;
    m_GetCacheExpirationValueIsSet = true;
}
bool ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getCacheExpirationValueIsSet() const
{
    return m_GetCacheExpirationValueIsSet;
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::unsetGetCacheExpirationValue()
{
    m_GetCacheExpirationValueIsSet = false;
}

}
}
}
}
