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



#include "ComAdobeGraniteAuthImsImplIMSProviderImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteAuthImsImplIMSProviderImplProperties::ComAdobeGraniteAuthImsImplIMSProviderImplProperties()
{
    m_Oauth_provider_idIsSet = false;
    m_Oauth_provider_ims_authorization_urlIsSet = false;
    m_Oauth_provider_ims_token_urlIsSet = false;
    m_Oauth_provider_ims_profile_urlIsSet = false;
    m_Oauth_provider_ims_extended_details_urlsIsSet = false;
    m_Oauth_provider_ims_validate_token_urlIsSet = false;
    m_Oauth_provider_ims_session_propertyIsSet = false;
    m_Oauth_provider_ims_service_token_client_idIsSet = false;
    m_Oauth_provider_ims_service_token_client_secretIsSet = false;
    m_Oauth_provider_ims_service_tokenIsSet = false;
    m_Ims_org_refIsSet = false;
    m_Ims_group_mappingIsSet = false;
    m_Oauth_provider_ims_only_license_groupIsSet = false;
}

ComAdobeGraniteAuthImsImplIMSProviderImplProperties::~ComAdobeGraniteAuthImsImplIMSProviderImplProperties()
{
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteAuthImsImplIMSProviderImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Oauth_provider_idIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.id")] = ModelBase::toJson(m_Oauth_provider_id);
    }
    if(m_Oauth_provider_ims_authorization_urlIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.authorization.url")] = ModelBase::toJson(m_Oauth_provider_ims_authorization_url);
    }
    if(m_Oauth_provider_ims_token_urlIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.token.url")] = ModelBase::toJson(m_Oauth_provider_ims_token_url);
    }
    if(m_Oauth_provider_ims_profile_urlIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.profile.url")] = ModelBase::toJson(m_Oauth_provider_ims_profile_url);
    }
    if(m_Oauth_provider_ims_extended_details_urlsIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")] = ModelBase::toJson(m_Oauth_provider_ims_extended_details_urls);
    }
    if(m_Oauth_provider_ims_validate_token_urlIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")] = ModelBase::toJson(m_Oauth_provider_ims_validate_token_url);
    }
    if(m_Oauth_provider_ims_session_propertyIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.session.property")] = ModelBase::toJson(m_Oauth_provider_ims_session_property);
    }
    if(m_Oauth_provider_ims_service_token_client_idIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")] = ModelBase::toJson(m_Oauth_provider_ims_service_token_client_id);
    }
    if(m_Oauth_provider_ims_service_token_client_secretIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")] = ModelBase::toJson(m_Oauth_provider_ims_service_token_client_secret);
    }
    if(m_Oauth_provider_ims_service_tokenIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.service.token")] = ModelBase::toJson(m_Oauth_provider_ims_service_token);
    }
    if(m_Ims_org_refIsSet)
    {
        val[utility::conversions::to_string_t("ims.org.ref")] = ModelBase::toJson(m_Ims_org_ref);
    }
    if(m_Ims_group_mappingIsSet)
    {
        val[utility::conversions::to_string_t("ims.group.mapping")] = ModelBase::toJson(m_Ims_group_mapping);
    }
    if(m_Oauth_provider_ims_only_license_groupIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.ims.only.license.group")] = ModelBase::toJson(m_Oauth_provider_ims_only_license_group);
    }

    return val;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.authorization.url")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.authorization.url")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.authorization.url")]);
            setOauthProviderImsAuthorizationUrl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.token.url")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.token.url")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.token.url")]);
            setOauthProviderImsTokenUrl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.profile.url")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.profile.url")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.profile.url")]);
            setOauthProviderImsProfileUrl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")]);
            setOauthProviderImsExtendedDetailsUrls( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")]);
            setOauthProviderImsValidateTokenUrl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.session.property")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.session.property")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.session.property")]);
            setOauthProviderImsSessionProperty( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")]);
            setOauthProviderImsServiceTokenClientId( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")]);
            setOauthProviderImsServiceTokenClientSecret( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.service.token")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.service.token")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.service.token")]);
            setOauthProviderImsServiceToken( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ims.org.ref")))
    {
        if(!val[utility::conversions::to_string_t("ims.org.ref")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("ims.org.ref")]);
            setImsOrgRef( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ims.group.mapping")))
    {
        if(!val[utility::conversions::to_string_t("ims.group.mapping")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("ims.group.mapping")]);
            setImsGroupMapping( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth.provider.ims.only.license.group")))
    {
        if(!val[utility::conversions::to_string_t("oauth.provider.ims.only.license.group")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.provider.ims.only.license.group")]);
            setOauthProviderImsOnlyLicenseGroup( newItem );
        }
    }
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Oauth_provider_ims_authorization_urlIsSet)
    {
        if (m_Oauth_provider_ims_authorization_url.get())
        {
            m_Oauth_provider_ims_authorization_url->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.authorization.url."));
        }
    }
    if(m_Oauth_provider_ims_token_urlIsSet)
    {
        if (m_Oauth_provider_ims_token_url.get())
        {
            m_Oauth_provider_ims_token_url->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.token.url."));
        }
    }
    if(m_Oauth_provider_ims_profile_urlIsSet)
    {
        if (m_Oauth_provider_ims_profile_url.get())
        {
            m_Oauth_provider_ims_profile_url->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.profile.url."));
        }
    }
    if(m_Oauth_provider_ims_extended_details_urlsIsSet)
    {
        if (m_Oauth_provider_ims_extended_details_urls.get())
        {
            m_Oauth_provider_ims_extended_details_urls->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls."));
        }
    }
    if(m_Oauth_provider_ims_validate_token_urlIsSet)
    {
        if (m_Oauth_provider_ims_validate_token_url.get())
        {
            m_Oauth_provider_ims_validate_token_url->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.validate.token.url."));
        }
    }
    if(m_Oauth_provider_ims_session_propertyIsSet)
    {
        if (m_Oauth_provider_ims_session_property.get())
        {
            m_Oauth_provider_ims_session_property->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.session.property."));
        }
    }
    if(m_Oauth_provider_ims_service_token_client_idIsSet)
    {
        if (m_Oauth_provider_ims_service_token_client_id.get())
        {
            m_Oauth_provider_ims_service_token_client_id->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id."));
        }
    }
    if(m_Oauth_provider_ims_service_token_client_secretIsSet)
    {
        if (m_Oauth_provider_ims_service_token_client_secret.get())
        {
            m_Oauth_provider_ims_service_token_client_secret->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret."));
        }
    }
    if(m_Oauth_provider_ims_service_tokenIsSet)
    {
        if (m_Oauth_provider_ims_service_token.get())
        {
            m_Oauth_provider_ims_service_token->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token."));
        }
    }
    if(m_Ims_org_refIsSet)
    {
        if (m_Ims_org_ref.get())
        {
            m_Ims_org_ref->toMultipart(multipart, utility::conversions::to_string_t("ims.org.ref."));
        }
    }
    if(m_Ims_group_mappingIsSet)
    {
        if (m_Ims_group_mapping.get())
        {
            m_Ims_group_mapping->toMultipart(multipart, utility::conversions::to_string_t("ims.group.mapping."));
        }
    }
    if(m_Oauth_provider_ims_only_license_groupIsSet)
    {
        if (m_Oauth_provider_ims_only_license_group.get())
        {
            m_Oauth_provider_ims_only_license_group->toMultipart(multipart, utility::conversions::to_string_t("oauth.provider.ims.only.license.group."));
        }
    }
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.authorization.url")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.authorization.url")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.authorization.url."));
            setOauthProviderImsAuthorizationUrl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.token.url")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.token.url")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.token.url."));
            setOauthProviderImsTokenUrl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.profile.url")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.profile.url")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.profile.url."));
            setOauthProviderImsProfileUrl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.extended.details.urls."));
            setOauthProviderImsExtendedDetailsUrls( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.validate.token.url")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.validate.token.url."));
            setOauthProviderImsValidateTokenUrl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.session.property")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.session.property")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.session.property."));
            setOauthProviderImsSessionProperty( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token.client.id."));
            setOauthProviderImsServiceTokenClientId( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token.client.secret."));
            setOauthProviderImsServiceTokenClientSecret( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.service.token")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.service.token."));
            setOauthProviderImsServiceToken( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ims.org.ref")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ims.org.ref")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ims.org.ref."));
            setImsOrgRef( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ims.group.mapping")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ims.group.mapping")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ims.group.mapping."));
            setImsGroupMapping( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.only.license.group")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.provider.ims.only.license.group")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.provider.ims.only.license.group."));
            setOauthProviderImsOnlyLicenseGroup( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderId() const
{
    return m_Oauth_provider_id;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_id = value;
    m_Oauth_provider_idIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderIdIsSet() const
{
    return m_Oauth_provider_idIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_id()
{
    m_Oauth_provider_idIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsAuthorizationUrl() const
{
    return m_Oauth_provider_ims_authorization_url;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsAuthorizationUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_authorization_url = value;
    m_Oauth_provider_ims_authorization_urlIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsAuthorizationUrlIsSet() const
{
    return m_Oauth_provider_ims_authorization_urlIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_authorization_url()
{
    m_Oauth_provider_ims_authorization_urlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsTokenUrl() const
{
    return m_Oauth_provider_ims_token_url;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsTokenUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_token_url = value;
    m_Oauth_provider_ims_token_urlIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsTokenUrlIsSet() const
{
    return m_Oauth_provider_ims_token_urlIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_token_url()
{
    m_Oauth_provider_ims_token_urlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsProfileUrl() const
{
    return m_Oauth_provider_ims_profile_url;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsProfileUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_profile_url = value;
    m_Oauth_provider_ims_profile_urlIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsProfileUrlIsSet() const
{
    return m_Oauth_provider_ims_profile_urlIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_profile_url()
{
    m_Oauth_provider_ims_profile_urlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsExtendedDetailsUrls() const
{
    return m_Oauth_provider_ims_extended_details_urls;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsExtendedDetailsUrls(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Oauth_provider_ims_extended_details_urls = value;
    m_Oauth_provider_ims_extended_details_urlsIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsExtendedDetailsUrlsIsSet() const
{
    return m_Oauth_provider_ims_extended_details_urlsIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_extended_details_urls()
{
    m_Oauth_provider_ims_extended_details_urlsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsValidateTokenUrl() const
{
    return m_Oauth_provider_ims_validate_token_url;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsValidateTokenUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_validate_token_url = value;
    m_Oauth_provider_ims_validate_token_urlIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsValidateTokenUrlIsSet() const
{
    return m_Oauth_provider_ims_validate_token_urlIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_validate_token_url()
{
    m_Oauth_provider_ims_validate_token_urlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsSessionProperty() const
{
    return m_Oauth_provider_ims_session_property;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsSessionProperty(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_session_property = value;
    m_Oauth_provider_ims_session_propertyIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsSessionPropertyIsSet() const
{
    return m_Oauth_provider_ims_session_propertyIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_session_property()
{
    m_Oauth_provider_ims_session_propertyIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceTokenClientId() const
{
    return m_Oauth_provider_ims_service_token_client_id;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceTokenClientId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token_client_id = value;
    m_Oauth_provider_ims_service_token_client_idIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsServiceTokenClientIdIsSet() const
{
    return m_Oauth_provider_ims_service_token_client_idIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_service_token_client_id()
{
    m_Oauth_provider_ims_service_token_client_idIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceTokenClientSecret() const
{
    return m_Oauth_provider_ims_service_token_client_secret;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceTokenClientSecret(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token_client_secret = value;
    m_Oauth_provider_ims_service_token_client_secretIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsServiceTokenClientSecretIsSet() const
{
    return m_Oauth_provider_ims_service_token_client_secretIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_service_token_client_secret()
{
    m_Oauth_provider_ims_service_token_client_secretIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsServiceToken() const
{
    return m_Oauth_provider_ims_service_token;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsServiceToken(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_ims_service_token = value;
    m_Oauth_provider_ims_service_tokenIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsServiceTokenIsSet() const
{
    return m_Oauth_provider_ims_service_tokenIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_service_token()
{
    m_Oauth_provider_ims_service_tokenIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getImsOrgRef() const
{
    return m_Ims_org_ref;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setImsOrgRef(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Ims_org_ref = value;
    m_Ims_org_refIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::imsOrgRefIsSet() const
{
    return m_Ims_org_refIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetIms_org_ref()
{
    m_Ims_org_refIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getImsGroupMapping() const
{
    return m_Ims_group_mapping;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setImsGroupMapping(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Ims_group_mapping = value;
    m_Ims_group_mappingIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::imsGroupMappingIsSet() const
{
    return m_Ims_group_mappingIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetIms_group_mapping()
{
    m_Ims_group_mappingIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAuthImsImplIMSProviderImplProperties::getOauthProviderImsOnlyLicenseGroup() const
{
    return m_Oauth_provider_ims_only_license_group;
}


void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::setOauthProviderImsOnlyLicenseGroup(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Oauth_provider_ims_only_license_group = value;
    m_Oauth_provider_ims_only_license_groupIsSet = true;
}
bool ComAdobeGraniteAuthImsImplIMSProviderImplProperties::oauthProviderImsOnlyLicenseGroupIsSet() const
{
    return m_Oauth_provider_ims_only_license_groupIsSet;
}

void ComAdobeGraniteAuthImsImplIMSProviderImplProperties::unsetOauth_provider_ims_only_license_group()
{
    m_Oauth_provider_ims_only_license_groupIsSet = false;
}

}
}
}
}

