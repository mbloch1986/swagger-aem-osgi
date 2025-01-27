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



#include "ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties()
{
    m_Oauth_provider_idIsSet = false;
}

ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::~ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties()
{
}

void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Oauth_provider_idIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.id")] = ModelBase::toJson(m_Oauth_provider_id);
    }

    return val;
}

void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.id")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.id")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.id")]);
            setOauthProviderId( newItem );
        }
    }
}

void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Oauth_provider_idIsSet)
    {
        if (m_Oauth_provider_id.get())
        {
            m_Oauth_provider_id->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.id."));
        }
    }
}

void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.id")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.id")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.id."));
            setOauthProviderId( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::getOauthProviderId() const
{
    return m_Oauth_provider_id;
}


void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_id = value;
    m_Oauth_provider_idIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::oauthProviderIdIsSet() const
{
    return m_Oauth_provider_idIsSet;
}

void ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties::unsetOauth_provider_id()
{
    m_Oauth_provider_idIsSet = false;
}

}
}
}
}

