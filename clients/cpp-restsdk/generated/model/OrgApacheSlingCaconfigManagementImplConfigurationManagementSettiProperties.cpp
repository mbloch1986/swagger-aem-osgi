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



#include "OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties()
{
    m_IgnorePropertyNameRegexIsSet = false;
    m_ConfigCollectionPropertiesResourceNamesIsSet = false;
}

OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::~OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties()
{
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IgnorePropertyNameRegexIsSet)
    {
        val[utility::conversions::to_string_t("ignorePropertyNameRegex")] = ModelBase::toJson(m_IgnorePropertyNameRegex);
    }
    if(m_ConfigCollectionPropertiesResourceNamesIsSet)
    {
        val[utility::conversions::to_string_t("configCollectionPropertiesResourceNames")] = ModelBase::toJson(m_ConfigCollectionPropertiesResourceNames);
    }

    return val;
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ignorePropertyNameRegex")))
    {
        if(!val[utility::conversions::to_string_t("ignorePropertyNameRegex")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("ignorePropertyNameRegex")]);
            setIgnorePropertyNameRegex( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configCollectionPropertiesResourceNames")))
    {
        if(!val[utility::conversions::to_string_t("configCollectionPropertiesResourceNames")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("configCollectionPropertiesResourceNames")]);
            setConfigCollectionPropertiesResourceNames( newItem );
        }
    }
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IgnorePropertyNameRegexIsSet)
    {
        if (m_IgnorePropertyNameRegex.get())
        {
            m_IgnorePropertyNameRegex->toMultipart(multipart, utility::conversions::to_string_t("ignorePropertyNameRegex."));
        }
    }
    if(m_ConfigCollectionPropertiesResourceNamesIsSet)
    {
        if (m_ConfigCollectionPropertiesResourceNames.get())
        {
            m_ConfigCollectionPropertiesResourceNames->toMultipart(multipart, utility::conversions::to_string_t("configCollectionPropertiesResourceNames."));
        }
    }
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ignorePropertyNameRegex")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ignorePropertyNameRegex")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ignorePropertyNameRegex."));
            setIgnorePropertyNameRegex( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("configCollectionPropertiesResourceNames")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("configCollectionPropertiesResourceNames")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("configCollectionPropertiesResourceNames."));
            setConfigCollectionPropertiesResourceNames( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::getIgnorePropertyNameRegex() const
{
    return m_IgnorePropertyNameRegex;
}


void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::setIgnorePropertyNameRegex(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_IgnorePropertyNameRegex = value;
    m_IgnorePropertyNameRegexIsSet = true;
}
bool OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::ignorePropertyNameRegexIsSet() const
{
    return m_IgnorePropertyNameRegexIsSet;
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::unsetIgnorePropertyNameRegex()
{
    m_IgnorePropertyNameRegexIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::getConfigCollectionPropertiesResourceNames() const
{
    return m_ConfigCollectionPropertiesResourceNames;
}


void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::setConfigCollectionPropertiesResourceNames(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_ConfigCollectionPropertiesResourceNames = value;
    m_ConfigCollectionPropertiesResourceNamesIsSet = true;
}
bool OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::configCollectionPropertiesResourceNamesIsSet() const
{
    return m_ConfigCollectionPropertiesResourceNamesIsSet;
}

void OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties::unsetConfigCollectionPropertiesResourceNames()
{
    m_ConfigCollectionPropertiesResourceNamesIsSet = false;
}

}
}
}
}

