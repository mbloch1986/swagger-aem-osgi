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



#include "ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties()
{
    m_TempStorageConfigIsSet = false;
}

ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::~ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties()
{
}

void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TempStorageConfigIsSet)
    {
        val[utility::conversions::to_string_t("tempStorageConfig")] = ModelBase::toJson(m_TempStorageConfig);
    }

    return val;
}

void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("tempStorageConfig")))
    {
        if(!val[utility::conversions::to_string_t("tempStorageConfig")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("tempStorageConfig")]);
            setTempStorageConfig( newItem );
        }
    }
}

void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TempStorageConfigIsSet)
    {
        if (m_TempStorageConfig.get())
        {
            m_TempStorageConfig->toMultipart(multipart, utility::conversions::to_string_t("tempStorageConfig."));
        }
    }
}

void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("tempStorageConfig")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("tempStorageConfig")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("tempStorageConfig."));
            setTempStorageConfig( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::getTempStorageConfig() const
{
    return m_TempStorageConfig;
}


void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::setTempStorageConfig(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_TempStorageConfig = value;
    m_TempStorageConfigIsSet = true;
}
bool ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::tempStorageConfigIsSet() const
{
    return m_TempStorageConfigIsSet;
}

void ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties::unsetTempStorageConfig()
{
    m_TempStorageConfigIsSet = false;
}

}
}
}
}
