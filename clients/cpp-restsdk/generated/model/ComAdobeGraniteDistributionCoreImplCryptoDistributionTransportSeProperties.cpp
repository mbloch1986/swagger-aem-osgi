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



#include "ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties()
{
    m_NameIsSet = false;
    m_UsernameIsSet = false;
    m_EncryptedPasswordIsSet = false;
}

ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::~ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties()
{
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::toJson() const
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
    if(m_EncryptedPasswordIsSet)
    {
        val[utility::conversions::to_string_t("encryptedPassword")] = ModelBase::toJson(m_EncryptedPassword);
    }

    return val;
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("encryptedPassword")))
    {
        if(!val[utility::conversions::to_string_t("encryptedPassword")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("encryptedPassword")]);
            setEncryptedPassword( newItem );
        }
    }
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_EncryptedPasswordIsSet)
    {
        if (m_EncryptedPassword.get())
        {
            m_EncryptedPassword->toMultipart(multipart, utility::conversions::to_string_t("encryptedPassword."));
        }
    }
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("encryptedPassword")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("encryptedPassword")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("encryptedPassword."));
            setEncryptedPassword( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::getName() const
{
    return m_Name;
}


void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::nameIsSet() const
{
    return m_NameIsSet;
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::getUsername() const
{
    return m_Username;
}


void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::setUsername(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::unsetUsername()
{
    m_UsernameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::getEncryptedPassword() const
{
    return m_EncryptedPassword;
}


void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::setEncryptedPassword(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_EncryptedPassword = value;
    m_EncryptedPasswordIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::encryptedPasswordIsSet() const
{
    return m_EncryptedPasswordIsSet;
}

void ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties::unsetEncryptedPassword()
{
    m_EncryptedPasswordIsSet = false;
}

}
}
}
}

