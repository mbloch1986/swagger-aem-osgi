/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_
#define ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties
    : public ModelBase
{
public:
    ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties();
    virtual ~ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPath() const;
    void setPath(ConfigNodePropertyString const& value);
    bool pathIsSet() const;
    void unsetPath();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getOauthClientIdsAllowed() const;
    void setOauthClientIdsAllowed(ConfigNodePropertyArray const& value);
    bool oauthClientIdsAllowedIsSet() const;
    void unsetOauth_clientIds_allowed();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getAuthBearerSyncIms() const;
    void setAuthBearerSyncIms(ConfigNodePropertyBoolean const& value);
    bool authBearerSyncImsIsSet() const;
    void unsetAuth_bearer_sync_ims();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getAuthTokenRequestParameter() const;
    void setAuthTokenRequestParameter(ConfigNodePropertyString const& value);
    bool authTokenRequestParameterIsSet() const;
    void unsetAuth_tokenRequestParameter();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthBearerConfigid() const;
    void setOauthBearerConfigid(ConfigNodePropertyString const& value);
    bool oauthBearerConfigidIsSet() const;
    void unsetOauth_bearer_configid();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getOauthJwtSupport() const;
    void setOauthJwtSupport(ConfigNodePropertyBoolean const& value);
    bool oauthJwtSupportIsSet() const;
    void unsetOauth_jwt_support();

protected:
    ConfigNodePropertyString m_Path;
    bool m_PathIsSet;
    ConfigNodePropertyArray m_Oauth_clientIds_allowed;
    bool m_Oauth_clientIds_allowedIsSet;
    ConfigNodePropertyBoolean m_Auth_bearer_sync_ims;
    bool m_Auth_bearer_sync_imsIsSet;
    ConfigNodePropertyString m_Auth_tokenRequestParameter;
    bool m_Auth_tokenRequestParameterIsSet;
    ConfigNodePropertyString m_Oauth_bearer_configid;
    bool m_Oauth_bearer_configidIsSet;
    ConfigNodePropertyBoolean m_Oauth_jwt_support;
    bool m_Oauth_jwt_supportIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_ */
