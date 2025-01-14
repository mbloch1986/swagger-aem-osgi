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



#include "OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties()
{
    m_HomePathIsSet = false;
}

OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::~OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties()
{
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_HomePathIsSet)
    {
        val[utility::conversions::to_string_t("homePath")] = ModelBase::toJson(m_HomePath);
    }

    return val;
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("homePath")))
    {
        if(!val[utility::conversions::to_string_t("homePath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("homePath")]);
            setHomePath( newItem );
        }
    }
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_HomePathIsSet)
    {
        if (m_HomePath.get())
        {
            m_HomePath->toMultipart(multipart, utility::conversions::to_string_t("homePath."));
        }
    }
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("homePath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("homePath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("homePath."));
            setHomePath( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::getHomePath() const
{
    return m_HomePath;
}


void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::setHomePath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_HomePath = value;
    m_HomePathIsSet = true;
}
bool OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::homePathIsSet() const
{
    return m_HomePathIsSet;
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::unsetHomePath()
{
    m_HomePathIsSet = false;
}

}
}
}
}

