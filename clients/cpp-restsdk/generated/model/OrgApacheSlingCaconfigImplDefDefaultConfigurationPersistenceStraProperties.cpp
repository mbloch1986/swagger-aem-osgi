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



#include "OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties()
{
    m_EnabledIsSet = false;
}

OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::~OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties()
{
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(m_Enabled);
    }

    return val;
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("enabled")))
    {
        if(!val[utility::conversions::to_string_t("enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("enabled")]);
            setEnabled( newItem );
        }
    }
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EnabledIsSet)
    {
        if (m_Enabled.get())
        {
            m_Enabled->toMultipart(multipart, utility::conversions::to_string_t("enabled."));
        }
    }
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("enabled."));
            setEnabled( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::getEnabled() const
{
    return m_Enabled;
}


void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

}
}
}
}

