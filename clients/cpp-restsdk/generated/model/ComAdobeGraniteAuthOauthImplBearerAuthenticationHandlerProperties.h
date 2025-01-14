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
 * ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPath() const;
    bool pathIsSet() const;
    void unsetPath();
    void setPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOauthClientIdsAllowed() const;
    bool oauthClientIdsAllowedIsSet() const;
    void unsetOauth_clientIds_allowed();
    void setOauthClientIdsAllowed(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getAuthBearerSyncIms() const;
    bool authBearerSyncImsIsSet() const;
    void unsetAuth_bearer_sync_ims();
    void setAuthBearerSyncIms(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getAuthTokenRequestParameter() const;
    bool authTokenRequestParameterIsSet() const;
    void unsetAuth_tokenRequestParameter();
    void setAuthTokenRequestParameter(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOauthBearerConfigid() const;
    bool oauthBearerConfigidIsSet() const;
    void unsetOauth_bearer_configid();
    void setOauthBearerConfigid(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOauthJwtSupport() const;
    bool oauthJwtSupportIsSet() const;
    void unsetOauth_jwt_support();
    void setOauthJwtSupport(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Path;
    bool m_PathIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Oauth_clientIds_allowed;
    bool m_Oauth_clientIds_allowedIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Auth_bearer_sync_ims;
    bool m_Auth_bearer_sync_imsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Auth_tokenRequestParameter;
    bool m_Auth_tokenRequestParameterIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Oauth_bearer_configid;
    bool m_Oauth_bearer_configidIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Oauth_jwt_support;
    bool m_Oauth_jwt_supportIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties_H_ */
