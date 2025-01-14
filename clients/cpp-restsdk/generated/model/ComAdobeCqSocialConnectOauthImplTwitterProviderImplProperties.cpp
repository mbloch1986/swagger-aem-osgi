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



#include "ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties()
{
    m_Oauth_provider_idIsSet = false;
    m_Oauth_cloud_config_rootIsSet = false;
    m_Provider_config_rootIsSet = false;
    m_Provider_config_user_folderIsSet = false;
    m_Provider_config_twitter_enable_paramsIsSet = false;
    m_Provider_config_twitter_paramsIsSet = false;
    m_Provider_config_refresh_userdata_enabledIsSet = false;
}

ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::~ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties()
{
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Oauth_provider_idIsSet)
    {
        val[utility::conversions::to_string_t("oauth.provider.id")] = ModelBase::toJson(m_Oauth_provider_id);
    }
    if(m_Oauth_cloud_config_rootIsSet)
    {
        val[utility::conversions::to_string_t("oauth.cloud.config.root")] = ModelBase::toJson(m_Oauth_cloud_config_root);
    }
    if(m_Provider_config_rootIsSet)
    {
        val[utility::conversions::to_string_t("provider.config.root")] = ModelBase::toJson(m_Provider_config_root);
    }
    if(m_Provider_config_user_folderIsSet)
    {
        val[utility::conversions::to_string_t("provider.config.user.folder")] = ModelBase::toJson(m_Provider_config_user_folder);
    }
    if(m_Provider_config_twitter_enable_paramsIsSet)
    {
        val[utility::conversions::to_string_t("provider.config.twitter.enable.params")] = ModelBase::toJson(m_Provider_config_twitter_enable_params);
    }
    if(m_Provider_config_twitter_paramsIsSet)
    {
        val[utility::conversions::to_string_t("provider.config.twitter.params")] = ModelBase::toJson(m_Provider_config_twitter_params);
    }
    if(m_Provider_config_refresh_userdata_enabledIsSet)
    {
        val[utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")] = ModelBase::toJson(m_Provider_config_refresh_userdata_enabled);
    }

    return val;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("oauth.cloud.config.root")))
    {
        if(!val[utility::conversions::to_string_t("oauth.cloud.config.root")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("oauth.cloud.config.root")]);
            setOauthCloudConfigRoot( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider.config.root")))
    {
        if(!val[utility::conversions::to_string_t("provider.config.root")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.config.root")]);
            setProviderConfigRoot( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider.config.user.folder")))
    {
        if(!val[utility::conversions::to_string_t("provider.config.user.folder")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.config.user.folder")]);
            setProviderConfigUserFolder( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider.config.twitter.enable.params")))
    {
        if(!val[utility::conversions::to_string_t("provider.config.twitter.enable.params")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.config.twitter.enable.params")]);
            setProviderConfigTwitterEnableParams( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider.config.twitter.params")))
    {
        if(!val[utility::conversions::to_string_t("provider.config.twitter.params")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.config.twitter.params")]);
            setProviderConfigTwitterParams( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")))
    {
        if(!val[utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")]);
            setProviderConfigRefreshUserdataEnabled( newItem );
        }
    }
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Oauth_cloud_config_rootIsSet)
    {
        if (m_Oauth_cloud_config_root.get())
        {
            m_Oauth_cloud_config_root->toMultipart(multipart, utility::conversions::to_string_t("oauth.cloud.config.root."));
        }
    }
    if(m_Provider_config_rootIsSet)
    {
        if (m_Provider_config_root.get())
        {
            m_Provider_config_root->toMultipart(multipart, utility::conversions::to_string_t("provider.config.root."));
        }
    }
    if(m_Provider_config_user_folderIsSet)
    {
        if (m_Provider_config_user_folder.get())
        {
            m_Provider_config_user_folder->toMultipart(multipart, utility::conversions::to_string_t("provider.config.user.folder."));
        }
    }
    if(m_Provider_config_twitter_enable_paramsIsSet)
    {
        if (m_Provider_config_twitter_enable_params.get())
        {
            m_Provider_config_twitter_enable_params->toMultipart(multipart, utility::conversions::to_string_t("provider.config.twitter.enable.params."));
        }
    }
    if(m_Provider_config_twitter_paramsIsSet)
    {
        if (m_Provider_config_twitter_params.get())
        {
            m_Provider_config_twitter_params->toMultipart(multipart, utility::conversions::to_string_t("provider.config.twitter.params."));
        }
    }
    if(m_Provider_config_refresh_userdata_enabledIsSet)
    {
        if (m_Provider_config_refresh_userdata_enabled.get())
        {
            m_Provider_config_refresh_userdata_enabled->toMultipart(multipart, utility::conversions::to_string_t("provider.config.refresh.userdata.enabled."));
        }
    }
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("oauth.cloud.config.root")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("oauth.cloud.config.root")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("oauth.cloud.config.root."));
            setOauthCloudConfigRoot( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provider.config.root")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.config.root")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.config.root."));
            setProviderConfigRoot( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provider.config.user.folder")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.config.user.folder")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.config.user.folder."));
            setProviderConfigUserFolder( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provider.config.twitter.enable.params")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.config.twitter.enable.params")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.config.twitter.enable.params."));
            setProviderConfigTwitterEnableParams( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provider.config.twitter.params")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.config.twitter.params")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.config.twitter.params."));
            setProviderConfigTwitterParams( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("provider.config.refresh.userdata.enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("provider.config.refresh.userdata.enabled."));
            setProviderConfigRefreshUserdataEnabled( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getOauthProviderId() const
{
    return m_Oauth_provider_id;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_provider_id = value;
    m_Oauth_provider_idIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::oauthProviderIdIsSet() const
{
    return m_Oauth_provider_idIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetOauth_provider_id()
{
    m_Oauth_provider_idIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getOauthCloudConfigRoot() const
{
    return m_Oauth_cloud_config_root;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setOauthCloudConfigRoot(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Oauth_cloud_config_root = value;
    m_Oauth_cloud_config_rootIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::oauthCloudConfigRootIsSet() const
{
    return m_Oauth_cloud_config_rootIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetOauth_cloud_config_root()
{
    m_Oauth_cloud_config_rootIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getProviderConfigRoot() const
{
    return m_Provider_config_root;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setProviderConfigRoot(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Provider_config_root = value;
    m_Provider_config_rootIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::providerConfigRootIsSet() const
{
    return m_Provider_config_rootIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetProvider_config_root()
{
    m_Provider_config_rootIsSet = false;
}

std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getProviderConfigUserFolder() const
{
    return m_Provider_config_user_folder;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setProviderConfigUserFolder(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Provider_config_user_folder = value;
    m_Provider_config_user_folderIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::providerConfigUserFolderIsSet() const
{
    return m_Provider_config_user_folderIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetProvider_config_user_folder()
{
    m_Provider_config_user_folderIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getProviderConfigTwitterEnableParams() const
{
    return m_Provider_config_twitter_enable_params;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setProviderConfigTwitterEnableParams(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Provider_config_twitter_enable_params = value;
    m_Provider_config_twitter_enable_paramsIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::providerConfigTwitterEnableParamsIsSet() const
{
    return m_Provider_config_twitter_enable_paramsIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetProvider_config_twitter_enable_params()
{
    m_Provider_config_twitter_enable_paramsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getProviderConfigTwitterParams() const
{
    return m_Provider_config_twitter_params;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setProviderConfigTwitterParams(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Provider_config_twitter_params = value;
    m_Provider_config_twitter_paramsIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::providerConfigTwitterParamsIsSet() const
{
    return m_Provider_config_twitter_paramsIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetProvider_config_twitter_params()
{
    m_Provider_config_twitter_paramsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::getProviderConfigRefreshUserdataEnabled() const
{
    return m_Provider_config_refresh_userdata_enabled;
}


void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::setProviderConfigRefreshUserdataEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Provider_config_refresh_userdata_enabled = value;
    m_Provider_config_refresh_userdata_enabledIsSet = true;
}
bool ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::providerConfigRefreshUserdataEnabledIsSet() const
{
    return m_Provider_config_refresh_userdata_enabledIsSet;
}

void ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties::unsetProvider_config_refresh_userdata_enabled()
{
    m_Provider_config_refresh_userdata_enabledIsSet = false;
}

}
}
}
}

