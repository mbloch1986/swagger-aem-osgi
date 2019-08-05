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

/*
 * ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties_H_
#define ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties
{
public:
    ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties();
    virtual ~ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthProviderId() const;
    void setOauthProviderId(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthCloudConfigRoot() const;
    void setOauthCloudConfigRoot(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getProviderConfigRoot() const;
    void setProviderConfigRoot(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getProviderConfigUserFolder() const;
    void setProviderConfigUserFolder(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getProviderConfigTwitterEnableParams() const;
    void setProviderConfigTwitterEnableParams(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getProviderConfigTwitterParams() const;
    void setProviderConfigTwitterParams(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getProviderConfigRefreshUserdataEnabled() const;
    void setProviderConfigRefreshUserdataEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_provider_id;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_cloud_config_root;
    std::shared_ptr<ConfigNodePropertyString> m_Provider_config_root;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Provider_config_user_folder;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Provider_config_twitter_enable_params;
    std::shared_ptr<ConfigNodePropertyArray> m_Provider_config_twitter_params;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Provider_config_refresh_userdata_enabled;
};

}
}
}
}

#endif /* ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties_H_ */