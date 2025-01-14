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



#include "OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties()
{
    m_NameIsSet = false;
    m_UsernameIsSet = false;
    m_PasswordIsSet = false;
}

OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::~OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties()
{
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(m_Password);
    }

    return val;
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        if(!val[utility::conversions::to_string_t("username")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("username")]);
            setUsername( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password")))
    {
        if(!val[utility::conversions::to_string_t("password")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("password")]);
            setPassword( newItem );
        }
    }
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UsernameIsSet)
    {
        if (m_Username.get())
        {
            m_Username->toMultipart(multipart, utility::conversions::to_string_t("username."));
        }
    }
    if(m_PasswordIsSet)
    {
        if (m_Password.get())
        {
            m_Password->toMultipart(multipart, utility::conversions::to_string_t("password."));
        }
    }
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("username")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("username."));
            setUsername( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("password")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("password")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("password."));
            setPassword( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getName() const
{
    return m_Name;
}


void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::nameIsSet() const
{
    return m_NameIsSet;
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getUsername() const
{
    return m_Username;
}


void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setUsername(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::unsetUsername()
{
    m_UsernameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getPassword() const
{
    return m_Password;
}


void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setPassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void OrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::unsetPassword()
{
    m_PasswordIsSet = false;
}

}
}
}
}

