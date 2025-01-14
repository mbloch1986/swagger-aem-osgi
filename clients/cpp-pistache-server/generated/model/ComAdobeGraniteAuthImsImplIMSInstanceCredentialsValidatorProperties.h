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
 * ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_
#define ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties
    : public ModelBase
{
public:
    ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties();
    virtual ~ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOauthProviderId() const;
    void setOauthProviderId(ConfigNodePropertyString const& value);
    bool oauthProviderIdIsSet() const;
    void unsetOauth_provider_id();

protected:
    ConfigNodePropertyString m_Oauth_provider_id;
    bool m_Oauth_provider_idIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteAuthImsImplIMSInstanceCredentialsValidatorProperties_H_ */
